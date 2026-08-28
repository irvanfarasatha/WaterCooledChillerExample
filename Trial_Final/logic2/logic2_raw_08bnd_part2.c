#include "logic2_raw_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 7744
type: SIMPLE_ASSIGN
fanSup.vol.steBal.bReg = 119.0 * fanSup.vol.steBal.deltaInvReg ^ 2.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7744};
  modelica_real tmp158;
  tmp158 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1607]] /* fanSup.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1603]] /* fanSup.vol.steBal.bReg PARAM */) = (119.0) * ((tmp158 * tmp158));
  threadData->lastEquationSolved = 7744;
}

/*
equation index: 7745
type: SIMPLE_ASSIGN
fanSup.vol.steBal.aReg = (-15.0) * fanSup.vol.steBal.deltaInvReg
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7745};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1602]] /* fanSup.vol.steBal.aReg PARAM */) = (-15.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1607]] /* fanSup.vol.steBal.deltaInvReg PARAM */));
  threadData->lastEquationSolved = 7745;
}

/*
equation index: 7755
type: SIMPLE_ASSIGN
fanSup.vol.V = fanSup.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7755};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1582]] /* fanSup.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1583]] /* fanSup.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 7755;
}

/*
equation index: 7761
type: SIMPLE_ASSIGN
fanSup.vol.X_start[2] = fanSup.X_start[2]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7761};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1585]] /* fanSup.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1486]] /* fanSup.X_start[2] PARAM */);
  threadData->lastEquationSolved = 7761;
}

/*
equation index: 7762
type: SIMPLE_ASSIGN
fanSup.vol.X_start[1] = fanSup.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7762};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1584]] /* fanSup.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1485]] /* fanSup.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7762;
}

/*
equation index: 7763
type: SIMPLE_ASSIGN
fanSup.vol.T_start = fanSup.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7763};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1581]] /* fanSup.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1483]] /* fanSup.T_start PARAM */);
  threadData->lastEquationSolved = 7763;
}

/*
equation index: 7764
type: SIMPLE_ASSIGN
fanSup.vol.p_start = fanSup.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7764};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1589]] /* fanSup.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1551]] /* fanSup.p_start PARAM */);
  threadData->lastEquationSolved = 7764;
}

/*
equation index: 7785
type: SIMPLE_ASSIGN
fanSup.stageInputs[1] = fanSup.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7785};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1579]] /* fanSup.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1550]] /* fanSup.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 7785;
}

/*
equation index: 7789
type: SIMPLE_ASSIGN
fanSup.per.speeds_rpm[1] = fanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7789};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1567]] /* fanSup.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1565]] /* fanSup.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7789;
}

/*
equation index: 7790
type: SIMPLE_ASSIGN
fanSup.per.constantSpeed_rpm = fanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7790};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1553]] /* fanSup.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1565]] /* fanSup.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7790;
}

/*
equation index: 7791
type: SIMPLE_ASSIGN
fanSup.per.speeds[1] = fanSup.per.speeds_rpm[1] / fanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7791};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1566]] /* fanSup.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1567]] /* fanSup.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1565]] /* fanSup.per.speed_rpm_nominal PARAM */),"fanSup.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 7791;
}

/*
equation index: 7792
type: SIMPLE_ASSIGN
fanSup.per.constantSpeed = fanSup.per.constantSpeed_rpm / fanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7792};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1552]] /* fanSup.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1553]] /* fanSup.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1565]] /* fanSup.per.speed_rpm_nominal PARAM */),"fanSup.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 7792;
}

/*
equation index: 7808
type: SIMPLE_ASSIGN
mCHWPumpMax = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7808};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2153]] /* mCHWPumpMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7808;
}
extern void logic2_raw_eqFunction_1314(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1313(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1312(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1311(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1310(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1309(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1308(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1307(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1306(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1305(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1304(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1303(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1302(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1301(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1300(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1299(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1298(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1297(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1296(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1295(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1294(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1293(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1292(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1291(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1290(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1289(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1288(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1287(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1286(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1285(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1284(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1283(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1282(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1281(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1280(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1279(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1278(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1277(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1276(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1275(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1274(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1273(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1272(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1271(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1270(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1269(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1268(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1267(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1266(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1265(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1264(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1263(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1262(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1261(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1260(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1259(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1258(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1257(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1256(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1255(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1254(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1253(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1252(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1251(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1250(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1249(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1248(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1247(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1246(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1245(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1244(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1243(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1242(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1241(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1240(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1239(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1238(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1237(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1236(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1235(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1234(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1233(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1232(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1231(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1230(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1229(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1228(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1227(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1226(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1225(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1224(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1223(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1222(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1221(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1220(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1219(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1218(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1217(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1216(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1215(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1214(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1213(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1212(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_164(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_163(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_162(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_161(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_160(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_159(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_158(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_157(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_156(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_155(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_154(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_152(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1211(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_151(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_150(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_149(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_148(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_147(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_146(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_145(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_144(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_143(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1210(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1209(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1208(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1207(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1206(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1205(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1204(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1203(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1202(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1201(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1200(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1199(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1198(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1197(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1196(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1195(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1194(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1193(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1192(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1191(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1190(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1189(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1188(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1187(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1186(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1185(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1184(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1183(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_153(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_142(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_141(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_140(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_139(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_138(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_137(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_136(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_135(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_134(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_133(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_132(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_131(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_130(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_129(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_128(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_127(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_126(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_125(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_124(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_123(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_122(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_121(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_120(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_119(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_118(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_117(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_116(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_115(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_114(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_113(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_112(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_111(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_110(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_109(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_108(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_107(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_106(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_105(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_104(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_103(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_102(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_101(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_100(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_99(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_98(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_97(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_96(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_95(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_94(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_93(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_92(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_91(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_90(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_89(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_88(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_87(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_86(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_85(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_84(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_83(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_82(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_81(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_80(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_79(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_78(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_77(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_76(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_75(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_74(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_73(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_72(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_71(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_70(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_69(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_68(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_67(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_66(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_65(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_64(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_63(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_62(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_61(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_60(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_59(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_58(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_57(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_56(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_55(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_54(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_53(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_52(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_51(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_50(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_49(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_48(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_47(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_46(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_45(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_44(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_43(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_42(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_41(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_40(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_39(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_38(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_37(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_36(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_35(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_34(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_33(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_32(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_31(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_30(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_29(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_28(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_27(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_26(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_25(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_24(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_23(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_22(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_21(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_20(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_19(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_18(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_17(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_16(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_15(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_14(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_13(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_12(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_11(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_10(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_9(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_8(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_7(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_6(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_5(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_4(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 8107
type: ALGORITHM

  assert(TAirSup.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= TAirSup.m_flow_small, has value: " + String(TAirSup.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8107};
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
  threadData->lastEquationSolved = 8107;
}

/*
equation index: 8108
type: ALGORITHM

  assert(TChiSetMin >= 0.0, "Variable violating min constraint: 0.0 <= TChiSetMin, has value: " + String(TChiSetMin, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8108};
  modelica_boolean tmp164;
  static const MMC_DEFSTRINGLIT(tmp165,65,"Variable violating min constraint: 0.0 <= TChiSetMin, has value: ");
  modelica_string tmp166;
  modelica_metatype tmpMeta167;
  static int tmp168 = 0;
  if(!tmp168)
  {
    tmp164 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* TChiSetMin PARAM */),0.0);
    if(!tmp164)
    {
      tmp166 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* TChiSetMin PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta167 = stringAppend(MMC_REFSTRINGLIT(tmp165),tmp166);
      {
        const char* assert_cond = "(TChiSetMin >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",29,3,29,140,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta167));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",29,3,29,140,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta167));
        }
      }
      tmp168 = 1;
    }
  }
  threadData->lastEquationSolved = 8108;
}

/*
equation index: 8109
type: ALGORITHM

  assert(chwstCtrl2.TChiSetStart >= 0.0, "Variable violating min constraint: 0.0 <= chwstCtrl2.TChiSetStart, has value: " + String(chwstCtrl2.TChiSetStart, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8109};
  modelica_boolean tmp169;
  static const MMC_DEFSTRINGLIT(tmp170,78,"Variable violating min constraint: 0.0 <= chwstCtrl2.TChiSetStart, has value: ");
  modelica_string tmp171;
  modelica_metatype tmpMeta172;
  static int tmp173 = 0;
  if(!tmp173)
  {
    tmp169 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[438]] /* chwstCtrl2.TChiSetStart PARAM */),0.0);
    if(!tmp169)
    {
      tmp171 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[438]] /* chwstCtrl2.TChiSetStart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta172 = stringAppend(MMC_REFSTRINGLIT(tmp170),tmp171);
      {
        const char* assert_cond = "(chwstCtrl2.TChiSetStart >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",40,5,40,93,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta172));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",40,5,40,93,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta172));
        }
      }
      tmp173 = 1;
    }
  }
  threadData->lastEquationSolved = 8109;
}

/*
equation index: 8110
type: ALGORITHM

  assert(TChiSetMax >= 0.0, "Variable violating min constraint: 0.0 <= TChiSetMax, has value: " + String(TChiSetMax, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8110};
  modelica_boolean tmp174;
  static const MMC_DEFSTRINGLIT(tmp175,65,"Variable violating min constraint: 0.0 <= TChiSetMax, has value: ");
  modelica_string tmp176;
  modelica_metatype tmpMeta177;
  static int tmp178 = 0;
  if(!tmp178)
  {
    tmp174 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* TChiSetMax PARAM */),0.0);
    if(!tmp174)
    {
      tmp176 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* TChiSetMax PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta177 = stringAppend(MMC_REFSTRINGLIT(tmp175),tmp176);
      {
        const char* assert_cond = "(TChiSetMax >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",30,3,30,150,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta177));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",30,3,30,150,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta177));
        }
      }
      tmp178 = 1;
    }
  }
  threadData->lastEquationSolved = 8110;
}

/*
equation index: 8111
type: ALGORITHM

  assert(chwstCtrl2.TChiSetMax >= 0.0, "Variable violating min constraint: 0.0 <= chwstCtrl2.TChiSetMax, has value: " + String(chwstCtrl2.TChiSetMax, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8111};
  modelica_boolean tmp179;
  static const MMC_DEFSTRINGLIT(tmp180,76,"Variable violating min constraint: 0.0 <= chwstCtrl2.TChiSetMax, has value: ");
  modelica_string tmp181;
  modelica_metatype tmpMeta182;
  static int tmp183 = 0;
  if(!tmp183)
  {
    tmp179 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[436]] /* chwstCtrl2.TChiSetMax PARAM */),0.0);
    if(!tmp179)
    {
      tmp181 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[436]] /* chwstCtrl2.TChiSetMax PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta182 = stringAppend(MMC_REFSTRINGLIT(tmp180),tmp181);
      {
        const char* assert_cond = "(chwstCtrl2.TChiSetMax >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",39,5,39,152,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta182));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",39,5,39,152,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta182));
        }
      }
      tmp183 = 1;
    }
  }
  threadData->lastEquationSolved = 8111;
}

/*
equation index: 8112
type: ALGORITHM

  assert(chwstCtrl2.TChiSetMin >= 0.0, "Variable violating min constraint: 0.0 <= chwstCtrl2.TChiSetMin, has value: " + String(chwstCtrl2.TChiSetMin, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8112};
  modelica_boolean tmp184;
  static const MMC_DEFSTRINGLIT(tmp185,76,"Variable violating min constraint: 0.0 <= chwstCtrl2.TChiSetMin, has value: ");
  modelica_string tmp186;
  modelica_metatype tmpMeta187;
  static int tmp188 = 0;
  if(!tmp188)
  {
    tmp184 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[437]] /* chwstCtrl2.TChiSetMin PARAM */),0.0);
    if(!tmp184)
    {
      tmp186 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[437]] /* chwstCtrl2.TChiSetMin PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta187 = stringAppend(MMC_REFSTRINGLIT(tmp185),tmp186);
      {
        const char* assert_cond = "(chwstCtrl2.TChiSetMin >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",38,5,38,142,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta187));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",38,5,38,142,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta187));
        }
      }
      tmp188 = 1;
    }
  }
  threadData->lastEquationSolved = 8112;
}

/*
equation index: 8113
type: ALGORITHM

  assert(TCHWRTSet >= 0.0, "Variable violating min constraint: 0.0 <= TCHWRTSet, has value: " + String(TCHWRTSet, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8113};
  modelica_boolean tmp189;
  static const MMC_DEFSTRINGLIT(tmp190,64,"Variable violating min constraint: 0.0 <= TCHWRTSet, has value: ");
  modelica_string tmp191;
  modelica_metatype tmpMeta192;
  static int tmp193 = 0;
  if(!tmp193)
  {
    tmp189 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* TCHWRTSet PARAM */),0.0);
    if(!tmp189)
    {
      tmp191 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* TCHWRTSet PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta192 = stringAppend(MMC_REFSTRINGLIT(tmp190),tmp191);
      {
        const char* assert_cond = "(TCHWRTSet >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",28,3,28,143,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta192));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",28,3,28,143,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta192));
        }
      }
      tmp193 = 1;
    }
  }
  threadData->lastEquationSolved = 8113;
}

/*
equation index: 8114
type: ALGORITHM

  assert(chwstCtrl2.TCHWRTSet >= 0.0, "Variable violating min constraint: 0.0 <= chwstCtrl2.TCHWRTSet, has value: " + String(chwstCtrl2.TCHWRTSet, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8114};
  modelica_boolean tmp194;
  static const MMC_DEFSTRINGLIT(tmp195,75,"Variable violating min constraint: 0.0 <= chwstCtrl2.TCHWRTSet, has value: ");
  modelica_string tmp196;
  modelica_metatype tmpMeta197;
  static int tmp198 = 0;
  if(!tmp198)
  {
    tmp194 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[435]] /* chwstCtrl2.TCHWRTSet PARAM */),0.0);
    if(!tmp194)
    {
      tmp196 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[435]] /* chwstCtrl2.TCHWRTSet PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta197 = stringAppend(MMC_REFSTRINGLIT(tmp195),tmp196);
      {
        const char* assert_cond = "(chwstCtrl2.TCHWRTSet >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",33,5,33,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta197));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",33,5,33,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta197));
        }
      }
      tmp198 = 1;
    }
  }
  threadData->lastEquationSolved = 8114;
}

/*
equation index: 8115
type: ALGORITHM

  assert(chwstCtrl1.TChiSetStart >= 0.0, "Variable violating min constraint: 0.0 <= chwstCtrl1.TChiSetStart, has value: " + String(chwstCtrl1.TChiSetStart, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8115};
  modelica_boolean tmp199;
  static const MMC_DEFSTRINGLIT(tmp200,78,"Variable violating min constraint: 0.0 <= chwstCtrl1.TChiSetStart, has value: ");
  modelica_string tmp201;
  modelica_metatype tmpMeta202;
  static int tmp203 = 0;
  if(!tmp203)
  {
    tmp199 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* chwstCtrl1.TChiSetStart PARAM */),0.0);
    if(!tmp199)
    {
      tmp201 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* chwstCtrl1.TChiSetStart PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta202 = stringAppend(MMC_REFSTRINGLIT(tmp200),tmp201);
      {
        const char* assert_cond = "(chwstCtrl1.TChiSetStart >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",40,5,40,93,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta202));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",40,5,40,93,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta202));
        }
      }
      tmp203 = 1;
    }
  }
  threadData->lastEquationSolved = 8115;
}

/*
equation index: 8116
type: ALGORITHM

  assert(chwstCtrl1.TChiSetMax >= 0.0, "Variable violating min constraint: 0.0 <= chwstCtrl1.TChiSetMax, has value: " + String(chwstCtrl1.TChiSetMax, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8116};
  modelica_boolean tmp204;
  static const MMC_DEFSTRINGLIT(tmp205,76,"Variable violating min constraint: 0.0 <= chwstCtrl1.TChiSetMax, has value: ");
  modelica_string tmp206;
  modelica_metatype tmpMeta207;
  static int tmp208 = 0;
  if(!tmp208)
  {
    tmp204 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[424]] /* chwstCtrl1.TChiSetMax PARAM */),0.0);
    if(!tmp204)
    {
      tmp206 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[424]] /* chwstCtrl1.TChiSetMax PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta207 = stringAppend(MMC_REFSTRINGLIT(tmp205),tmp206);
      {
        const char* assert_cond = "(chwstCtrl1.TChiSetMax >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",39,5,39,152,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta207));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",39,5,39,152,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta207));
        }
      }
      tmp208 = 1;
    }
  }
  threadData->lastEquationSolved = 8116;
}

/*
equation index: 8117
type: ALGORITHM

  assert(chwstCtrl1.TChiSetMin >= 0.0, "Variable violating min constraint: 0.0 <= chwstCtrl1.TChiSetMin, has value: " + String(chwstCtrl1.TChiSetMin, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8117};
  modelica_boolean tmp209;
  static const MMC_DEFSTRINGLIT(tmp210,76,"Variable violating min constraint: 0.0 <= chwstCtrl1.TChiSetMin, has value: ");
  modelica_string tmp211;
  modelica_metatype tmpMeta212;
  static int tmp213 = 0;
  if(!tmp213)
  {
    tmp209 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* chwstCtrl1.TChiSetMin PARAM */),0.0);
    if(!tmp209)
    {
      tmp211 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* chwstCtrl1.TChiSetMin PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta212 = stringAppend(MMC_REFSTRINGLIT(tmp210),tmp211);
      {
        const char* assert_cond = "(chwstCtrl1.TChiSetMin >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",38,5,38,142,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta212));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",38,5,38,142,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta212));
        }
      }
      tmp213 = 1;
    }
  }
  threadData->lastEquationSolved = 8117;
}

/*
equation index: 8118
type: ALGORITHM

  assert(chwstCtrl1.TCHWRTSet >= 0.0, "Variable violating min constraint: 0.0 <= chwstCtrl1.TCHWRTSet, has value: " + String(chwstCtrl1.TCHWRTSet, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8118};
  modelica_boolean tmp214;
  static const MMC_DEFSTRINGLIT(tmp215,75,"Variable violating min constraint: 0.0 <= chwstCtrl1.TCHWRTSet, has value: ");
  modelica_string tmp216;
  modelica_metatype tmpMeta217;
  static int tmp218 = 0;
  if(!tmp218)
  {
    tmp214 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[423]] /* chwstCtrl1.TCHWRTSet PARAM */),0.0);
    if(!tmp214)
    {
      tmp216 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[423]] /* chwstCtrl1.TCHWRTSet PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta217 = stringAppend(MMC_REFSTRINGLIT(tmp215),tmp216);
      {
        const char* assert_cond = "(chwstCtrl1.TCHWRTSet >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",33,5,33,99,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta217));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",33,5,33,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta217));
        }
      }
      tmp218 = 1;
    }
  }
  threadData->lastEquationSolved = 8118;
}

/*
equation index: 8119
type: ALGORITHM

  assert(val8_2.kFixed >= 0.0, "Variable violating min constraint: 0.0 <= val8_2.kFixed, has value: " + String(val8_2.kFixed, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8119};
  modelica_boolean tmp219;
  static const MMC_DEFSTRINGLIT(tmp220,68,"Variable violating min constraint: 0.0 <= val8_2.kFixed, has value: ");
  modelica_string tmp221;
  modelica_metatype tmpMeta222;
  static int tmp223 = 0;
  if(!tmp223)
  {
    tmp219 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2807]] /* val8_2.kFixed PARAM */),0.0);
    if(!tmp219)
    {
      tmp221 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2807]] /* val8_2.kFixed PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta222 = stringAppend(MMC_REFSTRINGLIT(tmp220),tmp221);
      {
        const char* assert_cond = "(val8_2.kFixed >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",21,3,23,120,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta222));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",21,3,23,120,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta222));
        }
      }
      tmp223 = 1;
    }
  }
  threadData->lastEquationSolved = 8119;
}

/*
equation index: 8120
type: ALGORITHM

  assert(val8_2.l >= 1e-10 and val8_2.l <= 1.0, "Variable violating min/max constraint: 1e-10 <= val8_2.l <= 1.0, has value: " + String(val8_2.l, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8120};
  modelica_boolean tmp224;
  modelica_boolean tmp225;
  static const MMC_DEFSTRINGLIT(tmp226,76,"Variable violating min/max constraint: 1e-10 <= val8_2.l <= 1.0, has value: ");
  modelica_string tmp227;
  modelica_metatype tmpMeta228;
  static int tmp229 = 0;
  if(!tmp229)
  {
    tmp224 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2808]] /* val8_2.l PARAM */),1e-10);
    tmp225 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2808]] /* val8_2.l PARAM */),1.0);
    if(!(tmp224 && tmp225))
    {
      tmp227 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2808]] /* val8_2.l PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta228 = stringAppend(MMC_REFSTRINGLIT(tmp226),tmp227);
      {
        const char* assert_cond = "(val8_2.l >= 1e-10 and val8_2.l <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",17,3,18,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta228));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",17,3,18,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta228));
        }
      }
      tmp229 = 1;
    }
  }
  threadData->lastEquationSolved = 8120;
}

/*
equation index: 8121
type: ALGORITHM

  assert(val8_2.dpFixed_nominal >= 0.0, "Variable violating min constraint: 0.0 <= val8_2.dpFixed_nominal, has value: " + String(val8_2.dpFixed_nominal, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8121};
  modelica_boolean tmp230;
  static const MMC_DEFSTRINGLIT(tmp231,77,"Variable violating min constraint: 0.0 <= val8_2.dpFixed_nominal, has value: ");
  modelica_string tmp232;
  modelica_metatype tmpMeta233;
  static int tmp234 = 0;
  if(!tmp234)
  {
    tmp230 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2802]] /* val8_2.dpFixed_nominal PARAM */),0.0);
    if(!tmp230)
    {
      tmp232 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2802]] /* val8_2.dpFixed_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta233 = stringAppend(MMC_REFSTRINGLIT(tmp231),tmp232);
      {
        const char* assert_cond = "(val8_2.dpFixed_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",13,3,15,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta233));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",13,3,15,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta233));
        }
      }
      tmp234 = 1;
    }
  }
  threadData->lastEquationSolved = 8121;
}

/*
equation index: 8122
type: ALGORITHM

  assert(val8_2.init >= Modelica.Blocks.Types.Init.NoInit and val8_2.init <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= val8_2.init <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(val8_2.init, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8122};
  modelica_boolean tmp235;
  modelica_boolean tmp236;
  static const MMC_DEFSTRINGLIT(tmp237,144,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= val8_2.init <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp238;
  modelica_metatype tmpMeta239;
  static int tmp240 = 0;
  if(!tmp240)
  {
    tmp235 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[453]] /* val8_2.init PARAM */),1);
    tmp236 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[453]] /* val8_2.init PARAM */),4);
    if(!(tmp235 && tmp236))
    {
      tmp238 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[453]] /* val8_2.init PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta239 = stringAppend(MMC_REFSTRINGLIT(tmp237),tmp238);
      {
        const char* assert_cond = "(val8_2.init >= Modelica.Blocks.Types.Init.NoInit and val8_2.init <= Modelica.Blocks.Types.Init.InitialOutput)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ActuatorSignal.mo",13,3,15,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta239));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ActuatorSignal.mo",13,3,15,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta239));
        }
      }
      tmp240 = 1;
    }
  }
  threadData->lastEquationSolved = 8122;
}

/*
equation index: 8123
type: ALGORITHM

  assert(val8_2.order >= 1, "Variable violating min constraint: 1 <= val8_2.order, has value: " + String(val8_2.order, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8123};
  modelica_boolean tmp241;
  static const MMC_DEFSTRINGLIT(tmp242,65,"Variable violating min constraint: 1 <= val8_2.order, has value: ");
  modelica_string tmp243;
  modelica_metatype tmpMeta244;
  static int tmp245 = 0;
  if(!tmp245)
  {
    tmp241 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[454]] /* val8_2.order PARAM */),((modelica_integer) 1));
    if(!tmp241)
    {
      tmp243 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[454]] /* val8_2.order PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta244 = stringAppend(MMC_REFSTRINGLIT(tmp242),tmp243);
      {
        const char* assert_cond = "(val8_2.order >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ActuatorSignal.mo",11,3,12,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta244));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ActuatorSignal.mo",11,3,12,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta244));
        }
      }
      tmp245 = 1;
    }
  }
  threadData->lastEquationSolved = 8123;
}

/*
equation index: 8124
type: ALGORITHM

  assert(val8_2.rhoStd >= 0.0, "Variable violating min constraint: 0.0 <= val8_2.rhoStd, has value: " + String(val8_2.rhoStd, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8124};
  modelica_boolean tmp246;
  static const MMC_DEFSTRINGLIT(tmp247,68,"Variable violating min constraint: 0.0 <= val8_2.rhoStd, has value: ");
  modelica_string tmp248;
  modelica_metatype tmpMeta249;
  static int tmp250 = 0;
  if(!tmp250)
  {
    tmp246 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* val8_2.rhoStd PARAM */),0.0);
    if(!tmp246)
    {
      tmp248 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* val8_2.rhoStd PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta249 = stringAppend(MMC_REFSTRINGLIT(tmp247),tmp248);
      {
        const char* assert_cond = "(val8_2.rhoStd >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ValveParameters.mo",37,3,39,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta249));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ValveParameters.mo",37,3,39,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta249));
        }
      }
      tmp250 = 1;
    }
  }
  threadData->lastEquationSolved = 8124;
}

/*
equation index: 8125
type: ALGORITHM

  assert(val8_2.dpValve_nominal >= 0.0, "Variable violating min constraint: 0.0 <= val8_2.dpValve_nominal, has value: " + String(val8_2.dpValve_nominal, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8125};
  modelica_boolean tmp251;
  static const MMC_DEFSTRINGLIT(tmp252,77,"Variable violating min constraint: 0.0 <= val8_2.dpValve_nominal, has value: ");
  modelica_string tmp253;
  modelica_metatype tmpMeta254;
  static int tmp255 = 0;
  if(!tmp255)
  {
    tmp251 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2803]] /* val8_2.dpValve_nominal PARAM */),0.0);
    if(!tmp251)
    {
      tmp253 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2803]] /* val8_2.dpValve_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta254 = stringAppend(MMC_REFSTRINGLIT(tmp252),tmp253);
      {
        const char* assert_cond = "(val8_2.dpValve_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ValveParameters.mo",29,3,35,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta254));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ValveParameters.mo",29,3,35,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta254));
        }
      }
      tmp255 = 1;
    }
  }
  threadData->lastEquationSolved = 8125;
}

/*
equation index: 8126
type: ALGORITHM

  assert(val8_2.CvData >= Buildings.Fluid.Types.CvTypes.OpPoint and val8_2.CvData <= Buildings.Fluid.Types.CvTypes.Av, "Variable violating min/max constraint: Buildings.Fluid.Types.CvTypes.OpPoint <= val8_2.CvData <= Buildings.Fluid.Types.CvTypes.Av, has value: " + String(val8_2.CvData, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8126};
  modelica_boolean tmp256;
  modelica_boolean tmp257;
  static const MMC_DEFSTRINGLIT(tmp258,142,"Variable violating min/max constraint: Buildings.Fluid.Types.CvTypes.OpPoint <= val8_2.CvData <= Buildings.Fluid.Types.CvTypes.Av, has value: ");
  modelica_string tmp259;
  modelica_metatype tmpMeta260;
  static int tmp261 = 0;
  if(!tmp261)
  {
    tmp256 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[452]] /* val8_2.CvData PARAM */),1);
    tmp257 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[452]] /* val8_2.CvData PARAM */),4);
    if(!(tmp256 && tmp257))
    {
      tmp259 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[452]] /* val8_2.CvData PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta260 = stringAppend(MMC_REFSTRINGLIT(tmp258),tmp259);
      {
        const char* assert_cond = "(val8_2.CvData >= Buildings.Fluid.Types.CvTypes.OpPoint and val8_2.CvData <= Buildings.Fluid.Types.CvTypes.Av)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ValveParameters.mo",4,3,6,50,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta260));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/ValveParameters.mo",4,3,6,50,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta260));
        }
      }
      tmp261 = 1;
    }
  }
  threadData->lastEquationSolved = 8126;
}

/*
equation index: 8127
type: ALGORITHM

  assert(val8_2.sta_default.p >= 0.0 and val8_2.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= val8_2.sta_default.p <= 1e8, has value: " + String(val8_2.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8127};
  modelica_boolean tmp262;
  modelica_boolean tmp263;
  static const MMC_DEFSTRINGLIT(tmp264,86,"Variable violating min/max constraint: 0.0 <= val8_2.sta_default.p <= 1e8, has value: ");
  modelica_string tmp265;
  modelica_metatype tmpMeta266;
  static int tmp267 = 0;
  if(!tmp267)
  {
    tmp262 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2816]] /* val8_2.sta_default.p PARAM */),0.0);
    tmp263 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2816]] /* val8_2.sta_default.p PARAM */),1e8);
    if(!(tmp262 && tmp263))
    {
      tmp265 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2816]] /* val8_2.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta266 = stringAppend(MMC_REFSTRINGLIT(tmp264),tmp265);
      {
        const char* assert_cond = "(val8_2.sta_default.p >= 0.0 and val8_2.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta266));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta266));
        }
      }
      tmp267 = 1;
    }
  }
  threadData->lastEquationSolved = 8127;
}

/*
equation index: 8128
type: ALGORITHM

  assert(val8_2.sta_default.T >= 1.0 and val8_2.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= val8_2.sta_default.T <= 1e4, has value: " + String(val8_2.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8128};
  modelica_boolean tmp268;
  modelica_boolean tmp269;
  static const MMC_DEFSTRINGLIT(tmp270,86,"Variable violating min/max constraint: 1.0 <= val8_2.sta_default.T <= 1e4, has value: ");
  modelica_string tmp271;
  modelica_metatype tmpMeta272;
  static int tmp273 = 0;
  if(!tmp273)
  {
    tmp268 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2815]] /* val8_2.sta_default.T PARAM */),1.0);
    tmp269 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2815]] /* val8_2.sta_default.T PARAM */),1e4);
    if(!(tmp268 && tmp269))
    {
      tmp271 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2815]] /* val8_2.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta272 = stringAppend(MMC_REFSTRINGLIT(tmp270),tmp271);
      {
        const char* assert_cond = "(val8_2.sta_default.T >= 1.0 and val8_2.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta272));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta272));
        }
      }
      tmp273 = 1;
    }
  }
  threadData->lastEquationSolved = 8128;
}

/*
equation index: 8129
type: ALGORITHM

  assert(val8_2.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= val8_2.eta_default, has value: " + String(val8_2.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8129};
  modelica_boolean tmp274;
  static const MMC_DEFSTRINGLIT(tmp275,73,"Variable violating min constraint: 0.0 <= val8_2.eta_default, has value: ");
  modelica_string tmp276;
  modelica_metatype tmpMeta277;
  static int tmp278 = 0;
  if(!tmp278)
  {
    tmp274 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2806]] /* val8_2.eta_default PARAM */),0.0);
    if(!tmp274)
    {
      tmp276 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2806]] /* val8_2.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta277 = stringAppend(MMC_REFSTRINGLIT(tmp275),tmp276);
      {
        const char* assert_cond = "(val8_2.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta277));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta277));
        }
      }
      tmp278 = 1;
    }
  }
  threadData->lastEquationSolved = 8129;
}

/*
equation index: 8130
type: ALGORITHM

  assert(val8_2.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= val8_2.m_flow_turbulent, has value: " + String(val8_2.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8130};
  modelica_boolean tmp279;
  static const MMC_DEFSTRINGLIT(tmp280,78,"Variable violating min constraint: 0.0 <= val8_2.m_flow_turbulent, has value: ");
  modelica_string tmp281;
  modelica_metatype tmpMeta282;
  static int tmp283 = 0;
  if(!tmp283)
  {
    tmp279 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2812]] /* val8_2.m_flow_turbulent PARAM */),0.0);
    if(!tmp279)
    {
      tmp281 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2812]] /* val8_2.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta282 = stringAppend(MMC_REFSTRINGLIT(tmp280),tmp281);
      {
        const char* assert_cond = "(val8_2.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta282));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta282));
        }
      }
      tmp283 = 1;
    }
  }
  threadData->lastEquationSolved = 8130;
}

/*
equation index: 8131
type: ALGORITHM

  assert(val8_2.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= val8_2.m_flow_small, has value: " + String(val8_2.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8131};
  modelica_boolean tmp284;
  static const MMC_DEFSTRINGLIT(tmp285,74,"Variable violating min constraint: 0.0 <= val8_2.m_flow_small, has value: ");
  modelica_string tmp286;
  modelica_metatype tmpMeta287;
  static int tmp288 = 0;
  if(!tmp288)
  {
    tmp284 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2811]] /* val8_2.m_flow_small PARAM */),0.0);
    if(!tmp284)
    {
      tmp286 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2811]] /* val8_2.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta287 = stringAppend(MMC_REFSTRINGLIT(tmp285),tmp286);
      {
        const char* assert_cond = "(val8_2.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta287));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta287));
        }
      }
      tmp288 = 1;
    }
  }
  threadData->lastEquationSolved = 8131;
}

/*
equation index: 8132
type: ALGORITHM

  assert(junCHWSup2.deltaM >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.deltaM, has value: " + String(junCHWSup2.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8132};
  modelica_boolean tmp289;
  static const MMC_DEFSTRINGLIT(tmp290,72,"Variable violating min constraint: 0.0 <= junCHWSup2.deltaM, has value: ");
  modelica_string tmp291;
  modelica_metatype tmpMeta292;
  static int tmp293 = 0;
  if(!tmp293)
  {
    tmp289 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1871]] /* junCHWSup2.deltaM PARAM */),0.0);
    if(!tmp289)
    {
      tmp291 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1871]] /* junCHWSup2.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta292 = stringAppend(MMC_REFSTRINGLIT(tmp290),tmp291);
      {
        const char* assert_cond = "(junCHWSup2.deltaM >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/Junction.mo",37,3,40,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta292));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/Junction.mo",37,3,40,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta292));
        }
      }
      tmp293 = 1;
    }
  }
  threadData->lastEquationSolved = 8132;
}

/*
equation index: 8133
type: ALGORITHM

  assert(junCHWSup2.vol.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.vol.m_flow_nominal, has value: " + String(junCHWSup2.vol.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8133};
  modelica_boolean tmp294;
  static const MMC_DEFSTRINGLIT(tmp295,84,"Variable violating min constraint: 0.0 <= junCHWSup2.vol.m_flow_nominal, has value: ");
  modelica_string tmp296;
  modelica_metatype tmpMeta297;
  static int tmp298 = 0;
  if(!tmp298)
  {
    tmp294 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1942]] /* junCHWSup2.vol.m_flow_nominal PARAM */),0.0);
    if(!tmp294)
    {
      tmp296 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1942]] /* junCHWSup2.vol.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta297 = stringAppend(MMC_REFSTRINGLIT(tmp295),tmp296);
      {
        const char* assert_cond = "(junCHWSup2.vol.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,22,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta297));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,22,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta297));
        }
      }
      tmp298 = 1;
    }
  }
  threadData->lastEquationSolved = 8133;
}

/*
equation index: 8134
type: ALGORITHM

  assert(junCHWSup2.T_start >= 1.0 and junCHWSup2.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.T_start <= 1e4, has value: " + String(junCHWSup2.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8134};
  modelica_boolean tmp299;
  modelica_boolean tmp300;
  static const MMC_DEFSTRINGLIT(tmp301,84,"Variable violating min/max constraint: 1.0 <= junCHWSup2.T_start <= 1e4, has value: ");
  modelica_string tmp302;
  modelica_metatype tmpMeta303;
  static int tmp304 = 0;
  if(!tmp304)
  {
    tmp299 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1869]] /* junCHWSup2.T_start PARAM */),1.0);
    tmp300 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1869]] /* junCHWSup2.T_start PARAM */),1e4);
    if(!(tmp299 && tmp300))
    {
      tmp302 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1869]] /* junCHWSup2.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta303 = stringAppend(MMC_REFSTRINGLIT(tmp301),tmp302);
      {
        const char* assert_cond = "(junCHWSup2.T_start >= 1.0 and junCHWSup2.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta303));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta303));
        }
      }
      tmp304 = 1;
    }
  }
  threadData->lastEquationSolved = 8134;
}

/*
equation index: 8135
type: ALGORITHM

  assert(junCHWSup2.vol.T_start >= 1.0 and junCHWSup2.vol.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.T_start <= 1e4, has value: " + String(junCHWSup2.vol.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8135};
  modelica_boolean tmp305;
  modelica_boolean tmp306;
  static const MMC_DEFSTRINGLIT(tmp307,88,"Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.T_start <= 1e4, has value: ");
  modelica_string tmp308;
  modelica_metatype tmpMeta309;
  static int tmp310 = 0;
  if(!tmp310)
  {
    tmp305 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junCHWSup2.vol.T_start PARAM */),1.0);
    tmp306 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junCHWSup2.vol.T_start PARAM */),1e4);
    if(!(tmp305 && tmp306))
    {
      tmp308 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junCHWSup2.vol.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta309 = stringAppend(MMC_REFSTRINGLIT(tmp307),tmp308);
      {
        const char* assert_cond = "(junCHWSup2.vol.T_start >= 1.0 and junCHWSup2.vol.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta309));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta309));
        }
      }
      tmp310 = 1;
    }
  }
  threadData->lastEquationSolved = 8135;
}

/*
equation index: 8136
type: ALGORITHM

  assert(junCHWSup2.vol.state_start.T >= 1.0 and junCHWSup2.vol.state_start.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.state_start.T <= 1e4, has value: " + String(junCHWSup2.vol.state_start.T, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8136};
  modelica_boolean tmp311;
  modelica_boolean tmp312;
  static const MMC_DEFSTRINGLIT(tmp313,94,"Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.state_start.T <= 1e4, has value: ");
  modelica_string tmp314;
  modelica_metatype tmpMeta315;
  static int tmp316 = 0;
  if(!tmp316)
  {
    tmp311 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1949]] /* junCHWSup2.vol.state_start.T PARAM */),1.0);
    tmp312 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1949]] /* junCHWSup2.vol.state_start.T PARAM */),1e4);
    if(!(tmp311 && tmp312))
    {
      tmp314 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1949]] /* junCHWSup2.vol.state_start.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta315 = stringAppend(MMC_REFSTRINGLIT(tmp313),tmp314);
      {
        const char* assert_cond = "(junCHWSup2.vol.state_start.T >= 1.0 and junCHWSup2.vol.state_start.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta315));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta315));
        }
      }
      tmp316 = 1;
    }
  }
  threadData->lastEquationSolved = 8136;
}

/*
equation index: 8137
type: ALGORITHM

  assert(junCHWSup2.p_start >= 0.0 and junCHWSup2.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.p_start <= 1e8, has value: " + String(junCHWSup2.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8137};
  modelica_boolean tmp317;
  modelica_boolean tmp318;
  static const MMC_DEFSTRINGLIT(tmp319,84,"Variable violating min/max constraint: 0.0 <= junCHWSup2.p_start <= 1e8, has value: ");
  modelica_string tmp320;
  modelica_metatype tmpMeta321;
  static int tmp322 = 0;
  if(!tmp322)
  {
    tmp317 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1881]] /* junCHWSup2.p_start PARAM */),0.0);
    tmp318 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1881]] /* junCHWSup2.p_start PARAM */),1e8);
    if(!(tmp317 && tmp318))
    {
      tmp320 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1881]] /* junCHWSup2.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta321 = stringAppend(MMC_REFSTRINGLIT(tmp319),tmp320);
      {
        const char* assert_cond = "(junCHWSup2.p_start >= 0.0 and junCHWSup2.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta321));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta321));
        }
      }
      tmp322 = 1;
    }
  }
  threadData->lastEquationSolved = 8137;
}

/*
equation index: 8138
type: ALGORITHM

  assert(junCHWSup2.vol.p_start >= 0.0 and junCHWSup2.vol.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.p_start <= 1e8, has value: " + String(junCHWSup2.vol.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8138};
  modelica_boolean tmp323;
  modelica_boolean tmp324;
  static const MMC_DEFSTRINGLIT(tmp325,88,"Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.p_start <= 1e8, has value: ");
  modelica_string tmp326;
  modelica_metatype tmpMeta327;
  static int tmp328 = 0;
  if(!tmp328)
  {
    tmp323 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1944]] /* junCHWSup2.vol.p_start PARAM */),0.0);
    tmp324 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1944]] /* junCHWSup2.vol.p_start PARAM */),1e8);
    if(!(tmp323 && tmp324))
    {
      tmp326 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1944]] /* junCHWSup2.vol.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta327 = stringAppend(MMC_REFSTRINGLIT(tmp325),tmp326);
      {
        const char* assert_cond = "(junCHWSup2.vol.p_start >= 0.0 and junCHWSup2.vol.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta327));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta327));
        }
      }
      tmp328 = 1;
    }
  }
  threadData->lastEquationSolved = 8138;
}

/*
equation index: 8139
type: ALGORITHM

  assert(junCHWSup2.vol.state_start.p >= 0.0 and junCHWSup2.vol.state_start.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.state_start.p <= 1e8, has value: " + String(junCHWSup2.vol.state_start.p, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8139};
  modelica_boolean tmp329;
  modelica_boolean tmp330;
  static const MMC_DEFSTRINGLIT(tmp331,94,"Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.state_start.p <= 1e8, has value: ");
  modelica_string tmp332;
  modelica_metatype tmpMeta333;
  static int tmp334 = 0;
  if(!tmp334)
  {
    tmp329 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1950]] /* junCHWSup2.vol.state_start.p PARAM */),0.0);
    tmp330 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1950]] /* junCHWSup2.vol.state_start.p PARAM */),1e8);
    if(!(tmp329 && tmp330))
    {
      tmp332 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1950]] /* junCHWSup2.vol.state_start.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta333 = stringAppend(MMC_REFSTRINGLIT(tmp331),tmp332);
      {
        const char* assert_cond = "(junCHWSup2.vol.state_start.p >= 0.0 and junCHWSup2.vol.state_start.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta333));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta333));
        }
      }
      tmp334 = 1;
    }
  }
  threadData->lastEquationSolved = 8139;
}

/*
equation index: 8140
type: ALGORITHM

  assert(junCHWSup2.vol.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.vol.rho_default, has value: " + String(junCHWSup2.vol.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8140};
  modelica_boolean tmp335;
  static const MMC_DEFSTRINGLIT(tmp336,81,"Variable violating min constraint: 0.0 <= junCHWSup2.vol.rho_default, has value: ");
  modelica_string tmp337;
  modelica_metatype tmpMeta338;
  static int tmp339 = 0;
  if(!tmp339)
  {
    tmp335 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1945]] /* junCHWSup2.vol.rho_default PARAM */),0.0);
    if(!tmp335)
    {
      tmp337 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1945]] /* junCHWSup2.vol.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta338 = stringAppend(MMC_REFSTRINGLIT(tmp336),tmp337);
      {
        const char* assert_cond = "(junCHWSup2.vol.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",90,3,91,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta338));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",90,3,91,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta338));
        }
      }
      tmp339 = 1;
    }
  }
  threadData->lastEquationSolved = 8140;
}

/*
equation index: 8141
type: ALGORITHM

  assert(junCHWSup2.vol.state_default.T >= 1.0 and junCHWSup2.vol.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.state_default.T <= 1e4, has value: " + String(junCHWSup2.vol.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8141};
  modelica_boolean tmp340;
  modelica_boolean tmp341;
  static const MMC_DEFSTRINGLIT(tmp342,96,"Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.state_default.T <= 1e4, has value: ");
  modelica_string tmp343;
  modelica_metatype tmpMeta344;
  static int tmp345 = 0;
  if(!tmp345)
  {
    tmp340 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1947]] /* junCHWSup2.vol.state_default.T PARAM */),1.0);
    tmp341 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1947]] /* junCHWSup2.vol.state_default.T PARAM */),1e4);
    if(!(tmp340 && tmp341))
    {
      tmp343 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1947]] /* junCHWSup2.vol.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta344 = stringAppend(MMC_REFSTRINGLIT(tmp342),tmp343);
      {
        const char* assert_cond = "(junCHWSup2.vol.state_default.T >= 1.0 and junCHWSup2.vol.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta344));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta344));
        }
      }
      tmp345 = 1;
    }
  }
  threadData->lastEquationSolved = 8141;
}

/*
equation index: 8142
type: ALGORITHM

  assert(junCHWSup2.vol.state_default.p >= 0.0 and junCHWSup2.vol.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.state_default.p <= 1e8, has value: " + String(junCHWSup2.vol.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8142};
  modelica_boolean tmp346;
  modelica_boolean tmp347;
  static const MMC_DEFSTRINGLIT(tmp348,96,"Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.state_default.p <= 1e8, has value: ");
  modelica_string tmp349;
  modelica_metatype tmpMeta350;
  static int tmp351 = 0;
  if(!tmp351)
  {
    tmp346 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1948]] /* junCHWSup2.vol.state_default.p PARAM */),0.0);
    tmp347 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1948]] /* junCHWSup2.vol.state_default.p PARAM */),1e8);
    if(!(tmp346 && tmp347))
    {
      tmp349 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1948]] /* junCHWSup2.vol.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta350 = stringAppend(MMC_REFSTRINGLIT(tmp348),tmp349);
      {
        const char* assert_cond = "(junCHWSup2.vol.state_default.p >= 0.0 and junCHWSup2.vol.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta350));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta350));
        }
      }
      tmp351 = 1;
    }
  }
  threadData->lastEquationSolved = 8142;
}

/*
equation index: 8143
type: ALGORITHM

  assert(junCHWSup2.vol.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.vol.rho_start, has value: " + String(junCHWSup2.vol.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8143};
  modelica_boolean tmp352;
  static const MMC_DEFSTRINGLIT(tmp353,79,"Variable violating min constraint: 0.0 <= junCHWSup2.vol.rho_start, has value: ");
  modelica_string tmp354;
  modelica_metatype tmpMeta355;
  static int tmp356 = 0;
  if(!tmp356)
  {
    tmp352 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1946]] /* junCHWSup2.vol.rho_start PARAM */),0.0);
    if(!tmp352)
    {
      tmp354 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1946]] /* junCHWSup2.vol.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta355 = stringAppend(MMC_REFSTRINGLIT(tmp353),tmp354);
      {
        const char* assert_cond = "(junCHWSup2.vol.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",83,3,84,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta355));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",83,3,84,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta355));
        }
      }
      tmp356 = 1;
    }
  }
  threadData->lastEquationSolved = 8143;
}

/*
equation index: 8144
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.p_start >= 0.0 and junCHWSup2.vol.dynBal.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.dynBal.p_start <= 1e8, has value: " + String(junCHWSup2.vol.dynBal.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8144};
  modelica_boolean tmp357;
  modelica_boolean tmp358;
  static const MMC_DEFSTRINGLIT(tmp359,95,"Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.dynBal.p_start <= 1e8, has value: ");
  modelica_string tmp360;
  modelica_metatype tmpMeta361;
  static int tmp362 = 0;
  if(!tmp362)
  {
    tmp357 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1936]] /* junCHWSup2.vol.dynBal.p_start PARAM */),0.0);
    tmp358 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1936]] /* junCHWSup2.vol.dynBal.p_start PARAM */),1e8);
    if(!(tmp357 && tmp358))
    {
      tmp360 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1936]] /* junCHWSup2.vol.dynBal.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta361 = stringAppend(MMC_REFSTRINGLIT(tmp359),tmp360);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.p_start >= 0.0 and junCHWSup2.vol.dynBal.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta361));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta361));
        }
      }
      tmp362 = 1;
    }
  }
  threadData->lastEquationSolved = 8144;
}

/*
equation index: 8145
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.T_start >= 1.0 and junCHWSup2.vol.dynBal.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.dynBal.T_start <= 1e4, has value: " + String(junCHWSup2.vol.dynBal.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8145};
  modelica_boolean tmp363;
  modelica_boolean tmp364;
  static const MMC_DEFSTRINGLIT(tmp365,95,"Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.dynBal.T_start <= 1e4, has value: ");
  modelica_string tmp366;
  modelica_metatype tmpMeta367;
  static int tmp368 = 0;
  if(!tmp368)
  {
    tmp363 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1930]] /* junCHWSup2.vol.dynBal.T_start PARAM */),1.0);
    tmp364 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1930]] /* junCHWSup2.vol.dynBal.T_start PARAM */),1e4);
    if(!(tmp363 && tmp364))
    {
      tmp366 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1930]] /* junCHWSup2.vol.dynBal.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta367 = stringAppend(MMC_REFSTRINGLIT(tmp365),tmp366);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.T_start >= 1.0 and junCHWSup2.vol.dynBal.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta367));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta367));
        }
      }
      tmp368 = 1;
    }
  }
  threadData->lastEquationSolved = 8145;
}

/*
equation index: 8146
type: ALGORITHM

  assert(junCHWSup2.X_start[1] >= 0.0 and junCHWSup2.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWSup2.X_start[1] <= 1.0, has value: " + String(junCHWSup2.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8146};
  modelica_boolean tmp369;
  modelica_boolean tmp370;
  static const MMC_DEFSTRINGLIT(tmp371,87,"Variable violating min/max constraint: 0.0 <= junCHWSup2.X_start[1] <= 1.0, has value: ");
  modelica_string tmp372;
  modelica_metatype tmpMeta373;
  static int tmp374 = 0;
  if(!tmp374)
  {
    tmp369 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1870]] /* junCHWSup2.X_start[1] PARAM */),0.0);
    tmp370 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1870]] /* junCHWSup2.X_start[1] PARAM */),1.0);
    if(!(tmp369 && tmp370))
    {
      tmp372 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1870]] /* junCHWSup2.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta373 = stringAppend(MMC_REFSTRINGLIT(tmp371),tmp372);
      {
        const char* assert_cond = "(junCHWSup2.X_start[1] >= 0.0 and junCHWSup2.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta373));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta373));
        }
      }
      tmp374 = 1;
    }
  }
  threadData->lastEquationSolved = 8146;
}

/*
equation index: 8147
type: ALGORITHM

  assert(junCHWSup2.vol.X_start[1] >= 0.0 and junCHWSup2.vol.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.X_start[1] <= 1.0, has value: " + String(junCHWSup2.vol.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8147};
  modelica_boolean tmp375;
  modelica_boolean tmp376;
  static const MMC_DEFSTRINGLIT(tmp377,91,"Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.X_start[1] <= 1.0, has value: ");
  modelica_string tmp378;
  modelica_metatype tmpMeta379;
  static int tmp380 = 0;
  if(!tmp380)
  {
    tmp375 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1928]] /* junCHWSup2.vol.X_start[1] PARAM */),0.0);
    tmp376 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1928]] /* junCHWSup2.vol.X_start[1] PARAM */),1.0);
    if(!(tmp375 && tmp376))
    {
      tmp378 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1928]] /* junCHWSup2.vol.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta379 = stringAppend(MMC_REFSTRINGLIT(tmp377),tmp378);
      {
        const char* assert_cond = "(junCHWSup2.vol.X_start[1] >= 0.0 and junCHWSup2.vol.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta379));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta379));
        }
      }
      tmp380 = 1;
    }
  }
  threadData->lastEquationSolved = 8147;
}

/*
equation index: 8148
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.X_start[1] >= 0.0 and junCHWSup2.vol.dynBal.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.dynBal.X_start[1] <= 1.0, has value: " + String(junCHWSup2.vol.dynBal.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8148};
  modelica_boolean tmp381;
  modelica_boolean tmp382;
  static const MMC_DEFSTRINGLIT(tmp383,98,"Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.dynBal.X_start[1] <= 1.0, has value: ");
  modelica_string tmp384;
  modelica_metatype tmpMeta385;
  static int tmp386 = 0;
  if(!tmp386)
  {
    tmp381 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1931]] /* junCHWSup2.vol.dynBal.X_start[1] PARAM */),0.0);
    tmp382 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1931]] /* junCHWSup2.vol.dynBal.X_start[1] PARAM */),1.0);
    if(!(tmp381 && tmp382))
    {
      tmp384 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1931]] /* junCHWSup2.vol.dynBal.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta385 = stringAppend(MMC_REFSTRINGLIT(tmp383),tmp384);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.X_start[1] >= 0.0 and junCHWSup2.vol.dynBal.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta385));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta385));
        }
      }
      tmp386 = 1;
    }
  }
  threadData->lastEquationSolved = 8148;
}

/*
equation index: 8149
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.vol.dynBal.rho_default, has value: " + String(junCHWSup2.vol.dynBal.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8149};
  modelica_boolean tmp387;
  static const MMC_DEFSTRINGLIT(tmp388,88,"Variable violating min constraint: 0.0 <= junCHWSup2.vol.dynBal.rho_default, has value: ");
  modelica_string tmp389;
  modelica_metatype tmpMeta390;
  static int tmp391 = 0;
  if(!tmp391)
  {
    tmp387 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1937]] /* junCHWSup2.vol.dynBal.rho_default PARAM */),0.0);
    if(!tmp387)
    {
      tmp389 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1937]] /* junCHWSup2.vol.dynBal.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta390 = stringAppend(MMC_REFSTRINGLIT(tmp388),tmp389);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",145,3,146,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta390));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",145,3,146,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta390));
        }
      }
      tmp391 = 1;
    }
  }
  threadData->lastEquationSolved = 8149;
}

/*
equation index: 8150
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.state_default.T >= 1.0 and junCHWSup2.vol.dynBal.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.dynBal.state_default.T <= 1e4, has value: " + String(junCHWSup2.vol.dynBal.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8150};
  modelica_boolean tmp392;
  modelica_boolean tmp393;
  static const MMC_DEFSTRINGLIT(tmp394,103,"Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.dynBal.state_default.T <= 1e4, has value: ");
  modelica_string tmp395;
  modelica_metatype tmpMeta396;
  static int tmp397 = 0;
  if(!tmp397)
  {
    tmp392 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1939]] /* junCHWSup2.vol.dynBal.state_default.T PARAM */),1.0);
    tmp393 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1939]] /* junCHWSup2.vol.dynBal.state_default.T PARAM */),1e4);
    if(!(tmp392 && tmp393))
    {
      tmp395 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1939]] /* junCHWSup2.vol.dynBal.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta396 = stringAppend(MMC_REFSTRINGLIT(tmp394),tmp395);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.state_default.T >= 1.0 and junCHWSup2.vol.dynBal.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta396));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta396));
        }
      }
      tmp397 = 1;
    }
  }
  threadData->lastEquationSolved = 8150;
}

/*
equation index: 8151
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.state_default.p >= 0.0 and junCHWSup2.vol.dynBal.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.dynBal.state_default.p <= 1e8, has value: " + String(junCHWSup2.vol.dynBal.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8151};
  modelica_boolean tmp398;
  modelica_boolean tmp399;
  static const MMC_DEFSTRINGLIT(tmp400,103,"Variable violating min/max constraint: 0.0 <= junCHWSup2.vol.dynBal.state_default.p <= 1e8, has value: ");
  modelica_string tmp401;
  modelica_metatype tmpMeta402;
  static int tmp403 = 0;
  if(!tmp403)
  {
    tmp398 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1940]] /* junCHWSup2.vol.dynBal.state_default.p PARAM */),0.0);
    tmp399 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1940]] /* junCHWSup2.vol.dynBal.state_default.p PARAM */),1e8);
    if(!(tmp398 && tmp399))
    {
      tmp401 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1940]] /* junCHWSup2.vol.dynBal.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta402 = stringAppend(MMC_REFSTRINGLIT(tmp400),tmp401);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.state_default.p >= 0.0 and junCHWSup2.vol.dynBal.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta402));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta402));
        }
      }
      tmp403 = 1;
    }
  }
  threadData->lastEquationSolved = 8151;
}

/*
equation index: 8152
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.vol.dynBal.rho_start, has value: " + String(junCHWSup2.vol.dynBal.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8152};
  modelica_boolean tmp404;
  static const MMC_DEFSTRINGLIT(tmp405,86,"Variable violating min constraint: 0.0 <= junCHWSup2.vol.dynBal.rho_start, has value: ");
  modelica_string tmp406;
  modelica_metatype tmpMeta407;
  static int tmp408 = 0;
  if(!tmp408)
  {
    tmp404 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1938]] /* junCHWSup2.vol.dynBal.rho_start PARAM */),0.0);
    if(!tmp404)
    {
      tmp406 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1938]] /* junCHWSup2.vol.dynBal.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta407 = stringAppend(MMC_REFSTRINGLIT(tmp405),tmp406);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",131,3,135,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta407));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",131,3,135,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta407));
        }
      }
      tmp408 = 1;
    }
  }
  threadData->lastEquationSolved = 8152;
}

/*
equation index: 8153
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= junCHWSup2.vol.dynBal.mSenFac, has value: " + String(junCHWSup2.vol.dynBal.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8153};
  modelica_boolean tmp409;
  static const MMC_DEFSTRINGLIT(tmp410,84,"Variable violating min constraint: 1.0 <= junCHWSup2.vol.dynBal.mSenFac, has value: ");
  modelica_string tmp411;
  modelica_metatype tmpMeta412;
  static int tmp413 = 0;
  if(!tmp413)
  {
    tmp409 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1935]] /* junCHWSup2.vol.dynBal.mSenFac PARAM */),1.0);
    if(!tmp409)
    {
      tmp411 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1935]] /* junCHWSup2.vol.dynBal.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta412 = stringAppend(MMC_REFSTRINGLIT(tmp410),tmp411);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta412));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta412));
        }
      }
      tmp413 = 1;
    }
  }
  threadData->lastEquationSolved = 8153;
}

/*
equation index: 8154
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.vol.dynBal.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8154};
  modelica_boolean tmp414;
  modelica_boolean tmp415;
  static const MMC_DEFSTRINGLIT(tmp416,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp417;
  modelica_metatype tmpMeta418;
  static int tmp419 = 0;
  if(!tmp419)
  {
    tmp414 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[297]] /* junCHWSup2.vol.dynBal.traceDynamics PARAM */),1);
    tmp415 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[297]] /* junCHWSup2.vol.dynBal.traceDynamics PARAM */),4);
    if(!(tmp414 && tmp415))
    {
      tmp417 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[297]] /* junCHWSup2.vol.dynBal.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta418 = stringAppend(MMC_REFSTRINGLIT(tmp416),tmp417);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta418));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta418));
        }
      }
      tmp419 = 1;
    }
  }
  threadData->lastEquationSolved = 8154;
}

/*
equation index: 8155
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.vol.dynBal.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8155};
  modelica_boolean tmp420;
  modelica_boolean tmp421;
  static const MMC_DEFSTRINGLIT(tmp422,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp423;
  modelica_metatype tmpMeta424;
  static int tmp425 = 0;
  if(!tmp425)
  {
    tmp420 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[296]] /* junCHWSup2.vol.dynBal.substanceDynamics PARAM */),1);
    tmp421 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[296]] /* junCHWSup2.vol.dynBal.substanceDynamics PARAM */),4);
    if(!(tmp420 && tmp421))
    {
      tmp423 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[296]] /* junCHWSup2.vol.dynBal.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta424 = stringAppend(MMC_REFSTRINGLIT(tmp422),tmp423);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta424));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta424));
        }
      }
      tmp425 = 1;
    }
  }
  threadData->lastEquationSolved = 8155;
}

/*
equation index: 8156
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.vol.dynBal.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8156};
  modelica_boolean tmp426;
  modelica_boolean tmp427;
  static const MMC_DEFSTRINGLIT(tmp428,183,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp429;
  modelica_metatype tmpMeta430;
  static int tmp431 = 0;
  if(!tmp431)
  {
    tmp426 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[294]] /* junCHWSup2.vol.dynBal.massDynamics PARAM */),1);
    tmp427 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[294]] /* junCHWSup2.vol.dynBal.massDynamics PARAM */),4);
    if(!(tmp426 && tmp427))
    {
      tmp429 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[294]] /* junCHWSup2.vol.dynBal.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta430 = stringAppend(MMC_REFSTRINGLIT(tmp428),tmp429);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta430));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta430));
        }
      }
      tmp431 = 1;
    }
  }
  threadData->lastEquationSolved = 8156;
}

/*
equation index: 8157
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.vol.dynBal.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8157};
  modelica_boolean tmp432;
  modelica_boolean tmp433;
  static const MMC_DEFSTRINGLIT(tmp434,185,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp435;
  modelica_metatype tmpMeta436;
  static int tmp437 = 0;
  if(!tmp437)
  {
    tmp432 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[293]] /* junCHWSup2.vol.dynBal.energyDynamics PARAM */),1);
    tmp433 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[293]] /* junCHWSup2.vol.dynBal.energyDynamics PARAM */),4);
    if(!(tmp432 && tmp433))
    {
      tmp435 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[293]] /* junCHWSup2.vol.dynBal.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta436 = stringAppend(MMC_REFSTRINGLIT(tmp434),tmp435);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta436));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta436));
        }
      }
      tmp437 = 1;
    }
  }
  threadData->lastEquationSolved = 8157;
}

/*
equation index: 8158
type: ALGORITHM

  assert(junCHWSup2.vol.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.vol.m_flow_small, has value: " + String(junCHWSup2.vol.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8158};
  modelica_boolean tmp438;
  static const MMC_DEFSTRINGLIT(tmp439,82,"Variable violating min constraint: 0.0 <= junCHWSup2.vol.m_flow_small, has value: ");
  modelica_string tmp440;
  modelica_metatype tmpMeta441;
  static int tmp442 = 0;
  if(!tmp442)
  {
    tmp438 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1943]] /* junCHWSup2.vol.m_flow_small PARAM */),0.0);
    if(!tmp438)
    {
      tmp440 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1943]] /* junCHWSup2.vol.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta441 = stringAppend(MMC_REFSTRINGLIT(tmp439),tmp440);
      {
        const char* assert_cond = "(junCHWSup2.vol.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",26,3,28,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta441));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",26,3,28,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta441));
        }
      }
      tmp442 = 1;
    }
  }
  threadData->lastEquationSolved = 8158;
}

/*
equation index: 8159
type: ALGORITHM

  assert(junCHWSup2.vol.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= junCHWSup2.vol.mSenFac, has value: " + String(junCHWSup2.vol.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8159};
  modelica_boolean tmp443;
  static const MMC_DEFSTRINGLIT(tmp444,77,"Variable violating min constraint: 1.0 <= junCHWSup2.vol.mSenFac, has value: ");
  modelica_string tmp445;
  modelica_metatype tmpMeta446;
  static int tmp447 = 0;
  if(!tmp447)
  {
    tmp443 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1941]] /* junCHWSup2.vol.mSenFac PARAM */),1.0);
    if(!tmp443)
    {
      tmp445 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1941]] /* junCHWSup2.vol.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta446 = stringAppend(MMC_REFSTRINGLIT(tmp444),tmp445);
      {
        const char* assert_cond = "(junCHWSup2.vol.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta446));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta446));
        }
      }
      tmp447 = 1;
    }
  }
  threadData->lastEquationSolved = 8159;
}

/*
equation index: 8160
type: ALGORITHM

  assert(junCHWSup2.vol.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.vol.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8160};
  modelica_boolean tmp448;
  modelica_boolean tmp449;
  static const MMC_DEFSTRINGLIT(tmp450,177,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp451;
  modelica_metatype tmpMeta452;
  static int tmp453 = 0;
  if(!tmp453)
  {
    tmp448 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[302]] /* junCHWSup2.vol.traceDynamics PARAM */),1);
    tmp449 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[302]] /* junCHWSup2.vol.traceDynamics PARAM */),4);
    if(!(tmp448 && tmp449))
    {
      tmp451 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[302]] /* junCHWSup2.vol.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta452 = stringAppend(MMC_REFSTRINGLIT(tmp450),tmp451);
      {
        const char* assert_cond = "(junCHWSup2.vol.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta452));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta452));
        }
      }
      tmp453 = 1;
    }
  }
  threadData->lastEquationSolved = 8160;
}

/*
equation index: 8161
type: ALGORITHM

  assert(junCHWSup2.vol.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.vol.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8161};
  modelica_boolean tmp454;
  modelica_boolean tmp455;
  static const MMC_DEFSTRINGLIT(tmp456,181,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp457;
  modelica_metatype tmpMeta458;
  static int tmp459 = 0;
  if(!tmp459)
  {
    tmp454 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[301]] /* junCHWSup2.vol.substanceDynamics PARAM */),1);
    tmp455 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[301]] /* junCHWSup2.vol.substanceDynamics PARAM */),4);
    if(!(tmp454 && tmp455))
    {
      tmp457 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[301]] /* junCHWSup2.vol.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta458 = stringAppend(MMC_REFSTRINGLIT(tmp456),tmp457);
      {
        const char* assert_cond = "(junCHWSup2.vol.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta458));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta458));
        }
      }
      tmp459 = 1;
    }
  }
  threadData->lastEquationSolved = 8161;
}

/*
equation index: 8162
type: ALGORITHM

  assert(junCHWSup2.vol.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.vol.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8162};
  modelica_boolean tmp460;
  modelica_boolean tmp461;
  static const MMC_DEFSTRINGLIT(tmp462,176,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp463;
  modelica_metatype tmpMeta464;
  static int tmp465 = 0;
  if(!tmp465)
  {
    tmp460 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[299]] /* junCHWSup2.vol.massDynamics PARAM */),1);
    tmp461 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[299]] /* junCHWSup2.vol.massDynamics PARAM */),4);
    if(!(tmp460 && tmp461))
    {
      tmp463 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[299]] /* junCHWSup2.vol.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta464 = stringAppend(MMC_REFSTRINGLIT(tmp462),tmp463);
      {
        const char* assert_cond = "(junCHWSup2.vol.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta464));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta464));
        }
      }
      tmp465 = 1;
    }
  }
  threadData->lastEquationSolved = 8162;
}

/*
equation index: 8163
type: ALGORITHM

  assert(junCHWSup2.vol.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.vol.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8163};
  modelica_boolean tmp466;
  modelica_boolean tmp467;
  static const MMC_DEFSTRINGLIT(tmp468,178,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp469;
  modelica_metatype tmpMeta470;
  static int tmp471 = 0;
  if(!tmp471)
  {
    tmp466 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[298]] /* junCHWSup2.vol.energyDynamics PARAM */),1);
    tmp467 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[298]] /* junCHWSup2.vol.energyDynamics PARAM */),4);
    if(!(tmp466 && tmp467))
    {
      tmp469 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[298]] /* junCHWSup2.vol.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta470 = stringAppend(MMC_REFSTRINGLIT(tmp468),tmp469);
      {
        const char* assert_cond = "(junCHWSup2.vol.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta470));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta470));
        }
      }
      tmp471 = 1;
    }
  }
  threadData->lastEquationSolved = 8163;
}

/*
equation index: 8164
type: ALGORITHM

  assert(junCHWSup2.res3.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= junCHWSup2.res3.deltaM, has value: " + String(junCHWSup2.res3.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8164};
  modelica_boolean tmp472;
  static const MMC_DEFSTRINGLIT(tmp473,78,"Variable violating min constraint: 1e-6 <= junCHWSup2.res3.deltaM, has value: ");
  modelica_string tmp474;
  modelica_metatype tmpMeta475;
  static int tmp476 = 0;
  if(!tmp476)
  {
    tmp472 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1913]] /* junCHWSup2.res3.deltaM PARAM */),1e-6);
    if(!tmp472)
    {
      tmp474 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1913]] /* junCHWSup2.res3.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta475 = stringAppend(MMC_REFSTRINGLIT(tmp473),tmp474);
      {
        const char* assert_cond = "(junCHWSup2.res3.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta475));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta475));
        }
      }
      tmp476 = 1;
    }
  }
  threadData->lastEquationSolved = 8164;
}

/*
equation index: 8165
type: ALGORITHM

  assert(junCHWSup2.res3.sta_default.p >= 0.0 and junCHWSup2.res3.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.res3.sta_default.p <= 1e8, has value: " + String(junCHWSup2.res3.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8165};
  modelica_boolean tmp477;
  modelica_boolean tmp478;
  static const MMC_DEFSTRINGLIT(tmp479,95,"Variable violating min/max constraint: 0.0 <= junCHWSup2.res3.sta_default.p <= 1e8, has value: ");
  modelica_string tmp480;
  modelica_metatype tmpMeta481;
  static int tmp482 = 0;
  if(!tmp482)
  {
    tmp477 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1923]] /* junCHWSup2.res3.sta_default.p PARAM */),0.0);
    tmp478 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1923]] /* junCHWSup2.res3.sta_default.p PARAM */),1e8);
    if(!(tmp477 && tmp478))
    {
      tmp480 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1923]] /* junCHWSup2.res3.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta481 = stringAppend(MMC_REFSTRINGLIT(tmp479),tmp480);
      {
        const char* assert_cond = "(junCHWSup2.res3.sta_default.p >= 0.0 and junCHWSup2.res3.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta481));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta481));
        }
      }
      tmp482 = 1;
    }
  }
  threadData->lastEquationSolved = 8165;
}

/*
equation index: 8166
type: ALGORITHM

  assert(junCHWSup2.res3.sta_default.T >= 1.0 and junCHWSup2.res3.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.res3.sta_default.T <= 1e4, has value: " + String(junCHWSup2.res3.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8166};
  modelica_boolean tmp483;
  modelica_boolean tmp484;
  static const MMC_DEFSTRINGLIT(tmp485,95,"Variable violating min/max constraint: 1.0 <= junCHWSup2.res3.sta_default.T <= 1e4, has value: ");
  modelica_string tmp486;
  modelica_metatype tmpMeta487;
  static int tmp488 = 0;
  if(!tmp488)
  {
    tmp483 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1922]] /* junCHWSup2.res3.sta_default.T PARAM */),1.0);
    tmp484 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1922]] /* junCHWSup2.res3.sta_default.T PARAM */),1e4);
    if(!(tmp483 && tmp484))
    {
      tmp486 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1922]] /* junCHWSup2.res3.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta487 = stringAppend(MMC_REFSTRINGLIT(tmp485),tmp486);
      {
        const char* assert_cond = "(junCHWSup2.res3.sta_default.T >= 1.0 and junCHWSup2.res3.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta487));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta487));
        }
      }
      tmp488 = 1;
    }
  }
  threadData->lastEquationSolved = 8166;
}

/*
equation index: 8167
type: ALGORITHM

  assert(junCHWSup2.res3.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res3.eta_default, has value: " + String(junCHWSup2.res3.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8167};
  modelica_boolean tmp489;
  static const MMC_DEFSTRINGLIT(tmp490,82,"Variable violating min constraint: 0.0 <= junCHWSup2.res3.eta_default, has value: ");
  modelica_string tmp491;
  modelica_metatype tmpMeta492;
  static int tmp493 = 0;
  if(!tmp493)
  {
    tmp489 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1916]] /* junCHWSup2.res3.eta_default PARAM */),0.0);
    if(!tmp489)
    {
      tmp491 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1916]] /* junCHWSup2.res3.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta492 = stringAppend(MMC_REFSTRINGLIT(tmp490),tmp491);
      {
        const char* assert_cond = "(junCHWSup2.res3.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta492));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta492));
        }
      }
      tmp493 = 1;
    }
  }
  threadData->lastEquationSolved = 8167;
}

/*
equation index: 8168
type: ALGORITHM

  assert(junCHWSup2.res3.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res3.m_flow_turbulent, has value: " + String(junCHWSup2.res3.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8168};
  modelica_boolean tmp494;
  static const MMC_DEFSTRINGLIT(tmp495,87,"Variable violating min constraint: 0.0 <= junCHWSup2.res3.m_flow_turbulent, has value: ");
  modelica_string tmp496;
  modelica_metatype tmpMeta497;
  static int tmp498 = 0;
  if(!tmp498)
  {
    tmp494 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1921]] /* junCHWSup2.res3.m_flow_turbulent PARAM */),0.0);
    if(!tmp494)
    {
      tmp496 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1921]] /* junCHWSup2.res3.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta497 = stringAppend(MMC_REFSTRINGLIT(tmp495),tmp496);
      {
        const char* assert_cond = "(junCHWSup2.res3.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta497));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta497));
        }
      }
      tmp498 = 1;
    }
  }
  threadData->lastEquationSolved = 8168;
}

/*
equation index: 8169
type: ALGORITHM

  assert(junCHWSup2.res3.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res3.m_flow_small, has value: " + String(junCHWSup2.res3.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8169};
  modelica_boolean tmp499;
  static const MMC_DEFSTRINGLIT(tmp500,83,"Variable violating min constraint: 0.0 <= junCHWSup2.res3.m_flow_small, has value: ");
  modelica_string tmp501;
  modelica_metatype tmpMeta502;
  static int tmp503 = 0;
  if(!tmp503)
  {
    tmp499 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1920]] /* junCHWSup2.res3.m_flow_small PARAM */),0.0);
    if(!tmp499)
    {
      tmp501 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1920]] /* junCHWSup2.res3.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta502 = stringAppend(MMC_REFSTRINGLIT(tmp500),tmp501);
      {
        const char* assert_cond = "(junCHWSup2.res3.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta502));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta502));
        }
      }
      tmp503 = 1;
    }
  }
  threadData->lastEquationSolved = 8169;
}

/*
equation index: 8170
type: ALGORITHM

  assert(junCHWSup2.res2.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= junCHWSup2.res2.deltaM, has value: " + String(junCHWSup2.res2.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8170};
  modelica_boolean tmp504;
  static const MMC_DEFSTRINGLIT(tmp505,78,"Variable violating min constraint: 1e-6 <= junCHWSup2.res2.deltaM, has value: ");
  modelica_string tmp506;
  modelica_metatype tmpMeta507;
  static int tmp508 = 0;
  if(!tmp508)
  {
    tmp504 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1899]] /* junCHWSup2.res2.deltaM PARAM */),1e-6);
    if(!tmp504)
    {
      tmp506 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1899]] /* junCHWSup2.res2.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta507 = stringAppend(MMC_REFSTRINGLIT(tmp505),tmp506);
      {
        const char* assert_cond = "(junCHWSup2.res2.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta507));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta507));
        }
      }
      tmp508 = 1;
    }
  }
  threadData->lastEquationSolved = 8170;
}

/*
equation index: 8171
type: ALGORITHM

  assert(junCHWSup2.res2.sta_default.p >= 0.0 and junCHWSup2.res2.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.res2.sta_default.p <= 1e8, has value: " + String(junCHWSup2.res2.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8171};
  modelica_boolean tmp509;
  modelica_boolean tmp510;
  static const MMC_DEFSTRINGLIT(tmp511,95,"Variable violating min/max constraint: 0.0 <= junCHWSup2.res2.sta_default.p <= 1e8, has value: ");
  modelica_string tmp512;
  modelica_metatype tmpMeta513;
  static int tmp514 = 0;
  if(!tmp514)
  {
    tmp509 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1909]] /* junCHWSup2.res2.sta_default.p PARAM */),0.0);
    tmp510 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1909]] /* junCHWSup2.res2.sta_default.p PARAM */),1e8);
    if(!(tmp509 && tmp510))
    {
      tmp512 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1909]] /* junCHWSup2.res2.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta513 = stringAppend(MMC_REFSTRINGLIT(tmp511),tmp512);
      {
        const char* assert_cond = "(junCHWSup2.res2.sta_default.p >= 0.0 and junCHWSup2.res2.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta513));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta513));
        }
      }
      tmp514 = 1;
    }
  }
  threadData->lastEquationSolved = 8171;
}

/*
equation index: 8172
type: ALGORITHM

  assert(junCHWSup2.res2.sta_default.T >= 1.0 and junCHWSup2.res2.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.res2.sta_default.T <= 1e4, has value: " + String(junCHWSup2.res2.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8172};
  modelica_boolean tmp515;
  modelica_boolean tmp516;
  static const MMC_DEFSTRINGLIT(tmp517,95,"Variable violating min/max constraint: 1.0 <= junCHWSup2.res2.sta_default.T <= 1e4, has value: ");
  modelica_string tmp518;
  modelica_metatype tmpMeta519;
  static int tmp520 = 0;
  if(!tmp520)
  {
    tmp515 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1908]] /* junCHWSup2.res2.sta_default.T PARAM */),1.0);
    tmp516 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1908]] /* junCHWSup2.res2.sta_default.T PARAM */),1e4);
    if(!(tmp515 && tmp516))
    {
      tmp518 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1908]] /* junCHWSup2.res2.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta519 = stringAppend(MMC_REFSTRINGLIT(tmp517),tmp518);
      {
        const char* assert_cond = "(junCHWSup2.res2.sta_default.T >= 1.0 and junCHWSup2.res2.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta519));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta519));
        }
      }
      tmp520 = 1;
    }
  }
  threadData->lastEquationSolved = 8172;
}

/*
equation index: 8173
type: ALGORITHM

  assert(junCHWSup2.res2.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res2.eta_default, has value: " + String(junCHWSup2.res2.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8173};
  modelica_boolean tmp521;
  static const MMC_DEFSTRINGLIT(tmp522,82,"Variable violating min constraint: 0.0 <= junCHWSup2.res2.eta_default, has value: ");
  modelica_string tmp523;
  modelica_metatype tmpMeta524;
  static int tmp525 = 0;
  if(!tmp525)
  {
    tmp521 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1902]] /* junCHWSup2.res2.eta_default PARAM */),0.0);
    if(!tmp521)
    {
      tmp523 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1902]] /* junCHWSup2.res2.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta524 = stringAppend(MMC_REFSTRINGLIT(tmp522),tmp523);
      {
        const char* assert_cond = "(junCHWSup2.res2.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta524));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta524));
        }
      }
      tmp525 = 1;
    }
  }
  threadData->lastEquationSolved = 8173;
}

/*
equation index: 8174
type: ALGORITHM

  assert(junCHWSup2.res2.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res2.m_flow_turbulent, has value: " + String(junCHWSup2.res2.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8174};
  modelica_boolean tmp526;
  static const MMC_DEFSTRINGLIT(tmp527,87,"Variable violating min constraint: 0.0 <= junCHWSup2.res2.m_flow_turbulent, has value: ");
  modelica_string tmp528;
  modelica_metatype tmpMeta529;
  static int tmp530 = 0;
  if(!tmp530)
  {
    tmp526 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1907]] /* junCHWSup2.res2.m_flow_turbulent PARAM */),0.0);
    if(!tmp526)
    {
      tmp528 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1907]] /* junCHWSup2.res2.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta529 = stringAppend(MMC_REFSTRINGLIT(tmp527),tmp528);
      {
        const char* assert_cond = "(junCHWSup2.res2.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta529));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta529));
        }
      }
      tmp530 = 1;
    }
  }
  threadData->lastEquationSolved = 8174;
}

/*
equation index: 8175
type: ALGORITHM

  assert(junCHWSup2.res2.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res2.m_flow_small, has value: " + String(junCHWSup2.res2.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8175};
  modelica_boolean tmp531;
  static const MMC_DEFSTRINGLIT(tmp532,83,"Variable violating min constraint: 0.0 <= junCHWSup2.res2.m_flow_small, has value: ");
  modelica_string tmp533;
  modelica_metatype tmpMeta534;
  static int tmp535 = 0;
  if(!tmp535)
  {
    tmp531 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1906]] /* junCHWSup2.res2.m_flow_small PARAM */),0.0);
    if(!tmp531)
    {
      tmp533 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1906]] /* junCHWSup2.res2.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta534 = stringAppend(MMC_REFSTRINGLIT(tmp532),tmp533);
      {
        const char* assert_cond = "(junCHWSup2.res2.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta534));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta534));
        }
      }
      tmp535 = 1;
    }
  }
  threadData->lastEquationSolved = 8175;
}

/*
equation index: 8176
type: ALGORITHM

  assert(junCHWSup2.res1.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= junCHWSup2.res1.deltaM, has value: " + String(junCHWSup2.res1.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8176};
  modelica_boolean tmp536;
  static const MMC_DEFSTRINGLIT(tmp537,78,"Variable violating min constraint: 1e-6 <= junCHWSup2.res1.deltaM, has value: ");
  modelica_string tmp538;
  modelica_metatype tmpMeta539;
  static int tmp540 = 0;
  if(!tmp540)
  {
    tmp536 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1885]] /* junCHWSup2.res1.deltaM PARAM */),1e-6);
    if(!tmp536)
    {
      tmp538 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1885]] /* junCHWSup2.res1.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta539 = stringAppend(MMC_REFSTRINGLIT(tmp537),tmp538);
      {
        const char* assert_cond = "(junCHWSup2.res1.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta539));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta539));
        }
      }
      tmp540 = 1;
    }
  }
  threadData->lastEquationSolved = 8176;
}

/*
equation index: 8177
type: ALGORITHM

  assert(junCHWSup2.res1.sta_default.p >= 0.0 and junCHWSup2.res1.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup2.res1.sta_default.p <= 1e8, has value: " + String(junCHWSup2.res1.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8177};
  modelica_boolean tmp541;
  modelica_boolean tmp542;
  static const MMC_DEFSTRINGLIT(tmp543,95,"Variable violating min/max constraint: 0.0 <= junCHWSup2.res1.sta_default.p <= 1e8, has value: ");
  modelica_string tmp544;
  modelica_metatype tmpMeta545;
  static int tmp546 = 0;
  if(!tmp546)
  {
    tmp541 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1895]] /* junCHWSup2.res1.sta_default.p PARAM */),0.0);
    tmp542 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1895]] /* junCHWSup2.res1.sta_default.p PARAM */),1e8);
    if(!(tmp541 && tmp542))
    {
      tmp544 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1895]] /* junCHWSup2.res1.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta545 = stringAppend(MMC_REFSTRINGLIT(tmp543),tmp544);
      {
        const char* assert_cond = "(junCHWSup2.res1.sta_default.p >= 0.0 and junCHWSup2.res1.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta545));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta545));
        }
      }
      tmp546 = 1;
    }
  }
  threadData->lastEquationSolved = 8177;
}

/*
equation index: 8178
type: ALGORITHM

  assert(junCHWSup2.res1.sta_default.T >= 1.0 and junCHWSup2.res1.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.res1.sta_default.T <= 1e4, has value: " + String(junCHWSup2.res1.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8178};
  modelica_boolean tmp547;
  modelica_boolean tmp548;
  static const MMC_DEFSTRINGLIT(tmp549,95,"Variable violating min/max constraint: 1.0 <= junCHWSup2.res1.sta_default.T <= 1e4, has value: ");
  modelica_string tmp550;
  modelica_metatype tmpMeta551;
  static int tmp552 = 0;
  if(!tmp552)
  {
    tmp547 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1894]] /* junCHWSup2.res1.sta_default.T PARAM */),1.0);
    tmp548 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1894]] /* junCHWSup2.res1.sta_default.T PARAM */),1e4);
    if(!(tmp547 && tmp548))
    {
      tmp550 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1894]] /* junCHWSup2.res1.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta551 = stringAppend(MMC_REFSTRINGLIT(tmp549),tmp550);
      {
        const char* assert_cond = "(junCHWSup2.res1.sta_default.T >= 1.0 and junCHWSup2.res1.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta551));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta551));
        }
      }
      tmp552 = 1;
    }
  }
  threadData->lastEquationSolved = 8178;
}

/*
equation index: 8179
type: ALGORITHM

  assert(junCHWSup2.res1.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res1.eta_default, has value: " + String(junCHWSup2.res1.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8179};
  modelica_boolean tmp553;
  static const MMC_DEFSTRINGLIT(tmp554,82,"Variable violating min constraint: 0.0 <= junCHWSup2.res1.eta_default, has value: ");
  modelica_string tmp555;
  modelica_metatype tmpMeta556;
  static int tmp557 = 0;
  if(!tmp557)
  {
    tmp553 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1888]] /* junCHWSup2.res1.eta_default PARAM */),0.0);
    if(!tmp553)
    {
      tmp555 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1888]] /* junCHWSup2.res1.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta556 = stringAppend(MMC_REFSTRINGLIT(tmp554),tmp555);
      {
        const char* assert_cond = "(junCHWSup2.res1.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta556));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta556));
        }
      }
      tmp557 = 1;
    }
  }
  threadData->lastEquationSolved = 8179;
}

/*
equation index: 8180
type: ALGORITHM

  assert(junCHWSup2.res1.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res1.m_flow_turbulent, has value: " + String(junCHWSup2.res1.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8180};
  modelica_boolean tmp558;
  static const MMC_DEFSTRINGLIT(tmp559,87,"Variable violating min constraint: 0.0 <= junCHWSup2.res1.m_flow_turbulent, has value: ");
  modelica_string tmp560;
  modelica_metatype tmpMeta561;
  static int tmp562 = 0;
  if(!tmp562)
  {
    tmp558 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1893]] /* junCHWSup2.res1.m_flow_turbulent PARAM */),0.0);
    if(!tmp558)
    {
      tmp560 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1893]] /* junCHWSup2.res1.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta561 = stringAppend(MMC_REFSTRINGLIT(tmp559),tmp560);
      {
        const char* assert_cond = "(junCHWSup2.res1.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta561));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta561));
        }
      }
      tmp562 = 1;
    }
  }
  threadData->lastEquationSolved = 8180;
}

/*
equation index: 8181
type: ALGORITHM

  assert(junCHWSup2.res1.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWSup2.res1.m_flow_small, has value: " + String(junCHWSup2.res1.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8181};
  modelica_boolean tmp563;
  static const MMC_DEFSTRINGLIT(tmp564,83,"Variable violating min constraint: 0.0 <= junCHWSup2.res1.m_flow_small, has value: ");
  modelica_string tmp565;
  modelica_metatype tmpMeta566;
  static int tmp567 = 0;
  if(!tmp567)
  {
    tmp563 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1892]] /* junCHWSup2.res1.m_flow_small PARAM */),0.0);
    if(!tmp563)
    {
      tmp565 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1892]] /* junCHWSup2.res1.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta566 = stringAppend(MMC_REFSTRINGLIT(tmp564),tmp565);
      {
        const char* assert_cond = "(junCHWSup2.res1.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta566));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta566));
        }
      }
      tmp567 = 1;
    }
  }
  threadData->lastEquationSolved = 8181;
}

/*
equation index: 8182
type: ALGORITHM

  assert(junCHWSup2.portFlowDirection_3 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWSup2.portFlowDirection_3 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWSup2.portFlowDirection_3 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(junCHWSup2.portFlowDirection_3, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8182};
  modelica_boolean tmp568;
  modelica_boolean tmp569;
  static const MMC_DEFSTRINGLIT(tmp570,189,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWSup2.portFlowDirection_3 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp571;
  modelica_metatype tmpMeta572;
  static int tmp573 = 0;
  if(!tmp573)
  {
    tmp568 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[290]] /* junCHWSup2.portFlowDirection_3 PARAM */),1);
    tmp569 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[290]] /* junCHWSup2.portFlowDirection_3 PARAM */),3);
    if(!(tmp568 && tmp569))
    {
      tmp571 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[290]] /* junCHWSup2.portFlowDirection_3 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta572 = stringAppend(MMC_REFSTRINGLIT(tmp570),tmp571);
      {
        const char* assert_cond = "(junCHWSup2.portFlowDirection_3 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWSup2.portFlowDirection_3 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",47,3,49,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta572));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",47,3,49,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta572));
        }
      }
      tmp573 = 1;
    }
  }
  threadData->lastEquationSolved = 8182;
}

/*
equation index: 8183
type: ALGORITHM

  assert(junCHWSup2.portFlowDirection_2 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWSup2.portFlowDirection_2 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWSup2.portFlowDirection_2 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(junCHWSup2.portFlowDirection_2, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8183};
  modelica_boolean tmp574;
  modelica_boolean tmp575;
  static const MMC_DEFSTRINGLIT(tmp576,189,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWSup2.portFlowDirection_2 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp577;
  modelica_metatype tmpMeta578;
  static int tmp579 = 0;
  if(!tmp579)
  {
    tmp574 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[289]] /* junCHWSup2.portFlowDirection_2 PARAM */),1);
    tmp575 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[289]] /* junCHWSup2.portFlowDirection_2 PARAM */),3);
    if(!(tmp574 && tmp575))
    {
      tmp577 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[289]] /* junCHWSup2.portFlowDirection_2 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta578 = stringAppend(MMC_REFSTRINGLIT(tmp576),tmp577);
      {
        const char* assert_cond = "(junCHWSup2.portFlowDirection_2 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWSup2.portFlowDirection_2 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",44,3,46,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta578));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",44,3,46,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta578));
        }
      }
      tmp579 = 1;
    }
  }
  threadData->lastEquationSolved = 8183;
}

/*
equation index: 8184
type: ALGORITHM

  assert(junCHWSup2.portFlowDirection_1 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWSup2.portFlowDirection_1 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWSup2.portFlowDirection_1 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(junCHWSup2.portFlowDirection_1, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8184};
  modelica_boolean tmp580;
  modelica_boolean tmp581;
  static const MMC_DEFSTRINGLIT(tmp582,189,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWSup2.portFlowDirection_1 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp583;
  modelica_metatype tmpMeta584;
  static int tmp585 = 0;
  if(!tmp585)
  {
    tmp580 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[288]] /* junCHWSup2.portFlowDirection_1 PARAM */),1);
    tmp581 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[288]] /* junCHWSup2.portFlowDirection_1 PARAM */),3);
    if(!(tmp580 && tmp581))
    {
      tmp583 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[288]] /* junCHWSup2.portFlowDirection_1 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta584 = stringAppend(MMC_REFSTRINGLIT(tmp582),tmp583);
      {
        const char* assert_cond = "(junCHWSup2.portFlowDirection_1 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWSup2.portFlowDirection_1 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",41,3,43,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta584));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",41,3,43,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta584));
        }
      }
      tmp585 = 1;
    }
  }
  threadData->lastEquationSolved = 8184;
}

/*
equation index: 8185
type: ALGORITHM

  assert(junCHWSup2.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= junCHWSup2.mSenFac, has value: " + String(junCHWSup2.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8185};
  modelica_boolean tmp586;
  static const MMC_DEFSTRINGLIT(tmp587,73,"Variable violating min constraint: 1.0 <= junCHWSup2.mSenFac, has value: ");
  modelica_string tmp588;
  modelica_metatype tmpMeta589;
  static int tmp590 = 0;
  if(!tmp590)
  {
    tmp586 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1876]] /* junCHWSup2.mSenFac PARAM */),1.0);
    if(!tmp586)
    {
      tmp588 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1876]] /* junCHWSup2.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta589 = stringAppend(MMC_REFSTRINGLIT(tmp587),tmp588);
      {
        const char* assert_cond = "(junCHWSup2.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta589));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta589));
        }
      }
      tmp590 = 1;
    }
  }
  threadData->lastEquationSolved = 8185;
}

/*
equation index: 8186
type: ALGORITHM

  assert(junCHWSup2.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8186};
  modelica_boolean tmp591;
  modelica_boolean tmp592;
  static const MMC_DEFSTRINGLIT(tmp593,173,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp594;
  modelica_metatype tmpMeta595;
  static int tmp596 = 0;
  if(!tmp596)
  {
    tmp591 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[292]] /* junCHWSup2.traceDynamics PARAM */),1);
    tmp592 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[292]] /* junCHWSup2.traceDynamics PARAM */),4);
    if(!(tmp591 && tmp592))
    {
      tmp594 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[292]] /* junCHWSup2.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta595 = stringAppend(MMC_REFSTRINGLIT(tmp593),tmp594);
      {
        const char* assert_cond = "(junCHWSup2.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta595));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta595));
        }
      }
      tmp596 = 1;
    }
  }
  threadData->lastEquationSolved = 8186;
}

/*
equation index: 8187
type: ALGORITHM

  assert(junCHWSup2.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8187};
  modelica_boolean tmp597;
  modelica_boolean tmp598;
  static const MMC_DEFSTRINGLIT(tmp599,177,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp600;
  modelica_metatype tmpMeta601;
  static int tmp602 = 0;
  if(!tmp602)
  {
    tmp597 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[291]] /* junCHWSup2.substanceDynamics PARAM */),1);
    tmp598 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[291]] /* junCHWSup2.substanceDynamics PARAM */),4);
    if(!(tmp597 && tmp598))
    {
      tmp600 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[291]] /* junCHWSup2.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta601 = stringAppend(MMC_REFSTRINGLIT(tmp599),tmp600);
      {
        const char* assert_cond = "(junCHWSup2.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta601));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta601));
        }
      }
      tmp602 = 1;
    }
  }
  threadData->lastEquationSolved = 8187;
}

/*
equation index: 8188
type: ALGORITHM

  assert(junCHWSup2.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8188};
  modelica_boolean tmp603;
  modelica_boolean tmp604;
  static const MMC_DEFSTRINGLIT(tmp605,172,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp606;
  modelica_metatype tmpMeta607;
  static int tmp608 = 0;
  if(!tmp608)
  {
    tmp603 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[287]] /* junCHWSup2.massDynamics PARAM */),1);
    tmp604 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[287]] /* junCHWSup2.massDynamics PARAM */),4);
    if(!(tmp603 && tmp604))
    {
      tmp606 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[287]] /* junCHWSup2.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta607 = stringAppend(MMC_REFSTRINGLIT(tmp605),tmp606);
      {
        const char* assert_cond = "(junCHWSup2.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta607));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta607));
        }
      }
      tmp608 = 1;
    }
  }
  threadData->lastEquationSolved = 8188;
}

/*
equation index: 8189
type: ALGORITHM

  assert(junCHWSup2.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWSup2.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8189};
  modelica_boolean tmp609;
  modelica_boolean tmp610;
  static const MMC_DEFSTRINGLIT(tmp611,174,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWSup2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp612;
  modelica_metatype tmpMeta613;
  static int tmp614 = 0;
  if(!tmp614)
  {
    tmp609 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[286]] /* junCHWSup2.energyDynamics PARAM */),1);
    tmp610 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[286]] /* junCHWSup2.energyDynamics PARAM */),4);
    if(!(tmp609 && tmp610))
    {
      tmp612 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[286]] /* junCHWSup2.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta613 = stringAppend(MMC_REFSTRINGLIT(tmp611),tmp612);
      {
        const char* assert_cond = "(junCHWSup2.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWSup2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta613));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta613));
        }
      }
      tmp614 = 1;
    }
  }
  threadData->lastEquationSolved = 8189;
}

/*
equation index: 8190
type: ALGORITHM

  assert(junCHWRet2.deltaM >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.deltaM, has value: " + String(junCHWRet2.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8190};
  modelica_boolean tmp615;
  static const MMC_DEFSTRINGLIT(tmp616,72,"Variable violating min constraint: 0.0 <= junCHWRet2.deltaM, has value: ");
  modelica_string tmp617;
  modelica_metatype tmpMeta618;
  static int tmp619 = 0;
  if(!tmp619)
  {
    tmp615 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1705]] /* junCHWRet2.deltaM PARAM */),0.0);
    if(!tmp615)
    {
      tmp617 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1705]] /* junCHWRet2.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta618 = stringAppend(MMC_REFSTRINGLIT(tmp616),tmp617);
      {
        const char* assert_cond = "(junCHWRet2.deltaM >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/Junction.mo",37,3,40,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta618));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/Junction.mo",37,3,40,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta618));
        }
      }
      tmp619 = 1;
    }
  }
  threadData->lastEquationSolved = 8190;
}

/*
equation index: 8191
type: ALGORITHM

  assert(junCHWRet2.vol.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.vol.m_flow_nominal, has value: " + String(junCHWRet2.vol.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8191};
  modelica_boolean tmp620;
  static const MMC_DEFSTRINGLIT(tmp621,84,"Variable violating min constraint: 0.0 <= junCHWRet2.vol.m_flow_nominal, has value: ");
  modelica_string tmp622;
  modelica_metatype tmpMeta623;
  static int tmp624 = 0;
  if(!tmp624)
  {
    tmp620 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1776]] /* junCHWRet2.vol.m_flow_nominal PARAM */),0.0);
    if(!tmp620)
    {
      tmp622 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1776]] /* junCHWRet2.vol.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta623 = stringAppend(MMC_REFSTRINGLIT(tmp621),tmp622);
      {
        const char* assert_cond = "(junCHWRet2.vol.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,22,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta623));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,22,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta623));
        }
      }
      tmp624 = 1;
    }
  }
  threadData->lastEquationSolved = 8191;
}

/*
equation index: 8192
type: ALGORITHM

  assert(junCHWRet2.T_start >= 1.0 and junCHWRet2.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.T_start <= 1e4, has value: " + String(junCHWRet2.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8192};
  modelica_boolean tmp625;
  modelica_boolean tmp626;
  static const MMC_DEFSTRINGLIT(tmp627,84,"Variable violating min/max constraint: 1.0 <= junCHWRet2.T_start <= 1e4, has value: ");
  modelica_string tmp628;
  modelica_metatype tmpMeta629;
  static int tmp630 = 0;
  if(!tmp630)
  {
    tmp625 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1703]] /* junCHWRet2.T_start PARAM */),1.0);
    tmp626 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1703]] /* junCHWRet2.T_start PARAM */),1e4);
    if(!(tmp625 && tmp626))
    {
      tmp628 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1703]] /* junCHWRet2.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta629 = stringAppend(MMC_REFSTRINGLIT(tmp627),tmp628);
      {
        const char* assert_cond = "(junCHWRet2.T_start >= 1.0 and junCHWRet2.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta629));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta629));
        }
      }
      tmp630 = 1;
    }
  }
  threadData->lastEquationSolved = 8192;
}

/*
equation index: 8193
type: ALGORITHM

  assert(junCHWRet2.vol.T_start >= 1.0 and junCHWRet2.vol.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.T_start <= 1e4, has value: " + String(junCHWRet2.vol.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8193};
  modelica_boolean tmp631;
  modelica_boolean tmp632;
  static const MMC_DEFSTRINGLIT(tmp633,88,"Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.T_start <= 1e4, has value: ");
  modelica_string tmp634;
  modelica_metatype tmpMeta635;
  static int tmp636 = 0;
  if(!tmp636)
  {
    tmp631 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1759]] /* junCHWRet2.vol.T_start PARAM */),1.0);
    tmp632 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1759]] /* junCHWRet2.vol.T_start PARAM */),1e4);
    if(!(tmp631 && tmp632))
    {
      tmp634 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1759]] /* junCHWRet2.vol.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta635 = stringAppend(MMC_REFSTRINGLIT(tmp633),tmp634);
      {
        const char* assert_cond = "(junCHWRet2.vol.T_start >= 1.0 and junCHWRet2.vol.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta635));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta635));
        }
      }
      tmp636 = 1;
    }
  }
  threadData->lastEquationSolved = 8193;
}

/*
equation index: 8194
type: ALGORITHM

  assert(junCHWRet2.vol.state_start.T >= 1.0 and junCHWRet2.vol.state_start.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.state_start.T <= 1e4, has value: " + String(junCHWRet2.vol.state_start.T, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8194};
  modelica_boolean tmp637;
  modelica_boolean tmp638;
  static const MMC_DEFSTRINGLIT(tmp639,94,"Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.state_start.T <= 1e4, has value: ");
  modelica_string tmp640;
  modelica_metatype tmpMeta641;
  static int tmp642 = 0;
  if(!tmp642)
  {
    tmp637 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1783]] /* junCHWRet2.vol.state_start.T PARAM */),1.0);
    tmp638 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1783]] /* junCHWRet2.vol.state_start.T PARAM */),1e4);
    if(!(tmp637 && tmp638))
    {
      tmp640 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1783]] /* junCHWRet2.vol.state_start.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta641 = stringAppend(MMC_REFSTRINGLIT(tmp639),tmp640);
      {
        const char* assert_cond = "(junCHWRet2.vol.state_start.T >= 1.0 and junCHWRet2.vol.state_start.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta641));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta641));
        }
      }
      tmp642 = 1;
    }
  }
  threadData->lastEquationSolved = 8194;
}

/*
equation index: 8195
type: ALGORITHM

  assert(junCHWRet2.p_start >= 0.0 and junCHWRet2.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.p_start <= 1e8, has value: " + String(junCHWRet2.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8195};
  modelica_boolean tmp643;
  modelica_boolean tmp644;
  static const MMC_DEFSTRINGLIT(tmp645,84,"Variable violating min/max constraint: 0.0 <= junCHWRet2.p_start <= 1e8, has value: ");
  modelica_string tmp646;
  modelica_metatype tmpMeta647;
  static int tmp648 = 0;
  if(!tmp648)
  {
    tmp643 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1715]] /* junCHWRet2.p_start PARAM */),0.0);
    tmp644 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1715]] /* junCHWRet2.p_start PARAM */),1e8);
    if(!(tmp643 && tmp644))
    {
      tmp646 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1715]] /* junCHWRet2.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta647 = stringAppend(MMC_REFSTRINGLIT(tmp645),tmp646);
      {
        const char* assert_cond = "(junCHWRet2.p_start >= 0.0 and junCHWRet2.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta647));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta647));
        }
      }
      tmp648 = 1;
    }
  }
  threadData->lastEquationSolved = 8195;
}

/*
equation index: 8196
type: ALGORITHM

  assert(junCHWRet2.vol.p_start >= 0.0 and junCHWRet2.vol.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.p_start <= 1e8, has value: " + String(junCHWRet2.vol.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8196};
  modelica_boolean tmp649;
  modelica_boolean tmp650;
  static const MMC_DEFSTRINGLIT(tmp651,88,"Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.p_start <= 1e8, has value: ");
  modelica_string tmp652;
  modelica_metatype tmpMeta653;
  static int tmp654 = 0;
  if(!tmp654)
  {
    tmp649 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1778]] /* junCHWRet2.vol.p_start PARAM */),0.0);
    tmp650 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1778]] /* junCHWRet2.vol.p_start PARAM */),1e8);
    if(!(tmp649 && tmp650))
    {
      tmp652 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1778]] /* junCHWRet2.vol.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta653 = stringAppend(MMC_REFSTRINGLIT(tmp651),tmp652);
      {
        const char* assert_cond = "(junCHWRet2.vol.p_start >= 0.0 and junCHWRet2.vol.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta653));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta653));
        }
      }
      tmp654 = 1;
    }
  }
  threadData->lastEquationSolved = 8196;
}

/*
equation index: 8197
type: ALGORITHM

  assert(junCHWRet2.vol.state_start.p >= 0.0 and junCHWRet2.vol.state_start.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.state_start.p <= 1e8, has value: " + String(junCHWRet2.vol.state_start.p, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8197};
  modelica_boolean tmp655;
  modelica_boolean tmp656;
  static const MMC_DEFSTRINGLIT(tmp657,94,"Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.state_start.p <= 1e8, has value: ");
  modelica_string tmp658;
  modelica_metatype tmpMeta659;
  static int tmp660 = 0;
  if(!tmp660)
  {
    tmp655 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1784]] /* junCHWRet2.vol.state_start.p PARAM */),0.0);
    tmp656 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1784]] /* junCHWRet2.vol.state_start.p PARAM */),1e8);
    if(!(tmp655 && tmp656))
    {
      tmp658 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1784]] /* junCHWRet2.vol.state_start.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta659 = stringAppend(MMC_REFSTRINGLIT(tmp657),tmp658);
      {
        const char* assert_cond = "(junCHWRet2.vol.state_start.p >= 0.0 and junCHWRet2.vol.state_start.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta659));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta659));
        }
      }
      tmp660 = 1;
    }
  }
  threadData->lastEquationSolved = 8197;
}

/*
equation index: 8198
type: ALGORITHM

  assert(junCHWRet2.vol.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.vol.rho_default, has value: " + String(junCHWRet2.vol.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8198};
  modelica_boolean tmp661;
  static const MMC_DEFSTRINGLIT(tmp662,81,"Variable violating min constraint: 0.0 <= junCHWRet2.vol.rho_default, has value: ");
  modelica_string tmp663;
  modelica_metatype tmpMeta664;
  static int tmp665 = 0;
  if(!tmp665)
  {
    tmp661 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1779]] /* junCHWRet2.vol.rho_default PARAM */),0.0);
    if(!tmp661)
    {
      tmp663 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1779]] /* junCHWRet2.vol.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta664 = stringAppend(MMC_REFSTRINGLIT(tmp662),tmp663);
      {
        const char* assert_cond = "(junCHWRet2.vol.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",90,3,91,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta664));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",90,3,91,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta664));
        }
      }
      tmp665 = 1;
    }
  }
  threadData->lastEquationSolved = 8198;
}

/*
equation index: 8199
type: ALGORITHM

  assert(junCHWRet2.vol.state_default.T >= 1.0 and junCHWRet2.vol.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.state_default.T <= 1e4, has value: " + String(junCHWRet2.vol.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8199};
  modelica_boolean tmp666;
  modelica_boolean tmp667;
  static const MMC_DEFSTRINGLIT(tmp668,96,"Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.state_default.T <= 1e4, has value: ");
  modelica_string tmp669;
  modelica_metatype tmpMeta670;
  static int tmp671 = 0;
  if(!tmp671)
  {
    tmp666 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1781]] /* junCHWRet2.vol.state_default.T PARAM */),1.0);
    tmp667 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1781]] /* junCHWRet2.vol.state_default.T PARAM */),1e4);
    if(!(tmp666 && tmp667))
    {
      tmp669 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1781]] /* junCHWRet2.vol.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta670 = stringAppend(MMC_REFSTRINGLIT(tmp668),tmp669);
      {
        const char* assert_cond = "(junCHWRet2.vol.state_default.T >= 1.0 and junCHWRet2.vol.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta670));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta670));
        }
      }
      tmp671 = 1;
    }
  }
  threadData->lastEquationSolved = 8199;
}

/*
equation index: 8200
type: ALGORITHM

  assert(junCHWRet2.vol.state_default.p >= 0.0 and junCHWRet2.vol.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.state_default.p <= 1e8, has value: " + String(junCHWRet2.vol.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8200};
  modelica_boolean tmp672;
  modelica_boolean tmp673;
  static const MMC_DEFSTRINGLIT(tmp674,96,"Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.state_default.p <= 1e8, has value: ");
  modelica_string tmp675;
  modelica_metatype tmpMeta676;
  static int tmp677 = 0;
  if(!tmp677)
  {
    tmp672 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1782]] /* junCHWRet2.vol.state_default.p PARAM */),0.0);
    tmp673 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1782]] /* junCHWRet2.vol.state_default.p PARAM */),1e8);
    if(!(tmp672 && tmp673))
    {
      tmp675 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1782]] /* junCHWRet2.vol.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta676 = stringAppend(MMC_REFSTRINGLIT(tmp674),tmp675);
      {
        const char* assert_cond = "(junCHWRet2.vol.state_default.p >= 0.0 and junCHWRet2.vol.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta676));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta676));
        }
      }
      tmp677 = 1;
    }
  }
  threadData->lastEquationSolved = 8200;
}

/*
equation index: 8201
type: ALGORITHM

  assert(junCHWRet2.vol.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.vol.rho_start, has value: " + String(junCHWRet2.vol.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8201};
  modelica_boolean tmp678;
  static const MMC_DEFSTRINGLIT(tmp679,79,"Variable violating min constraint: 0.0 <= junCHWRet2.vol.rho_start, has value: ");
  modelica_string tmp680;
  modelica_metatype tmpMeta681;
  static int tmp682 = 0;
  if(!tmp682)
  {
    tmp678 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1780]] /* junCHWRet2.vol.rho_start PARAM */),0.0);
    if(!tmp678)
    {
      tmp680 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1780]] /* junCHWRet2.vol.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta681 = stringAppend(MMC_REFSTRINGLIT(tmp679),tmp680);
      {
        const char* assert_cond = "(junCHWRet2.vol.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",83,3,84,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta681));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",83,3,84,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta681));
        }
      }
      tmp682 = 1;
    }
  }
  threadData->lastEquationSolved = 8201;
}

/*
equation index: 8202
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.p_start >= 0.0 and junCHWRet2.vol.dynBal.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.dynBal.p_start <= 1e8, has value: " + String(junCHWRet2.vol.dynBal.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8202};
  modelica_boolean tmp683;
  modelica_boolean tmp684;
  static const MMC_DEFSTRINGLIT(tmp685,95,"Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.dynBal.p_start <= 1e8, has value: ");
  modelica_string tmp686;
  modelica_metatype tmpMeta687;
  static int tmp688 = 0;
  if(!tmp688)
  {
    tmp683 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1770]] /* junCHWRet2.vol.dynBal.p_start PARAM */),0.0);
    tmp684 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1770]] /* junCHWRet2.vol.dynBal.p_start PARAM */),1e8);
    if(!(tmp683 && tmp684))
    {
      tmp686 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1770]] /* junCHWRet2.vol.dynBal.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta687 = stringAppend(MMC_REFSTRINGLIT(tmp685),tmp686);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.p_start >= 0.0 and junCHWRet2.vol.dynBal.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta687));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta687));
        }
      }
      tmp688 = 1;
    }
  }
  threadData->lastEquationSolved = 8202;
}

/*
equation index: 8203
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.T_start >= 1.0 and junCHWRet2.vol.dynBal.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.dynBal.T_start <= 1e4, has value: " + String(junCHWRet2.vol.dynBal.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8203};
  modelica_boolean tmp689;
  modelica_boolean tmp690;
  static const MMC_DEFSTRINGLIT(tmp691,95,"Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.dynBal.T_start <= 1e4, has value: ");
  modelica_string tmp692;
  modelica_metatype tmpMeta693;
  static int tmp694 = 0;
  if(!tmp694)
  {
    tmp689 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1764]] /* junCHWRet2.vol.dynBal.T_start PARAM */),1.0);
    tmp690 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1764]] /* junCHWRet2.vol.dynBal.T_start PARAM */),1e4);
    if(!(tmp689 && tmp690))
    {
      tmp692 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1764]] /* junCHWRet2.vol.dynBal.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta693 = stringAppend(MMC_REFSTRINGLIT(tmp691),tmp692);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.T_start >= 1.0 and junCHWRet2.vol.dynBal.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta693));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta693));
        }
      }
      tmp694 = 1;
    }
  }
  threadData->lastEquationSolved = 8203;
}

/*
equation index: 8204
type: ALGORITHM

  assert(junCHWRet2.X_start[1] >= 0.0 and junCHWRet2.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWRet2.X_start[1] <= 1.0, has value: " + String(junCHWRet2.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8204};
  modelica_boolean tmp695;
  modelica_boolean tmp696;
  static const MMC_DEFSTRINGLIT(tmp697,87,"Variable violating min/max constraint: 0.0 <= junCHWRet2.X_start[1] <= 1.0, has value: ");
  modelica_string tmp698;
  modelica_metatype tmpMeta699;
  static int tmp700 = 0;
  if(!tmp700)
  {
    tmp695 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1704]] /* junCHWRet2.X_start[1] PARAM */),0.0);
    tmp696 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1704]] /* junCHWRet2.X_start[1] PARAM */),1.0);
    if(!(tmp695 && tmp696))
    {
      tmp698 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1704]] /* junCHWRet2.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta699 = stringAppend(MMC_REFSTRINGLIT(tmp697),tmp698);
      {
        const char* assert_cond = "(junCHWRet2.X_start[1] >= 0.0 and junCHWRet2.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta699));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta699));
        }
      }
      tmp700 = 1;
    }
  }
  threadData->lastEquationSolved = 8204;
}

/*
equation index: 8205
type: ALGORITHM

  assert(junCHWRet2.vol.X_start[1] >= 0.0 and junCHWRet2.vol.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.X_start[1] <= 1.0, has value: " + String(junCHWRet2.vol.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8205};
  modelica_boolean tmp701;
  modelica_boolean tmp702;
  static const MMC_DEFSTRINGLIT(tmp703,91,"Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.X_start[1] <= 1.0, has value: ");
  modelica_string tmp704;
  modelica_metatype tmpMeta705;
  static int tmp706 = 0;
  if(!tmp706)
  {
    tmp701 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1762]] /* junCHWRet2.vol.X_start[1] PARAM */),0.0);
    tmp702 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1762]] /* junCHWRet2.vol.X_start[1] PARAM */),1.0);
    if(!(tmp701 && tmp702))
    {
      tmp704 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1762]] /* junCHWRet2.vol.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta705 = stringAppend(MMC_REFSTRINGLIT(tmp703),tmp704);
      {
        const char* assert_cond = "(junCHWRet2.vol.X_start[1] >= 0.0 and junCHWRet2.vol.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta705));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta705));
        }
      }
      tmp706 = 1;
    }
  }
  threadData->lastEquationSolved = 8205;
}

/*
equation index: 8206
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.X_start[1] >= 0.0 and junCHWRet2.vol.dynBal.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.dynBal.X_start[1] <= 1.0, has value: " + String(junCHWRet2.vol.dynBal.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8206};
  modelica_boolean tmp707;
  modelica_boolean tmp708;
  static const MMC_DEFSTRINGLIT(tmp709,98,"Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.dynBal.X_start[1] <= 1.0, has value: ");
  modelica_string tmp710;
  modelica_metatype tmpMeta711;
  static int tmp712 = 0;
  if(!tmp712)
  {
    tmp707 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1765]] /* junCHWRet2.vol.dynBal.X_start[1] PARAM */),0.0);
    tmp708 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1765]] /* junCHWRet2.vol.dynBal.X_start[1] PARAM */),1.0);
    if(!(tmp707 && tmp708))
    {
      tmp710 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1765]] /* junCHWRet2.vol.dynBal.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta711 = stringAppend(MMC_REFSTRINGLIT(tmp709),tmp710);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.X_start[1] >= 0.0 and junCHWRet2.vol.dynBal.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta711));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta711));
        }
      }
      tmp712 = 1;
    }
  }
  threadData->lastEquationSolved = 8206;
}

/*
equation index: 8207
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.vol.dynBal.rho_default, has value: " + String(junCHWRet2.vol.dynBal.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8207};
  modelica_boolean tmp713;
  static const MMC_DEFSTRINGLIT(tmp714,88,"Variable violating min constraint: 0.0 <= junCHWRet2.vol.dynBal.rho_default, has value: ");
  modelica_string tmp715;
  modelica_metatype tmpMeta716;
  static int tmp717 = 0;
  if(!tmp717)
  {
    tmp713 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1771]] /* junCHWRet2.vol.dynBal.rho_default PARAM */),0.0);
    if(!tmp713)
    {
      tmp715 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1771]] /* junCHWRet2.vol.dynBal.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta716 = stringAppend(MMC_REFSTRINGLIT(tmp714),tmp715);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",145,3,146,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta716));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",145,3,146,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta716));
        }
      }
      tmp717 = 1;
    }
  }
  threadData->lastEquationSolved = 8207;
}

/*
equation index: 8208
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.state_default.T >= 1.0 and junCHWRet2.vol.dynBal.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.dynBal.state_default.T <= 1e4, has value: " + String(junCHWRet2.vol.dynBal.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8208};
  modelica_boolean tmp718;
  modelica_boolean tmp719;
  static const MMC_DEFSTRINGLIT(tmp720,103,"Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.dynBal.state_default.T <= 1e4, has value: ");
  modelica_string tmp721;
  modelica_metatype tmpMeta722;
  static int tmp723 = 0;
  if(!tmp723)
  {
    tmp718 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1773]] /* junCHWRet2.vol.dynBal.state_default.T PARAM */),1.0);
    tmp719 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1773]] /* junCHWRet2.vol.dynBal.state_default.T PARAM */),1e4);
    if(!(tmp718 && tmp719))
    {
      tmp721 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1773]] /* junCHWRet2.vol.dynBal.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta722 = stringAppend(MMC_REFSTRINGLIT(tmp720),tmp721);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.state_default.T >= 1.0 and junCHWRet2.vol.dynBal.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta722));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta722));
        }
      }
      tmp723 = 1;
    }
  }
  threadData->lastEquationSolved = 8208;
}

/*
equation index: 8209
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.state_default.p >= 0.0 and junCHWRet2.vol.dynBal.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.dynBal.state_default.p <= 1e8, has value: " + String(junCHWRet2.vol.dynBal.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8209};
  modelica_boolean tmp724;
  modelica_boolean tmp725;
  static const MMC_DEFSTRINGLIT(tmp726,103,"Variable violating min/max constraint: 0.0 <= junCHWRet2.vol.dynBal.state_default.p <= 1e8, has value: ");
  modelica_string tmp727;
  modelica_metatype tmpMeta728;
  static int tmp729 = 0;
  if(!tmp729)
  {
    tmp724 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1774]] /* junCHWRet2.vol.dynBal.state_default.p PARAM */),0.0);
    tmp725 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1774]] /* junCHWRet2.vol.dynBal.state_default.p PARAM */),1e8);
    if(!(tmp724 && tmp725))
    {
      tmp727 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1774]] /* junCHWRet2.vol.dynBal.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta728 = stringAppend(MMC_REFSTRINGLIT(tmp726),tmp727);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.state_default.p >= 0.0 and junCHWRet2.vol.dynBal.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta728));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta728));
        }
      }
      tmp729 = 1;
    }
  }
  threadData->lastEquationSolved = 8209;
}

/*
equation index: 8210
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.vol.dynBal.rho_start, has value: " + String(junCHWRet2.vol.dynBal.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8210};
  modelica_boolean tmp730;
  static const MMC_DEFSTRINGLIT(tmp731,86,"Variable violating min constraint: 0.0 <= junCHWRet2.vol.dynBal.rho_start, has value: ");
  modelica_string tmp732;
  modelica_metatype tmpMeta733;
  static int tmp734 = 0;
  if(!tmp734)
  {
    tmp730 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1772]] /* junCHWRet2.vol.dynBal.rho_start PARAM */),0.0);
    if(!tmp730)
    {
      tmp732 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1772]] /* junCHWRet2.vol.dynBal.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta733 = stringAppend(MMC_REFSTRINGLIT(tmp731),tmp732);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",131,3,135,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta733));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",131,3,135,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta733));
        }
      }
      tmp734 = 1;
    }
  }
  threadData->lastEquationSolved = 8210;
}

/*
equation index: 8211
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= junCHWRet2.vol.dynBal.mSenFac, has value: " + String(junCHWRet2.vol.dynBal.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8211};
  modelica_boolean tmp735;
  static const MMC_DEFSTRINGLIT(tmp736,84,"Variable violating min constraint: 1.0 <= junCHWRet2.vol.dynBal.mSenFac, has value: ");
  modelica_string tmp737;
  modelica_metatype tmpMeta738;
  static int tmp739 = 0;
  if(!tmp739)
  {
    tmp735 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1769]] /* junCHWRet2.vol.dynBal.mSenFac PARAM */),1.0);
    if(!tmp735)
    {
      tmp737 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1769]] /* junCHWRet2.vol.dynBal.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta738 = stringAppend(MMC_REFSTRINGLIT(tmp736),tmp737);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta738));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta738));
        }
      }
      tmp739 = 1;
    }
  }
  threadData->lastEquationSolved = 8211;
}

/*
equation index: 8212
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.vol.dynBal.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8212};
  modelica_boolean tmp740;
  modelica_boolean tmp741;
  static const MMC_DEFSTRINGLIT(tmp742,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp743;
  modelica_metatype tmpMeta744;
  static int tmp745 = 0;
  if(!tmp745)
  {
    tmp740 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[263]] /* junCHWRet2.vol.dynBal.traceDynamics PARAM */),1);
    tmp741 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[263]] /* junCHWRet2.vol.dynBal.traceDynamics PARAM */),4);
    if(!(tmp740 && tmp741))
    {
      tmp743 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[263]] /* junCHWRet2.vol.dynBal.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta744 = stringAppend(MMC_REFSTRINGLIT(tmp742),tmp743);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta744));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta744));
        }
      }
      tmp745 = 1;
    }
  }
  threadData->lastEquationSolved = 8212;
}

/*
equation index: 8213
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.vol.dynBal.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8213};
  modelica_boolean tmp746;
  modelica_boolean tmp747;
  static const MMC_DEFSTRINGLIT(tmp748,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp749;
  modelica_metatype tmpMeta750;
  static int tmp751 = 0;
  if(!tmp751)
  {
    tmp746 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[262]] /* junCHWRet2.vol.dynBal.substanceDynamics PARAM */),1);
    tmp747 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[262]] /* junCHWRet2.vol.dynBal.substanceDynamics PARAM */),4);
    if(!(tmp746 && tmp747))
    {
      tmp749 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[262]] /* junCHWRet2.vol.dynBal.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta750 = stringAppend(MMC_REFSTRINGLIT(tmp748),tmp749);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta750));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta750));
        }
      }
      tmp751 = 1;
    }
  }
  threadData->lastEquationSolved = 8213;
}

/*
equation index: 8214
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.vol.dynBal.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8214};
  modelica_boolean tmp752;
  modelica_boolean tmp753;
  static const MMC_DEFSTRINGLIT(tmp754,183,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp755;
  modelica_metatype tmpMeta756;
  static int tmp757 = 0;
  if(!tmp757)
  {
    tmp752 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[260]] /* junCHWRet2.vol.dynBal.massDynamics PARAM */),1);
    tmp753 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[260]] /* junCHWRet2.vol.dynBal.massDynamics PARAM */),4);
    if(!(tmp752 && tmp753))
    {
      tmp755 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[260]] /* junCHWRet2.vol.dynBal.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta756 = stringAppend(MMC_REFSTRINGLIT(tmp754),tmp755);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta756));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta756));
        }
      }
      tmp757 = 1;
    }
  }
  threadData->lastEquationSolved = 8214;
}

/*
equation index: 8215
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.vol.dynBal.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8215};
  modelica_boolean tmp758;
  modelica_boolean tmp759;
  static const MMC_DEFSTRINGLIT(tmp760,185,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp761;
  modelica_metatype tmpMeta762;
  static int tmp763 = 0;
  if(!tmp763)
  {
    tmp758 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[259]] /* junCHWRet2.vol.dynBal.energyDynamics PARAM */),1);
    tmp759 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[259]] /* junCHWRet2.vol.dynBal.energyDynamics PARAM */),4);
    if(!(tmp758 && tmp759))
    {
      tmp761 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[259]] /* junCHWRet2.vol.dynBal.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta762 = stringAppend(MMC_REFSTRINGLIT(tmp760),tmp761);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta762));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta762));
        }
      }
      tmp763 = 1;
    }
  }
  threadData->lastEquationSolved = 8215;
}

/*
equation index: 8216
type: ALGORITHM

  assert(junCHWRet2.vol.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.vol.m_flow_small, has value: " + String(junCHWRet2.vol.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8216};
  modelica_boolean tmp764;
  static const MMC_DEFSTRINGLIT(tmp765,82,"Variable violating min constraint: 0.0 <= junCHWRet2.vol.m_flow_small, has value: ");
  modelica_string tmp766;
  modelica_metatype tmpMeta767;
  static int tmp768 = 0;
  if(!tmp768)
  {
    tmp764 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1777]] /* junCHWRet2.vol.m_flow_small PARAM */),0.0);
    if(!tmp764)
    {
      tmp766 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1777]] /* junCHWRet2.vol.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta767 = stringAppend(MMC_REFSTRINGLIT(tmp765),tmp766);
      {
        const char* assert_cond = "(junCHWRet2.vol.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",26,3,28,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta767));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",26,3,28,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta767));
        }
      }
      tmp768 = 1;
    }
  }
  threadData->lastEquationSolved = 8216;
}

/*
equation index: 8217
type: ALGORITHM

  assert(junCHWRet2.vol.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= junCHWRet2.vol.mSenFac, has value: " + String(junCHWRet2.vol.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8217};
  modelica_boolean tmp769;
  static const MMC_DEFSTRINGLIT(tmp770,77,"Variable violating min constraint: 1.0 <= junCHWRet2.vol.mSenFac, has value: ");
  modelica_string tmp771;
  modelica_metatype tmpMeta772;
  static int tmp773 = 0;
  if(!tmp773)
  {
    tmp769 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1775]] /* junCHWRet2.vol.mSenFac PARAM */),1.0);
    if(!tmp769)
    {
      tmp771 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1775]] /* junCHWRet2.vol.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta772 = stringAppend(MMC_REFSTRINGLIT(tmp770),tmp771);
      {
        const char* assert_cond = "(junCHWRet2.vol.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta772));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta772));
        }
      }
      tmp773 = 1;
    }
  }
  threadData->lastEquationSolved = 8217;
}

/*
equation index: 8218
type: ALGORITHM

  assert(junCHWRet2.vol.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.vol.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8218};
  modelica_boolean tmp774;
  modelica_boolean tmp775;
  static const MMC_DEFSTRINGLIT(tmp776,177,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp777;
  modelica_metatype tmpMeta778;
  static int tmp779 = 0;
  if(!tmp779)
  {
    tmp774 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[268]] /* junCHWRet2.vol.traceDynamics PARAM */),1);
    tmp775 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[268]] /* junCHWRet2.vol.traceDynamics PARAM */),4);
    if(!(tmp774 && tmp775))
    {
      tmp777 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[268]] /* junCHWRet2.vol.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta778 = stringAppend(MMC_REFSTRINGLIT(tmp776),tmp777);
      {
        const char* assert_cond = "(junCHWRet2.vol.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta778));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta778));
        }
      }
      tmp779 = 1;
    }
  }
  threadData->lastEquationSolved = 8218;
}

/*
equation index: 8219
type: ALGORITHM

  assert(junCHWRet2.vol.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.vol.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8219};
  modelica_boolean tmp780;
  modelica_boolean tmp781;
  static const MMC_DEFSTRINGLIT(tmp782,181,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp783;
  modelica_metatype tmpMeta784;
  static int tmp785 = 0;
  if(!tmp785)
  {
    tmp780 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[267]] /* junCHWRet2.vol.substanceDynamics PARAM */),1);
    tmp781 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[267]] /* junCHWRet2.vol.substanceDynamics PARAM */),4);
    if(!(tmp780 && tmp781))
    {
      tmp783 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[267]] /* junCHWRet2.vol.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta784 = stringAppend(MMC_REFSTRINGLIT(tmp782),tmp783);
      {
        const char* assert_cond = "(junCHWRet2.vol.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta784));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta784));
        }
      }
      tmp785 = 1;
    }
  }
  threadData->lastEquationSolved = 8219;
}

/*
equation index: 8220
type: ALGORITHM

  assert(junCHWRet2.vol.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.vol.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8220};
  modelica_boolean tmp786;
  modelica_boolean tmp787;
  static const MMC_DEFSTRINGLIT(tmp788,176,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp789;
  modelica_metatype tmpMeta790;
  static int tmp791 = 0;
  if(!tmp791)
  {
    tmp786 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[265]] /* junCHWRet2.vol.massDynamics PARAM */),1);
    tmp787 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[265]] /* junCHWRet2.vol.massDynamics PARAM */),4);
    if(!(tmp786 && tmp787))
    {
      tmp789 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[265]] /* junCHWRet2.vol.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta790 = stringAppend(MMC_REFSTRINGLIT(tmp788),tmp789);
      {
        const char* assert_cond = "(junCHWRet2.vol.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta790));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta790));
        }
      }
      tmp791 = 1;
    }
  }
  threadData->lastEquationSolved = 8220;
}

/*
equation index: 8221
type: ALGORITHM

  assert(junCHWRet2.vol.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.vol.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8221};
  modelica_boolean tmp792;
  modelica_boolean tmp793;
  static const MMC_DEFSTRINGLIT(tmp794,178,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp795;
  modelica_metatype tmpMeta796;
  static int tmp797 = 0;
  if(!tmp797)
  {
    tmp792 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[264]] /* junCHWRet2.vol.energyDynamics PARAM */),1);
    tmp793 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[264]] /* junCHWRet2.vol.energyDynamics PARAM */),4);
    if(!(tmp792 && tmp793))
    {
      tmp795 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[264]] /* junCHWRet2.vol.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta796 = stringAppend(MMC_REFSTRINGLIT(tmp794),tmp795);
      {
        const char* assert_cond = "(junCHWRet2.vol.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.vol.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta796));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta796));
        }
      }
      tmp797 = 1;
    }
  }
  threadData->lastEquationSolved = 8221;
}

/*
equation index: 8222
type: ALGORITHM

  assert(junCHWRet2.res3.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= junCHWRet2.res3.deltaM, has value: " + String(junCHWRet2.res3.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8222};
  modelica_boolean tmp798;
  static const MMC_DEFSTRINGLIT(tmp799,78,"Variable violating min constraint: 1e-6 <= junCHWRet2.res3.deltaM, has value: ");
  modelica_string tmp800;
  modelica_metatype tmpMeta801;
  static int tmp802 = 0;
  if(!tmp802)
  {
    tmp798 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1747]] /* junCHWRet2.res3.deltaM PARAM */),1e-6);
    if(!tmp798)
    {
      tmp800 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1747]] /* junCHWRet2.res3.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta801 = stringAppend(MMC_REFSTRINGLIT(tmp799),tmp800);
      {
        const char* assert_cond = "(junCHWRet2.res3.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta801));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta801));
        }
      }
      tmp802 = 1;
    }
  }
  threadData->lastEquationSolved = 8222;
}

/*
equation index: 8223
type: ALGORITHM

  assert(junCHWRet2.res3.sta_default.p >= 0.0 and junCHWRet2.res3.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.res3.sta_default.p <= 1e8, has value: " + String(junCHWRet2.res3.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8223};
  modelica_boolean tmp803;
  modelica_boolean tmp804;
  static const MMC_DEFSTRINGLIT(tmp805,95,"Variable violating min/max constraint: 0.0 <= junCHWRet2.res3.sta_default.p <= 1e8, has value: ");
  modelica_string tmp806;
  modelica_metatype tmpMeta807;
  static int tmp808 = 0;
  if(!tmp808)
  {
    tmp803 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1757]] /* junCHWRet2.res3.sta_default.p PARAM */),0.0);
    tmp804 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1757]] /* junCHWRet2.res3.sta_default.p PARAM */),1e8);
    if(!(tmp803 && tmp804))
    {
      tmp806 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1757]] /* junCHWRet2.res3.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta807 = stringAppend(MMC_REFSTRINGLIT(tmp805),tmp806);
      {
        const char* assert_cond = "(junCHWRet2.res3.sta_default.p >= 0.0 and junCHWRet2.res3.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta807));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta807));
        }
      }
      tmp808 = 1;
    }
  }
  threadData->lastEquationSolved = 8223;
}

/*
equation index: 8224
type: ALGORITHM

  assert(junCHWRet2.res3.sta_default.T >= 1.0 and junCHWRet2.res3.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.res3.sta_default.T <= 1e4, has value: " + String(junCHWRet2.res3.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8224};
  modelica_boolean tmp809;
  modelica_boolean tmp810;
  static const MMC_DEFSTRINGLIT(tmp811,95,"Variable violating min/max constraint: 1.0 <= junCHWRet2.res3.sta_default.T <= 1e4, has value: ");
  modelica_string tmp812;
  modelica_metatype tmpMeta813;
  static int tmp814 = 0;
  if(!tmp814)
  {
    tmp809 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1756]] /* junCHWRet2.res3.sta_default.T PARAM */),1.0);
    tmp810 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1756]] /* junCHWRet2.res3.sta_default.T PARAM */),1e4);
    if(!(tmp809 && tmp810))
    {
      tmp812 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1756]] /* junCHWRet2.res3.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta813 = stringAppend(MMC_REFSTRINGLIT(tmp811),tmp812);
      {
        const char* assert_cond = "(junCHWRet2.res3.sta_default.T >= 1.0 and junCHWRet2.res3.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta813));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta813));
        }
      }
      tmp814 = 1;
    }
  }
  threadData->lastEquationSolved = 8224;
}

/*
equation index: 8225
type: ALGORITHM

  assert(junCHWRet2.res3.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res3.eta_default, has value: " + String(junCHWRet2.res3.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8225};
  modelica_boolean tmp815;
  static const MMC_DEFSTRINGLIT(tmp816,82,"Variable violating min constraint: 0.0 <= junCHWRet2.res3.eta_default, has value: ");
  modelica_string tmp817;
  modelica_metatype tmpMeta818;
  static int tmp819 = 0;
  if(!tmp819)
  {
    tmp815 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1750]] /* junCHWRet2.res3.eta_default PARAM */),0.0);
    if(!tmp815)
    {
      tmp817 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1750]] /* junCHWRet2.res3.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta818 = stringAppend(MMC_REFSTRINGLIT(tmp816),tmp817);
      {
        const char* assert_cond = "(junCHWRet2.res3.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta818));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta818));
        }
      }
      tmp819 = 1;
    }
  }
  threadData->lastEquationSolved = 8225;
}

/*
equation index: 8226
type: ALGORITHM

  assert(junCHWRet2.res3.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res3.m_flow_turbulent, has value: " + String(junCHWRet2.res3.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8226};
  modelica_boolean tmp820;
  static const MMC_DEFSTRINGLIT(tmp821,87,"Variable violating min constraint: 0.0 <= junCHWRet2.res3.m_flow_turbulent, has value: ");
  modelica_string tmp822;
  modelica_metatype tmpMeta823;
  static int tmp824 = 0;
  if(!tmp824)
  {
    tmp820 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1755]] /* junCHWRet2.res3.m_flow_turbulent PARAM */),0.0);
    if(!tmp820)
    {
      tmp822 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1755]] /* junCHWRet2.res3.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta823 = stringAppend(MMC_REFSTRINGLIT(tmp821),tmp822);
      {
        const char* assert_cond = "(junCHWRet2.res3.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta823));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta823));
        }
      }
      tmp824 = 1;
    }
  }
  threadData->lastEquationSolved = 8226;
}

/*
equation index: 8227
type: ALGORITHM

  assert(junCHWRet2.res3.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res3.m_flow_small, has value: " + String(junCHWRet2.res3.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8227};
  modelica_boolean tmp825;
  static const MMC_DEFSTRINGLIT(tmp826,83,"Variable violating min constraint: 0.0 <= junCHWRet2.res3.m_flow_small, has value: ");
  modelica_string tmp827;
  modelica_metatype tmpMeta828;
  static int tmp829 = 0;
  if(!tmp829)
  {
    tmp825 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1754]] /* junCHWRet2.res3.m_flow_small PARAM */),0.0);
    if(!tmp825)
    {
      tmp827 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1754]] /* junCHWRet2.res3.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta828 = stringAppend(MMC_REFSTRINGLIT(tmp826),tmp827);
      {
        const char* assert_cond = "(junCHWRet2.res3.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta828));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta828));
        }
      }
      tmp829 = 1;
    }
  }
  threadData->lastEquationSolved = 8227;
}

/*
equation index: 8228
type: ALGORITHM

  assert(junCHWRet2.res2.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= junCHWRet2.res2.deltaM, has value: " + String(junCHWRet2.res2.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8228};
  modelica_boolean tmp830;
  static const MMC_DEFSTRINGLIT(tmp831,78,"Variable violating min constraint: 1e-6 <= junCHWRet2.res2.deltaM, has value: ");
  modelica_string tmp832;
  modelica_metatype tmpMeta833;
  static int tmp834 = 0;
  if(!tmp834)
  {
    tmp830 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1733]] /* junCHWRet2.res2.deltaM PARAM */),1e-6);
    if(!tmp830)
    {
      tmp832 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1733]] /* junCHWRet2.res2.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta833 = stringAppend(MMC_REFSTRINGLIT(tmp831),tmp832);
      {
        const char* assert_cond = "(junCHWRet2.res2.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta833));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta833));
        }
      }
      tmp834 = 1;
    }
  }
  threadData->lastEquationSolved = 8228;
}

/*
equation index: 8229
type: ALGORITHM

  assert(junCHWRet2.res2.sta_default.p >= 0.0 and junCHWRet2.res2.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.res2.sta_default.p <= 1e8, has value: " + String(junCHWRet2.res2.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8229};
  modelica_boolean tmp835;
  modelica_boolean tmp836;
  static const MMC_DEFSTRINGLIT(tmp837,95,"Variable violating min/max constraint: 0.0 <= junCHWRet2.res2.sta_default.p <= 1e8, has value: ");
  modelica_string tmp838;
  modelica_metatype tmpMeta839;
  static int tmp840 = 0;
  if(!tmp840)
  {
    tmp835 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1743]] /* junCHWRet2.res2.sta_default.p PARAM */),0.0);
    tmp836 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1743]] /* junCHWRet2.res2.sta_default.p PARAM */),1e8);
    if(!(tmp835 && tmp836))
    {
      tmp838 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1743]] /* junCHWRet2.res2.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta839 = stringAppend(MMC_REFSTRINGLIT(tmp837),tmp838);
      {
        const char* assert_cond = "(junCHWRet2.res2.sta_default.p >= 0.0 and junCHWRet2.res2.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta839));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta839));
        }
      }
      tmp840 = 1;
    }
  }
  threadData->lastEquationSolved = 8229;
}

/*
equation index: 8230
type: ALGORITHM

  assert(junCHWRet2.res2.sta_default.T >= 1.0 and junCHWRet2.res2.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.res2.sta_default.T <= 1e4, has value: " + String(junCHWRet2.res2.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8230};
  modelica_boolean tmp841;
  modelica_boolean tmp842;
  static const MMC_DEFSTRINGLIT(tmp843,95,"Variable violating min/max constraint: 1.0 <= junCHWRet2.res2.sta_default.T <= 1e4, has value: ");
  modelica_string tmp844;
  modelica_metatype tmpMeta845;
  static int tmp846 = 0;
  if(!tmp846)
  {
    tmp841 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1742]] /* junCHWRet2.res2.sta_default.T PARAM */),1.0);
    tmp842 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1742]] /* junCHWRet2.res2.sta_default.T PARAM */),1e4);
    if(!(tmp841 && tmp842))
    {
      tmp844 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1742]] /* junCHWRet2.res2.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta845 = stringAppend(MMC_REFSTRINGLIT(tmp843),tmp844);
      {
        const char* assert_cond = "(junCHWRet2.res2.sta_default.T >= 1.0 and junCHWRet2.res2.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta845));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta845));
        }
      }
      tmp846 = 1;
    }
  }
  threadData->lastEquationSolved = 8230;
}

/*
equation index: 8231
type: ALGORITHM

  assert(junCHWRet2.res2.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res2.eta_default, has value: " + String(junCHWRet2.res2.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8231};
  modelica_boolean tmp847;
  static const MMC_DEFSTRINGLIT(tmp848,82,"Variable violating min constraint: 0.0 <= junCHWRet2.res2.eta_default, has value: ");
  modelica_string tmp849;
  modelica_metatype tmpMeta850;
  static int tmp851 = 0;
  if(!tmp851)
  {
    tmp847 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1736]] /* junCHWRet2.res2.eta_default PARAM */),0.0);
    if(!tmp847)
    {
      tmp849 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1736]] /* junCHWRet2.res2.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta850 = stringAppend(MMC_REFSTRINGLIT(tmp848),tmp849);
      {
        const char* assert_cond = "(junCHWRet2.res2.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta850));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta850));
        }
      }
      tmp851 = 1;
    }
  }
  threadData->lastEquationSolved = 8231;
}

/*
equation index: 8232
type: ALGORITHM

  assert(junCHWRet2.res2.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res2.m_flow_turbulent, has value: " + String(junCHWRet2.res2.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8232};
  modelica_boolean tmp852;
  static const MMC_DEFSTRINGLIT(tmp853,87,"Variable violating min constraint: 0.0 <= junCHWRet2.res2.m_flow_turbulent, has value: ");
  modelica_string tmp854;
  modelica_metatype tmpMeta855;
  static int tmp856 = 0;
  if(!tmp856)
  {
    tmp852 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1741]] /* junCHWRet2.res2.m_flow_turbulent PARAM */),0.0);
    if(!tmp852)
    {
      tmp854 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1741]] /* junCHWRet2.res2.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta855 = stringAppend(MMC_REFSTRINGLIT(tmp853),tmp854);
      {
        const char* assert_cond = "(junCHWRet2.res2.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta855));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta855));
        }
      }
      tmp856 = 1;
    }
  }
  threadData->lastEquationSolved = 8232;
}

/*
equation index: 8233
type: ALGORITHM

  assert(junCHWRet2.res2.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res2.m_flow_small, has value: " + String(junCHWRet2.res2.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8233};
  modelica_boolean tmp857;
  static const MMC_DEFSTRINGLIT(tmp858,83,"Variable violating min constraint: 0.0 <= junCHWRet2.res2.m_flow_small, has value: ");
  modelica_string tmp859;
  modelica_metatype tmpMeta860;
  static int tmp861 = 0;
  if(!tmp861)
  {
    tmp857 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1740]] /* junCHWRet2.res2.m_flow_small PARAM */),0.0);
    if(!tmp857)
    {
      tmp859 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1740]] /* junCHWRet2.res2.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta860 = stringAppend(MMC_REFSTRINGLIT(tmp858),tmp859);
      {
        const char* assert_cond = "(junCHWRet2.res2.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta860));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta860));
        }
      }
      tmp861 = 1;
    }
  }
  threadData->lastEquationSolved = 8233;
}

/*
equation index: 8234
type: ALGORITHM

  assert(junCHWRet2.res1.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= junCHWRet2.res1.deltaM, has value: " + String(junCHWRet2.res1.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8234};
  modelica_boolean tmp862;
  static const MMC_DEFSTRINGLIT(tmp863,78,"Variable violating min constraint: 1e-6 <= junCHWRet2.res1.deltaM, has value: ");
  modelica_string tmp864;
  modelica_metatype tmpMeta865;
  static int tmp866 = 0;
  if(!tmp866)
  {
    tmp862 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1719]] /* junCHWRet2.res1.deltaM PARAM */),1e-6);
    if(!tmp862)
    {
      tmp864 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1719]] /* junCHWRet2.res1.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta865 = stringAppend(MMC_REFSTRINGLIT(tmp863),tmp864);
      {
        const char* assert_cond = "(junCHWRet2.res1.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta865));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta865));
        }
      }
      tmp866 = 1;
    }
  }
  threadData->lastEquationSolved = 8234;
}

/*
equation index: 8235
type: ALGORITHM

  assert(junCHWRet2.res1.sta_default.p >= 0.0 and junCHWRet2.res1.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet2.res1.sta_default.p <= 1e8, has value: " + String(junCHWRet2.res1.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8235};
  modelica_boolean tmp867;
  modelica_boolean tmp868;
  static const MMC_DEFSTRINGLIT(tmp869,95,"Variable violating min/max constraint: 0.0 <= junCHWRet2.res1.sta_default.p <= 1e8, has value: ");
  modelica_string tmp870;
  modelica_metatype tmpMeta871;
  static int tmp872 = 0;
  if(!tmp872)
  {
    tmp867 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1729]] /* junCHWRet2.res1.sta_default.p PARAM */),0.0);
    tmp868 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1729]] /* junCHWRet2.res1.sta_default.p PARAM */),1e8);
    if(!(tmp867 && tmp868))
    {
      tmp870 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1729]] /* junCHWRet2.res1.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta871 = stringAppend(MMC_REFSTRINGLIT(tmp869),tmp870);
      {
        const char* assert_cond = "(junCHWRet2.res1.sta_default.p >= 0.0 and junCHWRet2.res1.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta871));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta871));
        }
      }
      tmp872 = 1;
    }
  }
  threadData->lastEquationSolved = 8235;
}

/*
equation index: 8236
type: ALGORITHM

  assert(junCHWRet2.res1.sta_default.T >= 1.0 and junCHWRet2.res1.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.res1.sta_default.T <= 1e4, has value: " + String(junCHWRet2.res1.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8236};
  modelica_boolean tmp873;
  modelica_boolean tmp874;
  static const MMC_DEFSTRINGLIT(tmp875,95,"Variable violating min/max constraint: 1.0 <= junCHWRet2.res1.sta_default.T <= 1e4, has value: ");
  modelica_string tmp876;
  modelica_metatype tmpMeta877;
  static int tmp878 = 0;
  if(!tmp878)
  {
    tmp873 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1728]] /* junCHWRet2.res1.sta_default.T PARAM */),1.0);
    tmp874 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1728]] /* junCHWRet2.res1.sta_default.T PARAM */),1e4);
    if(!(tmp873 && tmp874))
    {
      tmp876 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1728]] /* junCHWRet2.res1.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta877 = stringAppend(MMC_REFSTRINGLIT(tmp875),tmp876);
      {
        const char* assert_cond = "(junCHWRet2.res1.sta_default.T >= 1.0 and junCHWRet2.res1.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta877));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta877));
        }
      }
      tmp878 = 1;
    }
  }
  threadData->lastEquationSolved = 8236;
}

/*
equation index: 8237
type: ALGORITHM

  assert(junCHWRet2.res1.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res1.eta_default, has value: " + String(junCHWRet2.res1.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8237};
  modelica_boolean tmp879;
  static const MMC_DEFSTRINGLIT(tmp880,82,"Variable violating min constraint: 0.0 <= junCHWRet2.res1.eta_default, has value: ");
  modelica_string tmp881;
  modelica_metatype tmpMeta882;
  static int tmp883 = 0;
  if(!tmp883)
  {
    tmp879 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1722]] /* junCHWRet2.res1.eta_default PARAM */),0.0);
    if(!tmp879)
    {
      tmp881 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1722]] /* junCHWRet2.res1.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta882 = stringAppend(MMC_REFSTRINGLIT(tmp880),tmp881);
      {
        const char* assert_cond = "(junCHWRet2.res1.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta882));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",31,3,32,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta882));
        }
      }
      tmp883 = 1;
    }
  }
  threadData->lastEquationSolved = 8237;
}

/*
equation index: 8238
type: ALGORITHM

  assert(junCHWRet2.res1.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res1.m_flow_turbulent, has value: " + String(junCHWRet2.res1.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8238};
  modelica_boolean tmp884;
  static const MMC_DEFSTRINGLIT(tmp885,87,"Variable violating min constraint: 0.0 <= junCHWRet2.res1.m_flow_turbulent, has value: ");
  modelica_string tmp886;
  modelica_metatype tmpMeta887;
  static int tmp888 = 0;
  if(!tmp888)
  {
    tmp884 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1727]] /* junCHWRet2.res1.m_flow_turbulent PARAM */),0.0);
    if(!tmp884)
    {
      tmp886 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1727]] /* junCHWRet2.res1.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta887 = stringAppend(MMC_REFSTRINGLIT(tmp885),tmp886);
      {
        const char* assert_cond = "(junCHWRet2.res1.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta887));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialResistance.mo",25,3,26,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta887));
        }
      }
      tmp888 = 1;
    }
  }
  threadData->lastEquationSolved = 8238;
}

/*
equation index: 8239
type: ALGORITHM

  assert(junCHWRet2.res1.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet2.res1.m_flow_small, has value: " + String(junCHWRet2.res1.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8239};
  modelica_boolean tmp889;
  static const MMC_DEFSTRINGLIT(tmp890,83,"Variable violating min constraint: 0.0 <= junCHWRet2.res1.m_flow_small, has value: ");
  modelica_string tmp891;
  modelica_metatype tmpMeta892;
  static int tmp893 = 0;
  if(!tmp893)
  {
    tmp889 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1726]] /* junCHWRet2.res1.m_flow_small PARAM */),0.0);
    if(!tmp889)
    {
      tmp891 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1726]] /* junCHWRet2.res1.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta892 = stringAppend(MMC_REFSTRINGLIT(tmp890),tmp891);
      {
        const char* assert_cond = "(junCHWRet2.res1.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta892));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",11,3,13,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta892));
        }
      }
      tmp893 = 1;
    }
  }
  threadData->lastEquationSolved = 8239;
}

/*
equation index: 8240
type: ALGORITHM

  assert(junCHWRet2.portFlowDirection_3 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWRet2.portFlowDirection_3 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWRet2.portFlowDirection_3 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(junCHWRet2.portFlowDirection_3, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8240};
  modelica_boolean tmp894;
  modelica_boolean tmp895;
  static const MMC_DEFSTRINGLIT(tmp896,189,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWRet2.portFlowDirection_3 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp897;
  modelica_metatype tmpMeta898;
  static int tmp899 = 0;
  if(!tmp899)
  {
    tmp894 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[256]] /* junCHWRet2.portFlowDirection_3 PARAM */),1);
    tmp895 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[256]] /* junCHWRet2.portFlowDirection_3 PARAM */),3);
    if(!(tmp894 && tmp895))
    {
      tmp897 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[256]] /* junCHWRet2.portFlowDirection_3 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta898 = stringAppend(MMC_REFSTRINGLIT(tmp896),tmp897);
      {
        const char* assert_cond = "(junCHWRet2.portFlowDirection_3 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWRet2.portFlowDirection_3 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",47,3,49,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta898));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",47,3,49,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta898));
        }
      }
      tmp899 = 1;
    }
  }
  threadData->lastEquationSolved = 8240;
}

/*
equation index: 8241
type: ALGORITHM

  assert(junCHWRet2.portFlowDirection_2 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWRet2.portFlowDirection_2 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWRet2.portFlowDirection_2 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(junCHWRet2.portFlowDirection_2, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8241};
  modelica_boolean tmp900;
  modelica_boolean tmp901;
  static const MMC_DEFSTRINGLIT(tmp902,189,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWRet2.portFlowDirection_2 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp903;
  modelica_metatype tmpMeta904;
  static int tmp905 = 0;
  if(!tmp905)
  {
    tmp900 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[255]] /* junCHWRet2.portFlowDirection_2 PARAM */),1);
    tmp901 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[255]] /* junCHWRet2.portFlowDirection_2 PARAM */),3);
    if(!(tmp900 && tmp901))
    {
      tmp903 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[255]] /* junCHWRet2.portFlowDirection_2 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta904 = stringAppend(MMC_REFSTRINGLIT(tmp902),tmp903);
      {
        const char* assert_cond = "(junCHWRet2.portFlowDirection_2 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWRet2.portFlowDirection_2 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",44,3,46,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta904));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",44,3,46,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta904));
        }
      }
      tmp905 = 1;
    }
  }
  threadData->lastEquationSolved = 8241;
}

/*
equation index: 8242
type: ALGORITHM

  assert(junCHWRet2.portFlowDirection_1 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWRet2.portFlowDirection_1 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWRet2.portFlowDirection_1 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(junCHWRet2.portFlowDirection_1, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8242};
  modelica_boolean tmp906;
  modelica_boolean tmp907;
  static const MMC_DEFSTRINGLIT(tmp908,189,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= junCHWRet2.portFlowDirection_1 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp909;
  modelica_metatype tmpMeta910;
  static int tmp911 = 0;
  if(!tmp911)
  {
    tmp906 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[254]] /* junCHWRet2.portFlowDirection_1 PARAM */),1);
    tmp907 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[254]] /* junCHWRet2.portFlowDirection_1 PARAM */),3);
    if(!(tmp906 && tmp907))
    {
      tmp909 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[254]] /* junCHWRet2.portFlowDirection_1 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta910 = stringAppend(MMC_REFSTRINGLIT(tmp908),tmp909);
      {
        const char* assert_cond = "(junCHWRet2.portFlowDirection_1 >= Modelica.Fluid.Types.PortFlowDirection.Entering and junCHWRet2.portFlowDirection_1 <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",41,3,43,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta910));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/BaseClasses/PartialThreeWayResistance.mo",41,3,43,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta910));
        }
      }
      tmp911 = 1;
    }
  }
  threadData->lastEquationSolved = 8242;
}

/*
equation index: 8243
type: ALGORITHM

  assert(junCHWRet2.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= junCHWRet2.mSenFac, has value: " + String(junCHWRet2.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8243};
  modelica_boolean tmp912;
  static const MMC_DEFSTRINGLIT(tmp913,73,"Variable violating min constraint: 1.0 <= junCHWRet2.mSenFac, has value: ");
  modelica_string tmp914;
  modelica_metatype tmpMeta915;
  static int tmp916 = 0;
  if(!tmp916)
  {
    tmp912 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1710]] /* junCHWRet2.mSenFac PARAM */),1.0);
    if(!tmp912)
    {
      tmp914 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1710]] /* junCHWRet2.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta915 = stringAppend(MMC_REFSTRINGLIT(tmp913),tmp914);
      {
        const char* assert_cond = "(junCHWRet2.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta915));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta915));
        }
      }
      tmp916 = 1;
    }
  }
  threadData->lastEquationSolved = 8243;
}

/*
equation index: 8244
type: ALGORITHM

  assert(junCHWRet2.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8244};
  modelica_boolean tmp917;
  modelica_boolean tmp918;
  static const MMC_DEFSTRINGLIT(tmp919,173,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp920;
  modelica_metatype tmpMeta921;
  static int tmp922 = 0;
  if(!tmp922)
  {
    tmp917 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[258]] /* junCHWRet2.traceDynamics PARAM */),1);
    tmp918 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[258]] /* junCHWRet2.traceDynamics PARAM */),4);
    if(!(tmp917 && tmp918))
    {
      tmp920 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[258]] /* junCHWRet2.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta921 = stringAppend(MMC_REFSTRINGLIT(tmp919),tmp920);
      {
        const char* assert_cond = "(junCHWRet2.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta921));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta921));
        }
      }
      tmp922 = 1;
    }
  }
  threadData->lastEquationSolved = 8244;
}

/*
equation index: 8245
type: ALGORITHM

  assert(junCHWRet2.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8245};
  modelica_boolean tmp923;
  modelica_boolean tmp924;
  static const MMC_DEFSTRINGLIT(tmp925,177,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp926;
  modelica_metatype tmpMeta927;
  static int tmp928 = 0;
  if(!tmp928)
  {
    tmp923 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[257]] /* junCHWRet2.substanceDynamics PARAM */),1);
    tmp924 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[257]] /* junCHWRet2.substanceDynamics PARAM */),4);
    if(!(tmp923 && tmp924))
    {
      tmp926 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[257]] /* junCHWRet2.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta927 = stringAppend(MMC_REFSTRINGLIT(tmp925),tmp926);
      {
        const char* assert_cond = "(junCHWRet2.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta927));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta927));
        }
      }
      tmp928 = 1;
    }
  }
  threadData->lastEquationSolved = 8245;
}

/*
equation index: 8246
type: ALGORITHM

  assert(junCHWRet2.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8246};
  modelica_boolean tmp929;
  modelica_boolean tmp930;
  static const MMC_DEFSTRINGLIT(tmp931,172,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp932;
  modelica_metatype tmpMeta933;
  static int tmp934 = 0;
  if(!tmp934)
  {
    tmp929 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[253]] /* junCHWRet2.massDynamics PARAM */),1);
    tmp930 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[253]] /* junCHWRet2.massDynamics PARAM */),4);
    if(!(tmp929 && tmp930))
    {
      tmp932 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[253]] /* junCHWRet2.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta933 = stringAppend(MMC_REFSTRINGLIT(tmp931),tmp932);
      {
        const char* assert_cond = "(junCHWRet2.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta933));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta933));
        }
      }
      tmp934 = 1;
    }
  }
  threadData->lastEquationSolved = 8246;
}

/*
equation index: 8247
type: ALGORITHM

  assert(junCHWRet2.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet2.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8247};
  modelica_boolean tmp935;
  modelica_boolean tmp936;
  static const MMC_DEFSTRINGLIT(tmp937,174,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp938;
  modelica_metatype tmpMeta939;
  static int tmp940 = 0;
  if(!tmp940)
  {
    tmp935 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[252]] /* junCHWRet2.energyDynamics PARAM */),1);
    tmp936 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[252]] /* junCHWRet2.energyDynamics PARAM */),4);
    if(!(tmp935 && tmp936))
    {
      tmp938 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[252]] /* junCHWRet2.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta939 = stringAppend(MMC_REFSTRINGLIT(tmp937),tmp938);
      {
        const char* assert_cond = "(junCHWRet2.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta939));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta939));
        }
      }
      tmp940 = 1;
    }
  }
  threadData->lastEquationSolved = 8247;
}

/*
equation index: 8248
type: ALGORITHM

  assert(junCHWRet.deltaM >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet.deltaM, has value: " + String(junCHWRet.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8248};
  modelica_boolean tmp941;
  static const MMC_DEFSTRINGLIT(tmp942,71,"Variable violating min constraint: 0.0 <= junCHWRet.deltaM, has value: ");
  modelica_string tmp943;
  modelica_metatype tmpMeta944;
  static int tmp945 = 0;
  if(!tmp945)
  {
    tmp941 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1622]] /* junCHWRet.deltaM PARAM */),0.0);
    if(!tmp941)
    {
      tmp943 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1622]] /* junCHWRet.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta944 = stringAppend(MMC_REFSTRINGLIT(tmp942),tmp943);
      {
        const char* assert_cond = "(junCHWRet.deltaM >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/Junction.mo",37,3,40,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta944));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/Junction.mo",37,3,40,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta944));
        }
      }
      tmp945 = 1;
    }
  }
  threadData->lastEquationSolved = 8248;
}

/*
equation index: 8249
type: ALGORITHM

  assert(junCHWRet.vol.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet.vol.m_flow_nominal, has value: " + String(junCHWRet.vol.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8249};
  modelica_boolean tmp946;
  static const MMC_DEFSTRINGLIT(tmp947,83,"Variable violating min constraint: 0.0 <= junCHWRet.vol.m_flow_nominal, has value: ");
  modelica_string tmp948;
  modelica_metatype tmpMeta949;
  static int tmp950 = 0;
  if(!tmp950)
  {
    tmp946 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1693]] /* junCHWRet.vol.m_flow_nominal PARAM */),0.0);
    if(!tmp946)
    {
      tmp948 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1693]] /* junCHWRet.vol.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta949 = stringAppend(MMC_REFSTRINGLIT(tmp947),tmp948);
      {
        const char* assert_cond = "(junCHWRet.vol.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,22,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta949));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,22,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta949));
        }
      }
      tmp950 = 1;
    }
  }
  threadData->lastEquationSolved = 8249;
}

/*
equation index: 8250
type: ALGORITHM

  assert(junCHWRet.T_start >= 1.0 and junCHWRet.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet.T_start <= 1e4, has value: " + String(junCHWRet.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8250};
  modelica_boolean tmp951;
  modelica_boolean tmp952;
  static const MMC_DEFSTRINGLIT(tmp953,83,"Variable violating min/max constraint: 1.0 <= junCHWRet.T_start <= 1e4, has value: ");
  modelica_string tmp954;
  modelica_metatype tmpMeta955;
  static int tmp956 = 0;
  if(!tmp956)
  {
    tmp951 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1620]] /* junCHWRet.T_start PARAM */),1.0);
    tmp952 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1620]] /* junCHWRet.T_start PARAM */),1e4);
    if(!(tmp951 && tmp952))
    {
      tmp954 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1620]] /* junCHWRet.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta955 = stringAppend(MMC_REFSTRINGLIT(tmp953),tmp954);
      {
        const char* assert_cond = "(junCHWRet.T_start >= 1.0 and junCHWRet.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta955));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta955));
        }
      }
      tmp956 = 1;
    }
  }
  threadData->lastEquationSolved = 8250;
}

/*
equation index: 8251
type: ALGORITHM

  assert(junCHWRet.vol.T_start >= 1.0 and junCHWRet.vol.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet.vol.T_start <= 1e4, has value: " + String(junCHWRet.vol.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8251};
  modelica_boolean tmp957;
  modelica_boolean tmp958;
  static const MMC_DEFSTRINGLIT(tmp959,87,"Variable violating min/max constraint: 1.0 <= junCHWRet.vol.T_start <= 1e4, has value: ");
  modelica_string tmp960;
  modelica_metatype tmpMeta961;
  static int tmp962 = 0;
  if(!tmp962)
  {
    tmp957 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1676]] /* junCHWRet.vol.T_start PARAM */),1.0);
    tmp958 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1676]] /* junCHWRet.vol.T_start PARAM */),1e4);
    if(!(tmp957 && tmp958))
    {
      tmp960 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1676]] /* junCHWRet.vol.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta961 = stringAppend(MMC_REFSTRINGLIT(tmp959),tmp960);
      {
        const char* assert_cond = "(junCHWRet.vol.T_start >= 1.0 and junCHWRet.vol.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta961));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta961));
        }
      }
      tmp962 = 1;
    }
  }
  threadData->lastEquationSolved = 8251;
}

/*
equation index: 8252
type: ALGORITHM

  assert(junCHWRet.vol.state_start.T >= 1.0 and junCHWRet.vol.state_start.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet.vol.state_start.T <= 1e4, has value: " + String(junCHWRet.vol.state_start.T, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8252};
  modelica_boolean tmp963;
  modelica_boolean tmp964;
  static const MMC_DEFSTRINGLIT(tmp965,93,"Variable violating min/max constraint: 1.0 <= junCHWRet.vol.state_start.T <= 1e4, has value: ");
  modelica_string tmp966;
  modelica_metatype tmpMeta967;
  static int tmp968 = 0;
  if(!tmp968)
  {
    tmp963 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1700]] /* junCHWRet.vol.state_start.T PARAM */),1.0);
    tmp964 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1700]] /* junCHWRet.vol.state_start.T PARAM */),1e4);
    if(!(tmp963 && tmp964))
    {
      tmp966 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1700]] /* junCHWRet.vol.state_start.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta967 = stringAppend(MMC_REFSTRINGLIT(tmp965),tmp966);
      {
        const char* assert_cond = "(junCHWRet.vol.state_start.T >= 1.0 and junCHWRet.vol.state_start.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta967));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta967));
        }
      }
      tmp968 = 1;
    }
  }
  threadData->lastEquationSolved = 8252;
}

/*
equation index: 8253
type: ALGORITHM

  assert(junCHWRet.p_start >= 0.0 and junCHWRet.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet.p_start <= 1e8, has value: " + String(junCHWRet.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8253};
  modelica_boolean tmp969;
  modelica_boolean tmp970;
  static const MMC_DEFSTRINGLIT(tmp971,83,"Variable violating min/max constraint: 0.0 <= junCHWRet.p_start <= 1e8, has value: ");
  modelica_string tmp972;
  modelica_metatype tmpMeta973;
  static int tmp974 = 0;
  if(!tmp974)
  {
    tmp969 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1632]] /* junCHWRet.p_start PARAM */),0.0);
    tmp970 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1632]] /* junCHWRet.p_start PARAM */),1e8);
    if(!(tmp969 && tmp970))
    {
      tmp972 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1632]] /* junCHWRet.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta973 = stringAppend(MMC_REFSTRINGLIT(tmp971),tmp972);
      {
        const char* assert_cond = "(junCHWRet.p_start >= 0.0 and junCHWRet.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta973));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta973));
        }
      }
      tmp974 = 1;
    }
  }
  threadData->lastEquationSolved = 8253;
}

/*
equation index: 8254
type: ALGORITHM

  assert(junCHWRet.vol.p_start >= 0.0 and junCHWRet.vol.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet.vol.p_start <= 1e8, has value: " + String(junCHWRet.vol.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8254};
  modelica_boolean tmp975;
  modelica_boolean tmp976;
  static const MMC_DEFSTRINGLIT(tmp977,87,"Variable violating min/max constraint: 0.0 <= junCHWRet.vol.p_start <= 1e8, has value: ");
  modelica_string tmp978;
  modelica_metatype tmpMeta979;
  static int tmp980 = 0;
  if(!tmp980)
  {
    tmp975 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1695]] /* junCHWRet.vol.p_start PARAM */),0.0);
    tmp976 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1695]] /* junCHWRet.vol.p_start PARAM */),1e8);
    if(!(tmp975 && tmp976))
    {
      tmp978 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1695]] /* junCHWRet.vol.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta979 = stringAppend(MMC_REFSTRINGLIT(tmp977),tmp978);
      {
        const char* assert_cond = "(junCHWRet.vol.p_start >= 0.0 and junCHWRet.vol.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta979));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta979));
        }
      }
      tmp980 = 1;
    }
  }
  threadData->lastEquationSolved = 8254;
}

/*
equation index: 8255
type: ALGORITHM

  assert(junCHWRet.vol.state_start.p >= 0.0 and junCHWRet.vol.state_start.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet.vol.state_start.p <= 1e8, has value: " + String(junCHWRet.vol.state_start.p, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8255};
  modelica_boolean tmp981;
  modelica_boolean tmp982;
  static const MMC_DEFSTRINGLIT(tmp983,93,"Variable violating min/max constraint: 0.0 <= junCHWRet.vol.state_start.p <= 1e8, has value: ");
  modelica_string tmp984;
  modelica_metatype tmpMeta985;
  static int tmp986 = 0;
  if(!tmp986)
  {
    tmp981 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1701]] /* junCHWRet.vol.state_start.p PARAM */),0.0);
    tmp982 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1701]] /* junCHWRet.vol.state_start.p PARAM */),1e8);
    if(!(tmp981 && tmp982))
    {
      tmp984 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1701]] /* junCHWRet.vol.state_start.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta985 = stringAppend(MMC_REFSTRINGLIT(tmp983),tmp984);
      {
        const char* assert_cond = "(junCHWRet.vol.state_start.p >= 0.0 and junCHWRet.vol.state_start.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta985));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta985));
        }
      }
      tmp986 = 1;
    }
  }
  threadData->lastEquationSolved = 8255;
}

/*
equation index: 8256
type: ALGORITHM

  assert(junCHWRet.vol.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet.vol.rho_default, has value: " + String(junCHWRet.vol.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8256};
  modelica_boolean tmp987;
  static const MMC_DEFSTRINGLIT(tmp988,80,"Variable violating min constraint: 0.0 <= junCHWRet.vol.rho_default, has value: ");
  modelica_string tmp989;
  modelica_metatype tmpMeta990;
  static int tmp991 = 0;
  if(!tmp991)
  {
    tmp987 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1696]] /* junCHWRet.vol.rho_default PARAM */),0.0);
    if(!tmp987)
    {
      tmp989 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1696]] /* junCHWRet.vol.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta990 = stringAppend(MMC_REFSTRINGLIT(tmp988),tmp989);
      {
        const char* assert_cond = "(junCHWRet.vol.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",90,3,91,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta990));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",90,3,91,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta990));
        }
      }
      tmp991 = 1;
    }
  }
  threadData->lastEquationSolved = 8256;
}

/*
equation index: 8257
type: ALGORITHM

  assert(junCHWRet.vol.state_default.T >= 1.0 and junCHWRet.vol.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet.vol.state_default.T <= 1e4, has value: " + String(junCHWRet.vol.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8257};
  modelica_boolean tmp992;
  modelica_boolean tmp993;
  static const MMC_DEFSTRINGLIT(tmp994,95,"Variable violating min/max constraint: 1.0 <= junCHWRet.vol.state_default.T <= 1e4, has value: ");
  modelica_string tmp995;
  modelica_metatype tmpMeta996;
  static int tmp997 = 0;
  if(!tmp997)
  {
    tmp992 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1698]] /* junCHWRet.vol.state_default.T PARAM */),1.0);
    tmp993 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1698]] /* junCHWRet.vol.state_default.T PARAM */),1e4);
    if(!(tmp992 && tmp993))
    {
      tmp995 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1698]] /* junCHWRet.vol.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta996 = stringAppend(MMC_REFSTRINGLIT(tmp994),tmp995);
      {
        const char* assert_cond = "(junCHWRet.vol.state_default.T >= 1.0 and junCHWRet.vol.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta996));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta996));
        }
      }
      tmp997 = 1;
    }
  }
  threadData->lastEquationSolved = 8257;
}

/*
equation index: 8258
type: ALGORITHM

  assert(junCHWRet.vol.state_default.p >= 0.0 and junCHWRet.vol.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet.vol.state_default.p <= 1e8, has value: " + String(junCHWRet.vol.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8258};
  modelica_boolean tmp998;
  modelica_boolean tmp999;
  static const MMC_DEFSTRINGLIT(tmp1000,95,"Variable violating min/max constraint: 0.0 <= junCHWRet.vol.state_default.p <= 1e8, has value: ");
  modelica_string tmp1001;
  modelica_metatype tmpMeta1002;
  static int tmp1003 = 0;
  if(!tmp1003)
  {
    tmp998 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1699]] /* junCHWRet.vol.state_default.p PARAM */),0.0);
    tmp999 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1699]] /* junCHWRet.vol.state_default.p PARAM */),1e8);
    if(!(tmp998 && tmp999))
    {
      tmp1001 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1699]] /* junCHWRet.vol.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1002 = stringAppend(MMC_REFSTRINGLIT(tmp1000),tmp1001);
      {
        const char* assert_cond = "(junCHWRet.vol.state_default.p >= 0.0 and junCHWRet.vol.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1002));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1002));
        }
      }
      tmp1003 = 1;
    }
  }
  threadData->lastEquationSolved = 8258;
}

/*
equation index: 8259
type: ALGORITHM

  assert(junCHWRet.vol.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet.vol.rho_start, has value: " + String(junCHWRet.vol.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8259};
  modelica_boolean tmp1004;
  static const MMC_DEFSTRINGLIT(tmp1005,78,"Variable violating min constraint: 0.0 <= junCHWRet.vol.rho_start, has value: ");
  modelica_string tmp1006;
  modelica_metatype tmpMeta1007;
  static int tmp1008 = 0;
  if(!tmp1008)
  {
    tmp1004 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1697]] /* junCHWRet.vol.rho_start PARAM */),0.0);
    if(!tmp1004)
    {
      tmp1006 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1697]] /* junCHWRet.vol.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1007 = stringAppend(MMC_REFSTRINGLIT(tmp1005),tmp1006);
      {
        const char* assert_cond = "(junCHWRet.vol.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",83,3,84,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1007));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",83,3,84,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1007));
        }
      }
      tmp1008 = 1;
    }
  }
  threadData->lastEquationSolved = 8259;
}

/*
equation index: 8260
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.p_start >= 0.0 and junCHWRet.vol.dynBal.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet.vol.dynBal.p_start <= 1e8, has value: " + String(junCHWRet.vol.dynBal.p_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8260};
  modelica_boolean tmp1009;
  modelica_boolean tmp1010;
  static const MMC_DEFSTRINGLIT(tmp1011,94,"Variable violating min/max constraint: 0.0 <= junCHWRet.vol.dynBal.p_start <= 1e8, has value: ");
  modelica_string tmp1012;
  modelica_metatype tmpMeta1013;
  static int tmp1014 = 0;
  if(!tmp1014)
  {
    tmp1009 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1687]] /* junCHWRet.vol.dynBal.p_start PARAM */),0.0);
    tmp1010 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1687]] /* junCHWRet.vol.dynBal.p_start PARAM */),1e8);
    if(!(tmp1009 && tmp1010))
    {
      tmp1012 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1687]] /* junCHWRet.vol.dynBal.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1013 = stringAppend(MMC_REFSTRINGLIT(tmp1011),tmp1012);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.p_start >= 0.0 and junCHWRet.vol.dynBal.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1013));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1013));
        }
      }
      tmp1014 = 1;
    }
  }
  threadData->lastEquationSolved = 8260;
}

/*
equation index: 8261
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.T_start >= 1.0 and junCHWRet.vol.dynBal.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet.vol.dynBal.T_start <= 1e4, has value: " + String(junCHWRet.vol.dynBal.T_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8261};
  modelica_boolean tmp1015;
  modelica_boolean tmp1016;
  static const MMC_DEFSTRINGLIT(tmp1017,94,"Variable violating min/max constraint: 1.0 <= junCHWRet.vol.dynBal.T_start <= 1e4, has value: ");
  modelica_string tmp1018;
  modelica_metatype tmpMeta1019;
  static int tmp1020 = 0;
  if(!tmp1020)
  {
    tmp1015 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1681]] /* junCHWRet.vol.dynBal.T_start PARAM */),1.0);
    tmp1016 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1681]] /* junCHWRet.vol.dynBal.T_start PARAM */),1e4);
    if(!(tmp1015 && tmp1016))
    {
      tmp1018 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1681]] /* junCHWRet.vol.dynBal.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1019 = stringAppend(MMC_REFSTRINGLIT(tmp1017),tmp1018);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.T_start >= 1.0 and junCHWRet.vol.dynBal.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1019));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1019));
        }
      }
      tmp1020 = 1;
    }
  }
  threadData->lastEquationSolved = 8261;
}

/*
equation index: 8262
type: ALGORITHM

  assert(junCHWRet.X_start[1] >= 0.0 and junCHWRet.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWRet.X_start[1] <= 1.0, has value: " + String(junCHWRet.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8262};
  modelica_boolean tmp1021;
  modelica_boolean tmp1022;
  static const MMC_DEFSTRINGLIT(tmp1023,86,"Variable violating min/max constraint: 0.0 <= junCHWRet.X_start[1] <= 1.0, has value: ");
  modelica_string tmp1024;
  modelica_metatype tmpMeta1025;
  static int tmp1026 = 0;
  if(!tmp1026)
  {
    tmp1021 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1621]] /* junCHWRet.X_start[1] PARAM */),0.0);
    tmp1022 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1621]] /* junCHWRet.X_start[1] PARAM */),1.0);
    if(!(tmp1021 && tmp1022))
    {
      tmp1024 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1621]] /* junCHWRet.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1025 = stringAppend(MMC_REFSTRINGLIT(tmp1023),tmp1024);
      {
        const char* assert_cond = "(junCHWRet.X_start[1] >= 0.0 and junCHWRet.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1025));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1025));
        }
      }
      tmp1026 = 1;
    }
  }
  threadData->lastEquationSolved = 8262;
}

/*
equation index: 8263
type: ALGORITHM

  assert(junCHWRet.vol.X_start[1] >= 0.0 and junCHWRet.vol.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWRet.vol.X_start[1] <= 1.0, has value: " + String(junCHWRet.vol.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8263};
  modelica_boolean tmp1027;
  modelica_boolean tmp1028;
  static const MMC_DEFSTRINGLIT(tmp1029,90,"Variable violating min/max constraint: 0.0 <= junCHWRet.vol.X_start[1] <= 1.0, has value: ");
  modelica_string tmp1030;
  modelica_metatype tmpMeta1031;
  static int tmp1032 = 0;
  if(!tmp1032)
  {
    tmp1027 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1679]] /* junCHWRet.vol.X_start[1] PARAM */),0.0);
    tmp1028 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1679]] /* junCHWRet.vol.X_start[1] PARAM */),1.0);
    if(!(tmp1027 && tmp1028))
    {
      tmp1030 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1679]] /* junCHWRet.vol.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1031 = stringAppend(MMC_REFSTRINGLIT(tmp1029),tmp1030);
      {
        const char* assert_cond = "(junCHWRet.vol.X_start[1] >= 0.0 and junCHWRet.vol.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1031));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1031));
        }
      }
      tmp1032 = 1;
    }
  }
  threadData->lastEquationSolved = 8263;
}

/*
equation index: 8264
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.X_start[1] >= 0.0 and junCHWRet.vol.dynBal.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junCHWRet.vol.dynBal.X_start[1] <= 1.0, has value: " + String(junCHWRet.vol.dynBal.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8264};
  modelica_boolean tmp1033;
  modelica_boolean tmp1034;
  static const MMC_DEFSTRINGLIT(tmp1035,97,"Variable violating min/max constraint: 0.0 <= junCHWRet.vol.dynBal.X_start[1] <= 1.0, has value: ");
  modelica_string tmp1036;
  modelica_metatype tmpMeta1037;
  static int tmp1038 = 0;
  if(!tmp1038)
  {
    tmp1033 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1682]] /* junCHWRet.vol.dynBal.X_start[1] PARAM */),0.0);
    tmp1034 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1682]] /* junCHWRet.vol.dynBal.X_start[1] PARAM */),1.0);
    if(!(tmp1033 && tmp1034))
    {
      tmp1036 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1682]] /* junCHWRet.vol.dynBal.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1037 = stringAppend(MMC_REFSTRINGLIT(tmp1035),tmp1036);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.X_start[1] >= 0.0 and junCHWRet.vol.dynBal.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1037));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1037));
        }
      }
      tmp1038 = 1;
    }
  }
  threadData->lastEquationSolved = 8264;
}

/*
equation index: 8265
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet.vol.dynBal.rho_default, has value: " + String(junCHWRet.vol.dynBal.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8265};
  modelica_boolean tmp1039;
  static const MMC_DEFSTRINGLIT(tmp1040,87,"Variable violating min constraint: 0.0 <= junCHWRet.vol.dynBal.rho_default, has value: ");
  modelica_string tmp1041;
  modelica_metatype tmpMeta1042;
  static int tmp1043 = 0;
  if(!tmp1043)
  {
    tmp1039 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1688]] /* junCHWRet.vol.dynBal.rho_default PARAM */),0.0);
    if(!tmp1039)
    {
      tmp1041 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1688]] /* junCHWRet.vol.dynBal.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1042 = stringAppend(MMC_REFSTRINGLIT(tmp1040),tmp1041);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",145,3,146,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1042));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",145,3,146,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1042));
        }
      }
      tmp1043 = 1;
    }
  }
  threadData->lastEquationSolved = 8265;
}

/*
equation index: 8266
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.state_default.T >= 1.0 and junCHWRet.vol.dynBal.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet.vol.dynBal.state_default.T <= 1e4, has value: " + String(junCHWRet.vol.dynBal.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8266};
  modelica_boolean tmp1044;
  modelica_boolean tmp1045;
  static const MMC_DEFSTRINGLIT(tmp1046,102,"Variable violating min/max constraint: 1.0 <= junCHWRet.vol.dynBal.state_default.T <= 1e4, has value: ");
  modelica_string tmp1047;
  modelica_metatype tmpMeta1048;
  static int tmp1049 = 0;
  if(!tmp1049)
  {
    tmp1044 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1690]] /* junCHWRet.vol.dynBal.state_default.T PARAM */),1.0);
    tmp1045 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1690]] /* junCHWRet.vol.dynBal.state_default.T PARAM */),1e4);
    if(!(tmp1044 && tmp1045))
    {
      tmp1047 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1690]] /* junCHWRet.vol.dynBal.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1048 = stringAppend(MMC_REFSTRINGLIT(tmp1046),tmp1047);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.state_default.T >= 1.0 and junCHWRet.vol.dynBal.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1048));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1048));
        }
      }
      tmp1049 = 1;
    }
  }
  threadData->lastEquationSolved = 8266;
}

/*
equation index: 8267
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.state_default.p >= 0.0 and junCHWRet.vol.dynBal.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet.vol.dynBal.state_default.p <= 1e8, has value: " + String(junCHWRet.vol.dynBal.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8267};
  modelica_boolean tmp1050;
  modelica_boolean tmp1051;
  static const MMC_DEFSTRINGLIT(tmp1052,102,"Variable violating min/max constraint: 0.0 <= junCHWRet.vol.dynBal.state_default.p <= 1e8, has value: ");
  modelica_string tmp1053;
  modelica_metatype tmpMeta1054;
  static int tmp1055 = 0;
  if(!tmp1055)
  {
    tmp1050 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1691]] /* junCHWRet.vol.dynBal.state_default.p PARAM */),0.0);
    tmp1051 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1691]] /* junCHWRet.vol.dynBal.state_default.p PARAM */),1e8);
    if(!(tmp1050 && tmp1051))
    {
      tmp1053 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1691]] /* junCHWRet.vol.dynBal.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1054 = stringAppend(MMC_REFSTRINGLIT(tmp1052),tmp1053);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.state_default.p >= 0.0 and junCHWRet.vol.dynBal.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1054));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6911,7,6911,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1054));
        }
      }
      tmp1055 = 1;
    }
  }
  threadData->lastEquationSolved = 8267;
}

/*
equation index: 8268
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet.vol.dynBal.rho_start, has value: " + String(junCHWRet.vol.dynBal.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8268};
  modelica_boolean tmp1056;
  static const MMC_DEFSTRINGLIT(tmp1057,85,"Variable violating min constraint: 0.0 <= junCHWRet.vol.dynBal.rho_start, has value: ");
  modelica_string tmp1058;
  modelica_metatype tmpMeta1059;
  static int tmp1060 = 0;
  if(!tmp1060)
  {
    tmp1056 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1689]] /* junCHWRet.vol.dynBal.rho_start PARAM */),0.0);
    if(!tmp1056)
    {
      tmp1058 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1689]] /* junCHWRet.vol.dynBal.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1059 = stringAppend(MMC_REFSTRINGLIT(tmp1057),tmp1058);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",131,3,135,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1059));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",131,3,135,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1059));
        }
      }
      tmp1060 = 1;
    }
  }
  threadData->lastEquationSolved = 8268;
}

/*
equation index: 8269
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= junCHWRet.vol.dynBal.mSenFac, has value: " + String(junCHWRet.vol.dynBal.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8269};
  modelica_boolean tmp1061;
  static const MMC_DEFSTRINGLIT(tmp1062,83,"Variable violating min constraint: 1.0 <= junCHWRet.vol.dynBal.mSenFac, has value: ");
  modelica_string tmp1063;
  modelica_metatype tmpMeta1064;
  static int tmp1065 = 0;
  if(!tmp1065)
  {
    tmp1061 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1686]] /* junCHWRet.vol.dynBal.mSenFac PARAM */),1.0);
    if(!tmp1061)
    {
      tmp1063 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1686]] /* junCHWRet.vol.dynBal.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1064 = stringAppend(MMC_REFSTRINGLIT(tmp1062),tmp1063);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1064));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1064));
        }
      }
      tmp1065 = 1;
    }
  }
  threadData->lastEquationSolved = 8269;
}

/*
equation index: 8270
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet.vol.dynBal.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8270};
  modelica_boolean tmp1066;
  modelica_boolean tmp1067;
  static const MMC_DEFSTRINGLIT(tmp1068,183,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1069;
  modelica_metatype tmpMeta1070;
  static int tmp1071 = 0;
  if(!tmp1071)
  {
    tmp1066 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[246]] /* junCHWRet.vol.dynBal.traceDynamics PARAM */),1);
    tmp1067 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[246]] /* junCHWRet.vol.dynBal.traceDynamics PARAM */),4);
    if(!(tmp1066 && tmp1067))
    {
      tmp1069 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[246]] /* junCHWRet.vol.dynBal.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1070 = stringAppend(MMC_REFSTRINGLIT(tmp1068),tmp1069);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1070));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1070));
        }
      }
      tmp1071 = 1;
    }
  }
  threadData->lastEquationSolved = 8270;
}

/*
equation index: 8271
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet.vol.dynBal.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8271};
  modelica_boolean tmp1072;
  modelica_boolean tmp1073;
  static const MMC_DEFSTRINGLIT(tmp1074,187,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1075;
  modelica_metatype tmpMeta1076;
  static int tmp1077 = 0;
  if(!tmp1077)
  {
    tmp1072 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[245]] /* junCHWRet.vol.dynBal.substanceDynamics PARAM */),1);
    tmp1073 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[245]] /* junCHWRet.vol.dynBal.substanceDynamics PARAM */),4);
    if(!(tmp1072 && tmp1073))
    {
      tmp1075 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[245]] /* junCHWRet.vol.dynBal.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1076 = stringAppend(MMC_REFSTRINGLIT(tmp1074),tmp1075);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1076));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1076));
        }
      }
      tmp1077 = 1;
    }
  }
  threadData->lastEquationSolved = 8271;
}

/*
equation index: 8272
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet.vol.dynBal.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8272};
  modelica_boolean tmp1078;
  modelica_boolean tmp1079;
  static const MMC_DEFSTRINGLIT(tmp1080,182,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1081;
  modelica_metatype tmpMeta1082;
  static int tmp1083 = 0;
  if(!tmp1083)
  {
    tmp1078 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[243]] /* junCHWRet.vol.dynBal.massDynamics PARAM */),1);
    tmp1079 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[243]] /* junCHWRet.vol.dynBal.massDynamics PARAM */),4);
    if(!(tmp1078 && tmp1079))
    {
      tmp1081 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[243]] /* junCHWRet.vol.dynBal.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1082 = stringAppend(MMC_REFSTRINGLIT(tmp1080),tmp1081);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1082));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1082));
        }
      }
      tmp1083 = 1;
    }
  }
  threadData->lastEquationSolved = 8272;
}

/*
equation index: 8273
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet.vol.dynBal.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8273};
  modelica_boolean tmp1084;
  modelica_boolean tmp1085;
  static const MMC_DEFSTRINGLIT(tmp1086,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1087;
  modelica_metatype tmpMeta1088;
  static int tmp1089 = 0;
  if(!tmp1089)
  {
    tmp1084 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[242]] /* junCHWRet.vol.dynBal.energyDynamics PARAM */),1);
    tmp1085 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[242]] /* junCHWRet.vol.dynBal.energyDynamics PARAM */),4);
    if(!(tmp1084 && tmp1085))
    {
      tmp1087 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[242]] /* junCHWRet.vol.dynBal.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1088 = stringAppend(MMC_REFSTRINGLIT(tmp1086),tmp1087);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1088));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1088));
        }
      }
      tmp1089 = 1;
    }
  }
  threadData->lastEquationSolved = 8273;
}

/*
equation index: 8274
type: ALGORITHM

  assert(junCHWRet.vol.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= junCHWRet.vol.m_flow_small, has value: " + String(junCHWRet.vol.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8274};
  modelica_boolean tmp1090;
  static const MMC_DEFSTRINGLIT(tmp1091,81,"Variable violating min constraint: 0.0 <= junCHWRet.vol.m_flow_small, has value: ");
  modelica_string tmp1092;
  modelica_metatype tmpMeta1093;
  static int tmp1094 = 0;
  if(!tmp1094)
  {
    tmp1090 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* junCHWRet.vol.m_flow_small PARAM */),0.0);
    if(!tmp1090)
    {
      tmp1092 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* junCHWRet.vol.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1093 = stringAppend(MMC_REFSTRINGLIT(tmp1091),tmp1092);
      {
        const char* assert_cond = "(junCHWRet.vol.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",26,3,28,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1093));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",26,3,28,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1093));
        }
      }
      tmp1094 = 1;
    }
  }
  threadData->lastEquationSolved = 8274;
}

/*
equation index: 8275
type: ALGORITHM

  assert(junCHWRet.vol.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= junCHWRet.vol.mSenFac, has value: " + String(junCHWRet.vol.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8275};
  modelica_boolean tmp1095;
  static const MMC_DEFSTRINGLIT(tmp1096,76,"Variable violating min constraint: 1.0 <= junCHWRet.vol.mSenFac, has value: ");
  modelica_string tmp1097;
  modelica_metatype tmpMeta1098;
  static int tmp1099 = 0;
  if(!tmp1099)
  {
    tmp1095 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1692]] /* junCHWRet.vol.mSenFac PARAM */),1.0);
    if(!tmp1095)
    {
      tmp1097 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1692]] /* junCHWRet.vol.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1098 = stringAppend(MMC_REFSTRINGLIT(tmp1096),tmp1097);
      {
        const char* assert_cond = "(junCHWRet.vol.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1098));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1098));
        }
      }
      tmp1099 = 1;
    }
  }
  threadData->lastEquationSolved = 8275;
}

/*
equation index: 8276
type: ALGORITHM

  assert(junCHWRet.vol.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(junCHWRet.vol.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_8276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8276};
  modelica_boolean tmp1100;
  modelica_boolean tmp1101;
  static const MMC_DEFSTRINGLIT(tmp1102,176,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= junCHWRet.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1103;
  modelica_metatype tmpMeta1104;
  static int tmp1105 = 0;
  if(!tmp1105)
  {
    tmp1100 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[251]] /* junCHWRet.vol.traceDynamics PARAM */),1);
    tmp1101 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[251]] /* junCHWRet.vol.traceDynamics PARAM */),4);
    if(!(tmp1100 && tmp1101))
    {
      tmp1103 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[251]] /* junCHWRet.vol.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1104 = stringAppend(MMC_REFSTRINGLIT(tmp1102),tmp1103);
      {
        const char* assert_cond = "(junCHWRet.vol.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and junCHWRet.vol.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1104));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1104));
        }
      }
      tmp1105 = 1;
    }
  }
  threadData->lastEquationSolved = 8276;
}
OMC_DISABLE_OPT
void logic2_raw_updateBoundParameters_2(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[479])(DATA*, threadData_t*) = {
    logic2_raw_eqFunction_7744,
    logic2_raw_eqFunction_7745,
    logic2_raw_eqFunction_7755,
    logic2_raw_eqFunction_7761,
    logic2_raw_eqFunction_7762,
    logic2_raw_eqFunction_7763,
    logic2_raw_eqFunction_7764,
    logic2_raw_eqFunction_7785,
    logic2_raw_eqFunction_7789,
    logic2_raw_eqFunction_7790,
    logic2_raw_eqFunction_7791,
    logic2_raw_eqFunction_7792,
    logic2_raw_eqFunction_7808,
    logic2_raw_eqFunction_1314,
    logic2_raw_eqFunction_1313,
    logic2_raw_eqFunction_1312,
    logic2_raw_eqFunction_1311,
    logic2_raw_eqFunction_1310,
    logic2_raw_eqFunction_1309,
    logic2_raw_eqFunction_1308,
    logic2_raw_eqFunction_1307,
    logic2_raw_eqFunction_1306,
    logic2_raw_eqFunction_1305,
    logic2_raw_eqFunction_1304,
    logic2_raw_eqFunction_1303,
    logic2_raw_eqFunction_1302,
    logic2_raw_eqFunction_1301,
    logic2_raw_eqFunction_1300,
    logic2_raw_eqFunction_1299,
    logic2_raw_eqFunction_1298,
    logic2_raw_eqFunction_1297,
    logic2_raw_eqFunction_1296,
    logic2_raw_eqFunction_1295,
    logic2_raw_eqFunction_1294,
    logic2_raw_eqFunction_1293,
    logic2_raw_eqFunction_1292,
    logic2_raw_eqFunction_1291,
    logic2_raw_eqFunction_1290,
    logic2_raw_eqFunction_1289,
    logic2_raw_eqFunction_1288,
    logic2_raw_eqFunction_1287,
    logic2_raw_eqFunction_1286,
    logic2_raw_eqFunction_1285,
    logic2_raw_eqFunction_1284,
    logic2_raw_eqFunction_1283,
    logic2_raw_eqFunction_1282,
    logic2_raw_eqFunction_1281,
    logic2_raw_eqFunction_1280,
    logic2_raw_eqFunction_1279,
    logic2_raw_eqFunction_1278,
    logic2_raw_eqFunction_1277,
    logic2_raw_eqFunction_1276,
    logic2_raw_eqFunction_1275,
    logic2_raw_eqFunction_1274,
    logic2_raw_eqFunction_1273,
    logic2_raw_eqFunction_1272,
    logic2_raw_eqFunction_1271,
    logic2_raw_eqFunction_1270,
    logic2_raw_eqFunction_1269,
    logic2_raw_eqFunction_1268,
    logic2_raw_eqFunction_1267,
    logic2_raw_eqFunction_1266,
    logic2_raw_eqFunction_1265,
    logic2_raw_eqFunction_1264,
    logic2_raw_eqFunction_1263,
    logic2_raw_eqFunction_1262,
    logic2_raw_eqFunction_1261,
    logic2_raw_eqFunction_1260,
    logic2_raw_eqFunction_1259,
    logic2_raw_eqFunction_1258,
    logic2_raw_eqFunction_1257,
    logic2_raw_eqFunction_1256,
    logic2_raw_eqFunction_1255,
    logic2_raw_eqFunction_1254,
    logic2_raw_eqFunction_1253,
    logic2_raw_eqFunction_1252,
    logic2_raw_eqFunction_1251,
    logic2_raw_eqFunction_1250,
    logic2_raw_eqFunction_1249,
    logic2_raw_eqFunction_1248,
    logic2_raw_eqFunction_1247,
    logic2_raw_eqFunction_1246,
    logic2_raw_eqFunction_1245,
    logic2_raw_eqFunction_1244,
    logic2_raw_eqFunction_1243,
    logic2_raw_eqFunction_1242,
    logic2_raw_eqFunction_1241,
    logic2_raw_eqFunction_1240,
    logic2_raw_eqFunction_1239,
    logic2_raw_eqFunction_1238,
    logic2_raw_eqFunction_1237,
    logic2_raw_eqFunction_1236,
    logic2_raw_eqFunction_1235,
    logic2_raw_eqFunction_1234,
    logic2_raw_eqFunction_1233,
    logic2_raw_eqFunction_1232,
    logic2_raw_eqFunction_1231,
    logic2_raw_eqFunction_1230,
    logic2_raw_eqFunction_1229,
    logic2_raw_eqFunction_1228,
    logic2_raw_eqFunction_1227,
    logic2_raw_eqFunction_1226,
    logic2_raw_eqFunction_1225,
    logic2_raw_eqFunction_1224,
    logic2_raw_eqFunction_1223,
    logic2_raw_eqFunction_1222,
    logic2_raw_eqFunction_1221,
    logic2_raw_eqFunction_1220,
    logic2_raw_eqFunction_1219,
    logic2_raw_eqFunction_1218,
    logic2_raw_eqFunction_1217,
    logic2_raw_eqFunction_1216,
    logic2_raw_eqFunction_1215,
    logic2_raw_eqFunction_1214,
    logic2_raw_eqFunction_1213,
    logic2_raw_eqFunction_1212,
    logic2_raw_eqFunction_164,
    logic2_raw_eqFunction_163,
    logic2_raw_eqFunction_162,
    logic2_raw_eqFunction_161,
    logic2_raw_eqFunction_160,
    logic2_raw_eqFunction_159,
    logic2_raw_eqFunction_158,
    logic2_raw_eqFunction_157,
    logic2_raw_eqFunction_156,
    logic2_raw_eqFunction_155,
    logic2_raw_eqFunction_154,
    logic2_raw_eqFunction_152,
    logic2_raw_eqFunction_1211,
    logic2_raw_eqFunction_151,
    logic2_raw_eqFunction_150,
    logic2_raw_eqFunction_149,
    logic2_raw_eqFunction_148,
    logic2_raw_eqFunction_147,
    logic2_raw_eqFunction_146,
    logic2_raw_eqFunction_145,
    logic2_raw_eqFunction_144,
    logic2_raw_eqFunction_143,
    logic2_raw_eqFunction_1210,
    logic2_raw_eqFunction_1209,
    logic2_raw_eqFunction_1208,
    logic2_raw_eqFunction_1207,
    logic2_raw_eqFunction_1206,
    logic2_raw_eqFunction_1205,
    logic2_raw_eqFunction_1204,
    logic2_raw_eqFunction_1203,
    logic2_raw_eqFunction_1202,
    logic2_raw_eqFunction_1201,
    logic2_raw_eqFunction_1200,
    logic2_raw_eqFunction_1199,
    logic2_raw_eqFunction_1198,
    logic2_raw_eqFunction_1197,
    logic2_raw_eqFunction_1196,
    logic2_raw_eqFunction_1195,
    logic2_raw_eqFunction_1194,
    logic2_raw_eqFunction_1193,
    logic2_raw_eqFunction_1192,
    logic2_raw_eqFunction_1191,
    logic2_raw_eqFunction_1190,
    logic2_raw_eqFunction_1189,
    logic2_raw_eqFunction_1188,
    logic2_raw_eqFunction_1187,
    logic2_raw_eqFunction_1186,
    logic2_raw_eqFunction_1185,
    logic2_raw_eqFunction_1184,
    logic2_raw_eqFunction_1183,
    logic2_raw_eqFunction_153,
    logic2_raw_eqFunction_142,
    logic2_raw_eqFunction_141,
    logic2_raw_eqFunction_140,
    logic2_raw_eqFunction_139,
    logic2_raw_eqFunction_138,
    logic2_raw_eqFunction_137,
    logic2_raw_eqFunction_136,
    logic2_raw_eqFunction_135,
    logic2_raw_eqFunction_134,
    logic2_raw_eqFunction_133,
    logic2_raw_eqFunction_132,
    logic2_raw_eqFunction_131,
    logic2_raw_eqFunction_130,
    logic2_raw_eqFunction_129,
    logic2_raw_eqFunction_128,
    logic2_raw_eqFunction_127,
    logic2_raw_eqFunction_126,
    logic2_raw_eqFunction_125,
    logic2_raw_eqFunction_124,
    logic2_raw_eqFunction_123,
    logic2_raw_eqFunction_122,
    logic2_raw_eqFunction_121,
    logic2_raw_eqFunction_120,
    logic2_raw_eqFunction_119,
    logic2_raw_eqFunction_118,
    logic2_raw_eqFunction_117,
    logic2_raw_eqFunction_116,
    logic2_raw_eqFunction_115,
    logic2_raw_eqFunction_114,
    logic2_raw_eqFunction_113,
    logic2_raw_eqFunction_112,
    logic2_raw_eqFunction_111,
    logic2_raw_eqFunction_110,
    logic2_raw_eqFunction_109,
    logic2_raw_eqFunction_108,
    logic2_raw_eqFunction_107,
    logic2_raw_eqFunction_106,
    logic2_raw_eqFunction_105,
    logic2_raw_eqFunction_104,
    logic2_raw_eqFunction_103,
    logic2_raw_eqFunction_102,
    logic2_raw_eqFunction_101,
    logic2_raw_eqFunction_100,
    logic2_raw_eqFunction_99,
    logic2_raw_eqFunction_98,
    logic2_raw_eqFunction_97,
    logic2_raw_eqFunction_96,
    logic2_raw_eqFunction_95,
    logic2_raw_eqFunction_94,
    logic2_raw_eqFunction_93,
    logic2_raw_eqFunction_92,
    logic2_raw_eqFunction_91,
    logic2_raw_eqFunction_90,
    logic2_raw_eqFunction_89,
    logic2_raw_eqFunction_88,
    logic2_raw_eqFunction_87,
    logic2_raw_eqFunction_86,
    logic2_raw_eqFunction_85,
    logic2_raw_eqFunction_84,
    logic2_raw_eqFunction_83,
    logic2_raw_eqFunction_82,
    logic2_raw_eqFunction_81,
    logic2_raw_eqFunction_80,
    logic2_raw_eqFunction_79,
    logic2_raw_eqFunction_78,
    logic2_raw_eqFunction_77,
    logic2_raw_eqFunction_76,
    logic2_raw_eqFunction_75,
    logic2_raw_eqFunction_74,
    logic2_raw_eqFunction_73,
    logic2_raw_eqFunction_72,
    logic2_raw_eqFunction_71,
    logic2_raw_eqFunction_70,
    logic2_raw_eqFunction_69,
    logic2_raw_eqFunction_68,
    logic2_raw_eqFunction_67,
    logic2_raw_eqFunction_66,
    logic2_raw_eqFunction_65,
    logic2_raw_eqFunction_64,
    logic2_raw_eqFunction_63,
    logic2_raw_eqFunction_62,
    logic2_raw_eqFunction_61,
    logic2_raw_eqFunction_60,
    logic2_raw_eqFunction_59,
    logic2_raw_eqFunction_58,
    logic2_raw_eqFunction_57,
    logic2_raw_eqFunction_56,
    logic2_raw_eqFunction_55,
    logic2_raw_eqFunction_54,
    logic2_raw_eqFunction_53,
    logic2_raw_eqFunction_52,
    logic2_raw_eqFunction_51,
    logic2_raw_eqFunction_50,
    logic2_raw_eqFunction_49,
    logic2_raw_eqFunction_48,
    logic2_raw_eqFunction_47,
    logic2_raw_eqFunction_46,
    logic2_raw_eqFunction_45,
    logic2_raw_eqFunction_44,
    logic2_raw_eqFunction_43,
    logic2_raw_eqFunction_42,
    logic2_raw_eqFunction_41,
    logic2_raw_eqFunction_40,
    logic2_raw_eqFunction_39,
    logic2_raw_eqFunction_38,
    logic2_raw_eqFunction_37,
    logic2_raw_eqFunction_36,
    logic2_raw_eqFunction_35,
    logic2_raw_eqFunction_34,
    logic2_raw_eqFunction_33,
    logic2_raw_eqFunction_32,
    logic2_raw_eqFunction_31,
    logic2_raw_eqFunction_30,
    logic2_raw_eqFunction_29,
    logic2_raw_eqFunction_28,
    logic2_raw_eqFunction_27,
    logic2_raw_eqFunction_26,
    logic2_raw_eqFunction_25,
    logic2_raw_eqFunction_24,
    logic2_raw_eqFunction_23,
    logic2_raw_eqFunction_22,
    logic2_raw_eqFunction_21,
    logic2_raw_eqFunction_20,
    logic2_raw_eqFunction_19,
    logic2_raw_eqFunction_18,
    logic2_raw_eqFunction_17,
    logic2_raw_eqFunction_16,
    logic2_raw_eqFunction_15,
    logic2_raw_eqFunction_14,
    logic2_raw_eqFunction_13,
    logic2_raw_eqFunction_12,
    logic2_raw_eqFunction_11,
    logic2_raw_eqFunction_10,
    logic2_raw_eqFunction_9,
    logic2_raw_eqFunction_8,
    logic2_raw_eqFunction_7,
    logic2_raw_eqFunction_6,
    logic2_raw_eqFunction_5,
    logic2_raw_eqFunction_4,
    logic2_raw_eqFunction_3,
    logic2_raw_eqFunction_2,
    logic2_raw_eqFunction_1,
    logic2_raw_eqFunction_8107,
    logic2_raw_eqFunction_8108,
    logic2_raw_eqFunction_8109,
    logic2_raw_eqFunction_8110,
    logic2_raw_eqFunction_8111,
    logic2_raw_eqFunction_8112,
    logic2_raw_eqFunction_8113,
    logic2_raw_eqFunction_8114,
    logic2_raw_eqFunction_8115,
    logic2_raw_eqFunction_8116,
    logic2_raw_eqFunction_8117,
    logic2_raw_eqFunction_8118,
    logic2_raw_eqFunction_8119,
    logic2_raw_eqFunction_8120,
    logic2_raw_eqFunction_8121,
    logic2_raw_eqFunction_8122,
    logic2_raw_eqFunction_8123,
    logic2_raw_eqFunction_8124,
    logic2_raw_eqFunction_8125,
    logic2_raw_eqFunction_8126,
    logic2_raw_eqFunction_8127,
    logic2_raw_eqFunction_8128,
    logic2_raw_eqFunction_8129,
    logic2_raw_eqFunction_8130,
    logic2_raw_eqFunction_8131,
    logic2_raw_eqFunction_8132,
    logic2_raw_eqFunction_8133,
    logic2_raw_eqFunction_8134,
    logic2_raw_eqFunction_8135,
    logic2_raw_eqFunction_8136,
    logic2_raw_eqFunction_8137,
    logic2_raw_eqFunction_8138,
    logic2_raw_eqFunction_8139,
    logic2_raw_eqFunction_8140,
    logic2_raw_eqFunction_8141,
    logic2_raw_eqFunction_8142,
    logic2_raw_eqFunction_8143,
    logic2_raw_eqFunction_8144,
    logic2_raw_eqFunction_8145,
    logic2_raw_eqFunction_8146,
    logic2_raw_eqFunction_8147,
    logic2_raw_eqFunction_8148,
    logic2_raw_eqFunction_8149,
    logic2_raw_eqFunction_8150,
    logic2_raw_eqFunction_8151,
    logic2_raw_eqFunction_8152,
    logic2_raw_eqFunction_8153,
    logic2_raw_eqFunction_8154,
    logic2_raw_eqFunction_8155,
    logic2_raw_eqFunction_8156,
    logic2_raw_eqFunction_8157,
    logic2_raw_eqFunction_8158,
    logic2_raw_eqFunction_8159,
    logic2_raw_eqFunction_8160,
    logic2_raw_eqFunction_8161,
    logic2_raw_eqFunction_8162,
    logic2_raw_eqFunction_8163,
    logic2_raw_eqFunction_8164,
    logic2_raw_eqFunction_8165,
    logic2_raw_eqFunction_8166,
    logic2_raw_eqFunction_8167,
    logic2_raw_eqFunction_8168,
    logic2_raw_eqFunction_8169,
    logic2_raw_eqFunction_8170,
    logic2_raw_eqFunction_8171,
    logic2_raw_eqFunction_8172,
    logic2_raw_eqFunction_8173,
    logic2_raw_eqFunction_8174,
    logic2_raw_eqFunction_8175,
    logic2_raw_eqFunction_8176,
    logic2_raw_eqFunction_8177,
    logic2_raw_eqFunction_8178,
    logic2_raw_eqFunction_8179,
    logic2_raw_eqFunction_8180,
    logic2_raw_eqFunction_8181,
    logic2_raw_eqFunction_8182,
    logic2_raw_eqFunction_8183,
    logic2_raw_eqFunction_8184,
    logic2_raw_eqFunction_8185,
    logic2_raw_eqFunction_8186,
    logic2_raw_eqFunction_8187,
    logic2_raw_eqFunction_8188,
    logic2_raw_eqFunction_8189,
    logic2_raw_eqFunction_8190,
    logic2_raw_eqFunction_8191,
    logic2_raw_eqFunction_8192,
    logic2_raw_eqFunction_8193,
    logic2_raw_eqFunction_8194,
    logic2_raw_eqFunction_8195,
    logic2_raw_eqFunction_8196,
    logic2_raw_eqFunction_8197,
    logic2_raw_eqFunction_8198,
    logic2_raw_eqFunction_8199,
    logic2_raw_eqFunction_8200,
    logic2_raw_eqFunction_8201,
    logic2_raw_eqFunction_8202,
    logic2_raw_eqFunction_8203,
    logic2_raw_eqFunction_8204,
    logic2_raw_eqFunction_8205,
    logic2_raw_eqFunction_8206,
    logic2_raw_eqFunction_8207,
    logic2_raw_eqFunction_8208,
    logic2_raw_eqFunction_8209,
    logic2_raw_eqFunction_8210,
    logic2_raw_eqFunction_8211,
    logic2_raw_eqFunction_8212,
    logic2_raw_eqFunction_8213,
    logic2_raw_eqFunction_8214,
    logic2_raw_eqFunction_8215,
    logic2_raw_eqFunction_8216,
    logic2_raw_eqFunction_8217,
    logic2_raw_eqFunction_8218,
    logic2_raw_eqFunction_8219,
    logic2_raw_eqFunction_8220,
    logic2_raw_eqFunction_8221,
    logic2_raw_eqFunction_8222,
    logic2_raw_eqFunction_8223,
    logic2_raw_eqFunction_8224,
    logic2_raw_eqFunction_8225,
    logic2_raw_eqFunction_8226,
    logic2_raw_eqFunction_8227,
    logic2_raw_eqFunction_8228,
    logic2_raw_eqFunction_8229,
    logic2_raw_eqFunction_8230,
    logic2_raw_eqFunction_8231,
    logic2_raw_eqFunction_8232,
    logic2_raw_eqFunction_8233,
    logic2_raw_eqFunction_8234,
    logic2_raw_eqFunction_8235,
    logic2_raw_eqFunction_8236,
    logic2_raw_eqFunction_8237,
    logic2_raw_eqFunction_8238,
    logic2_raw_eqFunction_8239,
    logic2_raw_eqFunction_8240,
    logic2_raw_eqFunction_8241,
    logic2_raw_eqFunction_8242,
    logic2_raw_eqFunction_8243,
    logic2_raw_eqFunction_8244,
    logic2_raw_eqFunction_8245,
    logic2_raw_eqFunction_8246,
    logic2_raw_eqFunction_8247,
    logic2_raw_eqFunction_8248,
    logic2_raw_eqFunction_8249,
    logic2_raw_eqFunction_8250,
    logic2_raw_eqFunction_8251,
    logic2_raw_eqFunction_8252,
    logic2_raw_eqFunction_8253,
    logic2_raw_eqFunction_8254,
    logic2_raw_eqFunction_8255,
    logic2_raw_eqFunction_8256,
    logic2_raw_eqFunction_8257,
    logic2_raw_eqFunction_8258,
    logic2_raw_eqFunction_8259,
    logic2_raw_eqFunction_8260,
    logic2_raw_eqFunction_8261,
    logic2_raw_eqFunction_8262,
    logic2_raw_eqFunction_8263,
    logic2_raw_eqFunction_8264,
    logic2_raw_eqFunction_8265,
    logic2_raw_eqFunction_8266,
    logic2_raw_eqFunction_8267,
    logic2_raw_eqFunction_8268,
    logic2_raw_eqFunction_8269,
    logic2_raw_eqFunction_8270,
    logic2_raw_eqFunction_8271,
    logic2_raw_eqFunction_8272,
    logic2_raw_eqFunction_8273,
    logic2_raw_eqFunction_8274,
    logic2_raw_eqFunction_8275,
    logic2_raw_eqFunction_8276
  };
  
  for (int id = 0; id < 479; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif