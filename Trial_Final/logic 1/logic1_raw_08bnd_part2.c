#include "logic1_raw_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 7756
type: SIMPLE_ASSIGN
fanSup.vol.steBal.fReg = 104.0 * fanSup.vol.steBal.deltaInvReg ^ 6.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7756};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1613]] /* fanSup.vol.steBal.fReg PARAM */) = (104.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1610]] /* fanSup.vol.steBal.deltaInvReg PARAM */), 6));
  threadData->lastEquationSolved = 7756;
}

/*
equation index: 7757
type: SIMPLE_ASSIGN
fanSup.vol.steBal.eReg = (-380.0) * fanSup.vol.steBal.deltaInvReg ^ 5.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7757};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1612]] /* fanSup.vol.steBal.eReg PARAM */) = (-380.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1610]] /* fanSup.vol.steBal.deltaInvReg PARAM */), 5));
  threadData->lastEquationSolved = 7757;
}

/*
equation index: 7758
type: SIMPLE_ASSIGN
fanSup.vol.steBal.dReg = 534.0 * fanSup.vol.steBal.deltaInvReg ^ 4.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7758};
  modelica_real tmp156;
  tmp156 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1610]] /* fanSup.vol.steBal.deltaInvReg PARAM */);
  tmp156 *= tmp156;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1609]] /* fanSup.vol.steBal.dReg PARAM */) = (534.0) * ((tmp156 * tmp156));
  threadData->lastEquationSolved = 7758;
}

/*
equation index: 7759
type: SIMPLE_ASSIGN
fanSup.vol.steBal.cReg = (-361.0) * fanSup.vol.steBal.deltaInvReg ^ 3.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7759};
  modelica_real tmp157;
  tmp157 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1610]] /* fanSup.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1607]] /* fanSup.vol.steBal.cReg PARAM */) = (-361.0) * ((tmp157 * tmp157 * tmp157));
  threadData->lastEquationSolved = 7759;
}

/*
equation index: 7760
type: SIMPLE_ASSIGN
fanSup.vol.steBal.bReg = 119.0 * fanSup.vol.steBal.deltaInvReg ^ 2.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7760};
  modelica_real tmp158;
  tmp158 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1610]] /* fanSup.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1606]] /* fanSup.vol.steBal.bReg PARAM */) = (119.0) * ((tmp158 * tmp158));
  threadData->lastEquationSolved = 7760;
}

/*
equation index: 7761
type: SIMPLE_ASSIGN
fanSup.vol.steBal.aReg = (-15.0) * fanSup.vol.steBal.deltaInvReg
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7761};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1605]] /* fanSup.vol.steBal.aReg PARAM */) = (-15.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1610]] /* fanSup.vol.steBal.deltaInvReg PARAM */));
  threadData->lastEquationSolved = 7761;
}

/*
equation index: 7771
type: SIMPLE_ASSIGN
fanSup.vol.V = fanSup.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7771};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1585]] /* fanSup.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1586]] /* fanSup.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 7771;
}

/*
equation index: 7777
type: SIMPLE_ASSIGN
fanSup.vol.X_start[2] = fanSup.X_start[2]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7777};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1588]] /* fanSup.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1489]] /* fanSup.X_start[2] PARAM */);
  threadData->lastEquationSolved = 7777;
}

/*
equation index: 7778
type: SIMPLE_ASSIGN
fanSup.vol.X_start[1] = fanSup.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7778};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1587]] /* fanSup.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1488]] /* fanSup.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7778;
}

/*
equation index: 7779
type: SIMPLE_ASSIGN
fanSup.vol.T_start = fanSup.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7779};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1584]] /* fanSup.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1486]] /* fanSup.T_start PARAM */);
  threadData->lastEquationSolved = 7779;
}

/*
equation index: 7780
type: SIMPLE_ASSIGN
fanSup.vol.p_start = fanSup.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7780};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1592]] /* fanSup.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1554]] /* fanSup.p_start PARAM */);
  threadData->lastEquationSolved = 7780;
}

/*
equation index: 7801
type: SIMPLE_ASSIGN
fanSup.stageInputs[1] = fanSup.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7801};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1582]] /* fanSup.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1553]] /* fanSup.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 7801;
}

/*
equation index: 7805
type: SIMPLE_ASSIGN
fanSup.per.speeds_rpm[1] = fanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7805};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1570]] /* fanSup.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1568]] /* fanSup.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7805;
}

/*
equation index: 7806
type: SIMPLE_ASSIGN
fanSup.per.constantSpeed_rpm = fanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7806};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1556]] /* fanSup.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1568]] /* fanSup.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7806;
}

/*
equation index: 7807
type: SIMPLE_ASSIGN
fanSup.per.speeds[1] = fanSup.per.speeds_rpm[1] / fanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7807};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1569]] /* fanSup.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1570]] /* fanSup.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1568]] /* fanSup.per.speed_rpm_nominal PARAM */),"fanSup.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 7807;
}

/*
equation index: 7808
type: SIMPLE_ASSIGN
fanSup.per.constantSpeed = fanSup.per.constantSpeed_rpm / fanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7808};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1555]] /* fanSup.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1556]] /* fanSup.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1568]] /* fanSup.per.speed_rpm_nominal PARAM */),"fanSup.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 7808;
}
extern void logic1_raw_eqFunction_1318(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1317(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1316(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1315(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1314(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1313(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1312(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1311(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1310(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1309(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1308(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1307(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1306(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1305(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1304(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1303(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1302(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1301(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1300(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1299(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1298(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1297(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1296(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1295(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1294(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1293(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1292(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1291(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1290(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1289(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1288(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1287(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1286(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1285(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1284(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1283(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1282(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1281(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1280(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1279(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1278(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1277(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1276(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1275(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1274(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1273(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1272(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1271(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1270(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1269(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1268(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1267(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1266(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1265(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1264(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1263(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1262(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1261(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1260(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1259(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1258(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1257(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1256(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1255(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1254(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1253(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1252(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1251(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1250(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1249(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1248(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1247(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1246(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1245(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1244(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1243(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1242(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1241(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1240(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1239(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1238(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1237(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1236(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1235(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1234(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1233(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1232(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1231(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1230(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1229(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1228(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1227(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1226(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1225(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1224(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1223(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1222(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1221(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1220(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1219(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1218(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1217(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1216(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_164(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_163(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_162(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_161(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_160(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_159(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_158(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_157(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_156(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_155(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_154(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_152(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1215(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_151(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_150(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_149(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_148(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_147(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_146(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_145(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_144(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_143(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1214(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1213(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1212(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1211(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1210(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1209(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1208(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1207(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1206(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1205(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1204(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1203(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1202(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1201(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1200(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1199(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1198(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1197(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1196(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1195(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1194(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1193(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1192(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1191(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1190(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1189(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1188(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1187(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_153(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_142(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_141(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_140(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_139(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_138(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_137(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_136(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_135(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_134(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_133(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_132(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_131(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_130(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_129(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_128(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_127(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_126(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_125(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_124(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_123(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_122(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_121(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_120(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_119(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_118(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_117(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_116(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_115(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_114(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_113(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_112(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_111(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_110(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_109(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_108(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_107(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_106(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_105(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_104(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_103(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_102(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_101(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_100(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_99(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_98(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_97(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_96(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_95(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_94(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_93(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_92(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_91(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_90(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_89(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_88(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_87(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_86(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_85(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_84(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_83(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_82(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_81(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_80(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_79(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_78(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_77(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_76(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_75(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_74(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_73(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_72(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_71(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_70(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_69(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_68(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_67(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_66(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_65(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_64(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_63(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_62(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_61(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_60(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_59(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_58(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_57(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_56(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_55(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_54(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_53(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_52(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_51(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_50(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_49(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_48(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_47(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_46(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_45(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_44(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_43(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_42(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_41(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_40(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_39(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_38(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_37(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_36(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_35(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_34(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_33(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_32(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_31(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_30(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_29(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_28(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_27(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_26(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_25(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_24(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_23(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_22(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_21(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_20(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_19(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_18(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_17(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_16(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_15(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_14(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_13(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_12(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_11(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_10(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_9(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_8(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_7(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_6(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_5(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_4(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 8122
type: ALGORITHM

  assert(TAirSup.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= TAirSup.m_flow_small, has value: " + String(TAirSup.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8122};
  modelica_boolean tmp159;
  static const MMC_DEFSTRINGLIT(tmp160,75,"Variable violating min constraint: 0.0 <= TAirSup.m_flow_small, has value: ");
  modelica_string tmp161;
  modelica_metatype tmpMeta162;
  static int tmp163 = 0;
  if(!tmp163)
  {
    tmp159 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* TAirSup.m_flow_small PARAM */),0.0);
    if(!tmp159)
    {
      tmp161 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* TAirSup.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta162 = stringAppend(MMC_REFSTRINGLIT(tmp160),tmp161);
      {
        const char* assert_cond = "(TAirSup.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,10,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta162));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,10,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta162));
        }
      }
      tmp163 = 1;
    }
  }
  threadData->lastEquationSolved = 8122;
}

/*
equation index: 8123
type: ALGORITHM

  assert(val8_2.kFixed >= 0.0, "Variable violating min constraint: 0.0 <= val8_2.kFixed, has value: " + String(val8_2.kFixed, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8123};
  modelica_boolean tmp164;
  static const MMC_DEFSTRINGLIT(tmp165,68,"Variable violating min constraint: 0.0 <= val8_2.kFixed, has value: ");
  modelica_string tmp166;
  modelica_metatype tmpMeta167;
  static int tmp168 = 0;
  if(!tmp168)
  {
    tmp164 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2809]] /* val8_2.kFixed PARAM */),0.0);
    if(!tmp164)
    {
      tmp166 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2809]] /* val8_2.kFixed PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta167 = stringAppend(MMC_REFSTRINGLIT(tmp165),tmp166);
      {
        const char* assert_cond = "(val8_2.kFixed >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",21,3,23,120,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta167));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",21,3,23,120,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta167));
        }
      }
      tmp168 = 1;
    }
  }
  threadData->lastEquationSolved = 8123;
}

/*
equation index: 8124
type: ALGORITHM

  assert(val8_2.l >= 1e-10 and val8_2.l <= 1.0, "Variable violating min/max constraint: 1e-10 <= val8_2.l <= 1.0, has value: " + String(val8_2.l, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8124};
  modelica_boolean tmp169;
  modelica_boolean tmp170;
  static const MMC_DEFSTRINGLIT(tmp171,76,"Variable violating min/max constraint: 1e-10 <= val8_2.l <= 1.0, has value: ");
  modelica_string tmp172;
  modelica_metatype tmpMeta173;
  static int tmp174 = 0;
  if(!tmp174)
  {
    tmp169 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2810]] /* val8_2.l PARAM */),1e-10);
    tmp170 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2810]] /* val8_2.l PARAM */),1.0);
    if(!(tmp169 && tmp170))
    {
      tmp172 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2810]] /* val8_2.l PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta173 = stringAppend(MMC_REFSTRINGLIT(tmp171),tmp172);
      {
        const char* assert_cond = "(val8_2.l >= 1e-10 and val8_2.l <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",17,3,18,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta173));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",17,3,18,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta173));
        }
      }
      tmp174 = 1;
    }
  }
  threadData->lastEquationSolved = 8124;
}

/*
equation index: 8125
type: ALGORITHM

  assert(val8_2.dpFixed_nominal >= 0.0, "Variable violating min constraint: 0.0 <= val8_2.dpFixed_nominal, has value: " + String(val8_2.dpFixed_nominal, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8125};
  modelica_boolean tmp175;
  static const MMC_DEFSTRINGLIT(tmp176,77,"Variable violating min constraint: 0.0 <= val8_2.dpFixed_nominal, has value: ");
  modelica_string tmp177;
  modelica_metatype tmpMeta178;
  static int tmp179 = 0;
  if(!tmp179)
  {
    tmp175 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2804]] /* val8_2.dpFixed_nominal PARAM */),0.0);
    if(!tmp175)
    {
      tmp177 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2804]] /* val8_2.dpFixed_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta178 = stringAppend(MMC_REFSTRINGLIT(tmp176),tmp177);
      {
        const char* assert_cond = "(val8_2.dpFixed_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",13,3,15,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta178));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",13,3,15,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta178));
        }
      }
      tmp179 = 1;
    }
  }
  threadData->lastEquationSolved = 8125;
}

/*
equation index: 8126
type: ALGORITHM

  assert(val8_2.init >= Modelica.Blocks.Types.Init.NoInit and val8_2.init <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= val8_2.init <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(val8_2.init, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8126};
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  static const MMC_DEFSTRINGLIT(tmp182,144,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= val8_2.init <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp183;
  modelica_metatype tmpMeta184;
  static int tmp185 = 0;
  if(!tmp185)
  {
    tmp180 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[453]] /* val8_2.init PARAM */),1);
    tmp181 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[453]] /* val8_2.init PARAM */),4);
    if(!(tmp180 && tmp181))
    {
      tmp183 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[453]] /* val8_2.init PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta184 = stringAppend(MMC_REFSTRINGLIT(tmp182),tmp183);
      {
        const char* assert_cond = "(val8_2.init >= Modelica.Blocks.Types.Init.NoInit and val8_2.init <= Modelica.Blocks.Types.Init.InitialOutput)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ActuatorSignal.mo",13,3,15,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta184));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ActuatorSignal.mo",13,3,15,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta184));
        }
      }
      tmp185 = 1;
    }
  }
  threadData->lastEquationSolved = 8126;
}

/*
equation index: 8127
type: ALGORITHM

  assert(val8_2.order >= 1, "Variable violating min constraint: 1 <= val8_2.order, has value: " + String(val8_2.order, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8127};
  modelica_boolean tmp186;
  static const MMC_DEFSTRINGLIT(tmp187,65,"Variable violating min constraint: 1 <= val8_2.order, has value: ");
  modelica_string tmp188;
  modelica_metatype tmpMeta189;
  static int tmp190 = 0;
  if(!tmp190)
  {
    tmp186 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[454]] /* val8_2.order PARAM */),((modelica_integer) 1));
    if(!tmp186)
    {
      tmp188 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[454]] /* val8_2.order PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta189 = stringAppend(MMC_REFSTRINGLIT(tmp187),tmp188);
      {
        const char* assert_cond = "(val8_2.order >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ActuatorSignal.mo",11,3,12,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta189));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ActuatorSignal.mo",11,3,12,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta189));
        }
      }
      tmp190 = 1;
    }
  }
  threadData->lastEquationSolved = 8127;
}

/*
equation index: 8128
type: ALGORITHM

  assert(val8_2.rhoStd >= 0.0, "Variable violating min constraint: 0.0 <= val8_2.rhoStd, has value: " + String(val8_2.rhoStd, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8128};
  modelica_boolean tmp191;
  static const MMC_DEFSTRINGLIT(tmp192,68,"Variable violating min constraint: 0.0 <= val8_2.rhoStd, has value: ");
  modelica_string tmp193;
  modelica_metatype tmpMeta194;
  static int tmp195 = 0;
  if(!tmp195)
  {
    tmp191 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2815]] /* val8_2.rhoStd PARAM */),0.0);
    if(!tmp191)
    {
      tmp193 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2815]] /* val8_2.rhoStd PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta194 = stringAppend(MMC_REFSTRINGLIT(tmp192),tmp193);
      {
        const char* assert_cond = "(val8_2.rhoStd >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ValveParameters.mo",37,3,39,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta194));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ValveParameters.mo",37,3,39,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta194));
        }
      }
      tmp195 = 1;
    }
  }
  threadData->lastEquationSolved = 8128;
}

/*
equation index: 8129
type: ALGORITHM

  assert(val8_2.dpValve_nominal >= 0.0, "Variable violating min constraint: 0.0 <= val8_2.dpValve_nominal, has value: " + String(val8_2.dpValve_nominal, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8129};
  modelica_boolean tmp196;
  static const MMC_DEFSTRINGLIT(tmp197,77,"Variable violating min constraint: 0.0 <= val8_2.dpValve_nominal, has value: ");
  modelica_string tmp198;
  modelica_metatype tmpMeta199;
  static int tmp200 = 0;
  if(!tmp200)
  {
    tmp196 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2805]] /* val8_2.dpValve_nominal PARAM */),0.0);
    if(!tmp196)
    {
      tmp198 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2805]] /* val8_2.dpValve_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta199 = stringAppend(MMC_REFSTRINGLIT(tmp197),tmp198);
      {
        const char* assert_cond = "(val8_2.dpValve_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ValveParameters.mo",29,3,35,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta199));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ValveParameters.mo",29,3,35,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta199));
        }
      }
      tmp200 = 1;
    }
  }
  threadData->lastEquationSolved = 8129;
}

/*
equation index: 8130
type: ALGORITHM

  assert(val8_2.CvData >= Buildings.Fluid.Types.CvTypes.OpPoint and val8_2.CvData <= Buildings.Fluid.Types.CvTypes.Av, "Variable violating min/max constraint: Buildings.Fluid.Types.CvTypes.OpPoint <= val8_2.CvData <= Buildings.Fluid.Types.CvTypes.Av, has value: " + String(val8_2.CvData, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8130};
  modelica_boolean tmp201;
  modelica_boolean tmp202;
  static const MMC_DEFSTRINGLIT(tmp203,142,"Variable violating min/max constraint: Buildings.Fluid.Types.CvTypes.OpPoint <= val8_2.CvData <= Buildings.Fluid.Types.CvTypes.Av, has value: ");
  modelica_string tmp204;
  modelica_metatype tmpMeta205;
  static int tmp206 = 0;
  if(!tmp206)
  {
    tmp201 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[452]] /* val8_2.CvData PARAM */),1);
    tmp202 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[452]] /* val8_2.CvData PARAM */),4);
    if(!(tmp201 && tmp202))
    {
      tmp204 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[452]] /* val8_2.CvData PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta205 = stringAppend(MMC_REFSTRINGLIT(tmp203),tmp204);
      {
        const char* assert_cond = "(val8_2.CvData >= Buildings.Fluid.Types.CvTypes.OpPoint and val8_2.CvData <= Buildings.Fluid.Types.CvTypes.Av)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ValveParameters.mo",4,3,6,50,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta205));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ValveParameters.mo",4,3,6,50,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta205));
        }
      }
      tmp206 = 1;
    }
  }
  threadData->lastEquationSolved = 8130;
}

/*
equation index: 8131
type: ALGORITHM

  assert(val8_2.sta_default.p >= 0.0 and val8_2.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= val8_2.sta_default.p <= 1e8, has value: " + String(val8_2.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8131};
  modelica_boolean tmp207;
  modelica_boolean tmp208;
  static const MMC_DEFSTRINGLIT(tmp209,86,"Variable violating min/max constraint: 0.0 <= val8_2.sta_default.p <= 1e8, has value: ");
  modelica_string tmp210;
  modelica_metatype tmpMeta211;
  static int tmp212 = 0;
  if(!tmp212)
  {
    tmp207 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2818]] /* val8_2.sta_default.p PARAM */),0.0);
    tmp208 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2818]] /* val8_2.sta_default.p PARAM */),1e8);
    if(!(tmp207 && tmp208))
    {
      tmp210 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2818]] /* val8_2.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta211 = stringAppend(MMC_REFSTRINGLIT(tmp209),tmp210);
      {
        const char* assert_cond = "(val8_2.sta_default.p >= 0.0 and val8_2.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta211));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta211));
        }
      }
      tmp212 = 1;
    }
  }
  threadData->lastEquationSolved = 8131;
}

/*
equation index: 8132
type: ALGORITHM

  assert(val8_2.sta_default.T >= 1.0 and val8_2.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= val8_2.sta_default.T <= 1e4, has value: " + String(val8_2.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8132};
  modelica_boolean tmp213;
  modelica_boolean tmp214;
  static const MMC_DEFSTRINGLIT(tmp215,86,"Variable violating min/max constraint: 1.0 <= val8_2.sta_default.T <= 1e4, has value: ");
  modelica_string tmp216;
  modelica_metatype tmpMeta217;
  static int tmp218 = 0;
  if(!tmp218)
  {
    tmp213 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2817]] /* val8_2.sta_default.T PARAM */),1.0);
    tmp214 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2817]] /* val8_2.sta_default.T PARAM */),1e4);
    if(!(tmp213 && tmp214))
    {
      tmp216 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2817]] /* val8_2.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta217 = stringAppend(MMC_REFSTRINGLIT(tmp215),tmp216);
      {
        const char* assert_cond = "(val8_2.sta_default.T >= 1.0 and val8_2.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta217));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta217));
        }
      }
      tmp218 = 1;
    }
  }
  threadData->lastEquationSolved = 8132;
}

/*
equation index: 8133
type: ALGORITHM

  assert(val8_2.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= val8_2.eta_default, has value: " + String(val8_2.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8133};
  modelica_boolean tmp219;
  static const MMC_DEFSTRINGLIT(tmp220,73,"Variable violating min constraint: 0.0 <= val8_2.eta_default, has value: ");
  modelica_string tmp221;
  modelica_metatype tmpMeta222;
  static int tmp223 = 0;
  if(!tmp223)
  {
    tmp219 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2808]] /* val8_2.eta_default PARAM */),0.0);
    if(!tmp219)
    {
      tmp221 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2808]] /* val8_2.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta222 = stringAppend(MMC_REFSTRINGLIT(tmp220),tmp221);
      {
        const char* assert_cond = "(val8_2.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta222));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta222));
        }
      }
      tmp223 = 1;
    }
  }
  threadData->lastEquationSolved = 8133;
}

/*
equation index: 8134
type: ALGORITHM

  assert(val8_2.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= val8_2.m_flow_turbulent, has value: " + String(val8_2.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8134};
  modelica_boolean tmp224;
  static const MMC_DEFSTRINGLIT(tmp225,78,"Variable violating min constraint: 0.0 <= val8_2.m_flow_turbulent, has value: ");
  modelica_string tmp226;
  modelica_metatype tmpMeta227;
  static int tmp228 = 0;
  if(!tmp228)
  {
    tmp224 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2814]] /* val8_2.m_flow_turbulent PARAM */),0.0);
    if(!tmp224)
    {
      tmp226 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2814]] /* val8_2.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta227 = stringAppend(MMC_REFSTRINGLIT(tmp225),tmp226);
      {
        const char* assert_cond = "(val8_2.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta227));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta227));
        }
      }
      tmp228 = 1;
    }
  }
  threadData->lastEquationSolved = 8134;
}

/*
equation index: 8135
type: ALGORITHM

  assert(val8_2.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= val8_2.m_flow_small, has value: " + String(val8_2.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8135};
  modelica_boolean tmp229;
  static const MMC_DEFSTRINGLIT(tmp230,74,"Variable violating min constraint: 0.0 <= val8_2.m_flow_small, has value: ");
  modelica_string tmp231;
  modelica_metatype tmpMeta232;
  static int tmp233 = 0;
  if(!tmp233)
  {
    tmp229 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* val8_2.m_flow_small PARAM */),0.0);
    if(!tmp229)
    {
      tmp231 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* val8_2.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta232 = stringAppend(MMC_REFSTRINGLIT(tmp230),tmp231);
      {
        const char* assert_cond = "(val8_2.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta232));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta232));
        }
      }
      tmp233 = 1;
    }
  }
  threadData->lastEquationSolved = 8135;
}

/*
equation index: 8136
type: ALGORITHM

  assert(junCHWSup2.deltaM >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.deltaM, has value: " + String(junCHWSup2.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8136};
  modelica_boolean tmp234;
  static const MMC_DEFSTRINGLIT(tmp235,72,"Variable violating min constraint: 0.0 <= junCHWSup2.deltaM, has value: ");
  modelica_string tmp236;
  modelica_metatype tmpMeta237;
  static int tmp238 = 0;
  if(!tmp238)
  {
    tmp234 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1874]] /* junCHWSup2.deltaM PARAM */),0.0);
    if(!tmp234)
    {
      tmp236 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1874]] /* junCHWSup2.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta237 = stringAppend(MMC_REFSTRINGLIT(tmp235),tmp236);
      {
        const char* assert_cond = "(junCHWSup2.deltaM >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/Junction.mo",37,3,40,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta237));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/Junction.mo",37,3,40,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta237));
        }
      }
      tmp238 = 1;
    }
  }
  threadData->lastEquationSolved = 8136;
}

/*
equation index: 8137
type: ALGORITHM

  assert(junCHWSup2.vol.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.vol.m_flow_nominal, has value: " + String(junCHWSup2.vol.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8137};
  modelica_boolean tmp239;
  static const MMC_DEFSTRINGLIT(tmp240,84,"Variable violating min constraint: 0.0 <= junCHWSup2.vol.m_flow_nominal, has value: ");
  modelica_string tmp241;
  modelica_metatype tmpMeta242;
  static int tmp243 = 0;
  if(!tmp243)
  {
    tmp239 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1945]] /* junCHWSup2.vol.m_flow_nominal PARAM */),0.0);
    if(!tmp239)
    {
      tmp241 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1945]] /* junCHWSup2.vol.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta242 = stringAppend(MMC_REFSTRINGLIT(tmp240),tmp241);
      {
        const char* assert_cond = "(junCHWSup2.vol.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,22,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta242));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,22,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta242));
        }
      }
      tmp243 = 1;
    }
  }
  threadData->lastEquationSolved = 8137;
}

/*
equation index: 8138
type: ALGORITHM

  assert(junCHWSup2.T_start >= 1.0 and junCHWSup2.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.T_start <= 1e4, has value: " + String(junCHWSup2.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8138};
  modelica_boolean tmp244;
  modelica_boolean tmp245;
  static const MMC_DEFSTRINGLIT(tmp246,84,"Variable violating min/max constraint: 1.0 <= junCHWSup2.T_start <= 1e4, has value: ");
  modelica_string tmp247;
  modelica_metatype tmpMeta248;
  static int tmp249 = 0;
  if(!tmp249)
  {
    tmp244 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1872]] /* junCHWSup2.T_start PARAM */),1.0);
    tmp245 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1872]] /* junCHWSup2.T_start PARAM */),1e4);
    if(!(tmp244 && tmp245))
    {
      tmp247 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1872]] /* junCHWSup2.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta248 = stringAppend(MMC_REFSTRINGLIT(tmp246),tmp247);
      {
        const char* assert_cond = "(junCHWSup2.T_start >= 1.0 and junCHWSup2.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta248));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta248));
        }
      }
      tmp249 = 1;
    }
  }
  threadData->lastEquationSolved = 8138;
}

/*
equation index: 8139
type: ALGORITHM

  assert(junCHWSup2.vol.T_start >= 1.0 and junCHWSup2.vol.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.T_start <= 1e4, has value: " + String(junCHWSup2.vol.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8139};
  modelica_boolean tmp250;
  modelica_boolean tmp251;
  static const MMC_DEFSTRINGLIT(tmp252,88,"Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.T_start <= 1e4, has value: ");
  modelica_string tmp253;
  modelica_metatype tmpMeta254;
  static int tmp255 = 0;
  if(!tmp255)
  {
    tmp250 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1928]] /* junCHWSup2.vol.T_start PARAM */),1.0);
    tmp251 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1928]] /* junCHWSup2.vol.T_start PARAM */),1e4);
    if(!(tmp250 && tmp251))
    {
      tmp253 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1928]] /* junCHWSup2.vol.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta254 = stringAppend(MMC_REFSTRINGLIT(tmp252),tmp253);
      {
        const char* assert_cond = "(junCHWSup2.vol.T_start >= 1.0 and junCHWSup2.vol.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta254));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta254));
        }
      }
      tmp255 = 1;
    }
  }
  threadData->lastEquationSolved = 8139;
}

/*
equation index: 8140
type: ALGORITHM

  assert(junCHWSup2.vol.state_start.T >= 1.0 and junCHWSup2.vol.state_start.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.state_start.T <= 1e4, has value: " + String(junCHWSup2.vol.state_start.T, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8140};
  modelica_boolean tmp256;
  modelica_boolean tmp257;
  static const MMC_DEFSTRINGLIT(tmp258,94,"Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.state_start.T <= 1e4, has value: ");
  modelica_string tmp259;
  modelica_metatype tmpMeta260;
  static int tmp261 = 0;
  if(!tmp261)
  {
    tmp256 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1952]] /* junCHWSup2.vol.state_start.T PARAM */),1.0);
    tmp257 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1952]] /* junCHWSup2.vol.state_start.T PARAM */),1e4);
    if(!(tmp256 && tmp257))
    {
      tmp259 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1952]] /* junCHWSup2.vol.state_start.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta260 = stringAppend(MMC_REFSTRINGLIT(tmp258),tmp259);
      {
        const char* assert_cond = "(junCHWSup2.vol.state_start.T >= 1.0 and junCHWSup2.vol.state_start.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta260));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta260));
        }
      }
      tmp261 = 1;
    }
  }
  threadData->lastEquationSolved = 8140;
}

/*
equation index: 8141
type: ALGORITHM

  assert(junCHWSup2.p_start >= 0.0 and junCHWSup2.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.p_start <= 1e8, has value: " + String(junCHWSup2.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8141};
  modelica_boolean tmp262;
  modelica_boolean tmp263;
  static const MMC_DEFSTRINGLIT(tmp264,84,"Variable violating min/max constraint: 0.0 <= junCHWSup2.p_start <= 1e8, has value: ");
  modelica_string tmp265;
  modelica_metatype tmpMeta266;
  static int tmp267 = 0;
  if(!tmp267)
  {
    tmp262 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1884]] /* junCHWSup2.p_start PARAM */),0.0);
    tmp263 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1884]] /* junCHWSup2.p_start PARAM */),1e8);
    if(!(tmp262 && tmp263))
    {
      tmp265 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1884]] /* junCHWSup2.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta266 = stringAppend(MMC_REFSTRINGLIT(tmp264),tmp265);
      {
        const char* assert_cond = "(junCHWSup2.p_start >= 0.0 and junCHWSup2.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta266));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta266));
        }
      }
      tmp267 = 1;
    }
  }
  threadData->lastEquationSolved = 8141;
}

/*
equation index: 8142
type: ALGORITHM

  assert(junCHWSup2.vol.p_start >= 0.0 and junCHWSup2.vol.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.p_start <= 1e8, has value: " + String(junCHWSup2.vol.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8142};
  modelica_boolean tmp268;
  modelica_boolean tmp269;
  static const MMC_DEFSTRINGLIT(tmp270,88,"Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.p_start <= 1e8, has value: ");
  modelica_string tmp271;
  modelica_metatype tmpMeta272;
  static int tmp273 = 0;
  if(!tmp273)
  {
    tmp268 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1947]] /* junCHWSup2.vol.p_start PARAM */),0.0);
    tmp269 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1947]] /* junCHWSup2.vol.p_start PARAM */),1e8);
    if(!(tmp268 && tmp269))
    {
      tmp271 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1947]] /* junCHWSup2.vol.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta272 = stringAppend(MMC_REFSTRINGLIT(tmp270),tmp271);
      {
        const char* assert_cond = "(junCHWSup2.vol.p_start >= 0.0 and junCHWSup2.vol.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta272));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta272));
        }
      }
      tmp273 = 1;
    }
  }
  threadData->lastEquationSolved = 8142;
}

/*
equation index: 8143
type: ALGORITHM

  assert(junCHWSup2.vol.state_start.p >= 0.0 and junCHWSup2.vol.state_start.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.state_start.p <= 1e8, has value: " + String(junCHWSup2.vol.state_start.p, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8143};
  modelica_boolean tmp274;
  modelica_boolean tmp275;
  static const MMC_DEFSTRINGLIT(tmp276,94,"Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.state_start.p <= 1e8, has value: ");
  modelica_string tmp277;
  modelica_metatype tmpMeta278;
  static int tmp279 = 0;
  if(!tmp279)
  {
    tmp274 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1953]] /* junCHWSup2.vol.state_start.p PARAM */),0.0);
    tmp275 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1953]] /* junCHWSup2.vol.state_start.p PARAM */),1e8);
    if(!(tmp274 && tmp275))
    {
      tmp277 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1953]] /* junCHWSup2.vol.state_start.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta278 = stringAppend(MMC_REFSTRINGLIT(tmp276),tmp277);
      {
        const char* assert_cond = "(junCHWSup2.vol.state_start.p >= 0.0 and junCHWSup2.vol.state_start.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta278));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta278));
        }
      }
      tmp279 = 1;
    }
  }
  threadData->lastEquationSolved = 8143;
}

/*
equation index: 8144
type: ALGORITHM

  assert(junCHWSup2.vol.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.vol.rho_default, has value: " + String(junCHWSup2.vol.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8144};
  modelica_boolean tmp280;
  static const MMC_DEFSTRINGLIT(tmp281,81,"Variable violating min constraint: 0.0 <= junCHWSup2.vol.rho_default, has value: ");
  modelica_string tmp282;
  modelica_metatype tmpMeta283;
  static int tmp284 = 0;
  if(!tmp284)
  {
    tmp280 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1948]] /* junCHWSup2.vol.rho_default PARAM */),0.0);
    if(!tmp280)
    {
      tmp282 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1948]] /* junCHWSup2.vol.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta283 = stringAppend(MMC_REFSTRINGLIT(tmp281),tmp282);
      {
        const char* assert_cond = "(junCHWSup2.vol.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",90,3,91,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta283));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",90,3,91,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta283));
        }
      }
      tmp284 = 1;
    }
  }
  threadData->lastEquationSolved = 8144;
}

/*
equation index: 8145
type: ALGORITHM

  assert(junCHWSup2.vol.state_default.T >= 1.0 and junCHWSup2.vol.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.state_default.T <= 1e4, has value: " + String(junCHWSup2.vol.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8145};
  modelica_boolean tmp285;
  modelica_boolean tmp286;
  static const MMC_DEFSTRINGLIT(tmp287,96,"Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.state_default.T <= 1e4, has value: ");
  modelica_string tmp288;
  modelica_metatype tmpMeta289;
  static int tmp290 = 0;
  if(!tmp290)
  {
    tmp285 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1950]] /* junCHWSup2.vol.state_default.T PARAM */),1.0);
    tmp286 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1950]] /* junCHWSup2.vol.state_default.T PARAM */),1e4);
    if(!(tmp285 && tmp286))
    {
      tmp288 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1950]] /* junCHWSup2.vol.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta289 = stringAppend(MMC_REFSTRINGLIT(tmp287),tmp288);
      {
        const char* assert_cond = "(junCHWSup2.vol.state_default.T >= 1.0 and junCHWSup2.vol.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta289));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta289));
        }
      }
      tmp290 = 1;
    }
  }
  threadData->lastEquationSolved = 8145;
}

/*
equation index: 8146
type: ALGORITHM

  assert(junCHWSup2.vol.state_default.p >= 0.0 and junCHWSup2.vol.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.state_default.p <= 1e8, has value: " + String(junCHWSup2.vol.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8146};
  modelica_boolean tmp291;
  modelica_boolean tmp292;
  static const MMC_DEFSTRINGLIT(tmp293,96,"Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.state_default.p <= 1e8, has value: ");
  modelica_string tmp294;
  modelica_metatype tmpMeta295;
  static int tmp296 = 0;
  if(!tmp296)
  {
    tmp291 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1951]] /* junCHWSup2.vol.state_default.p PARAM */),0.0);
    tmp292 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1951]] /* junCHWSup2.vol.state_default.p PARAM */),1e8);
    if(!(tmp291 && tmp292))
    {
      tmp294 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1951]] /* junCHWSup2.vol.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta295 = stringAppend(MMC_REFSTRINGLIT(tmp293),tmp294);
      {
        const char* assert_cond = "(junCHWSup2.vol.state_default.p >= 0.0 and junCHWSup2.vol.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta295));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta295));
        }
      }
      tmp296 = 1;
    }
  }
  threadData->lastEquationSolved = 8146;
}

/*
equation index: 8147
type: ALGORITHM

  assert(junCHWSup2.vol.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.vol.rho_start, has value: " + String(junCHWSup2.vol.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8147};
  modelica_boolean tmp297;
  static const MMC_DEFSTRINGLIT(tmp298,79,"Variable violating min constraint: 0.0 <= junCHWSup2.vol.rho_start, has value: ");
  modelica_string tmp299;
  modelica_metatype tmpMeta300;
  static int tmp301 = 0;
  if(!tmp301)
  {
    tmp297 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1949]] /* junCHWSup2.vol.rho_start PARAM */),0.0);
    if(!tmp297)
    {
      tmp299 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1949]] /* junCHWSup2.vol.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta300 = stringAppend(MMC_REFSTRINGLIT(tmp298),tmp299);
      {
        const char* assert_cond = "(junCHWSup2.vol.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",83,3,84,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta300));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",83,3,84,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta300));
        }
      }
      tmp301 = 1;
    }
  }
  threadData->lastEquationSolved = 8147;
}

/*
equation index: 8148
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.p_start >= 0.0 and junCHWSup2.vol.dynBal.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.dynBal.p_start <= 1e8, has value: " + String(junCHWSup2.vol.dynBal.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8148};
  modelica_boolean tmp302;
  modelica_boolean tmp303;
  static const MMC_DEFSTRINGLIT(tmp304,95,"Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.dynBal.p_start <= 1e8, has value: ");
  modelica_string tmp305;
  modelica_metatype tmpMeta306;
  static int tmp307 = 0;
  if(!tmp307)
  {
    tmp302 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1939]] /* junCHWSup2.vol.dynBal.p_start PARAM */),0.0);
    tmp303 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1939]] /* junCHWSup2.vol.dynBal.p_start PARAM */),1e8);
    if(!(tmp302 && tmp303))
    {
      tmp305 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1939]] /* junCHWSup2.vol.dynBal.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta306 = stringAppend(MMC_REFSTRINGLIT(tmp304),tmp305);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.p_start >= 0.0 and junCHWSup2.vol.dynBal.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta306));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta306));
        }
      }
      tmp307 = 1;
    }
  }
  threadData->lastEquationSolved = 8148;
}

/*
equation index: 8149
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.T_start >= 1.0 and junCHWSup2.vol.dynBal.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.dynBal.T_start <= 1e4, has value: " + String(junCHWSup2.vol.dynBal.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8149};
  modelica_boolean tmp308;
  modelica_boolean tmp309;
  static const MMC_DEFSTRINGLIT(tmp310,95,"Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.dynBal.T_start <= 1e4, has value: ");
  modelica_string tmp311;
  modelica_metatype tmpMeta312;
  static int tmp313 = 0;
  if(!tmp313)
  {
    tmp308 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1933]] /* junCHWSup2.vol.dynBal.T_start PARAM */),1.0);
    tmp309 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1933]] /* junCHWSup2.vol.dynBal.T_start PARAM */),1e4);
    if(!(tmp308 && tmp309))
    {
      tmp311 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1933]] /* junCHWSup2.vol.dynBal.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta312 = stringAppend(MMC_REFSTRINGLIT(tmp310),tmp311);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.T_start >= 1.0 and junCHWSup2.vol.dynBal.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta312));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta312));
        }
      }
      tmp313 = 1;
    }
  }
  threadData->lastEquationSolved = 8149;
}

/*
equation index: 8150
type: ALGORITHM

  assert(junCHWSup2.X_start[1] >= 0.0 and junCHWSup2.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWSup2.X_start[1] <= 1.0, has value: " + String(junCHWSup2.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8150};
  modelica_boolean tmp314;
  modelica_boolean tmp315;
  static const MMC_DEFSTRINGLIT(tmp316,87,"Variable violating min/max constraint: 0.0 <= junCHWSup2.X_start[1] <= 1.0, has value: ");
  modelica_string tmp317;
  modelica_metatype tmpMeta318;
  static int tmp319 = 0;
  if(!tmp319)
  {
    tmp314 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1873]] /* junCHWSup2.X_start[1] PARAM */),0.0);
    tmp315 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1873]] /* junCHWSup2.X_start[1] PARAM */),1.0);
    if(!(tmp314 && tmp315))
    {
      tmp317 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1873]] /* junCHWSup2.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta318 = stringAppend(MMC_REFSTRINGLIT(tmp316),tmp317);
      {
        const char* assert_cond = "(junCHWSup2.X_start[1] >= 0.0 and junCHWSup2.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta318));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta318));
        }
      }
      tmp319 = 1;
    }
  }
  threadData->lastEquationSolved = 8150;
}

/*
equation index: 8151
type: ALGORITHM

  assert(junCHWSup2.vol.X_start[1] >= 0.0 and junCHWSup2.vol.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.X_start[1] <= 1.0, has value: " + String(junCHWSup2.vol.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8151};
  modelica_boolean tmp320;
  modelica_boolean tmp321;
  static const MMC_DEFSTRINGLIT(tmp322,91,"Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.X_start[1] <= 1.0, has value: ");
  modelica_string tmp323;
  modelica_metatype tmpMeta324;
  static int tmp325 = 0;
  if(!tmp325)
  {
    tmp320 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1931]] /* junCHWSup2.vol.X_start[1] PARAM */),0.0);
    tmp321 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1931]] /* junCHWSup2.vol.X_start[1] PARAM */),1.0);
    if(!(tmp320 && tmp321))
    {
      tmp323 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1931]] /* junCHWSup2.vol.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta324 = stringAppend(MMC_REFSTRINGLIT(tmp322),tmp323);
      {
        const char* assert_cond = "(junCHWSup2.vol.X_start[1] >= 0.0 and junCHWSup2.vol.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta324));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta324));
        }
      }
      tmp325 = 1;
    }
  }
  threadData->lastEquationSolved = 8151;
}

/*
equation index: 8152
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.X_start[1] >= 0.0 and junCHWSup2.vol.dynBal.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.dynBal.X_start[1] <= 1.0, has value: " + String(junCHWSup2.vol.dynBal.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8152};
  modelica_boolean tmp326;
  modelica_boolean tmp327;
  static const MMC_DEFSTRINGLIT(tmp328,98,"Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.dynBal.X_start[1] <= 1.0, has value: ");
  modelica_string tmp329;
  modelica_metatype tmpMeta330;
  static int tmp331 = 0;
  if(!tmp331)
  {
    tmp326 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1934]] /* junCHWSup2.vol.dynBal.X_start[1] PARAM */),0.0);
    tmp327 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1934]] /* junCHWSup2.vol.dynBal.X_start[1] PARAM */),1.0);
    if(!(tmp326 && tmp327))
    {
      tmp329 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1934]] /* junCHWSup2.vol.dynBal.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta330 = stringAppend(MMC_REFSTRINGLIT(tmp328),tmp329);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.X_start[1] >= 0.0 and junCHWSup2.vol.dynBal.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta330));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta330));
        }
      }
      tmp331 = 1;
    }
  }
  threadData->lastEquationSolved = 8152;
}

/*
equation index: 8153
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.vol.dynBal.rho_default, has value: " + String(junCHWSup2.vol.dynBal.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8153};
  modelica_boolean tmp332;
  static const MMC_DEFSTRINGLIT(tmp333,88,"Variable violating min constraint: 0.0 <= junCHWSup2.vol.dynBal.rho_default, has value: ");
  modelica_string tmp334;
  modelica_metatype tmpMeta335;
  static int tmp336 = 0;
  if(!tmp336)
  {
    tmp332 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1940]] /* junCHWSup2.vol.dynBal.rho_default PARAM */),0.0);
    if(!tmp332)
    {
      tmp334 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1940]] /* junCHWSup2.vol.dynBal.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta335 = stringAppend(MMC_REFSTRINGLIT(tmp333),tmp334);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",145,3,146,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta335));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",145,3,146,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta335));
        }
      }
      tmp336 = 1;
    }
  }
  threadData->lastEquationSolved = 8153;
}

/*
equation index: 8154
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.state_default.T >= 1.0 and junCHWSup2.vol.dynBal.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.dynBal.state_default.T <= 1e4, has value: " + String(junCHWSup2.vol.dynBal.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8154};
  modelica_boolean tmp337;
  modelica_boolean tmp338;
  static const MMC_DEFSTRINGLIT(tmp339,103,"Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.dynBal.state_default.T <= 1e4, has value: ");
  modelica_string tmp340;
  modelica_metatype tmpMeta341;
  static int tmp342 = 0;
  if(!tmp342)
  {
    tmp337 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1942]] /* junCHWSup2.vol.dynBal.state_default.T PARAM */),1.0);
    tmp338 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1942]] /* junCHWSup2.vol.dynBal.state_default.T PARAM */),1e4);
    if(!(tmp337 && tmp338))
    {
      tmp340 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1942]] /* junCHWSup2.vol.dynBal.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta341 = stringAppend(MMC_REFSTRINGLIT(tmp339),tmp340);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.state_default.T >= 1.0 and junCHWSup2.vol.dynBal.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta341));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta341));
        }
      }
      tmp342 = 1;
    }
  }
  threadData->lastEquationSolved = 8154;
}

/*
equation index: 8155
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.state_default.p >= 0.0 and junCHWSup2.vol.dynBal.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.dynBal.state_default.p <= 1e8, has value: " + String(junCHWSup2.vol.dynBal.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8155};
  modelica_boolean tmp343;
  modelica_boolean tmp344;
  static const MMC_DEFSTRINGLIT(tmp345,103,"Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.dynBal.state_default.p <= 1e8, has value: ");
  modelica_string tmp346;
  modelica_metatype tmpMeta347;
  static int tmp348 = 0;
  if(!tmp348)
  {
    tmp343 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1943]] /* junCHWSup2.vol.dynBal.state_default.p PARAM */),0.0);
    tmp344 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1943]] /* junCHWSup2.vol.dynBal.state_default.p PARAM */),1e8);
    if(!(tmp343 && tmp344))
    {
      tmp346 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1943]] /* junCHWSup2.vol.dynBal.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta347 = stringAppend(MMC_REFSTRINGLIT(tmp345),tmp346);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.state_default.p >= 0.0 and junCHWSup2.vol.dynBal.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta347));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta347));
        }
      }
      tmp348 = 1;
    }
  }
  threadData->lastEquationSolved = 8155;
}

/*
equation index: 8156
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.vol.dynBal.rho_start, has value: " + String(junCHWSup2.vol.dynBal.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8156};
  modelica_boolean tmp349;
  static const MMC_DEFSTRINGLIT(tmp350,86,"Variable violating min constraint: 0.0 <= junCHWSup2.vol.dynBal.rho_start, has value: ");
  modelica_string tmp351;
  modelica_metatype tmpMeta352;
  static int tmp353 = 0;
  if(!tmp353)
  {
    tmp349 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1941]] /* junCHWSup2.vol.dynBal.rho_start PARAM */),0.0);
    if(!tmp349)
    {
      tmp351 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1941]] /* junCHWSup2.vol.dynBal.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta352 = stringAppend(MMC_REFSTRINGLIT(tmp350),tmp351);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",131,3,135,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta352));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",131,3,135,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta352));
        }
      }
      tmp353 = 1;
    }
  }
  threadData->lastEquationSolved = 8156;
}

/*
equation index: 8157
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= junCHWSup2.vol.dynBal.mSenFac, has value: " + String(junCHWSup2.vol.dynBal.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8157};
  modelica_boolean tmp354;
  static const MMC_DEFSTRINGLIT(tmp355,84,"Variable violating min constraint: 1.0 <= junCHWSup2.vol.dynBal.mSenFac, has value: ");
  modelica_string tmp356;
  modelica_metatype tmpMeta357;
  static int tmp358 = 0;
  if(!tmp358)
  {
    tmp354 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1938]] /* junCHWSup2.vol.dynBal.mSenFac PARAM */),1.0);
    if(!tmp354)
    {
      tmp356 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1938]] /* junCHWSup2.vol.dynBal.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta357 = stringAppend(MMC_REFSTRINGLIT(tmp355),tmp356);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta357));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta357));
        }
      }
      tmp358 = 1;
    }
  }
  threadData->lastEquationSolved = 8157;
}

/*
equation index: 8158
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.vol.dynBal.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8158};
  modelica_boolean tmp359;
  modelica_boolean tmp360;
  static const MMC_DEFSTRINGLIT(tmp361,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp362;
  modelica_metatype tmpMeta363;
  static int tmp364 = 0;
  if(!tmp364)
  {
    tmp359 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[297]] /* junCHWSup2.vol.dynBal.traceDynamics PARAM */),1);
    tmp360 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[297]] /* junCHWSup2.vol.dynBal.traceDynamics PARAM */),4);
    if(!(tmp359 && tmp360))
    {
      tmp362 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[297]] /* junCHWSup2.vol.dynBal.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta363 = stringAppend(MMC_REFSTRINGLIT(tmp361),tmp362);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta363));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta363));
        }
      }
      tmp364 = 1;
    }
  }
  threadData->lastEquationSolved = 8158;
}

/*
equation index: 8159
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.vol.dynBal.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8159};
  modelica_boolean tmp365;
  modelica_boolean tmp366;
  static const MMC_DEFSTRINGLIT(tmp367,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp368;
  modelica_metatype tmpMeta369;
  static int tmp370 = 0;
  if(!tmp370)
  {
    tmp365 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[296]] /* junCHWSup2.vol.dynBal.substanceDynamics PARAM */),1);
    tmp366 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[296]] /* junCHWSup2.vol.dynBal.substanceDynamics PARAM */),4);
    if(!(tmp365 && tmp366))
    {
      tmp368 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[296]] /* junCHWSup2.vol.dynBal.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta369 = stringAppend(MMC_REFSTRINGLIT(tmp367),tmp368);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta369));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta369));
        }
      }
      tmp370 = 1;
    }
  }
  threadData->lastEquationSolved = 8159;
}

/*
equation index: 8160
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.vol.dynBal.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8160};
  modelica_boolean tmp371;
  modelica_boolean tmp372;
  static const MMC_DEFSTRINGLIT(tmp373,183,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp374;
  modelica_metatype tmpMeta375;
  static int tmp376 = 0;
  if(!tmp376)
  {
    tmp371 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[294]] /* junCHWSup2.vol.dynBal.massDynamics PARAM */),1);
    tmp372 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[294]] /* junCHWSup2.vol.dynBal.massDynamics PARAM */),4);
    if(!(tmp371 && tmp372))
    {
      tmp374 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[294]] /* junCHWSup2.vol.dynBal.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta375 = stringAppend(MMC_REFSTRINGLIT(tmp373),tmp374);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta375));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta375));
        }
      }
      tmp376 = 1;
    }
  }
  threadData->lastEquationSolved = 8160;
}

/*
equation index: 8161
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.vol.dynBal.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8161};
  modelica_boolean tmp377;
  modelica_boolean tmp378;
  static const MMC_DEFSTRINGLIT(tmp379,185,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp380;
  modelica_metatype tmpMeta381;
  static int tmp382 = 0;
  if(!tmp382)
  {
    tmp377 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[293]] /* junCHWSup2.vol.dynBal.energyDynamics PARAM */),1);
    tmp378 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[293]] /* junCHWSup2.vol.dynBal.energyDynamics PARAM */),4);
    if(!(tmp377 && tmp378))
    {
      tmp380 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[293]] /* junCHWSup2.vol.dynBal.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta381 = stringAppend(MMC_REFSTRINGLIT(tmp379),tmp380);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta381));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta381));
        }
      }
      tmp382 = 1;
    }
  }
  threadData->lastEquationSolved = 8161;
}

/*
equation index: 8162
type: ALGORITHM

  assert(junCHWSup2.vol.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.vol.m_flow_small, has value: " + String(junCHWSup2.vol.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8162};
  modelica_boolean tmp383;
  static const MMC_DEFSTRINGLIT(tmp384,82,"Variable violating min constraint: 0.0 <= junCHWSup2.vol.m_flow_small, has value: ");
  modelica_string tmp385;
  modelica_metatype tmpMeta386;
  static int tmp387 = 0;
  if(!tmp387)
  {
    tmp383 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1946]] /* junCHWSup2.vol.m_flow_small PARAM */),0.0);
    if(!tmp383)
    {
      tmp385 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1946]] /* junCHWSup2.vol.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta386 = stringAppend(MMC_REFSTRINGLIT(tmp384),tmp385);
      {
        const char* assert_cond = "(junCHWSup2.vol.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",26,3,28,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta386));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",26,3,28,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta386));
        }
      }
      tmp387 = 1;
    }
  }
  threadData->lastEquationSolved = 8162;
}

/*
equation index: 8163
type: ALGORITHM

  assert(junCHWSup2.vol.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= junCHWSup2.vol.mSenFac, has value: " + String(junCHWSup2.vol.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8163};
  modelica_boolean tmp388;
  static const MMC_DEFSTRINGLIT(tmp389,77,"Variable violating min constraint: 1.0 <= junCHWSup2.vol.mSenFac, has value: ");
  modelica_string tmp390;
  modelica_metatype tmpMeta391;
  static int tmp392 = 0;
  if(!tmp392)
  {
    tmp388 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1944]] /* junCHWSup2.vol.mSenFac PARAM */),1.0);
    if(!tmp388)
    {
      tmp390 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1944]] /* junCHWSup2.vol.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta391 = stringAppend(MMC_REFSTRINGLIT(tmp389),tmp390);
      {
        const char* assert_cond = "(junCHWSup2.vol.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta391));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta391));
        }
      }
      tmp392 = 1;
    }
  }
  threadData->lastEquationSolved = 8163;
}

/*
equation index: 8164
type: ALGORITHM

  assert(junCHWSup2.vol.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.vol.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8164};
  modelica_boolean tmp393;
  modelica_boolean tmp394;
  static const MMC_DEFSTRINGLIT(tmp395,177,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp396;
  modelica_metatype tmpMeta397;
  static int tmp398 = 0;
  if(!tmp398)
  {
    tmp393 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[302]] /* junCHWSup2.vol.traceDynamics PARAM */),1);
    tmp394 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[302]] /* junCHWSup2.vol.traceDynamics PARAM */),4);
    if(!(tmp393 && tmp394))
    {
      tmp396 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[302]] /* junCHWSup2.vol.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta397 = stringAppend(MMC_REFSTRINGLIT(tmp395),tmp396);
      {
        const char* assert_cond = "(junCHWSup2.vol.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta397));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta397));
        }
      }
      tmp398 = 1;
    }
  }
  threadData->lastEquationSolved = 8164;
}

/*
equation index: 8165
type: ALGORITHM

  assert(junCHWSup2.vol.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.vol.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8165};
  modelica_boolean tmp399;
  modelica_boolean tmp400;
  static const MMC_DEFSTRINGLIT(tmp401,181,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp402;
  modelica_metatype tmpMeta403;
  static int tmp404 = 0;
  if(!tmp404)
  {
    tmp399 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[301]] /* junCHWSup2.vol.substanceDynamics PARAM */),1);
    tmp400 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[301]] /* junCHWSup2.vol.substanceDynamics PARAM */),4);
    if(!(tmp399 && tmp400))
    {
      tmp402 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[301]] /* junCHWSup2.vol.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta403 = stringAppend(MMC_REFSTRINGLIT(tmp401),tmp402);
      {
        const char* assert_cond = "(junCHWSup2.vol.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta403));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta403));
        }
      }
      tmp404 = 1;
    }
  }
  threadData->lastEquationSolved = 8165;
}

/*
equation index: 8166
type: ALGORITHM

  assert(junCHWSup2.vol.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.vol.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8166};
  modelica_boolean tmp405;
  modelica_boolean tmp406;
  static const MMC_DEFSTRINGLIT(tmp407,176,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp408;
  modelica_metatype tmpMeta409;
  static int tmp410 = 0;
  if(!tmp410)
  {
    tmp405 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[299]] /* junCHWSup2.vol.massDynamics PARAM */),1);
    tmp406 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[299]] /* junCHWSup2.vol.massDynamics PARAM */),4);
    if(!(tmp405 && tmp406))
    {
      tmp408 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[299]] /* junCHWSup2.vol.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta409 = stringAppend(MMC_REFSTRINGLIT(tmp407),tmp408);
      {
        const char* assert_cond = "(junCHWSup2.vol.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta409));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta409));
        }
      }
      tmp410 = 1;
    }
  }
  threadData->lastEquationSolved = 8166;
}

/*
equation index: 8167
type: ALGORITHM

  assert(junCHWSup2.vol.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.vol.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8167};
  modelica_boolean tmp411;
  modelica_boolean tmp412;
  static const MMC_DEFSTRINGLIT(tmp413,178,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp414;
  modelica_metatype tmpMeta415;
  static int tmp416 = 0;
  if(!tmp416)
  {
    tmp411 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[298]] /* junCHWSup2.vol.energyDynamics PARAM */),1);
    tmp412 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[298]] /* junCHWSup2.vol.energyDynamics PARAM */),4);
    if(!(tmp411 && tmp412))
    {
      tmp414 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[298]] /* junCHWSup2.vol.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta415 = stringAppend(MMC_REFSTRINGLIT(tmp413),tmp414);
      {
        const char* assert_cond = "(junCHWSup2.vol.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta415));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta415));
        }
      }
      tmp416 = 1;
    }
  }
  threadData->lastEquationSolved = 8167;
}

/*
equation index: 8168
type: ALGORITHM

  assert(junCHWSup2.res3.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= junCHWSup2.res3.deltaM, has value: " + String(junCHWSup2.res3.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8168};
  modelica_boolean tmp417;
  static const MMC_DEFSTRINGLIT(tmp418,78,"Variable violating min constraint: 1e-6 <= junCHWSup2.res3.deltaM, has value: ");
  modelica_string tmp419;
  modelica_metatype tmpMeta420;
  static int tmp421 = 0;
  if(!tmp421)
  {
    tmp417 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1916]] /* junCHWSup2.res3.deltaM PARAM */),1e-6);
    if(!tmp417)
    {
      tmp419 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1916]] /* junCHWSup2.res3.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta420 = stringAppend(MMC_REFSTRINGLIT(tmp418),tmp419);
      {
        const char* assert_cond = "(junCHWSup2.res3.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta420));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta420));
        }
      }
      tmp421 = 1;
    }
  }
  threadData->lastEquationSolved = 8168;
}

/*
equation index: 8169
type: ALGORITHM

  assert(junCHWSup2.res3.sta_default.p >= 0.0 and junCHWSup2.res3.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.res3.sta_default.p <= 1e8, has value: " + String(junCHWSup2.res3.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8169};
  modelica_boolean tmp422;
  modelica_boolean tmp423;
  static const MMC_DEFSTRINGLIT(tmp424,95,"Variable violating min/max constraint: 0.0 <= junCHWSup2.res3.sta_default.p <= 1e8, has value: ");
  modelica_string tmp425;
  modelica_metatype tmpMeta426;
  static int tmp427 = 0;
  if(!tmp427)
  {
    tmp422 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* junCHWSup2.res3.sta_default.p PARAM */),0.0);
    tmp423 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* junCHWSup2.res3.sta_default.p PARAM */),1e8);
    if(!(tmp422 && tmp423))
    {
      tmp425 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* junCHWSup2.res3.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta426 = stringAppend(MMC_REFSTRINGLIT(tmp424),tmp425);
      {
        const char* assert_cond = "(junCHWSup2.res3.sta_default.p >= 0.0 and junCHWSup2.res3.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta426));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta426));
        }
      }
      tmp427 = 1;
    }
  }
  threadData->lastEquationSolved = 8169;
}

/*
equation index: 8170
type: ALGORITHM

  assert(junCHWSup2.res3.sta_default.T >= 1.0 and junCHWSup2.res3.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.res3.sta_default.T <= 1e4, has value: " + String(junCHWSup2.res3.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8170};
  modelica_boolean tmp428;
  modelica_boolean tmp429;
  static const MMC_DEFSTRINGLIT(tmp430,95,"Variable violating min/max constraint: 1.0 <= junCHWSup2.res3.sta_default.T <= 1e4, has value: ");
  modelica_string tmp431;
  modelica_metatype tmpMeta432;
  static int tmp433 = 0;
  if(!tmp433)
  {
    tmp428 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junCHWSup2.res3.sta_default.T PARAM */),1.0);
    tmp429 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junCHWSup2.res3.sta_default.T PARAM */),1e4);
    if(!(tmp428 && tmp429))
    {
      tmp431 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junCHWSup2.res3.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta432 = stringAppend(MMC_REFSTRINGLIT(tmp430),tmp431);
      {
        const char* assert_cond = "(junCHWSup2.res3.sta_default.T >= 1.0 and junCHWSup2.res3.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta432));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta432));
        }
      }
      tmp433 = 1;
    }
  }
  threadData->lastEquationSolved = 8170;
}

/*
equation index: 8171
type: ALGORITHM

  assert(junCHWSup2.res3.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res3.eta_default, has value: " + String(junCHWSup2.res3.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8171};
  modelica_boolean tmp434;
  static const MMC_DEFSTRINGLIT(tmp435,82,"Variable violating min constraint: 0.0 <= junCHWSup2.res3.eta_default, has value: ");
  modelica_string tmp436;
  modelica_metatype tmpMeta437;
  static int tmp438 = 0;
  if(!tmp438)
  {
    tmp434 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1919]] /* junCHWSup2.res3.eta_default PARAM */),0.0);
    if(!tmp434)
    {
      tmp436 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1919]] /* junCHWSup2.res3.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta437 = stringAppend(MMC_REFSTRINGLIT(tmp435),tmp436);
      {
        const char* assert_cond = "(junCHWSup2.res3.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta437));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta437));
        }
      }
      tmp438 = 1;
    }
  }
  threadData->lastEquationSolved = 8171;
}

/*
equation index: 8172
type: ALGORITHM

  assert(junCHWSup2.res3.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res3.m_flow_turbulent, has value: " + String(junCHWSup2.res3.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8172};
  modelica_boolean tmp439;
  static const MMC_DEFSTRINGLIT(tmp440,87,"Variable violating min constraint: 0.0 <= junCHWSup2.res3.m_flow_turbulent, has value: ");
  modelica_string tmp441;
  modelica_metatype tmpMeta442;
  static int tmp443 = 0;
  if(!tmp443)
  {
    tmp439 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1924]] /* junCHWSup2.res3.m_flow_turbulent PARAM */),0.0);
    if(!tmp439)
    {
      tmp441 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1924]] /* junCHWSup2.res3.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta442 = stringAppend(MMC_REFSTRINGLIT(tmp440),tmp441);
      {
        const char* assert_cond = "(junCHWSup2.res3.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta442));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta442));
        }
      }
      tmp443 = 1;
    }
  }
  threadData->lastEquationSolved = 8172;
}

/*
equation index: 8173
type: ALGORITHM

  assert(junCHWSup2.res3.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res3.m_flow_small, has value: " + String(junCHWSup2.res3.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8173};
  modelica_boolean tmp444;
  static const MMC_DEFSTRINGLIT(tmp445,83,"Variable violating min constraint: 0.0 <= junCHWSup2.res3.m_flow_small, has value: ");
  modelica_string tmp446;
  modelica_metatype tmpMeta447;
  static int tmp448 = 0;
  if(!tmp448)
  {
    tmp444 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1923]] /* junCHWSup2.res3.m_flow_small PARAM */),0.0);
    if(!tmp444)
    {
      tmp446 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1923]] /* junCHWSup2.res3.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta447 = stringAppend(MMC_REFSTRINGLIT(tmp445),tmp446);
      {
        const char* assert_cond = "(junCHWSup2.res3.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta447));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta447));
        }
      }
      tmp448 = 1;
    }
  }
  threadData->lastEquationSolved = 8173;
}

/*
equation index: 8174
type: ALGORITHM

  assert(junCHWSup2.res2.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= junCHWSup2.res2.deltaM, has value: " + String(junCHWSup2.res2.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8174};
  modelica_boolean tmp449;
  static const MMC_DEFSTRINGLIT(tmp450,78,"Variable violating min constraint: 1e-6 <= junCHWSup2.res2.deltaM, has value: ");
  modelica_string tmp451;
  modelica_metatype tmpMeta452;
  static int tmp453 = 0;
  if(!tmp453)
  {
    tmp449 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1902]] /* junCHWSup2.res2.deltaM PARAM */),1e-6);
    if(!tmp449)
    {
      tmp451 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1902]] /* junCHWSup2.res2.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta452 = stringAppend(MMC_REFSTRINGLIT(tmp450),tmp451);
      {
        const char* assert_cond = "(junCHWSup2.res2.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta452));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta452));
        }
      }
      tmp453 = 1;
    }
  }
  threadData->lastEquationSolved = 8174;
}

/*
equation index: 8175
type: ALGORITHM

  assert(junCHWSup2.res2.sta_default.p >= 0.0 and junCHWSup2.res2.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.res2.sta_default.p <= 1e8, has value: " + String(junCHWSup2.res2.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8175};
  modelica_boolean tmp454;
  modelica_boolean tmp455;
  static const MMC_DEFSTRINGLIT(tmp456,95,"Variable violating min/max constraint: 0.0 <= junCHWSup2.res2.sta_default.p <= 1e8, has value: ");
  modelica_string tmp457;
  modelica_metatype tmpMeta458;
  static int tmp459 = 0;
  if(!tmp459)
  {
    tmp454 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1912]] /* junCHWSup2.res2.sta_default.p PARAM */),0.0);
    tmp455 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1912]] /* junCHWSup2.res2.sta_default.p PARAM */),1e8);
    if(!(tmp454 && tmp455))
    {
      tmp457 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1912]] /* junCHWSup2.res2.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta458 = stringAppend(MMC_REFSTRINGLIT(tmp456),tmp457);
      {
        const char* assert_cond = "(junCHWSup2.res2.sta_default.p >= 0.0 and junCHWSup2.res2.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta458));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta458));
        }
      }
      tmp459 = 1;
    }
  }
  threadData->lastEquationSolved = 8175;
}

/*
equation index: 8176
type: ALGORITHM

  assert(junCHWSup2.res2.sta_default.T >= 1.0 and junCHWSup2.res2.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.res2.sta_default.T <= 1e4, has value: " + String(junCHWSup2.res2.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8176};
  modelica_boolean tmp460;
  modelica_boolean tmp461;
  static const MMC_DEFSTRINGLIT(tmp462,95,"Variable violating min/max constraint: 1.0 <= junCHWSup2.res2.sta_default.T <= 1e4, has value: ");
  modelica_string tmp463;
  modelica_metatype tmpMeta464;
  static int tmp465 = 0;
  if(!tmp465)
  {
    tmp460 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1911]] /* junCHWSup2.res2.sta_default.T PARAM */),1.0);
    tmp461 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1911]] /* junCHWSup2.res2.sta_default.T PARAM */),1e4);
    if(!(tmp460 && tmp461))
    {
      tmp463 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1911]] /* junCHWSup2.res2.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta464 = stringAppend(MMC_REFSTRINGLIT(tmp462),tmp463);
      {
        const char* assert_cond = "(junCHWSup2.res2.sta_default.T >= 1.0 and junCHWSup2.res2.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta464));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta464));
        }
      }
      tmp465 = 1;
    }
  }
  threadData->lastEquationSolved = 8176;
}

/*
equation index: 8177
type: ALGORITHM

  assert(junCHWSup2.res2.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res2.eta_default, has value: " + String(junCHWSup2.res2.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8177};
  modelica_boolean tmp466;
  static const MMC_DEFSTRINGLIT(tmp467,82,"Variable violating min constraint: 0.0 <= junCHWSup2.res2.eta_default, has value: ");
  modelica_string tmp468;
  modelica_metatype tmpMeta469;
  static int tmp470 = 0;
  if(!tmp470)
  {
    tmp466 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1905]] /* junCHWSup2.res2.eta_default PARAM */),0.0);
    if(!tmp466)
    {
      tmp468 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1905]] /* junCHWSup2.res2.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta469 = stringAppend(MMC_REFSTRINGLIT(tmp467),tmp468);
      {
        const char* assert_cond = "(junCHWSup2.res2.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta469));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta469));
        }
      }
      tmp470 = 1;
    }
  }
  threadData->lastEquationSolved = 8177;
}

/*
equation index: 8178
type: ALGORITHM

  assert(junCHWSup2.res2.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res2.m_flow_turbulent, has value: " + String(junCHWSup2.res2.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8178};
  modelica_boolean tmp471;
  static const MMC_DEFSTRINGLIT(tmp472,87,"Variable violating min constraint: 0.0 <= junCHWSup2.res2.m_flow_turbulent, has value: ");
  modelica_string tmp473;
  modelica_metatype tmpMeta474;
  static int tmp475 = 0;
  if(!tmp475)
  {
    tmp471 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1910]] /* junCHWSup2.res2.m_flow_turbulent PARAM */),0.0);
    if(!tmp471)
    {
      tmp473 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1910]] /* junCHWSup2.res2.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta474 = stringAppend(MMC_REFSTRINGLIT(tmp472),tmp473);
      {
        const char* assert_cond = "(junCHWSup2.res2.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta474));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta474));
        }
      }
      tmp475 = 1;
    }
  }
  threadData->lastEquationSolved = 8178;
}

/*
equation index: 8179
type: ALGORITHM

  assert(junCHWSup2.res2.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res2.m_flow_small, has value: " + String(junCHWSup2.res2.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8179};
  modelica_boolean tmp476;
  static const MMC_DEFSTRINGLIT(tmp477,83,"Variable violating min constraint: 0.0 <= junCHWSup2.res2.m_flow_small, has value: ");
  modelica_string tmp478;
  modelica_metatype tmpMeta479;
  static int tmp480 = 0;
  if(!tmp480)
  {
    tmp476 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1909]] /* junCHWSup2.res2.m_flow_small PARAM */),0.0);
    if(!tmp476)
    {
      tmp478 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1909]] /* junCHWSup2.res2.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta479 = stringAppend(MMC_REFSTRINGLIT(tmp477),tmp478);
      {
        const char* assert_cond = "(junCHWSup2.res2.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta479));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta479));
        }
      }
      tmp480 = 1;
    }
  }
  threadData->lastEquationSolved = 8179;
}

/*
equation index: 8180
type: ALGORITHM

  assert(junCHWSup2.res1.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= junCHWSup2.res1.deltaM, has value: " + String(junCHWSup2.res1.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8180};
  modelica_boolean tmp481;
  static const MMC_DEFSTRINGLIT(tmp482,78,"Variable violating min constraint: 1e-6 <= junCHWSup2.res1.deltaM, has value: ");
  modelica_string tmp483;
  modelica_metatype tmpMeta484;
  static int tmp485 = 0;
  if(!tmp485)
  {
    tmp481 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1888]] /* junCHWSup2.res1.deltaM PARAM */),1e-6);
    if(!tmp481)
    {
      tmp483 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1888]] /* junCHWSup2.res1.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta484 = stringAppend(MMC_REFSTRINGLIT(tmp482),tmp483);
      {
        const char* assert_cond = "(junCHWSup2.res1.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta484));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta484));
        }
      }
      tmp485 = 1;
    }
  }
  threadData->lastEquationSolved = 8180;
}

/*
equation index: 8181
type: ALGORITHM

  assert(junCHWSup2.res1.sta_default.p >= 0.0 and junCHWSup2.res1.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.res1.sta_default.p <= 1e8, has value: " + String(junCHWSup2.res1.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8181};
  modelica_boolean tmp486;
  modelica_boolean tmp487;
  static const MMC_DEFSTRINGLIT(tmp488,95,"Variable violating min/max constraint: 0.0 <= junCHWSup2.res1.sta_default.p <= 1e8, has value: ");
  modelica_string tmp489;
  modelica_metatype tmpMeta490;
  static int tmp491 = 0;
  if(!tmp491)
  {
    tmp486 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1898]] /* junCHWSup2.res1.sta_default.p PARAM */),0.0);
    tmp487 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1898]] /* junCHWSup2.res1.sta_default.p PARAM */),1e8);
    if(!(tmp486 && tmp487))
    {
      tmp489 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1898]] /* junCHWSup2.res1.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta490 = stringAppend(MMC_REFSTRINGLIT(tmp488),tmp489);
      {
        const char* assert_cond = "(junCHWSup2.res1.sta_default.p >= 0.0 and junCHWSup2.res1.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta490));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta490));
        }
      }
      tmp491 = 1;
    }
  }
  threadData->lastEquationSolved = 8181;
}

/*
equation index: 8182
type: ALGORITHM

  assert(junCHWSup2.res1.sta_default.T >= 1.0 and junCHWSup2.res1.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.res1.sta_default.T <= 1e4, has value: " + String(junCHWSup2.res1.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8182};
  modelica_boolean tmp492;
  modelica_boolean tmp493;
  static const MMC_DEFSTRINGLIT(tmp494,95,"Variable violating min/max constraint: 1.0 <= junCHWSup2.res1.sta_default.T <= 1e4, has value: ");
  modelica_string tmp495;
  modelica_metatype tmpMeta496;
  static int tmp497 = 0;
  if(!tmp497)
  {
    tmp492 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1897]] /* junCHWSup2.res1.sta_default.T PARAM */),1.0);
    tmp493 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1897]] /* junCHWSup2.res1.sta_default.T PARAM */),1e4);
    if(!(tmp492 && tmp493))
    {
      tmp495 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1897]] /* junCHWSup2.res1.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta496 = stringAppend(MMC_REFSTRINGLIT(tmp494),tmp495);
      {
        const char* assert_cond = "(junCHWSup2.res1.sta_default.T >= 1.0 and junCHWSup2.res1.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta496));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta496));
        }
      }
      tmp497 = 1;
    }
  }
  threadData->lastEquationSolved = 8182;
}

/*
equation index: 8183
type: ALGORITHM

  assert(junCHWSup2.res1.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res1.eta_default, has value: " + String(junCHWSup2.res1.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8183};
  modelica_boolean tmp498;
  static const MMC_DEFSTRINGLIT(tmp499,82,"Variable violating min constraint: 0.0 <= junCHWSup2.res1.eta_default, has value: ");
  modelica_string tmp500;
  modelica_metatype tmpMeta501;
  static int tmp502 = 0;
  if(!tmp502)
  {
    tmp498 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1891]] /* junCHWSup2.res1.eta_default PARAM */),0.0);
    if(!tmp498)
    {
      tmp500 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1891]] /* junCHWSup2.res1.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta501 = stringAppend(MMC_REFSTRINGLIT(tmp499),tmp500);
      {
        const char* assert_cond = "(junCHWSup2.res1.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta501));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta501));
        }
      }
      tmp502 = 1;
    }
  }
  threadData->lastEquationSolved = 8183;
}

/*
equation index: 8184
type: ALGORITHM

  assert(junCHWSup2.res1.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res1.m_flow_turbulent, has value: " + String(junCHWSup2.res1.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8184};
  modelica_boolean tmp503;
  static const MMC_DEFSTRINGLIT(tmp504,87,"Variable violating min constraint: 0.0 <= junCHWSup2.res1.m_flow_turbulent, has value: ");
  modelica_string tmp505;
  modelica_metatype tmpMeta506;
  static int tmp507 = 0;
  if(!tmp507)
  {
    tmp503 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1896]] /* junCHWSup2.res1.m_flow_turbulent PARAM */),0.0);
    if(!tmp503)
    {
      tmp505 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1896]] /* junCHWSup2.res1.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta506 = stringAppend(MMC_REFSTRINGLIT(tmp504),tmp505);
      {
        const char* assert_cond = "(junCHWSup2.res1.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta506));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta506));
        }
      }
      tmp507 = 1;
    }
  }
  threadData->lastEquationSolved = 8184;
}

/*
equation index: 8185
type: ALGORITHM

  assert(junCHWSup2.res1.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res1.m_flow_small, has value: " + String(junCHWSup2.res1.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8185};
  modelica_boolean tmp508;
  static const MMC_DEFSTRINGLIT(tmp509,83,"Variable violating min constraint: 0.0 <= junCHWSup2.res1.m_flow_small, has value: ");
  modelica_string tmp510;
  modelica_metatype tmpMeta511;
  static int tmp512 = 0;
  if(!tmp512)
  {
    tmp508 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1895]] /* junCHWSup2.res1.m_flow_small PARAM */),0.0);
    if(!tmp508)
    {
      tmp510 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1895]] /* junCHWSup2.res1.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta511 = stringAppend(MMC_REFSTRINGLIT(tmp509),tmp510);
      {
        const char* assert_cond = "(junCHWSup2.res1.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta511));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta511));
        }
      }
      tmp512 = 1;
    }
  }
  threadData->lastEquationSolved = 8185;
}

/*
equation index: 8186
type: ALGORITHM

  assert(junCHWSup2.portFlowDirection_3 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWSup2.portFlowDirection_3 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWSup2.portFlowDirection_3 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(junCHWSup2.portFlowDirection_3, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8186};
  modelica_boolean tmp513;
  modelica_boolean tmp514;
  static const MMC_DEFSTRINGLIT(tmp515,189,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWSup2.portFlowDirection_3 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp516;
  modelica_metatype tmpMeta517;
  static int tmp518 = 0;
  if(!tmp518)
  {
    tmp513 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[290]] /* junCHWSup2.portFlowDirection_3 PARAM */),1);
    tmp514 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[290]] /* junCHWSup2.portFlowDirection_3 PARAM */),3);
    if(!(tmp513 && tmp514))
    {
      tmp516 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[290]] /* junCHWSup2.portFlowDirection_3 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta517 = stringAppend(MMC_REFSTRINGLIT(tmp515),tmp516);
      {
        const char* assert_cond = "(junCHWSup2.portFlowDirection_3 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWSup2.portFlowDirection_3 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",47,3,49,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta517));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",47,3,49,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta517));
        }
      }
      tmp518 = 1;
    }
  }
  threadData->lastEquationSolved = 8186;
}

/*
equation index: 8187
type: ALGORITHM

  assert(junCHWSup2.portFlowDirection_2 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWSup2.portFlowDirection_2 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWSup2.portFlowDirection_2 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(junCHWSup2.portFlowDirection_2, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8187};
  modelica_boolean tmp519;
  modelica_boolean tmp520;
  static const MMC_DEFSTRINGLIT(tmp521,189,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWSup2.portFlowDirection_2 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp522;
  modelica_metatype tmpMeta523;
  static int tmp524 = 0;
  if(!tmp524)
  {
    tmp519 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[289]] /* junCHWSup2.portFlowDirection_2 PARAM */),1);
    tmp520 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[289]] /* junCHWSup2.portFlowDirection_2 PARAM */),3);
    if(!(tmp519 && tmp520))
    {
      tmp522 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[289]] /* junCHWSup2.portFlowDirection_2 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta523 = stringAppend(MMC_REFSTRINGLIT(tmp521),tmp522);
      {
        const char* assert_cond = "(junCHWSup2.portFlowDirection_2 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWSup2.portFlowDirection_2 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",44,3,46,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta523));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",44,3,46,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta523));
        }
      }
      tmp524 = 1;
    }
  }
  threadData->lastEquationSolved = 8187;
}

/*
equation index: 8188
type: ALGORITHM

  assert(junCHWSup2.portFlowDirection_1 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWSup2.portFlowDirection_1 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWSup2.portFlowDirection_1 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(junCHWSup2.portFlowDirection_1, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8188};
  modelica_boolean tmp525;
  modelica_boolean tmp526;
  static const MMC_DEFSTRINGLIT(tmp527,189,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWSup2.portFlowDirection_1 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp528;
  modelica_metatype tmpMeta529;
  static int tmp530 = 0;
  if(!tmp530)
  {
    tmp525 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[288]] /* junCHWSup2.portFlowDirection_1 PARAM */),1);
    tmp526 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[288]] /* junCHWSup2.portFlowDirection_1 PARAM */),3);
    if(!(tmp525 && tmp526))
    {
      tmp528 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[288]] /* junCHWSup2.portFlowDirection_1 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta529 = stringAppend(MMC_REFSTRINGLIT(tmp527),tmp528);
      {
        const char* assert_cond = "(junCHWSup2.portFlowDirection_1 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWSup2.portFlowDirection_1 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",41,3,43,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta529));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",41,3,43,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta529));
        }
      }
      tmp530 = 1;
    }
  }
  threadData->lastEquationSolved = 8188;
}

/*
equation index: 8189
type: ALGORITHM

  assert(junCHWSup2.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= junCHWSup2.mSenFac, has value: " + String(junCHWSup2.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8189};
  modelica_boolean tmp531;
  static const MMC_DEFSTRINGLIT(tmp532,73,"Variable violating min constraint: 1.0 <= junCHWSup2.mSenFac, has value: ");
  modelica_string tmp533;
  modelica_metatype tmpMeta534;
  static int tmp535 = 0;
  if(!tmp535)
  {
    tmp531 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1879]] /* junCHWSup2.mSenFac PARAM */),1.0);
    if(!tmp531)
    {
      tmp533 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1879]] /* junCHWSup2.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta534 = stringAppend(MMC_REFSTRINGLIT(tmp532),tmp533);
      {
        const char* assert_cond = "(junCHWSup2.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta534));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta534));
        }
      }
      tmp535 = 1;
    }
  }
  threadData->lastEquationSolved = 8189;
}

/*
equation index: 8190
type: ALGORITHM

  assert(junCHWSup2.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8190};
  modelica_boolean tmp536;
  modelica_boolean tmp537;
  static const MMC_DEFSTRINGLIT(tmp538,173,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp539;
  modelica_metatype tmpMeta540;
  static int tmp541 = 0;
  if(!tmp541)
  {
    tmp536 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[292]] /* junCHWSup2.traceDynamics PARAM */),1);
    tmp537 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[292]] /* junCHWSup2.traceDynamics PARAM */),4);
    if(!(tmp536 && tmp537))
    {
      tmp539 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[292]] /* junCHWSup2.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta540 = stringAppend(MMC_REFSTRINGLIT(tmp538),tmp539);
      {
        const char* assert_cond = "(junCHWSup2.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta540));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta540));
        }
      }
      tmp541 = 1;
    }
  }
  threadData->lastEquationSolved = 8190;
}

/*
equation index: 8191
type: ALGORITHM

  assert(junCHWSup2.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8191};
  modelica_boolean tmp542;
  modelica_boolean tmp543;
  static const MMC_DEFSTRINGLIT(tmp544,177,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp545;
  modelica_metatype tmpMeta546;
  static int tmp547 = 0;
  if(!tmp547)
  {
    tmp542 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[291]] /* junCHWSup2.substanceDynamics PARAM */),1);
    tmp543 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[291]] /* junCHWSup2.substanceDynamics PARAM */),4);
    if(!(tmp542 && tmp543))
    {
      tmp545 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[291]] /* junCHWSup2.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta546 = stringAppend(MMC_REFSTRINGLIT(tmp544),tmp545);
      {
        const char* assert_cond = "(junCHWSup2.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta546));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta546));
        }
      }
      tmp547 = 1;
    }
  }
  threadData->lastEquationSolved = 8191;
}

/*
equation index: 8192
type: ALGORITHM

  assert(junCHWSup2.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8192};
  modelica_boolean tmp548;
  modelica_boolean tmp549;
  static const MMC_DEFSTRINGLIT(tmp550,172,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp551;
  modelica_metatype tmpMeta552;
  static int tmp553 = 0;
  if(!tmp553)
  {
    tmp548 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[287]] /* junCHWSup2.massDynamics PARAM */),1);
    tmp549 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[287]] /* junCHWSup2.massDynamics PARAM */),4);
    if(!(tmp548 && tmp549))
    {
      tmp551 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[287]] /* junCHWSup2.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta552 = stringAppend(MMC_REFSTRINGLIT(tmp550),tmp551);
      {
        const char* assert_cond = "(junCHWSup2.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta552));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta552));
        }
      }
      tmp553 = 1;
    }
  }
  threadData->lastEquationSolved = 8192;
}

/*
equation index: 8193
type: ALGORITHM

  assert(junCHWSup2.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8193};
  modelica_boolean tmp554;
  modelica_boolean tmp555;
  static const MMC_DEFSTRINGLIT(tmp556,174,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp557;
  modelica_metatype tmpMeta558;
  static int tmp559 = 0;
  if(!tmp559)
  {
    tmp554 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[286]] /* junCHWSup2.energyDynamics PARAM */),1);
    tmp555 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[286]] /* junCHWSup2.energyDynamics PARAM */),4);
    if(!(tmp554 && tmp555))
    {
      tmp557 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[286]] /* junCHWSup2.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta558 = stringAppend(MMC_REFSTRINGLIT(tmp556),tmp557);
      {
        const char* assert_cond = "(junCHWSup2.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta558));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta558));
        }
      }
      tmp559 = 1;
    }
  }
  threadData->lastEquationSolved = 8193;
}

/*
equation index: 8194
type: ALGORITHM

  assert(junCHWRet2.deltaM >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.deltaM, has value: " + String(junCHWRet2.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8194};
  modelica_boolean tmp560;
  static const MMC_DEFSTRINGLIT(tmp561,72,"Variable violating min constraint: 0.0 <= junCHWRet2.deltaM, has value: ");
  modelica_string tmp562;
  modelica_metatype tmpMeta563;
  static int tmp564 = 0;
  if(!tmp564)
  {
    tmp560 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1708]] /* junCHWRet2.deltaM PARAM */),0.0);
    if(!tmp560)
    {
      tmp562 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1708]] /* junCHWRet2.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta563 = stringAppend(MMC_REFSTRINGLIT(tmp561),tmp562);
      {
        const char* assert_cond = "(junCHWRet2.deltaM >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/Junction.mo",37,3,40,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta563));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/Junction.mo",37,3,40,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta563));
        }
      }
      tmp564 = 1;
    }
  }
  threadData->lastEquationSolved = 8194;
}

/*
equation index: 8195
type: ALGORITHM

  assert(junCHWRet2.vol.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.vol.m_flow_nominal, has value: " + String(junCHWRet2.vol.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8195};
  modelica_boolean tmp565;
  static const MMC_DEFSTRINGLIT(tmp566,84,"Variable violating min constraint: 0.0 <= junCHWRet2.vol.m_flow_nominal, has value: ");
  modelica_string tmp567;
  modelica_metatype tmpMeta568;
  static int tmp569 = 0;
  if(!tmp569)
  {
    tmp565 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1779]] /* junCHWRet2.vol.m_flow_nominal PARAM */),0.0);
    if(!tmp565)
    {
      tmp567 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1779]] /* junCHWRet2.vol.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta568 = stringAppend(MMC_REFSTRINGLIT(tmp566),tmp567);
      {
        const char* assert_cond = "(junCHWRet2.vol.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,22,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta568));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,22,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta568));
        }
      }
      tmp569 = 1;
    }
  }
  threadData->lastEquationSolved = 8195;
}

/*
equation index: 8196
type: ALGORITHM

  assert(junCHWRet2.T_start >= 1.0 and junCHWRet2.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.T_start <= 1e4, has value: " + String(junCHWRet2.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8196};
  modelica_boolean tmp570;
  modelica_boolean tmp571;
  static const MMC_DEFSTRINGLIT(tmp572,84,"Variable violating min/max constraint: 1.0 <= junCHWRet2.T_start <= 1e4, has value: ");
  modelica_string tmp573;
  modelica_metatype tmpMeta574;
  static int tmp575 = 0;
  if(!tmp575)
  {
    tmp570 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1706]] /* junCHWRet2.T_start PARAM */),1.0);
    tmp571 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1706]] /* junCHWRet2.T_start PARAM */),1e4);
    if(!(tmp570 && tmp571))
    {
      tmp573 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1706]] /* junCHWRet2.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta574 = stringAppend(MMC_REFSTRINGLIT(tmp572),tmp573);
      {
        const char* assert_cond = "(junCHWRet2.T_start >= 1.0 and junCHWRet2.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta574));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta574));
        }
      }
      tmp575 = 1;
    }
  }
  threadData->lastEquationSolved = 8196;
}

/*
equation index: 8197
type: ALGORITHM

  assert(junCHWRet2.vol.T_start >= 1.0 and junCHWRet2.vol.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.T_start <= 1e4, has value: " + String(junCHWRet2.vol.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8197};
  modelica_boolean tmp576;
  modelica_boolean tmp577;
  static const MMC_DEFSTRINGLIT(tmp578,88,"Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.T_start <= 1e4, has value: ");
  modelica_string tmp579;
  modelica_metatype tmpMeta580;
  static int tmp581 = 0;
  if(!tmp581)
  {
    tmp576 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1762]] /* junCHWRet2.vol.T_start PARAM */),1.0);
    tmp577 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1762]] /* junCHWRet2.vol.T_start PARAM */),1e4);
    if(!(tmp576 && tmp577))
    {
      tmp579 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1762]] /* junCHWRet2.vol.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta580 = stringAppend(MMC_REFSTRINGLIT(tmp578),tmp579);
      {
        const char* assert_cond = "(junCHWRet2.vol.T_start >= 1.0 and junCHWRet2.vol.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta580));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta580));
        }
      }
      tmp581 = 1;
    }
  }
  threadData->lastEquationSolved = 8197;
}

/*
equation index: 8198
type: ALGORITHM

  assert(junCHWRet2.vol.state_start.T >= 1.0 and junCHWRet2.vol.state_start.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.state_start.T <= 1e4, has value: " + String(junCHWRet2.vol.state_start.T, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8198};
  modelica_boolean tmp582;
  modelica_boolean tmp583;
  static const MMC_DEFSTRINGLIT(tmp584,94,"Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.state_start.T <= 1e4, has value: ");
  modelica_string tmp585;
  modelica_metatype tmpMeta586;
  static int tmp587 = 0;
  if(!tmp587)
  {
    tmp582 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1786]] /* junCHWRet2.vol.state_start.T PARAM */),1.0);
    tmp583 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1786]] /* junCHWRet2.vol.state_start.T PARAM */),1e4);
    if(!(tmp582 && tmp583))
    {
      tmp585 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1786]] /* junCHWRet2.vol.state_start.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta586 = stringAppend(MMC_REFSTRINGLIT(tmp584),tmp585);
      {
        const char* assert_cond = "(junCHWRet2.vol.state_start.T >= 1.0 and junCHWRet2.vol.state_start.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta586));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta586));
        }
      }
      tmp587 = 1;
    }
  }
  threadData->lastEquationSolved = 8198;
}

/*
equation index: 8199
type: ALGORITHM

  assert(junCHWRet2.p_start >= 0.0 and junCHWRet2.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.p_start <= 1e8, has value: " + String(junCHWRet2.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8199};
  modelica_boolean tmp588;
  modelica_boolean tmp589;
  static const MMC_DEFSTRINGLIT(tmp590,84,"Variable violating min/max constraint: 0.0 <= junCHWRet2.p_start <= 1e8, has value: ");
  modelica_string tmp591;
  modelica_metatype tmpMeta592;
  static int tmp593 = 0;
  if(!tmp593)
  {
    tmp588 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1718]] /* junCHWRet2.p_start PARAM */),0.0);
    tmp589 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1718]] /* junCHWRet2.p_start PARAM */),1e8);
    if(!(tmp588 && tmp589))
    {
      tmp591 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1718]] /* junCHWRet2.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta592 = stringAppend(MMC_REFSTRINGLIT(tmp590),tmp591);
      {
        const char* assert_cond = "(junCHWRet2.p_start >= 0.0 and junCHWRet2.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta592));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta592));
        }
      }
      tmp593 = 1;
    }
  }
  threadData->lastEquationSolved = 8199;
}

/*
equation index: 8200
type: ALGORITHM

  assert(junCHWRet2.vol.p_start >= 0.0 and junCHWRet2.vol.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.p_start <= 1e8, has value: " + String(junCHWRet2.vol.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8200};
  modelica_boolean tmp594;
  modelica_boolean tmp595;
  static const MMC_DEFSTRINGLIT(tmp596,88,"Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.p_start <= 1e8, has value: ");
  modelica_string tmp597;
  modelica_metatype tmpMeta598;
  static int tmp599 = 0;
  if(!tmp599)
  {
    tmp594 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1781]] /* junCHWRet2.vol.p_start PARAM */),0.0);
    tmp595 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1781]] /* junCHWRet2.vol.p_start PARAM */),1e8);
    if(!(tmp594 && tmp595))
    {
      tmp597 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1781]] /* junCHWRet2.vol.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta598 = stringAppend(MMC_REFSTRINGLIT(tmp596),tmp597);
      {
        const char* assert_cond = "(junCHWRet2.vol.p_start >= 0.0 and junCHWRet2.vol.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta598));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta598));
        }
      }
      tmp599 = 1;
    }
  }
  threadData->lastEquationSolved = 8200;
}

/*
equation index: 8201
type: ALGORITHM

  assert(junCHWRet2.vol.state_start.p >= 0.0 and junCHWRet2.vol.state_start.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.state_start.p <= 1e8, has value: " + String(junCHWRet2.vol.state_start.p, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8201};
  modelica_boolean tmp600;
  modelica_boolean tmp601;
  static const MMC_DEFSTRINGLIT(tmp602,94,"Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.state_start.p <= 1e8, has value: ");
  modelica_string tmp603;
  modelica_metatype tmpMeta604;
  static int tmp605 = 0;
  if(!tmp605)
  {
    tmp600 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1787]] /* junCHWRet2.vol.state_start.p PARAM */),0.0);
    tmp601 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1787]] /* junCHWRet2.vol.state_start.p PARAM */),1e8);
    if(!(tmp600 && tmp601))
    {
      tmp603 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1787]] /* junCHWRet2.vol.state_start.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta604 = stringAppend(MMC_REFSTRINGLIT(tmp602),tmp603);
      {
        const char* assert_cond = "(junCHWRet2.vol.state_start.p >= 0.0 and junCHWRet2.vol.state_start.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta604));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta604));
        }
      }
      tmp605 = 1;
    }
  }
  threadData->lastEquationSolved = 8201;
}

/*
equation index: 8202
type: ALGORITHM

  assert(junCHWRet2.vol.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.vol.rho_default, has value: " + String(junCHWRet2.vol.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8202};
  modelica_boolean tmp606;
  static const MMC_DEFSTRINGLIT(tmp607,81,"Variable violating min constraint: 0.0 <= junCHWRet2.vol.rho_default, has value: ");
  modelica_string tmp608;
  modelica_metatype tmpMeta609;
  static int tmp610 = 0;
  if(!tmp610)
  {
    tmp606 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1782]] /* junCHWRet2.vol.rho_default PARAM */),0.0);
    if(!tmp606)
    {
      tmp608 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1782]] /* junCHWRet2.vol.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta609 = stringAppend(MMC_REFSTRINGLIT(tmp607),tmp608);
      {
        const char* assert_cond = "(junCHWRet2.vol.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",90,3,91,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta609));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",90,3,91,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta609));
        }
      }
      tmp610 = 1;
    }
  }
  threadData->lastEquationSolved = 8202;
}

/*
equation index: 8203
type: ALGORITHM

  assert(junCHWRet2.vol.state_default.T >= 1.0 and junCHWRet2.vol.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.state_default.T <= 1e4, has value: " + String(junCHWRet2.vol.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8203};
  modelica_boolean tmp611;
  modelica_boolean tmp612;
  static const MMC_DEFSTRINGLIT(tmp613,96,"Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.state_default.T <= 1e4, has value: ");
  modelica_string tmp614;
  modelica_metatype tmpMeta615;
  static int tmp616 = 0;
  if(!tmp616)
  {
    tmp611 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1784]] /* junCHWRet2.vol.state_default.T PARAM */),1.0);
    tmp612 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1784]] /* junCHWRet2.vol.state_default.T PARAM */),1e4);
    if(!(tmp611 && tmp612))
    {
      tmp614 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1784]] /* junCHWRet2.vol.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta615 = stringAppend(MMC_REFSTRINGLIT(tmp613),tmp614);
      {
        const char* assert_cond = "(junCHWRet2.vol.state_default.T >= 1.0 and junCHWRet2.vol.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta615));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta615));
        }
      }
      tmp616 = 1;
    }
  }
  threadData->lastEquationSolved = 8203;
}

/*
equation index: 8204
type: ALGORITHM

  assert(junCHWRet2.vol.state_default.p >= 0.0 and junCHWRet2.vol.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.state_default.p <= 1e8, has value: " + String(junCHWRet2.vol.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8204};
  modelica_boolean tmp617;
  modelica_boolean tmp618;
  static const MMC_DEFSTRINGLIT(tmp619,96,"Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.state_default.p <= 1e8, has value: ");
  modelica_string tmp620;
  modelica_metatype tmpMeta621;
  static int tmp622 = 0;
  if(!tmp622)
  {
    tmp617 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1785]] /* junCHWRet2.vol.state_default.p PARAM */),0.0);
    tmp618 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1785]] /* junCHWRet2.vol.state_default.p PARAM */),1e8);
    if(!(tmp617 && tmp618))
    {
      tmp620 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1785]] /* junCHWRet2.vol.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta621 = stringAppend(MMC_REFSTRINGLIT(tmp619),tmp620);
      {
        const char* assert_cond = "(junCHWRet2.vol.state_default.p >= 0.0 and junCHWRet2.vol.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta621));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta621));
        }
      }
      tmp622 = 1;
    }
  }
  threadData->lastEquationSolved = 8204;
}

/*
equation index: 8205
type: ALGORITHM

  assert(junCHWRet2.vol.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.vol.rho_start, has value: " + String(junCHWRet2.vol.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8205};
  modelica_boolean tmp623;
  static const MMC_DEFSTRINGLIT(tmp624,79,"Variable violating min constraint: 0.0 <= junCHWRet2.vol.rho_start, has value: ");
  modelica_string tmp625;
  modelica_metatype tmpMeta626;
  static int tmp627 = 0;
  if(!tmp627)
  {
    tmp623 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1783]] /* junCHWRet2.vol.rho_start PARAM */),0.0);
    if(!tmp623)
    {
      tmp625 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1783]] /* junCHWRet2.vol.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta626 = stringAppend(MMC_REFSTRINGLIT(tmp624),tmp625);
      {
        const char* assert_cond = "(junCHWRet2.vol.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",83,3,84,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta626));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",83,3,84,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta626));
        }
      }
      tmp627 = 1;
    }
  }
  threadData->lastEquationSolved = 8205;
}

/*
equation index: 8206
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.p_start >= 0.0 and junCHWRet2.vol.dynBal.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.dynBal.p_start <= 1e8, has value: " + String(junCHWRet2.vol.dynBal.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8206};
  modelica_boolean tmp628;
  modelica_boolean tmp629;
  static const MMC_DEFSTRINGLIT(tmp630,95,"Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.dynBal.p_start <= 1e8, has value: ");
  modelica_string tmp631;
  modelica_metatype tmpMeta632;
  static int tmp633 = 0;
  if(!tmp633)
  {
    tmp628 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1773]] /* junCHWRet2.vol.dynBal.p_start PARAM */),0.0);
    tmp629 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1773]] /* junCHWRet2.vol.dynBal.p_start PARAM */),1e8);
    if(!(tmp628 && tmp629))
    {
      tmp631 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1773]] /* junCHWRet2.vol.dynBal.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta632 = stringAppend(MMC_REFSTRINGLIT(tmp630),tmp631);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.p_start >= 0.0 and junCHWRet2.vol.dynBal.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta632));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta632));
        }
      }
      tmp633 = 1;
    }
  }
  threadData->lastEquationSolved = 8206;
}

/*
equation index: 8207
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.T_start >= 1.0 and junCHWRet2.vol.dynBal.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.dynBal.T_start <= 1e4, has value: " + String(junCHWRet2.vol.dynBal.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8207};
  modelica_boolean tmp634;
  modelica_boolean tmp635;
  static const MMC_DEFSTRINGLIT(tmp636,95,"Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.dynBal.T_start <= 1e4, has value: ");
  modelica_string tmp637;
  modelica_metatype tmpMeta638;
  static int tmp639 = 0;
  if(!tmp639)
  {
    tmp634 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1767]] /* junCHWRet2.vol.dynBal.T_start PARAM */),1.0);
    tmp635 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1767]] /* junCHWRet2.vol.dynBal.T_start PARAM */),1e4);
    if(!(tmp634 && tmp635))
    {
      tmp637 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1767]] /* junCHWRet2.vol.dynBal.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta638 = stringAppend(MMC_REFSTRINGLIT(tmp636),tmp637);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.T_start >= 1.0 and junCHWRet2.vol.dynBal.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta638));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta638));
        }
      }
      tmp639 = 1;
    }
  }
  threadData->lastEquationSolved = 8207;
}

/*
equation index: 8208
type: ALGORITHM

  assert(junCHWRet2.X_start[1] >= 0.0 and junCHWRet2.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWRet2.X_start[1] <= 1.0, has value: " + String(junCHWRet2.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8208};
  modelica_boolean tmp640;
  modelica_boolean tmp641;
  static const MMC_DEFSTRINGLIT(tmp642,87,"Variable violating min/max constraint: 0.0 <= junCHWRet2.X_start[1] <= 1.0, has value: ");
  modelica_string tmp643;
  modelica_metatype tmpMeta644;
  static int tmp645 = 0;
  if(!tmp645)
  {
    tmp640 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1707]] /* junCHWRet2.X_start[1] PARAM */),0.0);
    tmp641 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1707]] /* junCHWRet2.X_start[1] PARAM */),1.0);
    if(!(tmp640 && tmp641))
    {
      tmp643 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1707]] /* junCHWRet2.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta644 = stringAppend(MMC_REFSTRINGLIT(tmp642),tmp643);
      {
        const char* assert_cond = "(junCHWRet2.X_start[1] >= 0.0 and junCHWRet2.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta644));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta644));
        }
      }
      tmp645 = 1;
    }
  }
  threadData->lastEquationSolved = 8208;
}

/*
equation index: 8209
type: ALGORITHM

  assert(junCHWRet2.vol.X_start[1] >= 0.0 and junCHWRet2.vol.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.X_start[1] <= 1.0, has value: " + String(junCHWRet2.vol.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8209};
  modelica_boolean tmp646;
  modelica_boolean tmp647;
  static const MMC_DEFSTRINGLIT(tmp648,91,"Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.X_start[1] <= 1.0, has value: ");
  modelica_string tmp649;
  modelica_metatype tmpMeta650;
  static int tmp651 = 0;
  if(!tmp651)
  {
    tmp646 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1765]] /* junCHWRet2.vol.X_start[1] PARAM */),0.0);
    tmp647 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1765]] /* junCHWRet2.vol.X_start[1] PARAM */),1.0);
    if(!(tmp646 && tmp647))
    {
      tmp649 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1765]] /* junCHWRet2.vol.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta650 = stringAppend(MMC_REFSTRINGLIT(tmp648),tmp649);
      {
        const char* assert_cond = "(junCHWRet2.vol.X_start[1] >= 0.0 and junCHWRet2.vol.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta650));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta650));
        }
      }
      tmp651 = 1;
    }
  }
  threadData->lastEquationSolved = 8209;
}

/*
equation index: 8210
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.X_start[1] >= 0.0 and junCHWRet2.vol.dynBal.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.dynBal.X_start[1] <= 1.0, has value: " + String(junCHWRet2.vol.dynBal.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8210};
  modelica_boolean tmp652;
  modelica_boolean tmp653;
  static const MMC_DEFSTRINGLIT(tmp654,98,"Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.dynBal.X_start[1] <= 1.0, has value: ");
  modelica_string tmp655;
  modelica_metatype tmpMeta656;
  static int tmp657 = 0;
  if(!tmp657)
  {
    tmp652 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1768]] /* junCHWRet2.vol.dynBal.X_start[1] PARAM */),0.0);
    tmp653 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1768]] /* junCHWRet2.vol.dynBal.X_start[1] PARAM */),1.0);
    if(!(tmp652 && tmp653))
    {
      tmp655 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1768]] /* junCHWRet2.vol.dynBal.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta656 = stringAppend(MMC_REFSTRINGLIT(tmp654),tmp655);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.X_start[1] >= 0.0 and junCHWRet2.vol.dynBal.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta656));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta656));
        }
      }
      tmp657 = 1;
    }
  }
  threadData->lastEquationSolved = 8210;
}

/*
equation index: 8211
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.vol.dynBal.rho_default, has value: " + String(junCHWRet2.vol.dynBal.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8211};
  modelica_boolean tmp658;
  static const MMC_DEFSTRINGLIT(tmp659,88,"Variable violating min constraint: 0.0 <= junCHWRet2.vol.dynBal.rho_default, has value: ");
  modelica_string tmp660;
  modelica_metatype tmpMeta661;
  static int tmp662 = 0;
  if(!tmp662)
  {
    tmp658 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1774]] /* junCHWRet2.vol.dynBal.rho_default PARAM */),0.0);
    if(!tmp658)
    {
      tmp660 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1774]] /* junCHWRet2.vol.dynBal.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta661 = stringAppend(MMC_REFSTRINGLIT(tmp659),tmp660);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",145,3,146,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta661));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",145,3,146,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta661));
        }
      }
      tmp662 = 1;
    }
  }
  threadData->lastEquationSolved = 8211;
}

/*
equation index: 8212
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.state_default.T >= 1.0 and junCHWRet2.vol.dynBal.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.dynBal.state_default.T <= 1e4, has value: " + String(junCHWRet2.vol.dynBal.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8212};
  modelica_boolean tmp663;
  modelica_boolean tmp664;
  static const MMC_DEFSTRINGLIT(tmp665,103,"Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.dynBal.state_default.T <= 1e4, has value: ");
  modelica_string tmp666;
  modelica_metatype tmpMeta667;
  static int tmp668 = 0;
  if(!tmp668)
  {
    tmp663 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1776]] /* junCHWRet2.vol.dynBal.state_default.T PARAM */),1.0);
    tmp664 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1776]] /* junCHWRet2.vol.dynBal.state_default.T PARAM */),1e4);
    if(!(tmp663 && tmp664))
    {
      tmp666 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1776]] /* junCHWRet2.vol.dynBal.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta667 = stringAppend(MMC_REFSTRINGLIT(tmp665),tmp666);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.state_default.T >= 1.0 and junCHWRet2.vol.dynBal.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta667));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta667));
        }
      }
      tmp668 = 1;
    }
  }
  threadData->lastEquationSolved = 8212;
}

/*
equation index: 8213
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.state_default.p >= 0.0 and junCHWRet2.vol.dynBal.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.dynBal.state_default.p <= 1e8, has value: " + String(junCHWRet2.vol.dynBal.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8213};
  modelica_boolean tmp669;
  modelica_boolean tmp670;
  static const MMC_DEFSTRINGLIT(tmp671,103,"Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.dynBal.state_default.p <= 1e8, has value: ");
  modelica_string tmp672;
  modelica_metatype tmpMeta673;
  static int tmp674 = 0;
  if(!tmp674)
  {
    tmp669 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1777]] /* junCHWRet2.vol.dynBal.state_default.p PARAM */),0.0);
    tmp670 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1777]] /* junCHWRet2.vol.dynBal.state_default.p PARAM */),1e8);
    if(!(tmp669 && tmp670))
    {
      tmp672 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1777]] /* junCHWRet2.vol.dynBal.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta673 = stringAppend(MMC_REFSTRINGLIT(tmp671),tmp672);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.state_default.p >= 0.0 and junCHWRet2.vol.dynBal.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta673));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta673));
        }
      }
      tmp674 = 1;
    }
  }
  threadData->lastEquationSolved = 8213;
}

/*
equation index: 8214
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.vol.dynBal.rho_start, has value: " + String(junCHWRet2.vol.dynBal.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8214};
  modelica_boolean tmp675;
  static const MMC_DEFSTRINGLIT(tmp676,86,"Variable violating min constraint: 0.0 <= junCHWRet2.vol.dynBal.rho_start, has value: ");
  modelica_string tmp677;
  modelica_metatype tmpMeta678;
  static int tmp679 = 0;
  if(!tmp679)
  {
    tmp675 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1775]] /* junCHWRet2.vol.dynBal.rho_start PARAM */),0.0);
    if(!tmp675)
    {
      tmp677 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1775]] /* junCHWRet2.vol.dynBal.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta678 = stringAppend(MMC_REFSTRINGLIT(tmp676),tmp677);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",131,3,135,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta678));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",131,3,135,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta678));
        }
      }
      tmp679 = 1;
    }
  }
  threadData->lastEquationSolved = 8214;
}

/*
equation index: 8215
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= junCHWRet2.vol.dynBal.mSenFac, has value: " + String(junCHWRet2.vol.dynBal.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8215};
  modelica_boolean tmp680;
  static const MMC_DEFSTRINGLIT(tmp681,84,"Variable violating min constraint: 1.0 <= junCHWRet2.vol.dynBal.mSenFac, has value: ");
  modelica_string tmp682;
  modelica_metatype tmpMeta683;
  static int tmp684 = 0;
  if(!tmp684)
  {
    tmp680 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1772]] /* junCHWRet2.vol.dynBal.mSenFac PARAM */),1.0);
    if(!tmp680)
    {
      tmp682 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1772]] /* junCHWRet2.vol.dynBal.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta683 = stringAppend(MMC_REFSTRINGLIT(tmp681),tmp682);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta683));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta683));
        }
      }
      tmp684 = 1;
    }
  }
  threadData->lastEquationSolved = 8215;
}

/*
equation index: 8216
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.vol.dynBal.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8216};
  modelica_boolean tmp685;
  modelica_boolean tmp686;
  static const MMC_DEFSTRINGLIT(tmp687,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp688;
  modelica_metatype tmpMeta689;
  static int tmp690 = 0;
  if(!tmp690)
  {
    tmp685 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[263]] /* junCHWRet2.vol.dynBal.traceDynamics PARAM */),1);
    tmp686 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[263]] /* junCHWRet2.vol.dynBal.traceDynamics PARAM */),4);
    if(!(tmp685 && tmp686))
    {
      tmp688 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[263]] /* junCHWRet2.vol.dynBal.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta689 = stringAppend(MMC_REFSTRINGLIT(tmp687),tmp688);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta689));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta689));
        }
      }
      tmp690 = 1;
    }
  }
  threadData->lastEquationSolved = 8216;
}

/*
equation index: 8217
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.vol.dynBal.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8217};
  modelica_boolean tmp691;
  modelica_boolean tmp692;
  static const MMC_DEFSTRINGLIT(tmp693,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp694;
  modelica_metatype tmpMeta695;
  static int tmp696 = 0;
  if(!tmp696)
  {
    tmp691 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[262]] /* junCHWRet2.vol.dynBal.substanceDynamics PARAM */),1);
    tmp692 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[262]] /* junCHWRet2.vol.dynBal.substanceDynamics PARAM */),4);
    if(!(tmp691 && tmp692))
    {
      tmp694 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[262]] /* junCHWRet2.vol.dynBal.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta695 = stringAppend(MMC_REFSTRINGLIT(tmp693),tmp694);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta695));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta695));
        }
      }
      tmp696 = 1;
    }
  }
  threadData->lastEquationSolved = 8217;
}

/*
equation index: 8218
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.vol.dynBal.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8218};
  modelica_boolean tmp697;
  modelica_boolean tmp698;
  static const MMC_DEFSTRINGLIT(tmp699,183,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp700;
  modelica_metatype tmpMeta701;
  static int tmp702 = 0;
  if(!tmp702)
  {
    tmp697 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[260]] /* junCHWRet2.vol.dynBal.massDynamics PARAM */),1);
    tmp698 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[260]] /* junCHWRet2.vol.dynBal.massDynamics PARAM */),4);
    if(!(tmp697 && tmp698))
    {
      tmp700 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[260]] /* junCHWRet2.vol.dynBal.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta701 = stringAppend(MMC_REFSTRINGLIT(tmp699),tmp700);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta701));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta701));
        }
      }
      tmp702 = 1;
    }
  }
  threadData->lastEquationSolved = 8218;
}

/*
equation index: 8219
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.vol.dynBal.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8219};
  modelica_boolean tmp703;
  modelica_boolean tmp704;
  static const MMC_DEFSTRINGLIT(tmp705,185,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp706;
  modelica_metatype tmpMeta707;
  static int tmp708 = 0;
  if(!tmp708)
  {
    tmp703 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[259]] /* junCHWRet2.vol.dynBal.energyDynamics PARAM */),1);
    tmp704 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[259]] /* junCHWRet2.vol.dynBal.energyDynamics PARAM */),4);
    if(!(tmp703 && tmp704))
    {
      tmp706 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[259]] /* junCHWRet2.vol.dynBal.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta707 = stringAppend(MMC_REFSTRINGLIT(tmp705),tmp706);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta707));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta707));
        }
      }
      tmp708 = 1;
    }
  }
  threadData->lastEquationSolved = 8219;
}

/*
equation index: 8220
type: ALGORITHM

  assert(junCHWRet2.vol.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.vol.m_flow_small, has value: " + String(junCHWRet2.vol.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8220};
  modelica_boolean tmp709;
  static const MMC_DEFSTRINGLIT(tmp710,82,"Variable violating min constraint: 0.0 <= junCHWRet2.vol.m_flow_small, has value: ");
  modelica_string tmp711;
  modelica_metatype tmpMeta712;
  static int tmp713 = 0;
  if(!tmp713)
  {
    tmp709 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1780]] /* junCHWRet2.vol.m_flow_small PARAM */),0.0);
    if(!tmp709)
    {
      tmp711 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1780]] /* junCHWRet2.vol.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta712 = stringAppend(MMC_REFSTRINGLIT(tmp710),tmp711);
      {
        const char* assert_cond = "(junCHWRet2.vol.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",26,3,28,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta712));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",26,3,28,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta712));
        }
      }
      tmp713 = 1;
    }
  }
  threadData->lastEquationSolved = 8220;
}

/*
equation index: 8221
type: ALGORITHM

  assert(junCHWRet2.vol.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= junCHWRet2.vol.mSenFac, has value: " + String(junCHWRet2.vol.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8221};
  modelica_boolean tmp714;
  static const MMC_DEFSTRINGLIT(tmp715,77,"Variable violating min constraint: 1.0 <= junCHWRet2.vol.mSenFac, has value: ");
  modelica_string tmp716;
  modelica_metatype tmpMeta717;
  static int tmp718 = 0;
  if(!tmp718)
  {
    tmp714 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1778]] /* junCHWRet2.vol.mSenFac PARAM */),1.0);
    if(!tmp714)
    {
      tmp716 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1778]] /* junCHWRet2.vol.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta717 = stringAppend(MMC_REFSTRINGLIT(tmp715),tmp716);
      {
        const char* assert_cond = "(junCHWRet2.vol.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta717));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta717));
        }
      }
      tmp718 = 1;
    }
  }
  threadData->lastEquationSolved = 8221;
}

/*
equation index: 8222
type: ALGORITHM

  assert(junCHWRet2.vol.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.vol.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8222};
  modelica_boolean tmp719;
  modelica_boolean tmp720;
  static const MMC_DEFSTRINGLIT(tmp721,177,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp722;
  modelica_metatype tmpMeta723;
  static int tmp724 = 0;
  if(!tmp724)
  {
    tmp719 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[268]] /* junCHWRet2.vol.traceDynamics PARAM */),1);
    tmp720 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[268]] /* junCHWRet2.vol.traceDynamics PARAM */),4);
    if(!(tmp719 && tmp720))
    {
      tmp722 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[268]] /* junCHWRet2.vol.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta723 = stringAppend(MMC_REFSTRINGLIT(tmp721),tmp722);
      {
        const char* assert_cond = "(junCHWRet2.vol.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta723));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta723));
        }
      }
      tmp724 = 1;
    }
  }
  threadData->lastEquationSolved = 8222;
}

/*
equation index: 8223
type: ALGORITHM

  assert(junCHWRet2.vol.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.vol.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8223};
  modelica_boolean tmp725;
  modelica_boolean tmp726;
  static const MMC_DEFSTRINGLIT(tmp727,181,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp728;
  modelica_metatype tmpMeta729;
  static int tmp730 = 0;
  if(!tmp730)
  {
    tmp725 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[267]] /* junCHWRet2.vol.substanceDynamics PARAM */),1);
    tmp726 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[267]] /* junCHWRet2.vol.substanceDynamics PARAM */),4);
    if(!(tmp725 && tmp726))
    {
      tmp728 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[267]] /* junCHWRet2.vol.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta729 = stringAppend(MMC_REFSTRINGLIT(tmp727),tmp728);
      {
        const char* assert_cond = "(junCHWRet2.vol.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta729));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta729));
        }
      }
      tmp730 = 1;
    }
  }
  threadData->lastEquationSolved = 8223;
}

/*
equation index: 8224
type: ALGORITHM

  assert(junCHWRet2.vol.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.vol.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8224};
  modelica_boolean tmp731;
  modelica_boolean tmp732;
  static const MMC_DEFSTRINGLIT(tmp733,176,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp734;
  modelica_metatype tmpMeta735;
  static int tmp736 = 0;
  if(!tmp736)
  {
    tmp731 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[265]] /* junCHWRet2.vol.massDynamics PARAM */),1);
    tmp732 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[265]] /* junCHWRet2.vol.massDynamics PARAM */),4);
    if(!(tmp731 && tmp732))
    {
      tmp734 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[265]] /* junCHWRet2.vol.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta735 = stringAppend(MMC_REFSTRINGLIT(tmp733),tmp734);
      {
        const char* assert_cond = "(junCHWRet2.vol.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta735));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta735));
        }
      }
      tmp736 = 1;
    }
  }
  threadData->lastEquationSolved = 8224;
}

/*
equation index: 8225
type: ALGORITHM

  assert(junCHWRet2.vol.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.vol.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8225};
  modelica_boolean tmp737;
  modelica_boolean tmp738;
  static const MMC_DEFSTRINGLIT(tmp739,178,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp740;
  modelica_metatype tmpMeta741;
  static int tmp742 = 0;
  if(!tmp742)
  {
    tmp737 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[264]] /* junCHWRet2.vol.energyDynamics PARAM */),1);
    tmp738 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[264]] /* junCHWRet2.vol.energyDynamics PARAM */),4);
    if(!(tmp737 && tmp738))
    {
      tmp740 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[264]] /* junCHWRet2.vol.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta741 = stringAppend(MMC_REFSTRINGLIT(tmp739),tmp740);
      {
        const char* assert_cond = "(junCHWRet2.vol.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta741));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta741));
        }
      }
      tmp742 = 1;
    }
  }
  threadData->lastEquationSolved = 8225;
}

/*
equation index: 8226
type: ALGORITHM

  assert(junCHWRet2.res3.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= junCHWRet2.res3.deltaM, has value: " + String(junCHWRet2.res3.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8226};
  modelica_boolean tmp743;
  static const MMC_DEFSTRINGLIT(tmp744,78,"Variable violating min constraint: 1e-6 <= junCHWRet2.res3.deltaM, has value: ");
  modelica_string tmp745;
  modelica_metatype tmpMeta746;
  static int tmp747 = 0;
  if(!tmp747)
  {
    tmp743 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1750]] /* junCHWRet2.res3.deltaM PARAM */),1e-6);
    if(!tmp743)
    {
      tmp745 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1750]] /* junCHWRet2.res3.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta746 = stringAppend(MMC_REFSTRINGLIT(tmp744),tmp745);
      {
        const char* assert_cond = "(junCHWRet2.res3.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta746));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta746));
        }
      }
      tmp747 = 1;
    }
  }
  threadData->lastEquationSolved = 8226;
}

/*
equation index: 8227
type: ALGORITHM

  assert(junCHWRet2.res3.sta_default.p >= 0.0 and junCHWRet2.res3.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.res3.sta_default.p <= 1e8, has value: " + String(junCHWRet2.res3.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8227};
  modelica_boolean tmp748;
  modelica_boolean tmp749;
  static const MMC_DEFSTRINGLIT(tmp750,95,"Variable violating min/max constraint: 0.0 <= junCHWRet2.res3.sta_default.p <= 1e8, has value: ");
  modelica_string tmp751;
  modelica_metatype tmpMeta752;
  static int tmp753 = 0;
  if(!tmp753)
  {
    tmp748 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1760]] /* junCHWRet2.res3.sta_default.p PARAM */),0.0);
    tmp749 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1760]] /* junCHWRet2.res3.sta_default.p PARAM */),1e8);
    if(!(tmp748 && tmp749))
    {
      tmp751 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1760]] /* junCHWRet2.res3.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta752 = stringAppend(MMC_REFSTRINGLIT(tmp750),tmp751);
      {
        const char* assert_cond = "(junCHWRet2.res3.sta_default.p >= 0.0 and junCHWRet2.res3.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta752));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta752));
        }
      }
      tmp753 = 1;
    }
  }
  threadData->lastEquationSolved = 8227;
}

/*
equation index: 8228
type: ALGORITHM

  assert(junCHWRet2.res3.sta_default.T >= 1.0 and junCHWRet2.res3.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.res3.sta_default.T <= 1e4, has value: " + String(junCHWRet2.res3.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8228};
  modelica_boolean tmp754;
  modelica_boolean tmp755;
  static const MMC_DEFSTRINGLIT(tmp756,95,"Variable violating min/max constraint: 1.0 <= junCHWRet2.res3.sta_default.T <= 1e4, has value: ");
  modelica_string tmp757;
  modelica_metatype tmpMeta758;
  static int tmp759 = 0;
  if(!tmp759)
  {
    tmp754 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1759]] /* junCHWRet2.res3.sta_default.T PARAM */),1.0);
    tmp755 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1759]] /* junCHWRet2.res3.sta_default.T PARAM */),1e4);
    if(!(tmp754 && tmp755))
    {
      tmp757 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1759]] /* junCHWRet2.res3.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta758 = stringAppend(MMC_REFSTRINGLIT(tmp756),tmp757);
      {
        const char* assert_cond = "(junCHWRet2.res3.sta_default.T >= 1.0 and junCHWRet2.res3.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta758));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta758));
        }
      }
      tmp759 = 1;
    }
  }
  threadData->lastEquationSolved = 8228;
}

/*
equation index: 8229
type: ALGORITHM

  assert(junCHWRet2.res3.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res3.eta_default, has value: " + String(junCHWRet2.res3.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8229};
  modelica_boolean tmp760;
  static const MMC_DEFSTRINGLIT(tmp761,82,"Variable violating min constraint: 0.0 <= junCHWRet2.res3.eta_default, has value: ");
  modelica_string tmp762;
  modelica_metatype tmpMeta763;
  static int tmp764 = 0;
  if(!tmp764)
  {
    tmp760 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1753]] /* junCHWRet2.res3.eta_default PARAM */),0.0);
    if(!tmp760)
    {
      tmp762 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1753]] /* junCHWRet2.res3.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta763 = stringAppend(MMC_REFSTRINGLIT(tmp761),tmp762);
      {
        const char* assert_cond = "(junCHWRet2.res3.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta763));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta763));
        }
      }
      tmp764 = 1;
    }
  }
  threadData->lastEquationSolved = 8229;
}

/*
equation index: 8230
type: ALGORITHM

  assert(junCHWRet2.res3.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res3.m_flow_turbulent, has value: " + String(junCHWRet2.res3.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8230};
  modelica_boolean tmp765;
  static const MMC_DEFSTRINGLIT(tmp766,87,"Variable violating min constraint: 0.0 <= junCHWRet2.res3.m_flow_turbulent, has value: ");
  modelica_string tmp767;
  modelica_metatype tmpMeta768;
  static int tmp769 = 0;
  if(!tmp769)
  {
    tmp765 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1758]] /* junCHWRet2.res3.m_flow_turbulent PARAM */),0.0);
    if(!tmp765)
    {
      tmp767 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1758]] /* junCHWRet2.res3.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta768 = stringAppend(MMC_REFSTRINGLIT(tmp766),tmp767);
      {
        const char* assert_cond = "(junCHWRet2.res3.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta768));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta768));
        }
      }
      tmp769 = 1;
    }
  }
  threadData->lastEquationSolved = 8230;
}

/*
equation index: 8231
type: ALGORITHM

  assert(junCHWRet2.res3.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res3.m_flow_small, has value: " + String(junCHWRet2.res3.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8231};
  modelica_boolean tmp770;
  static const MMC_DEFSTRINGLIT(tmp771,83,"Variable violating min constraint: 0.0 <= junCHWRet2.res3.m_flow_small, has value: ");
  modelica_string tmp772;
  modelica_metatype tmpMeta773;
  static int tmp774 = 0;
  if(!tmp774)
  {
    tmp770 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1757]] /* junCHWRet2.res3.m_flow_small PARAM */),0.0);
    if(!tmp770)
    {
      tmp772 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1757]] /* junCHWRet2.res3.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta773 = stringAppend(MMC_REFSTRINGLIT(tmp771),tmp772);
      {
        const char* assert_cond = "(junCHWRet2.res3.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta773));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta773));
        }
      }
      tmp774 = 1;
    }
  }
  threadData->lastEquationSolved = 8231;
}

/*
equation index: 8232
type: ALGORITHM

  assert(junCHWRet2.res2.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= junCHWRet2.res2.deltaM, has value: " + String(junCHWRet2.res2.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8232};
  modelica_boolean tmp775;
  static const MMC_DEFSTRINGLIT(tmp776,78,"Variable violating min constraint: 1e-6 <= junCHWRet2.res2.deltaM, has value: ");
  modelica_string tmp777;
  modelica_metatype tmpMeta778;
  static int tmp779 = 0;
  if(!tmp779)
  {
    tmp775 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1736]] /* junCHWRet2.res2.deltaM PARAM */),1e-6);
    if(!tmp775)
    {
      tmp777 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1736]] /* junCHWRet2.res2.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta778 = stringAppend(MMC_REFSTRINGLIT(tmp776),tmp777);
      {
        const char* assert_cond = "(junCHWRet2.res2.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta778));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta778));
        }
      }
      tmp779 = 1;
    }
  }
  threadData->lastEquationSolved = 8232;
}

/*
equation index: 8233
type: ALGORITHM

  assert(junCHWRet2.res2.sta_default.p >= 0.0 and junCHWRet2.res2.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.res2.sta_default.p <= 1e8, has value: " + String(junCHWRet2.res2.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8233};
  modelica_boolean tmp780;
  modelica_boolean tmp781;
  static const MMC_DEFSTRINGLIT(tmp782,95,"Variable violating min/max constraint: 0.0 <= junCHWRet2.res2.sta_default.p <= 1e8, has value: ");
  modelica_string tmp783;
  modelica_metatype tmpMeta784;
  static int tmp785 = 0;
  if(!tmp785)
  {
    tmp780 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1746]] /* junCHWRet2.res2.sta_default.p PARAM */),0.0);
    tmp781 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1746]] /* junCHWRet2.res2.sta_default.p PARAM */),1e8);
    if(!(tmp780 && tmp781))
    {
      tmp783 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1746]] /* junCHWRet2.res2.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta784 = stringAppend(MMC_REFSTRINGLIT(tmp782),tmp783);
      {
        const char* assert_cond = "(junCHWRet2.res2.sta_default.p >= 0.0 and junCHWRet2.res2.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta784));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta784));
        }
      }
      tmp785 = 1;
    }
  }
  threadData->lastEquationSolved = 8233;
}

/*
equation index: 8234
type: ALGORITHM

  assert(junCHWRet2.res2.sta_default.T >= 1.0 and junCHWRet2.res2.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.res2.sta_default.T <= 1e4, has value: " + String(junCHWRet2.res2.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8234};
  modelica_boolean tmp786;
  modelica_boolean tmp787;
  static const MMC_DEFSTRINGLIT(tmp788,95,"Variable violating min/max constraint: 1.0 <= junCHWRet2.res2.sta_default.T <= 1e4, has value: ");
  modelica_string tmp789;
  modelica_metatype tmpMeta790;
  static int tmp791 = 0;
  if(!tmp791)
  {
    tmp786 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1745]] /* junCHWRet2.res2.sta_default.T PARAM */),1.0);
    tmp787 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1745]] /* junCHWRet2.res2.sta_default.T PARAM */),1e4);
    if(!(tmp786 && tmp787))
    {
      tmp789 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1745]] /* junCHWRet2.res2.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta790 = stringAppend(MMC_REFSTRINGLIT(tmp788),tmp789);
      {
        const char* assert_cond = "(junCHWRet2.res2.sta_default.T >= 1.0 and junCHWRet2.res2.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta790));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta790));
        }
      }
      tmp791 = 1;
    }
  }
  threadData->lastEquationSolved = 8234;
}

/*
equation index: 8235
type: ALGORITHM

  assert(junCHWRet2.res2.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res2.eta_default, has value: " + String(junCHWRet2.res2.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8235};
  modelica_boolean tmp792;
  static const MMC_DEFSTRINGLIT(tmp793,82,"Variable violating min constraint: 0.0 <= junCHWRet2.res2.eta_default, has value: ");
  modelica_string tmp794;
  modelica_metatype tmpMeta795;
  static int tmp796 = 0;
  if(!tmp796)
  {
    tmp792 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1739]] /* junCHWRet2.res2.eta_default PARAM */),0.0);
    if(!tmp792)
    {
      tmp794 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1739]] /* junCHWRet2.res2.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta795 = stringAppend(MMC_REFSTRINGLIT(tmp793),tmp794);
      {
        const char* assert_cond = "(junCHWRet2.res2.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta795));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta795));
        }
      }
      tmp796 = 1;
    }
  }
  threadData->lastEquationSolved = 8235;
}

/*
equation index: 8236
type: ALGORITHM

  assert(junCHWRet2.res2.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res2.m_flow_turbulent, has value: " + String(junCHWRet2.res2.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8236};
  modelica_boolean tmp797;
  static const MMC_DEFSTRINGLIT(tmp798,87,"Variable violating min constraint: 0.0 <= junCHWRet2.res2.m_flow_turbulent, has value: ");
  modelica_string tmp799;
  modelica_metatype tmpMeta800;
  static int tmp801 = 0;
  if(!tmp801)
  {
    tmp797 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1744]] /* junCHWRet2.res2.m_flow_turbulent PARAM */),0.0);
    if(!tmp797)
    {
      tmp799 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1744]] /* junCHWRet2.res2.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta800 = stringAppend(MMC_REFSTRINGLIT(tmp798),tmp799);
      {
        const char* assert_cond = "(junCHWRet2.res2.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta800));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta800));
        }
      }
      tmp801 = 1;
    }
  }
  threadData->lastEquationSolved = 8236;
}

/*
equation index: 8237
type: ALGORITHM

  assert(junCHWRet2.res2.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res2.m_flow_small, has value: " + String(junCHWRet2.res2.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8237};
  modelica_boolean tmp802;
  static const MMC_DEFSTRINGLIT(tmp803,83,"Variable violating min constraint: 0.0 <= junCHWRet2.res2.m_flow_small, has value: ");
  modelica_string tmp804;
  modelica_metatype tmpMeta805;
  static int tmp806 = 0;
  if(!tmp806)
  {
    tmp802 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1743]] /* junCHWRet2.res2.m_flow_small PARAM */),0.0);
    if(!tmp802)
    {
      tmp804 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1743]] /* junCHWRet2.res2.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta805 = stringAppend(MMC_REFSTRINGLIT(tmp803),tmp804);
      {
        const char* assert_cond = "(junCHWRet2.res2.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta805));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta805));
        }
      }
      tmp806 = 1;
    }
  }
  threadData->lastEquationSolved = 8237;
}

/*
equation index: 8238
type: ALGORITHM

  assert(junCHWRet2.res1.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= junCHWRet2.res1.deltaM, has value: " + String(junCHWRet2.res1.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8238};
  modelica_boolean tmp807;
  static const MMC_DEFSTRINGLIT(tmp808,78,"Variable violating min constraint: 1e-6 <= junCHWRet2.res1.deltaM, has value: ");
  modelica_string tmp809;
  modelica_metatype tmpMeta810;
  static int tmp811 = 0;
  if(!tmp811)
  {
    tmp807 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1722]] /* junCHWRet2.res1.deltaM PARAM */),1e-6);
    if(!tmp807)
    {
      tmp809 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1722]] /* junCHWRet2.res1.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta810 = stringAppend(MMC_REFSTRINGLIT(tmp808),tmp809);
      {
        const char* assert_cond = "(junCHWRet2.res1.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta810));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta810));
        }
      }
      tmp811 = 1;
    }
  }
  threadData->lastEquationSolved = 8238;
}

/*
equation index: 8239
type: ALGORITHM

  assert(junCHWRet2.res1.sta_default.p >= 0.0 and junCHWRet2.res1.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.res1.sta_default.p <= 1e8, has value: " + String(junCHWRet2.res1.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8239};
  modelica_boolean tmp812;
  modelica_boolean tmp813;
  static const MMC_DEFSTRINGLIT(tmp814,95,"Variable violating min/max constraint: 0.0 <= junCHWRet2.res1.sta_default.p <= 1e8, has value: ");
  modelica_string tmp815;
  modelica_metatype tmpMeta816;
  static int tmp817 = 0;
  if(!tmp817)
  {
    tmp812 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1732]] /* junCHWRet2.res1.sta_default.p PARAM */),0.0);
    tmp813 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1732]] /* junCHWRet2.res1.sta_default.p PARAM */),1e8);
    if(!(tmp812 && tmp813))
    {
      tmp815 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1732]] /* junCHWRet2.res1.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta816 = stringAppend(MMC_REFSTRINGLIT(tmp814),tmp815);
      {
        const char* assert_cond = "(junCHWRet2.res1.sta_default.p >= 0.0 and junCHWRet2.res1.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta816));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta816));
        }
      }
      tmp817 = 1;
    }
  }
  threadData->lastEquationSolved = 8239;
}

/*
equation index: 8240
type: ALGORITHM

  assert(junCHWRet2.res1.sta_default.T >= 1.0 and junCHWRet2.res1.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.res1.sta_default.T <= 1e4, has value: " + String(junCHWRet2.res1.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8240};
  modelica_boolean tmp818;
  modelica_boolean tmp819;
  static const MMC_DEFSTRINGLIT(tmp820,95,"Variable violating min/max constraint: 1.0 <= junCHWRet2.res1.sta_default.T <= 1e4, has value: ");
  modelica_string tmp821;
  modelica_metatype tmpMeta822;
  static int tmp823 = 0;
  if(!tmp823)
  {
    tmp818 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1731]] /* junCHWRet2.res1.sta_default.T PARAM */),1.0);
    tmp819 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1731]] /* junCHWRet2.res1.sta_default.T PARAM */),1e4);
    if(!(tmp818 && tmp819))
    {
      tmp821 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1731]] /* junCHWRet2.res1.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta822 = stringAppend(MMC_REFSTRINGLIT(tmp820),tmp821);
      {
        const char* assert_cond = "(junCHWRet2.res1.sta_default.T >= 1.0 and junCHWRet2.res1.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta822));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta822));
        }
      }
      tmp823 = 1;
    }
  }
  threadData->lastEquationSolved = 8240;
}

/*
equation index: 8241
type: ALGORITHM

  assert(junCHWRet2.res1.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res1.eta_default, has value: " + String(junCHWRet2.res1.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8241};
  modelica_boolean tmp824;
  static const MMC_DEFSTRINGLIT(tmp825,82,"Variable violating min constraint: 0.0 <= junCHWRet2.res1.eta_default, has value: ");
  modelica_string tmp826;
  modelica_metatype tmpMeta827;
  static int tmp828 = 0;
  if(!tmp828)
  {
    tmp824 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1725]] /* junCHWRet2.res1.eta_default PARAM */),0.0);
    if(!tmp824)
    {
      tmp826 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1725]] /* junCHWRet2.res1.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta827 = stringAppend(MMC_REFSTRINGLIT(tmp825),tmp826);
      {
        const char* assert_cond = "(junCHWRet2.res1.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta827));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta827));
        }
      }
      tmp828 = 1;
    }
  }
  threadData->lastEquationSolved = 8241;
}

/*
equation index: 8242
type: ALGORITHM

  assert(junCHWRet2.res1.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res1.m_flow_turbulent, has value: " + String(junCHWRet2.res1.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8242};
  modelica_boolean tmp829;
  static const MMC_DEFSTRINGLIT(tmp830,87,"Variable violating min constraint: 0.0 <= junCHWRet2.res1.m_flow_turbulent, has value: ");
  modelica_string tmp831;
  modelica_metatype tmpMeta832;
  static int tmp833 = 0;
  if(!tmp833)
  {
    tmp829 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1730]] /* junCHWRet2.res1.m_flow_turbulent PARAM */),0.0);
    if(!tmp829)
    {
      tmp831 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1730]] /* junCHWRet2.res1.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta832 = stringAppend(MMC_REFSTRINGLIT(tmp830),tmp831);
      {
        const char* assert_cond = "(junCHWRet2.res1.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta832));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta832));
        }
      }
      tmp833 = 1;
    }
  }
  threadData->lastEquationSolved = 8242;
}

/*
equation index: 8243
type: ALGORITHM

  assert(junCHWRet2.res1.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res1.m_flow_small, has value: " + String(junCHWRet2.res1.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8243};
  modelica_boolean tmp834;
  static const MMC_DEFSTRINGLIT(tmp835,83,"Variable violating min constraint: 0.0 <= junCHWRet2.res1.m_flow_small, has value: ");
  modelica_string tmp836;
  modelica_metatype tmpMeta837;
  static int tmp838 = 0;
  if(!tmp838)
  {
    tmp834 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1729]] /* junCHWRet2.res1.m_flow_small PARAM */),0.0);
    if(!tmp834)
    {
      tmp836 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1729]] /* junCHWRet2.res1.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta837 = stringAppend(MMC_REFSTRINGLIT(tmp835),tmp836);
      {
        const char* assert_cond = "(junCHWRet2.res1.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta837));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta837));
        }
      }
      tmp838 = 1;
    }
  }
  threadData->lastEquationSolved = 8243;
}

/*
equation index: 8244
type: ALGORITHM

  assert(junCHWRet2.portFlowDirection_3 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWRet2.portFlowDirection_3 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWRet2.portFlowDirection_3 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(junCHWRet2.portFlowDirection_3, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8244};
  modelica_boolean tmp839;
  modelica_boolean tmp840;
  static const MMC_DEFSTRINGLIT(tmp841,189,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWRet2.portFlowDirection_3 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp842;
  modelica_metatype tmpMeta843;
  static int tmp844 = 0;
  if(!tmp844)
  {
    tmp839 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[256]] /* junCHWRet2.portFlowDirection_3 PARAM */),1);
    tmp840 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[256]] /* junCHWRet2.portFlowDirection_3 PARAM */),3);
    if(!(tmp839 && tmp840))
    {
      tmp842 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[256]] /* junCHWRet2.portFlowDirection_3 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta843 = stringAppend(MMC_REFSTRINGLIT(tmp841),tmp842);
      {
        const char* assert_cond = "(junCHWRet2.portFlowDirection_3 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWRet2.portFlowDirection_3 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",47,3,49,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta843));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",47,3,49,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta843));
        }
      }
      tmp844 = 1;
    }
  }
  threadData->lastEquationSolved = 8244;
}

/*
equation index: 8245
type: ALGORITHM

  assert(junCHWRet2.portFlowDirection_2 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWRet2.portFlowDirection_2 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWRet2.portFlowDirection_2 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(junCHWRet2.portFlowDirection_2, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8245};
  modelica_boolean tmp845;
  modelica_boolean tmp846;
  static const MMC_DEFSTRINGLIT(tmp847,189,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWRet2.portFlowDirection_2 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp848;
  modelica_metatype tmpMeta849;
  static int tmp850 = 0;
  if(!tmp850)
  {
    tmp845 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[255]] /* junCHWRet2.portFlowDirection_2 PARAM */),1);
    tmp846 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[255]] /* junCHWRet2.portFlowDirection_2 PARAM */),3);
    if(!(tmp845 && tmp846))
    {
      tmp848 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[255]] /* junCHWRet2.portFlowDirection_2 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta849 = stringAppend(MMC_REFSTRINGLIT(tmp847),tmp848);
      {
        const char* assert_cond = "(junCHWRet2.portFlowDirection_2 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWRet2.portFlowDirection_2 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",44,3,46,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta849));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",44,3,46,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta849));
        }
      }
      tmp850 = 1;
    }
  }
  threadData->lastEquationSolved = 8245;
}

/*
equation index: 8246
type: ALGORITHM

  assert(junCHWRet2.portFlowDirection_1 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWRet2.portFlowDirection_1 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWRet2.portFlowDirection_1 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(junCHWRet2.portFlowDirection_1, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8246};
  modelica_boolean tmp851;
  modelica_boolean tmp852;
  static const MMC_DEFSTRINGLIT(tmp853,189,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWRet2.portFlowDirection_1 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp854;
  modelica_metatype tmpMeta855;
  static int tmp856 = 0;
  if(!tmp856)
  {
    tmp851 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[254]] /* junCHWRet2.portFlowDirection_1 PARAM */),1);
    tmp852 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[254]] /* junCHWRet2.portFlowDirection_1 PARAM */),3);
    if(!(tmp851 && tmp852))
    {
      tmp854 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[254]] /* junCHWRet2.portFlowDirection_1 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta855 = stringAppend(MMC_REFSTRINGLIT(tmp853),tmp854);
      {
        const char* assert_cond = "(junCHWRet2.portFlowDirection_1 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWRet2.portFlowDirection_1 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",41,3,43,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta855));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",41,3,43,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta855));
        }
      }
      tmp856 = 1;
    }
  }
  threadData->lastEquationSolved = 8246;
}

/*
equation index: 8247
type: ALGORITHM

  assert(junCHWRet2.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= junCHWRet2.mSenFac, has value: " + String(junCHWRet2.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8247};
  modelica_boolean tmp857;
  static const MMC_DEFSTRINGLIT(tmp858,73,"Variable violating min constraint: 1.0 <= junCHWRet2.mSenFac, has value: ");
  modelica_string tmp859;
  modelica_metatype tmpMeta860;
  static int tmp861 = 0;
  if(!tmp861)
  {
    tmp857 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1713]] /* junCHWRet2.mSenFac PARAM */),1.0);
    if(!tmp857)
    {
      tmp859 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1713]] /* junCHWRet2.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta860 = stringAppend(MMC_REFSTRINGLIT(tmp858),tmp859);
      {
        const char* assert_cond = "(junCHWRet2.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta860));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta860));
        }
      }
      tmp861 = 1;
    }
  }
  threadData->lastEquationSolved = 8247;
}

/*
equation index: 8248
type: ALGORITHM

  assert(junCHWRet2.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8248};
  modelica_boolean tmp862;
  modelica_boolean tmp863;
  static const MMC_DEFSTRINGLIT(tmp864,173,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp865;
  modelica_metatype tmpMeta866;
  static int tmp867 = 0;
  if(!tmp867)
  {
    tmp862 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[258]] /* junCHWRet2.traceDynamics PARAM */),1);
    tmp863 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[258]] /* junCHWRet2.traceDynamics PARAM */),4);
    if(!(tmp862 && tmp863))
    {
      tmp865 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[258]] /* junCHWRet2.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta866 = stringAppend(MMC_REFSTRINGLIT(tmp864),tmp865);
      {
        const char* assert_cond = "(junCHWRet2.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta866));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta866));
        }
      }
      tmp867 = 1;
    }
  }
  threadData->lastEquationSolved = 8248;
}

/*
equation index: 8249
type: ALGORITHM

  assert(junCHWRet2.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8249};
  modelica_boolean tmp868;
  modelica_boolean tmp869;
  static const MMC_DEFSTRINGLIT(tmp870,177,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp871;
  modelica_metatype tmpMeta872;
  static int tmp873 = 0;
  if(!tmp873)
  {
    tmp868 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[257]] /* junCHWRet2.substanceDynamics PARAM */),1);
    tmp869 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[257]] /* junCHWRet2.substanceDynamics PARAM */),4);
    if(!(tmp868 && tmp869))
    {
      tmp871 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[257]] /* junCHWRet2.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta872 = stringAppend(MMC_REFSTRINGLIT(tmp870),tmp871);
      {
        const char* assert_cond = "(junCHWRet2.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta872));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta872));
        }
      }
      tmp873 = 1;
    }
  }
  threadData->lastEquationSolved = 8249;
}

/*
equation index: 8250
type: ALGORITHM

  assert(junCHWRet2.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8250};
  modelica_boolean tmp874;
  modelica_boolean tmp875;
  static const MMC_DEFSTRINGLIT(tmp876,172,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp877;
  modelica_metatype tmpMeta878;
  static int tmp879 = 0;
  if(!tmp879)
  {
    tmp874 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[253]] /* junCHWRet2.massDynamics PARAM */),1);
    tmp875 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[253]] /* junCHWRet2.massDynamics PARAM */),4);
    if(!(tmp874 && tmp875))
    {
      tmp877 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[253]] /* junCHWRet2.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta878 = stringAppend(MMC_REFSTRINGLIT(tmp876),tmp877);
      {
        const char* assert_cond = "(junCHWRet2.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta878));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta878));
        }
      }
      tmp879 = 1;
    }
  }
  threadData->lastEquationSolved = 8250;
}

/*
equation index: 8251
type: ALGORITHM

  assert(junCHWRet2.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8251};
  modelica_boolean tmp880;
  modelica_boolean tmp881;
  static const MMC_DEFSTRINGLIT(tmp882,174,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp883;
  modelica_metatype tmpMeta884;
  static int tmp885 = 0;
  if(!tmp885)
  {
    tmp880 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[252]] /* junCHWRet2.energyDynamics PARAM */),1);
    tmp881 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[252]] /* junCHWRet2.energyDynamics PARAM */),4);
    if(!(tmp880 && tmp881))
    {
      tmp883 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[252]] /* junCHWRet2.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta884 = stringAppend(MMC_REFSTRINGLIT(tmp882),tmp883);
      {
        const char* assert_cond = "(junCHWRet2.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta884));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta884));
        }
      }
      tmp885 = 1;
    }
  }
  threadData->lastEquationSolved = 8251;
}

/*
equation index: 8252
type: ALGORITHM

  assert(junCHWRet.deltaM >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet.deltaM, has value: " + String(junCHWRet.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8252};
  modelica_boolean tmp886;
  static const MMC_DEFSTRINGLIT(tmp887,71,"Variable violating min constraint: 0.0 <= junCHWRet.deltaM, has value: ");
  modelica_string tmp888;
  modelica_metatype tmpMeta889;
  static int tmp890 = 0;
  if(!tmp890)
  {
    tmp886 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1625]] /* junCHWRet.deltaM PARAM */),0.0);
    if(!tmp886)
    {
      tmp888 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1625]] /* junCHWRet.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta889 = stringAppend(MMC_REFSTRINGLIT(tmp887),tmp888);
      {
        const char* assert_cond = "(junCHWRet.deltaM >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/Junction.mo",37,3,40,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta889));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/Junction.mo",37,3,40,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta889));
        }
      }
      tmp890 = 1;
    }
  }
  threadData->lastEquationSolved = 8252;
}

/*
equation index: 8253
type: ALGORITHM

  assert(junCHWRet.vol.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet.vol.m_flow_nominal, has value: " + String(junCHWRet.vol.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8253};
  modelica_boolean tmp891;
  static const MMC_DEFSTRINGLIT(tmp892,83,"Variable violating min constraint: 0.0 <= junCHWRet.vol.m_flow_nominal, has value: ");
  modelica_string tmp893;
  modelica_metatype tmpMeta894;
  static int tmp895 = 0;
  if(!tmp895)
  {
    tmp891 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1696]] /* junCHWRet.vol.m_flow_nominal PARAM */),0.0);
    if(!tmp891)
    {
      tmp893 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1696]] /* junCHWRet.vol.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta894 = stringAppend(MMC_REFSTRINGLIT(tmp892),tmp893);
      {
        const char* assert_cond = "(junCHWRet.vol.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,22,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta894));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,22,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta894));
        }
      }
      tmp895 = 1;
    }
  }
  threadData->lastEquationSolved = 8253;
}

/*
equation index: 8254
type: ALGORITHM

  assert(junCHWRet.T_start >= 1.0 and junCHWRet.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet.T_start <= 1e4, has value: " + String(junCHWRet.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8254};
  modelica_boolean tmp896;
  modelica_boolean tmp897;
  static const MMC_DEFSTRINGLIT(tmp898,83,"Variable violating min/max constraint: 1.0 <= junCHWRet.T_start <= 1e4, has value: ");
  modelica_string tmp899;
  modelica_metatype tmpMeta900;
  static int tmp901 = 0;
  if(!tmp901)
  {
    tmp896 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1623]] /* junCHWRet.T_start PARAM */),1.0);
    tmp897 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1623]] /* junCHWRet.T_start PARAM */),1e4);
    if(!(tmp896 && tmp897))
    {
      tmp899 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1623]] /* junCHWRet.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta900 = stringAppend(MMC_REFSTRINGLIT(tmp898),tmp899);
      {
        const char* assert_cond = "(junCHWRet.T_start >= 1.0 and junCHWRet.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta900));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta900));
        }
      }
      tmp901 = 1;
    }
  }
  threadData->lastEquationSolved = 8254;
}

/*
equation index: 8255
type: ALGORITHM

  assert(junCHWRet.vol.T_start >= 1.0 and junCHWRet.vol.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet.vol.T_start <= 1e4, has value: " + String(junCHWRet.vol.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8255};
  modelica_boolean tmp902;
  modelica_boolean tmp903;
  static const MMC_DEFSTRINGLIT(tmp904,87,"Variable violating min/max constraint: 1.0 <= junCHWRet.vol.T_start <= 1e4, has value: ");
  modelica_string tmp905;
  modelica_metatype tmpMeta906;
  static int tmp907 = 0;
  if(!tmp907)
  {
    tmp902 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1679]] /* junCHWRet.vol.T_start PARAM */),1.0);
    tmp903 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1679]] /* junCHWRet.vol.T_start PARAM */),1e4);
    if(!(tmp902 && tmp903))
    {
      tmp905 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1679]] /* junCHWRet.vol.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta906 = stringAppend(MMC_REFSTRINGLIT(tmp904),tmp905);
      {
        const char* assert_cond = "(junCHWRet.vol.T_start >= 1.0 and junCHWRet.vol.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta906));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta906));
        }
      }
      tmp907 = 1;
    }
  }
  threadData->lastEquationSolved = 8255;
}

/*
equation index: 8256
type: ALGORITHM

  assert(junCHWRet.vol.state_start.T >= 1.0 and junCHWRet.vol.state_start.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet.vol.state_start.T <= 1e4, has value: " + String(junCHWRet.vol.state_start.T, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8256};
  modelica_boolean tmp908;
  modelica_boolean tmp909;
  static const MMC_DEFSTRINGLIT(tmp910,93,"Variable violating min/max constraint: 1.0 <= junCHWRet.vol.state_start.T <= 1e4, has value: ");
  modelica_string tmp911;
  modelica_metatype tmpMeta912;
  static int tmp913 = 0;
  if(!tmp913)
  {
    tmp908 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1703]] /* junCHWRet.vol.state_start.T PARAM */),1.0);
    tmp909 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1703]] /* junCHWRet.vol.state_start.T PARAM */),1e4);
    if(!(tmp908 && tmp909))
    {
      tmp911 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1703]] /* junCHWRet.vol.state_start.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta912 = stringAppend(MMC_REFSTRINGLIT(tmp910),tmp911);
      {
        const char* assert_cond = "(junCHWRet.vol.state_start.T >= 1.0 and junCHWRet.vol.state_start.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta912));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta912));
        }
      }
      tmp913 = 1;
    }
  }
  threadData->lastEquationSolved = 8256;
}

/*
equation index: 8257
type: ALGORITHM

  assert(junCHWRet.p_start >= 0.0 and junCHWRet.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet.p_start <= 1e8, has value: " + String(junCHWRet.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8257};
  modelica_boolean tmp914;
  modelica_boolean tmp915;
  static const MMC_DEFSTRINGLIT(tmp916,83,"Variable violating min/max constraint: 0.0 <= junCHWRet.p_start <= 1e8, has value: ");
  modelica_string tmp917;
  modelica_metatype tmpMeta918;
  static int tmp919 = 0;
  if(!tmp919)
  {
    tmp914 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1635]] /* junCHWRet.p_start PARAM */),0.0);
    tmp915 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1635]] /* junCHWRet.p_start PARAM */),1e8);
    if(!(tmp914 && tmp915))
    {
      tmp917 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1635]] /* junCHWRet.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta918 = stringAppend(MMC_REFSTRINGLIT(tmp916),tmp917);
      {
        const char* assert_cond = "(junCHWRet.p_start >= 0.0 and junCHWRet.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta918));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta918));
        }
      }
      tmp919 = 1;
    }
  }
  threadData->lastEquationSolved = 8257;
}

/*
equation index: 8258
type: ALGORITHM

  assert(junCHWRet.vol.p_start >= 0.0 and junCHWRet.vol.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet.vol.p_start <= 1e8, has value: " + String(junCHWRet.vol.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8258};
  modelica_boolean tmp920;
  modelica_boolean tmp921;
  static const MMC_DEFSTRINGLIT(tmp922,87,"Variable violating min/max constraint: 0.0 <= junCHWRet.vol.p_start <= 1e8, has value: ");
  modelica_string tmp923;
  modelica_metatype tmpMeta924;
  static int tmp925 = 0;
  if(!tmp925)
  {
    tmp920 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1698]] /* junCHWRet.vol.p_start PARAM */),0.0);
    tmp921 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1698]] /* junCHWRet.vol.p_start PARAM */),1e8);
    if(!(tmp920 && tmp921))
    {
      tmp923 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1698]] /* junCHWRet.vol.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta924 = stringAppend(MMC_REFSTRINGLIT(tmp922),tmp923);
      {
        const char* assert_cond = "(junCHWRet.vol.p_start >= 0.0 and junCHWRet.vol.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta924));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta924));
        }
      }
      tmp925 = 1;
    }
  }
  threadData->lastEquationSolved = 8258;
}

/*
equation index: 8259
type: ALGORITHM

  assert(junCHWRet.vol.state_start.p >= 0.0 and junCHWRet.vol.state_start.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet.vol.state_start.p <= 1e8, has value: " + String(junCHWRet.vol.state_start.p, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8259};
  modelica_boolean tmp926;
  modelica_boolean tmp927;
  static const MMC_DEFSTRINGLIT(tmp928,93,"Variable violating min/max constraint: 0.0 <= junCHWRet.vol.state_start.p <= 1e8, has value: ");
  modelica_string tmp929;
  modelica_metatype tmpMeta930;
  static int tmp931 = 0;
  if(!tmp931)
  {
    tmp926 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1704]] /* junCHWRet.vol.state_start.p PARAM */),0.0);
    tmp927 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1704]] /* junCHWRet.vol.state_start.p PARAM */),1e8);
    if(!(tmp926 && tmp927))
    {
      tmp929 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1704]] /* junCHWRet.vol.state_start.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta930 = stringAppend(MMC_REFSTRINGLIT(tmp928),tmp929);
      {
        const char* assert_cond = "(junCHWRet.vol.state_start.p >= 0.0 and junCHWRet.vol.state_start.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta930));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta930));
        }
      }
      tmp931 = 1;
    }
  }
  threadData->lastEquationSolved = 8259;
}

/*
equation index: 8260
type: ALGORITHM

  assert(junCHWRet.vol.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet.vol.rho_default, has value: " + String(junCHWRet.vol.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8260};
  modelica_boolean tmp932;
  static const MMC_DEFSTRINGLIT(tmp933,80,"Variable violating min constraint: 0.0 <= junCHWRet.vol.rho_default, has value: ");
  modelica_string tmp934;
  modelica_metatype tmpMeta935;
  static int tmp936 = 0;
  if(!tmp936)
  {
    tmp932 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1699]] /* junCHWRet.vol.rho_default PARAM */),0.0);
    if(!tmp932)
    {
      tmp934 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1699]] /* junCHWRet.vol.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta935 = stringAppend(MMC_REFSTRINGLIT(tmp933),tmp934);
      {
        const char* assert_cond = "(junCHWRet.vol.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",90,3,91,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta935));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",90,3,91,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta935));
        }
      }
      tmp936 = 1;
    }
  }
  threadData->lastEquationSolved = 8260;
}

/*
equation index: 8261
type: ALGORITHM

  assert(junCHWRet.vol.state_default.T >= 1.0 and junCHWRet.vol.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet.vol.state_default.T <= 1e4, has value: " + String(junCHWRet.vol.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8261};
  modelica_boolean tmp937;
  modelica_boolean tmp938;
  static const MMC_DEFSTRINGLIT(tmp939,95,"Variable violating min/max constraint: 1.0 <= junCHWRet.vol.state_default.T <= 1e4, has value: ");
  modelica_string tmp940;
  modelica_metatype tmpMeta941;
  static int tmp942 = 0;
  if(!tmp942)
  {
    tmp937 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1701]] /* junCHWRet.vol.state_default.T PARAM */),1.0);
    tmp938 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1701]] /* junCHWRet.vol.state_default.T PARAM */),1e4);
    if(!(tmp937 && tmp938))
    {
      tmp940 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1701]] /* junCHWRet.vol.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta941 = stringAppend(MMC_REFSTRINGLIT(tmp939),tmp940);
      {
        const char* assert_cond = "(junCHWRet.vol.state_default.T >= 1.0 and junCHWRet.vol.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta941));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta941));
        }
      }
      tmp942 = 1;
    }
  }
  threadData->lastEquationSolved = 8261;
}

/*
equation index: 8262
type: ALGORITHM

  assert(junCHWRet.vol.state_default.p >= 0.0 and junCHWRet.vol.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet.vol.state_default.p <= 1e8, has value: " + String(junCHWRet.vol.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8262};
  modelica_boolean tmp943;
  modelica_boolean tmp944;
  static const MMC_DEFSTRINGLIT(tmp945,95,"Variable violating min/max constraint: 0.0 <= junCHWRet.vol.state_default.p <= 1e8, has value: ");
  modelica_string tmp946;
  modelica_metatype tmpMeta947;
  static int tmp948 = 0;
  if(!tmp948)
  {
    tmp943 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1702]] /* junCHWRet.vol.state_default.p PARAM */),0.0);
    tmp944 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1702]] /* junCHWRet.vol.state_default.p PARAM */),1e8);
    if(!(tmp943 && tmp944))
    {
      tmp946 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1702]] /* junCHWRet.vol.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta947 = stringAppend(MMC_REFSTRINGLIT(tmp945),tmp946);
      {
        const char* assert_cond = "(junCHWRet.vol.state_default.p >= 0.0 and junCHWRet.vol.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta947));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta947));
        }
      }
      tmp948 = 1;
    }
  }
  threadData->lastEquationSolved = 8262;
}

/*
equation index: 8263
type: ALGORITHM

  assert(junCHWRet.vol.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet.vol.rho_start, has value: " + String(junCHWRet.vol.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8263};
  modelica_boolean tmp949;
  static const MMC_DEFSTRINGLIT(tmp950,78,"Variable violating min constraint: 0.0 <= junCHWRet.vol.rho_start, has value: ");
  modelica_string tmp951;
  modelica_metatype tmpMeta952;
  static int tmp953 = 0;
  if(!tmp953)
  {
    tmp949 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1700]] /* junCHWRet.vol.rho_start PARAM */),0.0);
    if(!tmp949)
    {
      tmp951 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1700]] /* junCHWRet.vol.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta952 = stringAppend(MMC_REFSTRINGLIT(tmp950),tmp951);
      {
        const char* assert_cond = "(junCHWRet.vol.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",83,3,84,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta952));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",83,3,84,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta952));
        }
      }
      tmp953 = 1;
    }
  }
  threadData->lastEquationSolved = 8263;
}

/*
equation index: 8264
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.p_start >= 0.0 and junCHWRet.vol.dynBal.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet.vol.dynBal.p_start <= 1e8, has value: " + String(junCHWRet.vol.dynBal.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8264};
  modelica_boolean tmp954;
  modelica_boolean tmp955;
  static const MMC_DEFSTRINGLIT(tmp956,94,"Variable violating min/max constraint: 0.0 <= junCHWRet.vol.dynBal.p_start <= 1e8, has value: ");
  modelica_string tmp957;
  modelica_metatype tmpMeta958;
  static int tmp959 = 0;
  if(!tmp959)
  {
    tmp954 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1690]] /* junCHWRet.vol.dynBal.p_start PARAM */),0.0);
    tmp955 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1690]] /* junCHWRet.vol.dynBal.p_start PARAM */),1e8);
    if(!(tmp954 && tmp955))
    {
      tmp957 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1690]] /* junCHWRet.vol.dynBal.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta958 = stringAppend(MMC_REFSTRINGLIT(tmp956),tmp957);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.p_start >= 0.0 and junCHWRet.vol.dynBal.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta958));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta958));
        }
      }
      tmp959 = 1;
    }
  }
  threadData->lastEquationSolved = 8264;
}

/*
equation index: 8265
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.T_start >= 1.0 and junCHWRet.vol.dynBal.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet.vol.dynBal.T_start <= 1e4, has value: " + String(junCHWRet.vol.dynBal.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8265};
  modelica_boolean tmp960;
  modelica_boolean tmp961;
  static const MMC_DEFSTRINGLIT(tmp962,94,"Variable violating min/max constraint: 1.0 <= junCHWRet.vol.dynBal.T_start <= 1e4, has value: ");
  modelica_string tmp963;
  modelica_metatype tmpMeta964;
  static int tmp965 = 0;
  if(!tmp965)
  {
    tmp960 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1684]] /* junCHWRet.vol.dynBal.T_start PARAM */),1.0);
    tmp961 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1684]] /* junCHWRet.vol.dynBal.T_start PARAM */),1e4);
    if(!(tmp960 && tmp961))
    {
      tmp963 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1684]] /* junCHWRet.vol.dynBal.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta964 = stringAppend(MMC_REFSTRINGLIT(tmp962),tmp963);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.T_start >= 1.0 and junCHWRet.vol.dynBal.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta964));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta964));
        }
      }
      tmp965 = 1;
    }
  }
  threadData->lastEquationSolved = 8265;
}

/*
equation index: 8266
type: ALGORITHM

  assert(junCHWRet.X_start[1] >= 0.0 and junCHWRet.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWRet.X_start[1] <= 1.0, has value: " + String(junCHWRet.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8266};
  modelica_boolean tmp966;
  modelica_boolean tmp967;
  static const MMC_DEFSTRINGLIT(tmp968,86,"Variable violating min/max constraint: 0.0 <= junCHWRet.X_start[1] <= 1.0, has value: ");
  modelica_string tmp969;
  modelica_metatype tmpMeta970;
  static int tmp971 = 0;
  if(!tmp971)
  {
    tmp966 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1624]] /* junCHWRet.X_start[1] PARAM */),0.0);
    tmp967 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1624]] /* junCHWRet.X_start[1] PARAM */),1.0);
    if(!(tmp966 && tmp967))
    {
      tmp969 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1624]] /* junCHWRet.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta970 = stringAppend(MMC_REFSTRINGLIT(tmp968),tmp969);
      {
        const char* assert_cond = "(junCHWRet.X_start[1] >= 0.0 and junCHWRet.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta970));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta970));
        }
      }
      tmp971 = 1;
    }
  }
  threadData->lastEquationSolved = 8266;
}

/*
equation index: 8267
type: ALGORITHM

  assert(junCHWRet.vol.X_start[1] >= 0.0 and junCHWRet.vol.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWRet.vol.X_start[1] <= 1.0, has value: " + String(junCHWRet.vol.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8267};
  modelica_boolean tmp972;
  modelica_boolean tmp973;
  static const MMC_DEFSTRINGLIT(tmp974,90,"Variable violating min/max constraint: 0.0 <= junCHWRet.vol.X_start[1] <= 1.0, has value: ");
  modelica_string tmp975;
  modelica_metatype tmpMeta976;
  static int tmp977 = 0;
  if(!tmp977)
  {
    tmp972 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1682]] /* junCHWRet.vol.X_start[1] PARAM */),0.0);
    tmp973 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1682]] /* junCHWRet.vol.X_start[1] PARAM */),1.0);
    if(!(tmp972 && tmp973))
    {
      tmp975 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1682]] /* junCHWRet.vol.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta976 = stringAppend(MMC_REFSTRINGLIT(tmp974),tmp975);
      {
        const char* assert_cond = "(junCHWRet.vol.X_start[1] >= 0.0 and junCHWRet.vol.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta976));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta976));
        }
      }
      tmp977 = 1;
    }
  }
  threadData->lastEquationSolved = 8267;
}

/*
equation index: 8268
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.X_start[1] >= 0.0 and junCHWRet.vol.dynBal.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWRet.vol.dynBal.X_start[1] <= 1.0, has value: " + String(junCHWRet.vol.dynBal.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8268};
  modelica_boolean tmp978;
  modelica_boolean tmp979;
  static const MMC_DEFSTRINGLIT(tmp980,97,"Variable violating min/max constraint: 0.0 <= junCHWRet.vol.dynBal.X_start[1] <= 1.0, has value: ");
  modelica_string tmp981;
  modelica_metatype tmpMeta982;
  static int tmp983 = 0;
  if(!tmp983)
  {
    tmp978 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1685]] /* junCHWRet.vol.dynBal.X_start[1] PARAM */),0.0);
    tmp979 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1685]] /* junCHWRet.vol.dynBal.X_start[1] PARAM */),1.0);
    if(!(tmp978 && tmp979))
    {
      tmp981 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1685]] /* junCHWRet.vol.dynBal.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta982 = stringAppend(MMC_REFSTRINGLIT(tmp980),tmp981);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.X_start[1] >= 0.0 and junCHWRet.vol.dynBal.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta982));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta982));
        }
      }
      tmp983 = 1;
    }
  }
  threadData->lastEquationSolved = 8268;
}

/*
equation index: 8269
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet.vol.dynBal.rho_default, has value: " + String(junCHWRet.vol.dynBal.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8269};
  modelica_boolean tmp984;
  static const MMC_DEFSTRINGLIT(tmp985,87,"Variable violating min constraint: 0.0 <= junCHWRet.vol.dynBal.rho_default, has value: ");
  modelica_string tmp986;
  modelica_metatype tmpMeta987;
  static int tmp988 = 0;
  if(!tmp988)
  {
    tmp984 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1691]] /* junCHWRet.vol.dynBal.rho_default PARAM */),0.0);
    if(!tmp984)
    {
      tmp986 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1691]] /* junCHWRet.vol.dynBal.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta987 = stringAppend(MMC_REFSTRINGLIT(tmp985),tmp986);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",145,3,146,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta987));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",145,3,146,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta987));
        }
      }
      tmp988 = 1;
    }
  }
  threadData->lastEquationSolved = 8269;
}

/*
equation index: 8270
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.state_default.T >= 1.0 and junCHWRet.vol.dynBal.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet.vol.dynBal.state_default.T <= 1e4, has value: " + String(junCHWRet.vol.dynBal.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8270};
  modelica_boolean tmp989;
  modelica_boolean tmp990;
  static const MMC_DEFSTRINGLIT(tmp991,102,"Variable violating min/max constraint: 1.0 <= junCHWRet.vol.dynBal.state_default.T <= 1e4, has value: ");
  modelica_string tmp992;
  modelica_metatype tmpMeta993;
  static int tmp994 = 0;
  if(!tmp994)
  {
    tmp989 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1693]] /* junCHWRet.vol.dynBal.state_default.T PARAM */),1.0);
    tmp990 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1693]] /* junCHWRet.vol.dynBal.state_default.T PARAM */),1e4);
    if(!(tmp989 && tmp990))
    {
      tmp992 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1693]] /* junCHWRet.vol.dynBal.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta993 = stringAppend(MMC_REFSTRINGLIT(tmp991),tmp992);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.state_default.T >= 1.0 and junCHWRet.vol.dynBal.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta993));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta993));
        }
      }
      tmp994 = 1;
    }
  }
  threadData->lastEquationSolved = 8270;
}

/*
equation index: 8271
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.state_default.p >= 0.0 and junCHWRet.vol.dynBal.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet.vol.dynBal.state_default.p <= 1e8, has value: " + String(junCHWRet.vol.dynBal.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8271};
  modelica_boolean tmp995;
  modelica_boolean tmp996;
  static const MMC_DEFSTRINGLIT(tmp997,102,"Variable violating min/max constraint: 0.0 <= junCHWRet.vol.dynBal.state_default.p <= 1e8, has value: ");
  modelica_string tmp998;
  modelica_metatype tmpMeta999;
  static int tmp1000 = 0;
  if(!tmp1000)
  {
    tmp995 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* junCHWRet.vol.dynBal.state_default.p PARAM */),0.0);
    tmp996 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* junCHWRet.vol.dynBal.state_default.p PARAM */),1e8);
    if(!(tmp995 && tmp996))
    {
      tmp998 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* junCHWRet.vol.dynBal.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta999 = stringAppend(MMC_REFSTRINGLIT(tmp997),tmp998);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.state_default.p >= 0.0 and junCHWRet.vol.dynBal.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta999));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta999));
        }
      }
      tmp1000 = 1;
    }
  }
  threadData->lastEquationSolved = 8271;
}

/*
equation index: 8272
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet.vol.dynBal.rho_start, has value: " + String(junCHWRet.vol.dynBal.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8272};
  modelica_boolean tmp1001;
  static const MMC_DEFSTRINGLIT(tmp1002,85,"Variable violating min constraint: 0.0 <= junCHWRet.vol.dynBal.rho_start, has value: ");
  modelica_string tmp1003;
  modelica_metatype tmpMeta1004;
  static int tmp1005 = 0;
  if(!tmp1005)
  {
    tmp1001 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1692]] /* junCHWRet.vol.dynBal.rho_start PARAM */),0.0);
    if(!tmp1001)
    {
      tmp1003 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1692]] /* junCHWRet.vol.dynBal.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1004 = stringAppend(MMC_REFSTRINGLIT(tmp1002),tmp1003);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",131,3,135,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1004));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",131,3,135,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1004));
        }
      }
      tmp1005 = 1;
    }
  }
  threadData->lastEquationSolved = 8272;
}

/*
equation index: 8273
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= junCHWRet.vol.dynBal.mSenFac, has value: " + String(junCHWRet.vol.dynBal.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8273};
  modelica_boolean tmp1006;
  static const MMC_DEFSTRINGLIT(tmp1007,83,"Variable violating min constraint: 1.0 <= junCHWRet.vol.dynBal.mSenFac, has value: ");
  modelica_string tmp1008;
  modelica_metatype tmpMeta1009;
  static int tmp1010 = 0;
  if(!tmp1010)
  {
    tmp1006 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1689]] /* junCHWRet.vol.dynBal.mSenFac PARAM */),1.0);
    if(!tmp1006)
    {
      tmp1008 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1689]] /* junCHWRet.vol.dynBal.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1009 = stringAppend(MMC_REFSTRINGLIT(tmp1007),tmp1008);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1009));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1009));
        }
      }
      tmp1010 = 1;
    }
  }
  threadData->lastEquationSolved = 8273;
}

/*
equation index: 8274
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet.vol.dynBal.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8274};
  modelica_boolean tmp1011;
  modelica_boolean tmp1012;
  static const MMC_DEFSTRINGLIT(tmp1013,183,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1014;
  modelica_metatype tmpMeta1015;
  static int tmp1016 = 0;
  if(!tmp1016)
  {
    tmp1011 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[246]] /* junCHWRet.vol.dynBal.traceDynamics PARAM */),1);
    tmp1012 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[246]] /* junCHWRet.vol.dynBal.traceDynamics PARAM */),4);
    if(!(tmp1011 && tmp1012))
    {
      tmp1014 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[246]] /* junCHWRet.vol.dynBal.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1015 = stringAppend(MMC_REFSTRINGLIT(tmp1013),tmp1014);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1015));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1015));
        }
      }
      tmp1016 = 1;
    }
  }
  threadData->lastEquationSolved = 8274;
}

/*
equation index: 8275
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet.vol.dynBal.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8275};
  modelica_boolean tmp1017;
  modelica_boolean tmp1018;
  static const MMC_DEFSTRINGLIT(tmp1019,187,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1020;
  modelica_metatype tmpMeta1021;
  static int tmp1022 = 0;
  if(!tmp1022)
  {
    tmp1017 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[245]] /* junCHWRet.vol.dynBal.substanceDynamics PARAM */),1);
    tmp1018 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[245]] /* junCHWRet.vol.dynBal.substanceDynamics PARAM */),4);
    if(!(tmp1017 && tmp1018))
    {
      tmp1020 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[245]] /* junCHWRet.vol.dynBal.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1021 = stringAppend(MMC_REFSTRINGLIT(tmp1019),tmp1020);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1021));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1021));
        }
      }
      tmp1022 = 1;
    }
  }
  threadData->lastEquationSolved = 8275;
}

/*
equation index: 8276
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet.vol.dynBal.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8276};
  modelica_boolean tmp1023;
  modelica_boolean tmp1024;
  static const MMC_DEFSTRINGLIT(tmp1025,182,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1026;
  modelica_metatype tmpMeta1027;
  static int tmp1028 = 0;
  if(!tmp1028)
  {
    tmp1023 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[243]] /* junCHWRet.vol.dynBal.massDynamics PARAM */),1);
    tmp1024 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[243]] /* junCHWRet.vol.dynBal.massDynamics PARAM */),4);
    if(!(tmp1023 && tmp1024))
    {
      tmp1026 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[243]] /* junCHWRet.vol.dynBal.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1027 = stringAppend(MMC_REFSTRINGLIT(tmp1025),tmp1026);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1027));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1027));
        }
      }
      tmp1028 = 1;
    }
  }
  threadData->lastEquationSolved = 8276;
}

/*
equation index: 8277
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet.vol.dynBal.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8277};
  modelica_boolean tmp1029;
  modelica_boolean tmp1030;
  static const MMC_DEFSTRINGLIT(tmp1031,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1032;
  modelica_metatype tmpMeta1033;
  static int tmp1034 = 0;
  if(!tmp1034)
  {
    tmp1029 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[242]] /* junCHWRet.vol.dynBal.energyDynamics PARAM */),1);
    tmp1030 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[242]] /* junCHWRet.vol.dynBal.energyDynamics PARAM */),4);
    if(!(tmp1029 && tmp1030))
    {
      tmp1032 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[242]] /* junCHWRet.vol.dynBal.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1033 = stringAppend(MMC_REFSTRINGLIT(tmp1031),tmp1032);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1033));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1033));
        }
      }
      tmp1034 = 1;
    }
  }
  threadData->lastEquationSolved = 8277;
}

/*
equation index: 8278
type: ALGORITHM

  assert(junCHWRet.vol.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet.vol.m_flow_small, has value: " + String(junCHWRet.vol.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8278};
  modelica_boolean tmp1035;
  static const MMC_DEFSTRINGLIT(tmp1036,81,"Variable violating min constraint: 0.0 <= junCHWRet.vol.m_flow_small, has value: ");
  modelica_string tmp1037;
  modelica_metatype tmpMeta1038;
  static int tmp1039 = 0;
  if(!tmp1039)
  {
    tmp1035 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1697]] /* junCHWRet.vol.m_flow_small PARAM */),0.0);
    if(!tmp1035)
    {
      tmp1037 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1697]] /* junCHWRet.vol.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1038 = stringAppend(MMC_REFSTRINGLIT(tmp1036),tmp1037);
      {
        const char* assert_cond = "(junCHWRet.vol.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",26,3,28,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1038));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",26,3,28,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1038));
        }
      }
      tmp1039 = 1;
    }
  }
  threadData->lastEquationSolved = 8278;
}

/*
equation index: 8279
type: ALGORITHM

  assert(junCHWRet.vol.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= junCHWRet.vol.mSenFac, has value: " + String(junCHWRet.vol.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8279};
  modelica_boolean tmp1040;
  static const MMC_DEFSTRINGLIT(tmp1041,76,"Variable violating min constraint: 1.0 <= junCHWRet.vol.mSenFac, has value: ");
  modelica_string tmp1042;
  modelica_metatype tmpMeta1043;
  static int tmp1044 = 0;
  if(!tmp1044)
  {
    tmp1040 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1695]] /* junCHWRet.vol.mSenFac PARAM */),1.0);
    if(!tmp1040)
    {
      tmp1042 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1695]] /* junCHWRet.vol.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1043 = stringAppend(MMC_REFSTRINGLIT(tmp1041),tmp1042);
      {
        const char* assert_cond = "(junCHWRet.vol.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1043));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1043));
        }
      }
      tmp1044 = 1;
    }
  }
  threadData->lastEquationSolved = 8279;
}

/*
equation index: 8280
type: ALGORITHM

  assert(junCHWRet.vol.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet.vol.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8280};
  modelica_boolean tmp1045;
  modelica_boolean tmp1046;
  static const MMC_DEFSTRINGLIT(tmp1047,176,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1048;
  modelica_metatype tmpMeta1049;
  static int tmp1050 = 0;
  if(!tmp1050)
  {
    tmp1045 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[251]] /* junCHWRet.vol.traceDynamics PARAM */),1);
    tmp1046 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[251]] /* junCHWRet.vol.traceDynamics PARAM */),4);
    if(!(tmp1045 && tmp1046))
    {
      tmp1048 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[251]] /* junCHWRet.vol.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1049 = stringAppend(MMC_REFSTRINGLIT(tmp1047),tmp1048);
      {
        const char* assert_cond = "(junCHWRet.vol.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1049));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1049));
        }
      }
      tmp1050 = 1;
    }
  }
  threadData->lastEquationSolved = 8280;
}

/*
equation index: 8281
type: ALGORITHM

  assert(junCHWRet.vol.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet.vol.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8281};
  modelica_boolean tmp1051;
  modelica_boolean tmp1052;
  static const MMC_DEFSTRINGLIT(tmp1053,180,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1054;
  modelica_metatype tmpMeta1055;
  static int tmp1056 = 0;
  if(!tmp1056)
  {
    tmp1051 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[250]] /* junCHWRet.vol.substanceDynamics PARAM */),1);
    tmp1052 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[250]] /* junCHWRet.vol.substanceDynamics PARAM */),4);
    if(!(tmp1051 && tmp1052))
    {
      tmp1054 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[250]] /* junCHWRet.vol.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1055 = stringAppend(MMC_REFSTRINGLIT(tmp1053),tmp1054);
      {
        const char* assert_cond = "(junCHWRet.vol.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1055));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1055));
        }
      }
      tmp1056 = 1;
    }
  }
  threadData->lastEquationSolved = 8281;
}

/*
equation index: 8282
type: ALGORITHM

  assert(junCHWRet.vol.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet.vol.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8282};
  modelica_boolean tmp1057;
  modelica_boolean tmp1058;
  static const MMC_DEFSTRINGLIT(tmp1059,175,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1060;
  modelica_metatype tmpMeta1061;
  static int tmp1062 = 0;
  if(!tmp1062)
  {
    tmp1057 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[248]] /* junCHWRet.vol.massDynamics PARAM */),1);
    tmp1058 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[248]] /* junCHWRet.vol.massDynamics PARAM */),4);
    if(!(tmp1057 && tmp1058))
    {
      tmp1060 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[248]] /* junCHWRet.vol.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1061 = stringAppend(MMC_REFSTRINGLIT(tmp1059),tmp1060);
      {
        const char* assert_cond = "(junCHWRet.vol.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1061));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1061));
        }
      }
      tmp1062 = 1;
    }
  }
  threadData->lastEquationSolved = 8282;
}

/*
equation index: 8283
type: ALGORITHM

  assert(junCHWRet.vol.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet.vol.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8283};
  modelica_boolean tmp1063;
  modelica_boolean tmp1064;
  static const MMC_DEFSTRINGLIT(tmp1065,177,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1066;
  modelica_metatype tmpMeta1067;
  static int tmp1068 = 0;
  if(!tmp1068)
  {
    tmp1063 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[247]] /* junCHWRet.vol.energyDynamics PARAM */),1);
    tmp1064 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[247]] /* junCHWRet.vol.energyDynamics PARAM */),4);
    if(!(tmp1063 && tmp1064))
    {
      tmp1066 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[247]] /* junCHWRet.vol.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1067 = stringAppend(MMC_REFSTRINGLIT(tmp1065),tmp1066);
      {
        const char* assert_cond = "(junCHWRet.vol.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1067));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1067));
        }
      }
      tmp1068 = 1;
    }
  }
  threadData->lastEquationSolved = 8283;
}

/*
equation index: 8284
type: ALGORITHM

  assert(junCHWRet.res3.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= junCHWRet.res3.deltaM, has value: " + String(junCHWRet.res3.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8284};
  modelica_boolean tmp1069;
  static const MMC_DEFSTRINGLIT(tmp1070,77,"Variable violating min constraint: 1e-6 <= junCHWRet.res3.deltaM, has value: ");
  modelica_string tmp1071;
  modelica_metatype tmpMeta1072;
  static int tmp1073 = 0;
  if(!tmp1073)
  {
    tmp1069 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1667]] /* junCHWRet.res3.deltaM PARAM */),1e-6);
    if(!tmp1069)
    {
      tmp1071 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1667]] /* junCHWRet.res3.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1072 = stringAppend(MMC_REFSTRINGLIT(tmp1070),tmp1071);
      {
        const char* assert_cond = "(junCHWRet.res3.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1072));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1072));
        }
      }
      tmp1073 = 1;
    }
  }
  threadData->lastEquationSolved = 8284;
}

/*
equation index: 8285
type: ALGORITHM

  assert(junCHWRet.res3.sta_default.p >= 0.0 and junCHWRet.res3.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet.res3.sta_default.p <= 1e8, has value: " + String(junCHWRet.res3.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8285};
  modelica_boolean tmp1074;
  modelica_boolean tmp1075;
  static const MMC_DEFSTRINGLIT(tmp1076,94,"Variable violating min/max constraint: 0.0 <= junCHWRet.res3.sta_default.p <= 1e8, has value: ");
  modelica_string tmp1077;
  modelica_metatype tmpMeta1078;
  static int tmp1079 = 0;
  if(!tmp1079)
  {
    tmp1074 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1677]] /* junCHWRet.res3.sta_default.p PARAM */),0.0);
    tmp1075 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1677]] /* junCHWRet.res3.sta_default.p PARAM */),1e8);
    if(!(tmp1074 && tmp1075))
    {
      tmp1077 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1677]] /* junCHWRet.res3.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1078 = stringAppend(MMC_REFSTRINGLIT(tmp1076),tmp1077);
      {
        const char* assert_cond = "(junCHWRet.res3.sta_default.p >= 0.0 and junCHWRet.res3.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1078));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1078));
        }
      }
      tmp1079 = 1;
    }
  }
  threadData->lastEquationSolved = 8285;
}

/*
equation index: 8286
type: ALGORITHM

  assert(junCHWRet.res3.sta_default.T >= 1.0 and junCHWRet.res3.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet.res3.sta_default.T <= 1e4, has value: " + String(junCHWRet.res3.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8286};
  modelica_boolean tmp1080;
  modelica_boolean tmp1081;
  static const MMC_DEFSTRINGLIT(tmp1082,94,"Variable violating min/max constraint: 1.0 <= junCHWRet.res3.sta_default.T <= 1e4, has value: ");
  modelica_string tmp1083;
  modelica_metatype tmpMeta1084;
  static int tmp1085 = 0;
  if(!tmp1085)
  {
    tmp1080 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1676]] /* junCHWRet.res3.sta_default.T PARAM */),1.0);
    tmp1081 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1676]] /* junCHWRet.res3.sta_default.T PARAM */),1e4);
    if(!(tmp1080 && tmp1081))
    {
      tmp1083 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1676]] /* junCHWRet.res3.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1084 = stringAppend(MMC_REFSTRINGLIT(tmp1082),tmp1083);
      {
        const char* assert_cond = "(junCHWRet.res3.sta_default.T >= 1.0 and junCHWRet.res3.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1084));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1084));
        }
      }
      tmp1085 = 1;
    }
  }
  threadData->lastEquationSolved = 8286;
}

/*
equation index: 8287
type: ALGORITHM

  assert(junCHWRet.res3.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet.res3.eta_default, has value: " + String(junCHWRet.res3.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_8287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8287};
  modelica_boolean tmp1086;
  static const MMC_DEFSTRINGLIT(tmp1087,81,"Variable violating min constraint: 0.0 <= junCHWRet.res3.eta_default, has value: ");
  modelica_string tmp1088;
  modelica_metatype tmpMeta1089;
  static int tmp1090 = 0;
  if(!tmp1090)
  {
    tmp1086 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1670]] /* junCHWRet.res3.eta_default PARAM */),0.0);
    if(!tmp1086)
    {
      tmp1088 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1670]] /* junCHWRet.res3.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1089 = stringAppend(MMC_REFSTRINGLIT(tmp1087),tmp1088);
      {
        const char* assert_cond = "(junCHWRet.res3.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1089));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1089));
        }
      }
      tmp1090 = 1;
    }
  }
  threadData->lastEquationSolved = 8287;
}
OMC_DISABLE_OPT
void logic1_raw_updateBoundParameters_2(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[478])(DATA*, threadData_t*) = {
    logic1_raw_eqFunction_7756,
    logic1_raw_eqFunction_7757,
    logic1_raw_eqFunction_7758,
    logic1_raw_eqFunction_7759,
    logic1_raw_eqFunction_7760,
    logic1_raw_eqFunction_7761,
    logic1_raw_eqFunction_7771,
    logic1_raw_eqFunction_7777,
    logic1_raw_eqFunction_7778,
    logic1_raw_eqFunction_7779,
    logic1_raw_eqFunction_7780,
    logic1_raw_eqFunction_7801,
    logic1_raw_eqFunction_7805,
    logic1_raw_eqFunction_7806,
    logic1_raw_eqFunction_7807,
    logic1_raw_eqFunction_7808,
    logic1_raw_eqFunction_1318,
    logic1_raw_eqFunction_1317,
    logic1_raw_eqFunction_1316,
    logic1_raw_eqFunction_1315,
    logic1_raw_eqFunction_1314,
    logic1_raw_eqFunction_1313,
    logic1_raw_eqFunction_1312,
    logic1_raw_eqFunction_1311,
    logic1_raw_eqFunction_1310,
    logic1_raw_eqFunction_1309,
    logic1_raw_eqFunction_1308,
    logic1_raw_eqFunction_1307,
    logic1_raw_eqFunction_1306,
    logic1_raw_eqFunction_1305,
    logic1_raw_eqFunction_1304,
    logic1_raw_eqFunction_1303,
    logic1_raw_eqFunction_1302,
    logic1_raw_eqFunction_1301,
    logic1_raw_eqFunction_1300,
    logic1_raw_eqFunction_1299,
    logic1_raw_eqFunction_1298,
    logic1_raw_eqFunction_1297,
    logic1_raw_eqFunction_1296,
    logic1_raw_eqFunction_1295,
    logic1_raw_eqFunction_1294,
    logic1_raw_eqFunction_1293,
    logic1_raw_eqFunction_1292,
    logic1_raw_eqFunction_1291,
    logic1_raw_eqFunction_1290,
    logic1_raw_eqFunction_1289,
    logic1_raw_eqFunction_1288,
    logic1_raw_eqFunction_1287,
    logic1_raw_eqFunction_1286,
    logic1_raw_eqFunction_1285,
    logic1_raw_eqFunction_1284,
    logic1_raw_eqFunction_1283,
    logic1_raw_eqFunction_1282,
    logic1_raw_eqFunction_1281,
    logic1_raw_eqFunction_1280,
    logic1_raw_eqFunction_1279,
    logic1_raw_eqFunction_1278,
    logic1_raw_eqFunction_1277,
    logic1_raw_eqFunction_1276,
    logic1_raw_eqFunction_1275,
    logic1_raw_eqFunction_1274,
    logic1_raw_eqFunction_1273,
    logic1_raw_eqFunction_1272,
    logic1_raw_eqFunction_1271,
    logic1_raw_eqFunction_1270,
    logic1_raw_eqFunction_1269,
    logic1_raw_eqFunction_1268,
    logic1_raw_eqFunction_1267,
    logic1_raw_eqFunction_1266,
    logic1_raw_eqFunction_1265,
    logic1_raw_eqFunction_1264,
    logic1_raw_eqFunction_1263,
    logic1_raw_eqFunction_1262,
    logic1_raw_eqFunction_1261,
    logic1_raw_eqFunction_1260,
    logic1_raw_eqFunction_1259,
    logic1_raw_eqFunction_1258,
    logic1_raw_eqFunction_1257,
    logic1_raw_eqFunction_1256,
    logic1_raw_eqFunction_1255,
    logic1_raw_eqFunction_1254,
    logic1_raw_eqFunction_1253,
    logic1_raw_eqFunction_1252,
    logic1_raw_eqFunction_1251,
    logic1_raw_eqFunction_1250,
    logic1_raw_eqFunction_1249,
    logic1_raw_eqFunction_1248,
    logic1_raw_eqFunction_1247,
    logic1_raw_eqFunction_1246,
    logic1_raw_eqFunction_1245,
    logic1_raw_eqFunction_1244,
    logic1_raw_eqFunction_1243,
    logic1_raw_eqFunction_1242,
    logic1_raw_eqFunction_1241,
    logic1_raw_eqFunction_1240,
    logic1_raw_eqFunction_1239,
    logic1_raw_eqFunction_1238,
    logic1_raw_eqFunction_1237,
    logic1_raw_eqFunction_1236,
    logic1_raw_eqFunction_1235,
    logic1_raw_eqFunction_1234,
    logic1_raw_eqFunction_1233,
    logic1_raw_eqFunction_1232,
    logic1_raw_eqFunction_1231,
    logic1_raw_eqFunction_1230,
    logic1_raw_eqFunction_1229,
    logic1_raw_eqFunction_1228,
    logic1_raw_eqFunction_1227,
    logic1_raw_eqFunction_1226,
    logic1_raw_eqFunction_1225,
    logic1_raw_eqFunction_1224,
    logic1_raw_eqFunction_1223,
    logic1_raw_eqFunction_1222,
    logic1_raw_eqFunction_1221,
    logic1_raw_eqFunction_1220,
    logic1_raw_eqFunction_1219,
    logic1_raw_eqFunction_1218,
    logic1_raw_eqFunction_1217,
    logic1_raw_eqFunction_1216,
    logic1_raw_eqFunction_164,
    logic1_raw_eqFunction_163,
    logic1_raw_eqFunction_162,
    logic1_raw_eqFunction_161,
    logic1_raw_eqFunction_160,
    logic1_raw_eqFunction_159,
    logic1_raw_eqFunction_158,
    logic1_raw_eqFunction_157,
    logic1_raw_eqFunction_156,
    logic1_raw_eqFunction_155,
    logic1_raw_eqFunction_154,
    logic1_raw_eqFunction_152,
    logic1_raw_eqFunction_1215,
    logic1_raw_eqFunction_151,
    logic1_raw_eqFunction_150,
    logic1_raw_eqFunction_149,
    logic1_raw_eqFunction_148,
    logic1_raw_eqFunction_147,
    logic1_raw_eqFunction_146,
    logic1_raw_eqFunction_145,
    logic1_raw_eqFunction_144,
    logic1_raw_eqFunction_143,
    logic1_raw_eqFunction_1214,
    logic1_raw_eqFunction_1213,
    logic1_raw_eqFunction_1212,
    logic1_raw_eqFunction_1211,
    logic1_raw_eqFunction_1210,
    logic1_raw_eqFunction_1209,
    logic1_raw_eqFunction_1208,
    logic1_raw_eqFunction_1207,
    logic1_raw_eqFunction_1206,
    logic1_raw_eqFunction_1205,
    logic1_raw_eqFunction_1204,
    logic1_raw_eqFunction_1203,
    logic1_raw_eqFunction_1202,
    logic1_raw_eqFunction_1201,
    logic1_raw_eqFunction_1200,
    logic1_raw_eqFunction_1199,
    logic1_raw_eqFunction_1198,
    logic1_raw_eqFunction_1197,
    logic1_raw_eqFunction_1196,
    logic1_raw_eqFunction_1195,
    logic1_raw_eqFunction_1194,
    logic1_raw_eqFunction_1193,
    logic1_raw_eqFunction_1192,
    logic1_raw_eqFunction_1191,
    logic1_raw_eqFunction_1190,
    logic1_raw_eqFunction_1189,
    logic1_raw_eqFunction_1188,
    logic1_raw_eqFunction_1187,
    logic1_raw_eqFunction_153,
    logic1_raw_eqFunction_142,
    logic1_raw_eqFunction_141,
    logic1_raw_eqFunction_140,
    logic1_raw_eqFunction_139,
    logic1_raw_eqFunction_138,
    logic1_raw_eqFunction_137,
    logic1_raw_eqFunction_136,
    logic1_raw_eqFunction_135,
    logic1_raw_eqFunction_134,
    logic1_raw_eqFunction_133,
    logic1_raw_eqFunction_132,
    logic1_raw_eqFunction_131,
    logic1_raw_eqFunction_130,
    logic1_raw_eqFunction_129,
    logic1_raw_eqFunction_128,
    logic1_raw_eqFunction_127,
    logic1_raw_eqFunction_126,
    logic1_raw_eqFunction_125,
    logic1_raw_eqFunction_124,
    logic1_raw_eqFunction_123,
    logic1_raw_eqFunction_122,
    logic1_raw_eqFunction_121,
    logic1_raw_eqFunction_120,
    logic1_raw_eqFunction_119,
    logic1_raw_eqFunction_118,
    logic1_raw_eqFunction_117,
    logic1_raw_eqFunction_116,
    logic1_raw_eqFunction_115,
    logic1_raw_eqFunction_114,
    logic1_raw_eqFunction_113,
    logic1_raw_eqFunction_112,
    logic1_raw_eqFunction_111,
    logic1_raw_eqFunction_110,
    logic1_raw_eqFunction_109,
    logic1_raw_eqFunction_108,
    logic1_raw_eqFunction_107,
    logic1_raw_eqFunction_106,
    logic1_raw_eqFunction_105,
    logic1_raw_eqFunction_104,
    logic1_raw_eqFunction_103,
    logic1_raw_eqFunction_102,
    logic1_raw_eqFunction_101,
    logic1_raw_eqFunction_100,
    logic1_raw_eqFunction_99,
    logic1_raw_eqFunction_98,
    logic1_raw_eqFunction_97,
    logic1_raw_eqFunction_96,
    logic1_raw_eqFunction_95,
    logic1_raw_eqFunction_94,
    logic1_raw_eqFunction_93,
    logic1_raw_eqFunction_92,
    logic1_raw_eqFunction_91,
    logic1_raw_eqFunction_90,
    logic1_raw_eqFunction_89,
    logic1_raw_eqFunction_88,
    logic1_raw_eqFunction_87,
    logic1_raw_eqFunction_86,
    logic1_raw_eqFunction_85,
    logic1_raw_eqFunction_84,
    logic1_raw_eqFunction_83,
    logic1_raw_eqFunction_82,
    logic1_raw_eqFunction_81,
    logic1_raw_eqFunction_80,
    logic1_raw_eqFunction_79,
    logic1_raw_eqFunction_78,
    logic1_raw_eqFunction_77,
    logic1_raw_eqFunction_76,
    logic1_raw_eqFunction_75,
    logic1_raw_eqFunction_74,
    logic1_raw_eqFunction_73,
    logic1_raw_eqFunction_72,
    logic1_raw_eqFunction_71,
    logic1_raw_eqFunction_70,
    logic1_raw_eqFunction_69,
    logic1_raw_eqFunction_68,
    logic1_raw_eqFunction_67,
    logic1_raw_eqFunction_66,
    logic1_raw_eqFunction_65,
    logic1_raw_eqFunction_64,
    logic1_raw_eqFunction_63,
    logic1_raw_eqFunction_62,
    logic1_raw_eqFunction_61,
    logic1_raw_eqFunction_60,
    logic1_raw_eqFunction_59,
    logic1_raw_eqFunction_58,
    logic1_raw_eqFunction_57,
    logic1_raw_eqFunction_56,
    logic1_raw_eqFunction_55,
    logic1_raw_eqFunction_54,
    logic1_raw_eqFunction_53,
    logic1_raw_eqFunction_52,
    logic1_raw_eqFunction_51,
    logic1_raw_eqFunction_50,
    logic1_raw_eqFunction_49,
    logic1_raw_eqFunction_48,
    logic1_raw_eqFunction_47,
    logic1_raw_eqFunction_46,
    logic1_raw_eqFunction_45,
    logic1_raw_eqFunction_44,
    logic1_raw_eqFunction_43,
    logic1_raw_eqFunction_42,
    logic1_raw_eqFunction_41,
    logic1_raw_eqFunction_40,
    logic1_raw_eqFunction_39,
    logic1_raw_eqFunction_38,
    logic1_raw_eqFunction_37,
    logic1_raw_eqFunction_36,
    logic1_raw_eqFunction_35,
    logic1_raw_eqFunction_34,
    logic1_raw_eqFunction_33,
    logic1_raw_eqFunction_32,
    logic1_raw_eqFunction_31,
    logic1_raw_eqFunction_30,
    logic1_raw_eqFunction_29,
    logic1_raw_eqFunction_28,
    logic1_raw_eqFunction_27,
    logic1_raw_eqFunction_26,
    logic1_raw_eqFunction_25,
    logic1_raw_eqFunction_24,
    logic1_raw_eqFunction_23,
    logic1_raw_eqFunction_22,
    logic1_raw_eqFunction_21,
    logic1_raw_eqFunction_20,
    logic1_raw_eqFunction_19,
    logic1_raw_eqFunction_18,
    logic1_raw_eqFunction_17,
    logic1_raw_eqFunction_16,
    logic1_raw_eqFunction_15,
    logic1_raw_eqFunction_14,
    logic1_raw_eqFunction_13,
    logic1_raw_eqFunction_12,
    logic1_raw_eqFunction_11,
    logic1_raw_eqFunction_10,
    logic1_raw_eqFunction_9,
    logic1_raw_eqFunction_8,
    logic1_raw_eqFunction_7,
    logic1_raw_eqFunction_6,
    logic1_raw_eqFunction_5,
    logic1_raw_eqFunction_4,
    logic1_raw_eqFunction_3,
    logic1_raw_eqFunction_2,
    logic1_raw_eqFunction_1,
    logic1_raw_eqFunction_8122,
    logic1_raw_eqFunction_8123,
    logic1_raw_eqFunction_8124,
    logic1_raw_eqFunction_8125,
    logic1_raw_eqFunction_8126,
    logic1_raw_eqFunction_8127,
    logic1_raw_eqFunction_8128,
    logic1_raw_eqFunction_8129,
    logic1_raw_eqFunction_8130,
    logic1_raw_eqFunction_8131,
    logic1_raw_eqFunction_8132,
    logic1_raw_eqFunction_8133,
    logic1_raw_eqFunction_8134,
    logic1_raw_eqFunction_8135,
    logic1_raw_eqFunction_8136,
    logic1_raw_eqFunction_8137,
    logic1_raw_eqFunction_8138,
    logic1_raw_eqFunction_8139,
    logic1_raw_eqFunction_8140,
    logic1_raw_eqFunction_8141,
    logic1_raw_eqFunction_8142,
    logic1_raw_eqFunction_8143,
    logic1_raw_eqFunction_8144,
    logic1_raw_eqFunction_8145,
    logic1_raw_eqFunction_8146,
    logic1_raw_eqFunction_8147,
    logic1_raw_eqFunction_8148,
    logic1_raw_eqFunction_8149,
    logic1_raw_eqFunction_8150,
    logic1_raw_eqFunction_8151,
    logic1_raw_eqFunction_8152,
    logic1_raw_eqFunction_8153,
    logic1_raw_eqFunction_8154,
    logic1_raw_eqFunction_8155,
    logic1_raw_eqFunction_8156,
    logic1_raw_eqFunction_8157,
    logic1_raw_eqFunction_8158,
    logic1_raw_eqFunction_8159,
    logic1_raw_eqFunction_8160,
    logic1_raw_eqFunction_8161,
    logic1_raw_eqFunction_8162,
    logic1_raw_eqFunction_8163,
    logic1_raw_eqFunction_8164,
    logic1_raw_eqFunction_8165,
    logic1_raw_eqFunction_8166,
    logic1_raw_eqFunction_8167,
    logic1_raw_eqFunction_8168,
    logic1_raw_eqFunction_8169,
    logic1_raw_eqFunction_8170,
    logic1_raw_eqFunction_8171,
    logic1_raw_eqFunction_8172,
    logic1_raw_eqFunction_8173,
    logic1_raw_eqFunction_8174,
    logic1_raw_eqFunction_8175,
    logic1_raw_eqFunction_8176,
    logic1_raw_eqFunction_8177,
    logic1_raw_eqFunction_8178,
    logic1_raw_eqFunction_8179,
    logic1_raw_eqFunction_8180,
    logic1_raw_eqFunction_8181,
    logic1_raw_eqFunction_8182,
    logic1_raw_eqFunction_8183,
    logic1_raw_eqFunction_8184,
    logic1_raw_eqFunction_8185,
    logic1_raw_eqFunction_8186,
    logic1_raw_eqFunction_8187,
    logic1_raw_eqFunction_8188,
    logic1_raw_eqFunction_8189,
    logic1_raw_eqFunction_8190,
    logic1_raw_eqFunction_8191,
    logic1_raw_eqFunction_8192,
    logic1_raw_eqFunction_8193,
    logic1_raw_eqFunction_8194,
    logic1_raw_eqFunction_8195,
    logic1_raw_eqFunction_8196,
    logic1_raw_eqFunction_8197,
    logic1_raw_eqFunction_8198,
    logic1_raw_eqFunction_8199,
    logic1_raw_eqFunction_8200,
    logic1_raw_eqFunction_8201,
    logic1_raw_eqFunction_8202,
    logic1_raw_eqFunction_8203,
    logic1_raw_eqFunction_8204,
    logic1_raw_eqFunction_8205,
    logic1_raw_eqFunction_8206,
    logic1_raw_eqFunction_8207,
    logic1_raw_eqFunction_8208,
    logic1_raw_eqFunction_8209,
    logic1_raw_eqFunction_8210,
    logic1_raw_eqFunction_8211,
    logic1_raw_eqFunction_8212,
    logic1_raw_eqFunction_8213,
    logic1_raw_eqFunction_8214,
    logic1_raw_eqFunction_8215,
    logic1_raw_eqFunction_8216,
    logic1_raw_eqFunction_8217,
    logic1_raw_eqFunction_8218,
    logic1_raw_eqFunction_8219,
    logic1_raw_eqFunction_8220,
    logic1_raw_eqFunction_8221,
    logic1_raw_eqFunction_8222,
    logic1_raw_eqFunction_8223,
    logic1_raw_eqFunction_8224,
    logic1_raw_eqFunction_8225,
    logic1_raw_eqFunction_8226,
    logic1_raw_eqFunction_8227,
    logic1_raw_eqFunction_8228,
    logic1_raw_eqFunction_8229,
    logic1_raw_eqFunction_8230,
    logic1_raw_eqFunction_8231,
    logic1_raw_eqFunction_8232,
    logic1_raw_eqFunction_8233,
    logic1_raw_eqFunction_8234,
    logic1_raw_eqFunction_8235,
    logic1_raw_eqFunction_8236,
    logic1_raw_eqFunction_8237,
    logic1_raw_eqFunction_8238,
    logic1_raw_eqFunction_8239,
    logic1_raw_eqFunction_8240,
    logic1_raw_eqFunction_8241,
    logic1_raw_eqFunction_8242,
    logic1_raw_eqFunction_8243,
    logic1_raw_eqFunction_8244,
    logic1_raw_eqFunction_8245,
    logic1_raw_eqFunction_8246,
    logic1_raw_eqFunction_8247,
    logic1_raw_eqFunction_8248,
    logic1_raw_eqFunction_8249,
    logic1_raw_eqFunction_8250,
    logic1_raw_eqFunction_8251,
    logic1_raw_eqFunction_8252,
    logic1_raw_eqFunction_8253,
    logic1_raw_eqFunction_8254,
    logic1_raw_eqFunction_8255,
    logic1_raw_eqFunction_8256,
    logic1_raw_eqFunction_8257,
    logic1_raw_eqFunction_8258,
    logic1_raw_eqFunction_8259,
    logic1_raw_eqFunction_8260,
    logic1_raw_eqFunction_8261,
    logic1_raw_eqFunction_8262,
    logic1_raw_eqFunction_8263,
    logic1_raw_eqFunction_8264,
    logic1_raw_eqFunction_8265,
    logic1_raw_eqFunction_8266,
    logic1_raw_eqFunction_8267,
    logic1_raw_eqFunction_8268,
    logic1_raw_eqFunction_8269,
    logic1_raw_eqFunction_8270,
    logic1_raw_eqFunction_8271,
    logic1_raw_eqFunction_8272,
    logic1_raw_eqFunction_8273,
    logic1_raw_eqFunction_8274,
    logic1_raw_eqFunction_8275,
    logic1_raw_eqFunction_8276,
    logic1_raw_eqFunction_8277,
    logic1_raw_eqFunction_8278,
    logic1_raw_eqFunction_8279,
    logic1_raw_eqFunction_8280,
    logic1_raw_eqFunction_8281,
    logic1_raw_eqFunction_8282,
    logic1_raw_eqFunction_8283,
    logic1_raw_eqFunction_8284,
    logic1_raw_eqFunction_8285,
    logic1_raw_eqFunction_8286,
    logic1_raw_eqFunction_8287
  };
  
  for (int id = 0; id < 478; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif