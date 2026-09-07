#include "outputs/WaterCooledChillerExample7_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 5801
type: SIMPLE_ASSIGN
cooTow2.dp = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(15.873015873015873, 0.04909989084974072, 1.5873015873015874)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5801};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1037]] /* cooTow2.dp PARAM */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, 15.873015873015873, 0.04909989084974072, 1.5873015873015874);
  threadData->lastEquationSolved = 5801;
}

/*
equation index: 5802
type: SIMPLE_ASSIGN
weaData.lat = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLatitudeTMY3(weaData.filNam)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5802};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3659]] /* weaData.lat PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */));
  threadData->lastEquationSolved = 5802;
}

/*
equation index: 5803
type: SIMPLE_ASSIGN
weaData.zenAng.lat = weaData.lat
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5803};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3675]] /* weaData.zenAng.lat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3659]] /* weaData.lat PARAM */);
  threadData->lastEquationSolved = 5803;
}

/*
equation index: 5804
type: SIMPLE_ASSIGN
$cse35 = cos(weaData.zenAng.lat)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5804};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* $cse35 PARAM */) = cos((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3675]] /* weaData.zenAng.lat PARAM */));
  threadData->lastEquationSolved = 5804;
}

/*
equation index: 5805
type: SIMPLE_ASSIGN
$cse38 = sin(weaData.zenAng.lat)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5805};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* $cse38 PARAM */) = sin((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3675]] /* weaData.zenAng.lat PARAM */));
  threadData->lastEquationSolved = 5805;
}

/*
equation index: 5806
type: SIMPLE_ASSIGN
weaData.datRea.fileName = weaData.filNam
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5806};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */);
  threadData->lastEquationSolved = 5806;
}

/*
equation index: 5807
type: SIMPLE_ASSIGN
weaData.datRea.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor("tab1", if weaData.datRea.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(weaData.datRea.fileName) then weaData.datRea.fileName else "NoName", {}, {2, 3, 4, 5, 6, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 8}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5807};
  (data->simulationInfo->extObjs[0]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, _OMC_LIT95, (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */), _OMC_LIT96)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */):_OMC_LIT96), _OMC_LIT97, _OMC_LIT98, 2);
  threadData->lastEquationSolved = 5807;
}

/*
equation index: 5808
type: SIMPLE_ASSIGN
weaData.datRea1.fileName = weaData.filNam
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5808};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */);
  threadData->lastEquationSolved = 5808;
}

/*
equation index: 5809
type: SIMPLE_ASSIGN
weaData.datRea1.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor("tab1", if weaData.datRea1.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(weaData.datRea1.fileName) then weaData.datRea1.fileName else "NoName", {}, {9, 10, 11}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5809};
  (data->simulationInfo->extObjs[1]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, _OMC_LIT95, (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */), _OMC_LIT96)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */):_OMC_LIT96), _OMC_LIT97, _OMC_LIT99, 2);
  threadData->lastEquationSolved = 5809;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_1976(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1975(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1974(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1973(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1972(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1971(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1970(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1969(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1968(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1967(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1966(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1965(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1964(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1963(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_351(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_350(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1962(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1961(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_349(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1960(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1959(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1958(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1957(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1956(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1955(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1954(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1953(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1952(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1951(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1950(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1949(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1948(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1947(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1946(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1945(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1944(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1943(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1942(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1941(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1939(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1938(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1937(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1936(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1935(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1934(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1933(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1932(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1931(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1930(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1928(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1927(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1924(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1923(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1922(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1921(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1920(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1919(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1918(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1917(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1890(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1889(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1888(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1887(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1886(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1885(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1884(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1883(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1882(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1881(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1880(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1879(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1878(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1877(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1876(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1875(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1874(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1873(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1872(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1871(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1870(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1869(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1868(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1867(DATA *data, threadData_t *threadData);


/*
equation index: 5928
type: SIMPLE_ASSIGN
val8Rel.dp_nominal = 104510.0 + val8Rel.dpValve_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5928};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3470]] /* val8Rel.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3469]] /* val8Rel.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 5928;
}

/*
equation index: 5929
type: SIMPLE_ASSIGN
val8Rel.dp_nominal_pos = abs(val8Rel.dp_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5929};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3471]] /* val8Rel.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3470]] /* val8Rel.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5929;
}

/*
equation index: 5933
type: SIMPLE_ASSIGN
val8Rel.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val8Rel.Medium.dynamicViscosity(val8Rel.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5933};
  WaterCooledChillerExample_WaterCooledChillerExample7_val8Rel_Medium_ThermodynamicState tmp0;
  WaterCooledChillerExample_WaterCooledChillerExample7_val8Rel_Medium_ThermodynamicState_wrap_vars(threadData,tmp0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3482]] /* val8Rel.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3481]] /* val8Rel.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3472]] /* val8Rel.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val8Rel_Medium_dynamicViscosity(threadData, tmp0);
  threadData->lastEquationSolved = 5933;
}

/*
equation index: 5934
type: SIMPLE_ASSIGN
val8Rel.m_flow_turbulent = 4.761904761904762 * val8Rel.deltaM
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5934};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3478]] /* val8Rel.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3467]] /* val8Rel.deltaM PARAM */));
  threadData->lastEquationSolved = 5934;
}

/*
equation index: 5949
type: SIMPLE_ASSIGN
val8_2Rel.dp_nominal = 104510.0 + val8_2Rel.dpValve_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5949};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3539]] /* val8_2Rel.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3538]] /* val8_2Rel.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 5949;
}

/*
equation index: 5950
type: SIMPLE_ASSIGN
val8_2Rel.dp_nominal_pos = abs(val8_2Rel.dp_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5950};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3540]] /* val8_2Rel.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3539]] /* val8_2Rel.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5950;
}

/*
equation index: 5954
type: SIMPLE_ASSIGN
val8_2Rel.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val8_2Rel.Medium.dynamicViscosity(val8_2Rel.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5954};
  WaterCooledChillerExample_WaterCooledChillerExample7_val8__2Rel_Medium_ThermodynamicState tmp1;
  WaterCooledChillerExample_WaterCooledChillerExample7_val8__2Rel_Medium_ThermodynamicState_wrap_vars(threadData,tmp1, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3551]] /* val8_2Rel.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3550]] /* val8_2Rel.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3541]] /* val8_2Rel.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val8__2Rel_Medium_dynamicViscosity(threadData, tmp1);
  threadData->lastEquationSolved = 5954;
}

/*
equation index: 5955
type: SIMPLE_ASSIGN
val8_2Rel.m_flow_turbulent = 4.761904761904762 * val8_2Rel.deltaM
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5955};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3547]] /* val8_2Rel.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3536]] /* val8_2Rel.deltaM PARAM */));
  threadData->lastEquationSolved = 5955;
}

/*
equation index: 5970
type: SIMPLE_ASSIGN
val8Sto.dp_nominal = 104510.0 + val8Sto.dpValve_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5970};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3493]] /* val8Sto.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3492]] /* val8Sto.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 5970;
}

/*
equation index: 5971
type: SIMPLE_ASSIGN
val8Sto.dp_nominal_pos = abs(val8Sto.dp_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5971};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3494]] /* val8Sto.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3493]] /* val8Sto.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5971;
}

/*
equation index: 5975
type: SIMPLE_ASSIGN
val8Sto.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val8Sto.Medium.dynamicViscosity(val8Sto.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5975};
  WaterCooledChillerExample_WaterCooledChillerExample7_val8Sto_Medium_ThermodynamicState tmp2;
  WaterCooledChillerExample_WaterCooledChillerExample7_val8Sto_Medium_ThermodynamicState_wrap_vars(threadData,tmp2, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3505]] /* val8Sto.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3504]] /* val8Sto.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3495]] /* val8Sto.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val8Sto_Medium_dynamicViscosity(threadData, tmp2);
  threadData->lastEquationSolved = 5975;
}

/*
equation index: 5976
type: SIMPLE_ASSIGN
val8Sto.m_flow_turbulent = 4.761904761904762 * val8Sto.deltaM
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5976};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3501]] /* val8Sto.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3490]] /* val8Sto.deltaM PARAM */));
  threadData->lastEquationSolved = 5976;
}

/*
equation index: 5991
type: SIMPLE_ASSIGN
val8_2Sto.dp_nominal = 104510.0 + val8_2Sto.dpValve_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5991};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3562]] /* val8_2Sto.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3561]] /* val8_2Sto.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 5991;
}

/*
equation index: 5992
type: SIMPLE_ASSIGN
val8_2Sto.dp_nominal_pos = abs(val8_2Sto.dp_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5992};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3563]] /* val8_2Sto.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3562]] /* val8_2Sto.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5992;
}

/*
equation index: 5996
type: SIMPLE_ASSIGN
val8_2Sto.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val8_2Sto.Medium.dynamicViscosity(val8_2Sto.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5996};
  WaterCooledChillerExample_WaterCooledChillerExample7_val8__2Sto_Medium_ThermodynamicState tmp3;
  WaterCooledChillerExample_WaterCooledChillerExample7_val8__2Sto_Medium_ThermodynamicState_wrap_vars(threadData,tmp3, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3574]] /* val8_2Sto.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3573]] /* val8_2Sto.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3564]] /* val8_2Sto.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val8__2Sto_Medium_dynamicViscosity(threadData, tmp3);
  threadData->lastEquationSolved = 5996;
}

/*
equation index: 5997
type: SIMPLE_ASSIGN
val8_2Sto.m_flow_turbulent = 4.761904761904762 * val8_2Sto.deltaM
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_5997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5997};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3570]] /* val8_2Sto.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3559]] /* val8_2Sto.deltaM PARAM */));
  threadData->lastEquationSolved = 5997;
}

/*
equation index: 6012
type: SIMPLE_ASSIGN
val8_2.dp_nominal = 104510.0 + val8_2.dpValve_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6012};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3516]] /* val8_2.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3515]] /* val8_2.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 6012;
}

/*
equation index: 6013
type: SIMPLE_ASSIGN
val8_2.dp_nominal_pos = abs(val8_2.dp_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6013};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3517]] /* val8_2.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3516]] /* val8_2.dp_nominal PARAM */));
  threadData->lastEquationSolved = 6013;
}

/*
equation index: 6017
type: SIMPLE_ASSIGN
val8_2.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val8_2.Medium.dynamicViscosity(val8_2.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6017};
  WaterCooledChillerExample_WaterCooledChillerExample7_val8__2_Medium_ThermodynamicState tmp4;
  WaterCooledChillerExample_WaterCooledChillerExample7_val8__2_Medium_ThermodynamicState_wrap_vars(threadData,tmp4, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3528]] /* val8_2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3527]] /* val8_2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3518]] /* val8_2.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val8__2_Medium_dynamicViscosity(threadData, tmp4);
  threadData->lastEquationSolved = 6017;
}

/*
equation index: 6018
type: SIMPLE_ASSIGN
val8_2.m_flow_turbulent = 4.761904761904762 * val8_2.deltaM
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6018};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3524]] /* val8_2.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3513]] /* val8_2.deltaM PARAM */));
  threadData->lastEquationSolved = 6018;
}

/*
equation index: 6072
type: SIMPLE_ASSIGN
pumTanRet.eff.per.speeds_rpm[1] = pumTanRet.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6072};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2630]] /* pumTanRet.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2628]] /* pumTanRet.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6072;
}

/*
equation index: 6073
type: SIMPLE_ASSIGN
pumTanRet.eff.per.constantSpeed_rpm = pumTanRet.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6073};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2616]] /* pumTanRet.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2628]] /* pumTanRet.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6073;
}

/*
equation index: 6077
type: SIMPLE_ASSIGN
pumTanRet.eff.per.motorCooledByFluid = pumTanRet.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6077};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[813]] /* pumTanRet.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[822]] /* pumTanRet.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6077;
}

/*
equation index: 6078
type: SIMPLE_ASSIGN
pumTanRet.eff.per.power.P[1] = pumTanRet.per.power.P[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6078};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2621]] /* pumTanRet.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2656]] /* pumTanRet.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 6078;
}

/*
equation index: 6079
type: SIMPLE_ASSIGN
pumTanRet.eff.per.power.V_flow[1] = pumTanRet.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6079};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2622]] /* pumTanRet.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2657]] /* pumTanRet.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6079;
}

/*
equation index: 6080
type: SIMPLE_ASSIGN
pumTanRet.eff.per.motorEfficiency.eta[1] = pumTanRet.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6080};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2620]] /* pumTanRet.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2655]] /* pumTanRet.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6080;
}

/*
equation index: 6081
type: SIMPLE_ASSIGN
pumTanRet.eff.per.motorEfficiency.V_flow[1] = pumTanRet.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6081};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2619]] /* pumTanRet.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2654]] /* pumTanRet.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6081;
}

/*
equation index: 6082
type: SIMPLE_ASSIGN
pumTanRet.eff.per.hydraulicEfficiency.eta[1] = pumTanRet.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6082};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2618]] /* pumTanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2653]] /* pumTanRet.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6082;
}

/*
equation index: 6083
type: SIMPLE_ASSIGN
pumTanRet.eff.per.hydraulicEfficiency.V_flow[1] = pumTanRet.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6083};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2617]] /* pumTanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2652]] /* pumTanRet.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6083;
}

/*
equation index: 6097
type: SIMPLE_ASSIGN
pumTanRet.heaDis.motorCooledByFluid = pumTanRet.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6097};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[819]] /* pumTanRet.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[822]] /* pumTanRet.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6097;
}

/*
equation index: 6103
type: SIMPLE_ASSIGN
pumTanRet.preSou.m_flow_small = pumTanRet.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6103};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2669]] /* pumTanRet.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2648]] /* pumTanRet.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6103;
}

/*
equation index: 6105
type: SIMPLE_ASSIGN
pumTanRet.preSou.dp_start = pumTanRet.dp_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6105};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2668]] /* pumTanRet.preSou.dp_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2589]] /* pumTanRet.dp_start PARAM */);
  threadData->lastEquationSolved = 6105;
}

/*
equation index: 6107
type: SIMPLE_ASSIGN
pumTanRet.vol.tau = pumTanRet.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6107};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2705]] /* pumTanRet.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2678]] /* pumTanRet.tau PARAM */);
  threadData->lastEquationSolved = 6107;
}

/*
equation index: 6108
type: SIMPLE_ASSIGN
pumTanRet.vol.V_nominal = 4.761904761904762 * pumTanRet.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6108};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2681]] /* pumTanRet.vol.V_nominal PARAM */) = (4.761904761904762) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2705]] /* pumTanRet.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 6108;
}

/*
equation index: 6111
type: SIMPLE_ASSIGN
pumTanRet.vol.T_start = pumTanRet.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6111};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2679]] /* pumTanRet.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2580]] /* pumTanRet.T_start PARAM */);
  threadData->lastEquationSolved = 6111;
}

/*
equation index: 6112
type: SIMPLE_ASSIGN
pumTanRet.vol.state_start.T = pumTanRet.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6112};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2703]] /* pumTanRet.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2679]] /* pumTanRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6112;
}

/*
equation index: 6113
type: SIMPLE_ASSIGN
pumTanRet.vol.p_start = pumTanRet.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6113};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2698]] /* pumTanRet.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2649]] /* pumTanRet.p_start PARAM */);
  threadData->lastEquationSolved = 6113;
}

/*
equation index: 6114
type: SIMPLE_ASSIGN
pumTanRet.vol.state_start.p = pumTanRet.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6114};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2704]] /* pumTanRet.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2698]] /* pumTanRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6114;
}

/*
equation index: 6118
type: SIMPLE_ASSIGN
pumTanRet.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.vol.Medium.density(pumTanRet.vol.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6118};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_vol_Medium_ThermodynamicState tmp5;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp5, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2704]] /* pumTanRet.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2703]] /* pumTanRet.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2700]] /* pumTanRet.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_vol_Medium_density(threadData, tmp5);
  threadData->lastEquationSolved = 6118;
}

/*
equation index: 6119
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.p_start = pumTanRet.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6119};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2690]] /* pumTanRet.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2698]] /* pumTanRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6119;
}

/*
equation index: 6120
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.T_start = pumTanRet.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6120};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2684]] /* pumTanRet.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2679]] /* pumTanRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6120;
}

/*
equation index: 6121
type: SIMPLE_ASSIGN
pumTanRet.vol.X_start[1] = pumTanRet.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6121};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2682]] /* pumTanRet.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2582]] /* pumTanRet.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6121;
}

/*
equation index: 6122
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.X_start[1] = pumTanRet.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6122};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2685]] /* pumTanRet.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2682]] /* pumTanRet.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6122;
}

/*
equation index: 6123
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.vol.dynBal.Medium.specificEnthalpy_pTX(pumTanRet.vol.dynBal.p_start, pumTanRet.vol.dynBal.T_start, pumTanRet.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6123};
  real_array tmp6;
  real_array_create(&tmp6, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2685]] /* pumTanRet.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2688]] /* pumTanRet.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2690]] /* pumTanRet.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2684]] /* pumTanRet.vol.dynBal.T_start PARAM */), tmp6);
  threadData->lastEquationSolved = 6123;
}

/*
equation index: 6128
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.vol.dynBal.Medium.setState_pTX(pumTanRet.vol.dynBal.p_start, pumTanRet.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6128};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2692]] /* pumTanRet.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2690]] /* pumTanRet.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2684]] /* pumTanRet.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6128;
}

/*
equation index: 6131
type: SIMPLE_ASSIGN
pumTanRet.vol.V = pumTanRet.vol.V_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6131};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* pumTanRet.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2681]] /* pumTanRet.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 6131;
}

/*
equation index: 6132
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.fluidVolume = pumTanRet.vol.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6132};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2687]] /* pumTanRet.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* pumTanRet.vol.V PARAM */);
  threadData->lastEquationSolved = 6132;
}

/*
equation index: 6145
type: SIMPLE_ASSIGN
pumTanRet.vol.m_flow_small = pumTanRet.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6145};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2697]] /* pumTanRet.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2648]] /* pumTanRet.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6145;
}

/*
equation index: 6154
type: SIMPLE_ASSIGN
pumTanRet.sta_start.p = pumTanRet.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6154};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2676]] /* pumTanRet.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2649]] /* pumTanRet.p_start PARAM */);
  threadData->lastEquationSolved = 6154;
}

/*
equation index: 6155
type: SIMPLE_ASSIGN
pumTanRet.sta_start.T = pumTanRet.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6155};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* pumTanRet.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2580]] /* pumTanRet.T_start PARAM */);
  threadData->lastEquationSolved = 6155;
}

/*
equation index: 6156
type: SIMPLE_ASSIGN
pumTanRet.h_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.Medium.specificEnthalpy(pumTanRet.sta_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6156};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_Medium_ThermodynamicState tmp7;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_Medium_ThermodynamicState_wrap_vars(threadData,tmp7, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2676]] /* pumTanRet.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* pumTanRet.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2643]] /* pumTanRet.h_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_Medium_specificEnthalpy(threadData, tmp7);
  threadData->lastEquationSolved = 6156;
}

/*
equation index: 6168
type: SIMPLE_ASSIGN
pumTanRet.stageInputs[1] = pumTanRet.heads[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6168};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2677]] /* pumTanRet.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2645]] /* pumTanRet.heads[1] PARAM */);
  threadData->lastEquationSolved = 6168;
}

/*
equation index: 6172
type: SIMPLE_ASSIGN
pumTanRet.per.speeds_rpm[1] = pumTanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6172};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2665]] /* pumTanRet.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* pumTanRet.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6172;
}

/*
equation index: 6173
type: SIMPLE_ASSIGN
pumTanRet.per.constantSpeed_rpm = pumTanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6173};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2651]] /* pumTanRet.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* pumTanRet.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6173;
}

/*
equation index: 6174
type: SIMPLE_ASSIGN
pumTanRet.per.speeds[1] = pumTanRet.per.speeds_rpm[1] / pumTanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6174};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2664]] /* pumTanRet.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2665]] /* pumTanRet.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* pumTanRet.per.speed_rpm_nominal PARAM */),"pumTanRet.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6174;
}

/*
equation index: 6175
type: SIMPLE_ASSIGN
pumTanRet.per.constantSpeed = pumTanRet.per.constantSpeed_rpm / pumTanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6175};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2650]] /* pumTanRet.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2651]] /* pumTanRet.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* pumTanRet.per.speed_rpm_nominal PARAM */),"pumTanRet.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6175;
}

/*
equation index: 6235
type: SIMPLE_ASSIGN
pumTanSup.eff.per.speeds_rpm[1] = pumTanSup.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6235};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2759]] /* pumTanSup.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2757]] /* pumTanSup.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6235;
}

/*
equation index: 6236
type: SIMPLE_ASSIGN
pumTanSup.eff.per.constantSpeed_rpm = pumTanSup.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6236};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2745]] /* pumTanSup.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2757]] /* pumTanSup.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6236;
}

/*
equation index: 6240
type: SIMPLE_ASSIGN
pumTanSup.eff.per.motorCooledByFluid = pumTanSup.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6240};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[853]] /* pumTanSup.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[862]] /* pumTanSup.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6240;
}

/*
equation index: 6241
type: SIMPLE_ASSIGN
pumTanSup.eff.per.power.P[1] = pumTanSup.per.power.P[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6241};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2750]] /* pumTanSup.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2785]] /* pumTanSup.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 6241;
}

/*
equation index: 6242
type: SIMPLE_ASSIGN
pumTanSup.eff.per.power.V_flow[1] = pumTanSup.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6242};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2751]] /* pumTanSup.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2786]] /* pumTanSup.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6242;
}

/*
equation index: 6243
type: SIMPLE_ASSIGN
pumTanSup.eff.per.motorEfficiency.eta[1] = pumTanSup.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6243};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2749]] /* pumTanSup.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2784]] /* pumTanSup.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6243;
}

/*
equation index: 6244
type: SIMPLE_ASSIGN
pumTanSup.eff.per.motorEfficiency.V_flow[1] = pumTanSup.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6244};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2748]] /* pumTanSup.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* pumTanSup.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6244;
}

/*
equation index: 6245
type: SIMPLE_ASSIGN
pumTanSup.eff.per.hydraulicEfficiency.eta[1] = pumTanSup.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6245};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* pumTanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2782]] /* pumTanSup.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6245;
}

/*
equation index: 6246
type: SIMPLE_ASSIGN
pumTanSup.eff.per.hydraulicEfficiency.V_flow[1] = pumTanSup.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6246};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2746]] /* pumTanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2781]] /* pumTanSup.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6246;
}

/*
equation index: 6260
type: SIMPLE_ASSIGN
pumTanSup.heaDis.motorCooledByFluid = pumTanSup.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6260};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[859]] /* pumTanSup.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[862]] /* pumTanSup.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6260;
}

/*
equation index: 6266
type: SIMPLE_ASSIGN
pumTanSup.preSou.m_flow_small = pumTanSup.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6266};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2798]] /* pumTanSup.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2777]] /* pumTanSup.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6266;
}

/*
equation index: 6268
type: SIMPLE_ASSIGN
pumTanSup.preSou.dp_start = pumTanSup.dp_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6268};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2797]] /* pumTanSup.preSou.dp_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2718]] /* pumTanSup.dp_start PARAM */);
  threadData->lastEquationSolved = 6268;
}

/*
equation index: 6270
type: SIMPLE_ASSIGN
pumTanSup.vol.tau = pumTanSup.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6270};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2834]] /* pumTanSup.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2807]] /* pumTanSup.tau PARAM */);
  threadData->lastEquationSolved = 6270;
}

/*
equation index: 6271
type: SIMPLE_ASSIGN
pumTanSup.vol.V_nominal = 4.761904761904762 * pumTanSup.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6271};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2810]] /* pumTanSup.vol.V_nominal PARAM */) = (4.761904761904762) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2834]] /* pumTanSup.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 6271;
}

/*
equation index: 6274
type: SIMPLE_ASSIGN
pumTanSup.vol.T_start = pumTanSup.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6274};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2808]] /* pumTanSup.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2709]] /* pumTanSup.T_start PARAM */);
  threadData->lastEquationSolved = 6274;
}

/*
equation index: 6275
type: SIMPLE_ASSIGN
pumTanSup.vol.state_start.T = pumTanSup.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6275};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2832]] /* pumTanSup.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2808]] /* pumTanSup.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6275;
}

/*
equation index: 6276
type: SIMPLE_ASSIGN
pumTanSup.vol.p_start = pumTanSup.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6276};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2827]] /* pumTanSup.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2778]] /* pumTanSup.p_start PARAM */);
  threadData->lastEquationSolved = 6276;
}

/*
equation index: 6277
type: SIMPLE_ASSIGN
pumTanSup.vol.state_start.p = pumTanSup.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6277};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2833]] /* pumTanSup.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2827]] /* pumTanSup.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6277;
}

/*
equation index: 6281
type: SIMPLE_ASSIGN
pumTanSup.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.vol.Medium.density(pumTanSup.vol.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6281};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_vol_Medium_ThermodynamicState tmp8;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp8, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2833]] /* pumTanSup.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2832]] /* pumTanSup.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2829]] /* pumTanSup.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_vol_Medium_density(threadData, tmp8);
  threadData->lastEquationSolved = 6281;
}

/*
equation index: 6282
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.p_start = pumTanSup.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6282};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* pumTanSup.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2827]] /* pumTanSup.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6282;
}

/*
equation index: 6283
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.T_start = pumTanSup.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6283};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* pumTanSup.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2808]] /* pumTanSup.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6283;
}

/*
equation index: 6284
type: SIMPLE_ASSIGN
pumTanSup.vol.X_start[1] = pumTanSup.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6284};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2811]] /* pumTanSup.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* pumTanSup.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6284;
}

/*
equation index: 6285
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.X_start[1] = pumTanSup.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6285};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2814]] /* pumTanSup.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2811]] /* pumTanSup.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6285;
}

/*
equation index: 6286
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.vol.dynBal.Medium.specificEnthalpy_pTX(pumTanSup.vol.dynBal.p_start, pumTanSup.vol.dynBal.T_start, pumTanSup.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6286};
  real_array tmp9;
  real_array_create(&tmp9, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2814]] /* pumTanSup.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2817]] /* pumTanSup.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* pumTanSup.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* pumTanSup.vol.dynBal.T_start PARAM */), tmp9);
  threadData->lastEquationSolved = 6286;
}

/*
equation index: 6291
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.vol.dynBal.Medium.setState_pTX(pumTanSup.vol.dynBal.p_start, pumTanSup.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6291};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2821]] /* pumTanSup.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* pumTanSup.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* pumTanSup.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6291;
}

/*
equation index: 6294
type: SIMPLE_ASSIGN
pumTanSup.vol.V = pumTanSup.vol.V_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6294};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2809]] /* pumTanSup.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2810]] /* pumTanSup.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 6294;
}

/*
equation index: 6295
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.fluidVolume = pumTanSup.vol.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6295};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2816]] /* pumTanSup.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2809]] /* pumTanSup.vol.V PARAM */);
  threadData->lastEquationSolved = 6295;
}

/*
equation index: 6308
type: SIMPLE_ASSIGN
pumTanSup.vol.m_flow_small = pumTanSup.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6308};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2826]] /* pumTanSup.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2777]] /* pumTanSup.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6308;
}

/*
equation index: 6317
type: SIMPLE_ASSIGN
pumTanSup.sta_start.p = pumTanSup.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6317};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2805]] /* pumTanSup.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2778]] /* pumTanSup.p_start PARAM */);
  threadData->lastEquationSolved = 6317;
}

/*
equation index: 6318
type: SIMPLE_ASSIGN
pumTanSup.sta_start.T = pumTanSup.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6318};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2804]] /* pumTanSup.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2709]] /* pumTanSup.T_start PARAM */);
  threadData->lastEquationSolved = 6318;
}

/*
equation index: 6319
type: SIMPLE_ASSIGN
pumTanSup.h_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.Medium.specificEnthalpy(pumTanSup.sta_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6319};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_Medium_ThermodynamicState tmp10;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_Medium_ThermodynamicState_wrap_vars(threadData,tmp10, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2805]] /* pumTanSup.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2804]] /* pumTanSup.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2772]] /* pumTanSup.h_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_Medium_specificEnthalpy(threadData, tmp10);
  threadData->lastEquationSolved = 6319;
}

/*
equation index: 6331
type: SIMPLE_ASSIGN
pumTanSup.stageInputs[1] = pumTanSup.heads[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6331};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2806]] /* pumTanSup.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2774]] /* pumTanSup.heads[1] PARAM */);
  threadData->lastEquationSolved = 6331;
}

/*
equation index: 6335
type: SIMPLE_ASSIGN
pumTanSup.per.speeds_rpm[1] = pumTanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6335};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2794]] /* pumTanSup.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2792]] /* pumTanSup.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6335;
}

/*
equation index: 6336
type: SIMPLE_ASSIGN
pumTanSup.per.constantSpeed_rpm = pumTanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6336};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2780]] /* pumTanSup.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2792]] /* pumTanSup.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6336;
}

/*
equation index: 6337
type: SIMPLE_ASSIGN
pumTanSup.per.speeds[1] = pumTanSup.per.speeds_rpm[1] / pumTanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6337};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2793]] /* pumTanSup.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2794]] /* pumTanSup.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2792]] /* pumTanSup.per.speed_rpm_nominal PARAM */),"pumTanSup.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6337;
}

/*
equation index: 6338
type: SIMPLE_ASSIGN
pumTanSup.per.constantSpeed = pumTanSup.per.constantSpeed_rpm / pumTanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6338};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2779]] /* pumTanSup.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2780]] /* pumTanSup.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2792]] /* pumTanSup.per.speed_rpm_nominal PARAM */),"pumTanSup.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6338;
}

/*
equation index: 6361
type: SIMPLE_ASSIGN
junCHWSup2.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWSup2.m_flow_nominal[1]) + abs(junCHWSup2.m_flow_nominal[2]) + abs(junCHWSup2.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6361};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1779]] /* junCHWSup2.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1781]] /* junCHWSup2.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1782]] /* junCHWSup2.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1783]] /* junCHWSup2.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 6361;
}

/*
equation index: 6362
type: SIMPLE_ASSIGN
junCHWSup2.vol.m_flow_nominal = junCHWSup2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6362};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1846]] /* junCHWSup2.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1779]] /* junCHWSup2.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6362;
}

/*
equation index: 6363
type: SIMPLE_ASSIGN
junCHWSup2.vol.tau = junCHWSup2.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6363};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1855]] /* junCHWSup2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1828]] /* junCHWSup2.tau PARAM */);
  threadData->lastEquationSolved = 6363;
}

/*
equation index: 6364
type: SIMPLE_ASSIGN
junCHWSup2.vol.V_nominal = 0.0010044335697769957 * junCHWSup2.vol.m_flow_nominal * junCHWSup2.vol.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6364};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1831]] /* junCHWSup2.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1846]] /* junCHWSup2.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1855]] /* junCHWSup2.vol.tau PARAM */)));
  threadData->lastEquationSolved = 6364;
}

/*
equation index: 6367
type: SIMPLE_ASSIGN
junCHWSup2.vol.T_start = junCHWSup2.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6367};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1829]] /* junCHWSup2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1773]] /* junCHWSup2.T_start PARAM */);
  threadData->lastEquationSolved = 6367;
}

/*
equation index: 6368
type: SIMPLE_ASSIGN
junCHWSup2.vol.state_start.T = junCHWSup2.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6368};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1853]] /* junCHWSup2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1829]] /* junCHWSup2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6368;
}

/*
equation index: 6369
type: SIMPLE_ASSIGN
junCHWSup2.vol.p_start = junCHWSup2.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6369};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1848]] /* junCHWSup2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1785]] /* junCHWSup2.p_start PARAM */);
  threadData->lastEquationSolved = 6369;
}

/*
equation index: 6370
type: SIMPLE_ASSIGN
junCHWSup2.vol.state_start.p = junCHWSup2.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6370};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1854]] /* junCHWSup2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1848]] /* junCHWSup2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6370;
}

/*
equation index: 6374
type: SIMPLE_ASSIGN
junCHWSup2.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup2.vol.Medium.density(junCHWSup2.vol.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6374};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_vol_Medium_ThermodynamicState tmp11;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp11, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1854]] /* junCHWSup2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1853]] /* junCHWSup2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1850]] /* junCHWSup2.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_vol_Medium_density(threadData, tmp11);
  threadData->lastEquationSolved = 6374;
}

/*
equation index: 6375
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.p_start = junCHWSup2.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6375};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1840]] /* junCHWSup2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1848]] /* junCHWSup2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6375;
}

/*
equation index: 6376
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.T_start = junCHWSup2.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6376};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1834]] /* junCHWSup2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1829]] /* junCHWSup2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6376;
}

/*
equation index: 6377
type: SIMPLE_ASSIGN
junCHWSup2.vol.X_start[1] = junCHWSup2.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6377};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1832]] /* junCHWSup2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1774]] /* junCHWSup2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6377;
}

/*
equation index: 6378
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.X_start[1] = junCHWSup2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6378};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1835]] /* junCHWSup2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1832]] /* junCHWSup2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6378;
}

/*
equation index: 6379
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup2.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWSup2.vol.dynBal.p_start, junCHWSup2.vol.dynBal.T_start, junCHWSup2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6379};
  real_array tmp12;
  real_array_create(&tmp12, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1835]] /* junCHWSup2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1838]] /* junCHWSup2.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1840]] /* junCHWSup2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1834]] /* junCHWSup2.vol.dynBal.T_start PARAM */), tmp12);
  threadData->lastEquationSolved = 6379;
}

/*
equation index: 6384
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup2.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup2.vol.dynBal.Medium.setState_pTX(junCHWSup2.vol.dynBal.p_start, junCHWSup2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6384};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1842]] /* junCHWSup2.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1840]] /* junCHWSup2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1834]] /* junCHWSup2.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6384;
}

/*
equation index: 6387
type: SIMPLE_ASSIGN
junCHWSup2.vol.V = junCHWSup2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6387};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1830]] /* junCHWSup2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1831]] /* junCHWSup2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 6387;
}

/*
equation index: 6388
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.fluidVolume = junCHWSup2.vol.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6388};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1837]] /* junCHWSup2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1830]] /* junCHWSup2.vol.V PARAM */);
  threadData->lastEquationSolved = 6388;
}

/*
equation index: 6401
type: SIMPLE_ASSIGN
junCHWSup2.vol.m_flow_small = 1e-4 * abs(junCHWSup2.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6401};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1847]] /* junCHWSup2.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1846]] /* junCHWSup2.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6401;
}

/*
equation index: 6414
type: SIMPLE_ASSIGN
junCHWSup2.res3.m_flow_nominal = junCHWSup2.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6414};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1822]] /* junCHWSup2.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1783]] /* junCHWSup2.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 6414;
}

/*
equation index: 6415
type: SIMPLE_ASSIGN
junCHWSup2.res3.m_flow_nominal_pos = abs(junCHWSup2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6415};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1823]] /* junCHWSup2.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1822]] /* junCHWSup2.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6415;
}

/*
equation index: 6418
type: SIMPLE_ASSIGN
junCHWSup2.res3.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup2.res3.Medium.dynamicViscosity(junCHWSup2.res3.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6418};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res3_Medium_ThermodynamicState tmp13;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp13, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1827]] /* junCHWSup2.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1826]] /* junCHWSup2.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1820]] /* junCHWSup2.res3.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res3_Medium_dynamicViscosity(threadData, tmp13);
  threadData->lastEquationSolved = 6418;
}

/*
equation index: 6427
type: SIMPLE_ASSIGN
junCHWSup2.res3.m_flow_small = 1e-4 * abs(junCHWSup2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6427};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1824]] /* junCHWSup2.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1822]] /* junCHWSup2.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6427;
}

/*
equation index: 6434
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow_nominal = junCHWSup2.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6434};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1808]] /* junCHWSup2.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1782]] /* junCHWSup2.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 6434;
}

/*
equation index: 6435
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow_nominal_pos = abs(junCHWSup2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6435};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1809]] /* junCHWSup2.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1808]] /* junCHWSup2.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6435;
}

/*
equation index: 6438
type: SIMPLE_ASSIGN
junCHWSup2.res2.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup2.res2.Medium.dynamicViscosity(junCHWSup2.res2.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6438};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res2_Medium_ThermodynamicState tmp14;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp14, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1813]] /* junCHWSup2.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1812]] /* junCHWSup2.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1806]] /* junCHWSup2.res2.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res2_Medium_dynamicViscosity(threadData, tmp14);
  threadData->lastEquationSolved = 6438;
}

/*
equation index: 6447
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow_small = 1e-4 * abs(junCHWSup2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6447};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1810]] /* junCHWSup2.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1808]] /* junCHWSup2.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6447;
}

/*
equation index: 6454
type: SIMPLE_ASSIGN
junCHWSup2.res1.m_flow_nominal = junCHWSup2.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6454};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* junCHWSup2.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1781]] /* junCHWSup2.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 6454;
}

/*
equation index: 6455
type: SIMPLE_ASSIGN
junCHWSup2.res1.m_flow_nominal_pos = abs(junCHWSup2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6455};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1795]] /* junCHWSup2.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* junCHWSup2.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6455;
}

/*
equation index: 6458
type: SIMPLE_ASSIGN
junCHWSup2.res1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup2.res1.Medium.dynamicViscosity(junCHWSup2.res1.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6458};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res1_Medium_ThermodynamicState tmp15;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp15, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1799]] /* junCHWSup2.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1798]] /* junCHWSup2.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1792]] /* junCHWSup2.res1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res1_Medium_dynamicViscosity(threadData, tmp15);
  threadData->lastEquationSolved = 6458;
}

/*
equation index: 6467
type: SIMPLE_ASSIGN
junCHWSup2.res1.m_flow_small = 1e-4 * abs(junCHWSup2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6467};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1796]] /* junCHWSup2.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* junCHWSup2.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6467;
}

/*
equation index: 6469
type: SIMPLE_ASSIGN
junCHWSup2.m_flow_small = 1e-4 * junCHWSup2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6469};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1784]] /* junCHWSup2.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1779]] /* junCHWSup2.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6469;
}

/*
equation index: 6487
type: SIMPLE_ASSIGN
junCHWRet2.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWRet2.m_flow_nominal[1]) + abs(junCHWRet2.m_flow_nominal[2]) + abs(junCHWRet2.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6487};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1613]] /* junCHWRet2.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1615]] /* junCHWRet2.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1616]] /* junCHWRet2.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* junCHWRet2.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 6487;
}

/*
equation index: 6488
type: SIMPLE_ASSIGN
junCHWRet2.vol.m_flow_nominal = junCHWRet2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6488};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1680]] /* junCHWRet2.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1613]] /* junCHWRet2.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6488;
}

/*
equation index: 6489
type: SIMPLE_ASSIGN
junCHWRet2.vol.tau = junCHWRet2.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6489};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1689]] /* junCHWRet2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1662]] /* junCHWRet2.tau PARAM */);
  threadData->lastEquationSolved = 6489;
}

/*
equation index: 6490
type: SIMPLE_ASSIGN
junCHWRet2.vol.V_nominal = 0.0010044335697769957 * junCHWRet2.vol.m_flow_nominal * junCHWRet2.vol.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6490};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1665]] /* junCHWRet2.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1680]] /* junCHWRet2.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1689]] /* junCHWRet2.vol.tau PARAM */)));
  threadData->lastEquationSolved = 6490;
}

/*
equation index: 6493
type: SIMPLE_ASSIGN
junCHWRet2.vol.T_start = junCHWRet2.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6493};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1663]] /* junCHWRet2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1607]] /* junCHWRet2.T_start PARAM */);
  threadData->lastEquationSolved = 6493;
}

/*
equation index: 6494
type: SIMPLE_ASSIGN
junCHWRet2.vol.state_start.T = junCHWRet2.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6494};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1687]] /* junCHWRet2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1663]] /* junCHWRet2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6494;
}

/*
equation index: 6495
type: SIMPLE_ASSIGN
junCHWRet2.vol.p_start = junCHWRet2.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6495};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1682]] /* junCHWRet2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1619]] /* junCHWRet2.p_start PARAM */);
  threadData->lastEquationSolved = 6495;
}

/*
equation index: 6496
type: SIMPLE_ASSIGN
junCHWRet2.vol.state_start.p = junCHWRet2.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6496};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1688]] /* junCHWRet2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1682]] /* junCHWRet2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6496;
}

/*
equation index: 6500
type: SIMPLE_ASSIGN
junCHWRet2.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet2.vol.Medium.density(junCHWRet2.vol.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6500};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_vol_Medium_ThermodynamicState tmp16;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp16, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1688]] /* junCHWRet2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1687]] /* junCHWRet2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1684]] /* junCHWRet2.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_vol_Medium_density(threadData, tmp16);
  threadData->lastEquationSolved = 6500;
}

/*
equation index: 6501
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.p_start = junCHWRet2.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6501};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1674]] /* junCHWRet2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1682]] /* junCHWRet2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6501;
}

/*
equation index: 6502
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.T_start = junCHWRet2.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6502};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1668]] /* junCHWRet2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1663]] /* junCHWRet2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6502;
}

/*
equation index: 6503
type: SIMPLE_ASSIGN
junCHWRet2.vol.X_start[1] = junCHWRet2.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6503};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1666]] /* junCHWRet2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1608]] /* junCHWRet2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6503;
}

/*
equation index: 6504
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.X_start[1] = junCHWRet2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6504};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1669]] /* junCHWRet2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1666]] /* junCHWRet2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6504;
}

/*
equation index: 6505
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet2.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWRet2.vol.dynBal.p_start, junCHWRet2.vol.dynBal.T_start, junCHWRet2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6505};
  real_array tmp17;
  real_array_create(&tmp17, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1669]] /* junCHWRet2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1672]] /* junCHWRet2.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1674]] /* junCHWRet2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1668]] /* junCHWRet2.vol.dynBal.T_start PARAM */), tmp17);
  threadData->lastEquationSolved = 6505;
}

/*
equation index: 6510
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet2.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet2.vol.dynBal.Medium.setState_pTX(junCHWRet2.vol.dynBal.p_start, junCHWRet2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6510};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1676]] /* junCHWRet2.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1674]] /* junCHWRet2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1668]] /* junCHWRet2.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6510;
}

/*
equation index: 6513
type: SIMPLE_ASSIGN
junCHWRet2.vol.V = junCHWRet2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6513};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1664]] /* junCHWRet2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1665]] /* junCHWRet2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 6513;
}

/*
equation index: 6514
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.fluidVolume = junCHWRet2.vol.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6514};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1671]] /* junCHWRet2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1664]] /* junCHWRet2.vol.V PARAM */);
  threadData->lastEquationSolved = 6514;
}

/*
equation index: 6527
type: SIMPLE_ASSIGN
junCHWRet2.vol.m_flow_small = 1e-4 * abs(junCHWRet2.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6527};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1681]] /* junCHWRet2.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1680]] /* junCHWRet2.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6527;
}

/*
equation index: 6540
type: SIMPLE_ASSIGN
junCHWRet2.res3.m_flow_nominal = junCHWRet2.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6540};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1656]] /* junCHWRet2.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* junCHWRet2.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 6540;
}

/*
equation index: 6541
type: SIMPLE_ASSIGN
junCHWRet2.res3.m_flow_nominal_pos = abs(junCHWRet2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6541};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1657]] /* junCHWRet2.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1656]] /* junCHWRet2.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6541;
}

/*
equation index: 6544
type: SIMPLE_ASSIGN
junCHWRet2.res3.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet2.res3.Medium.dynamicViscosity(junCHWRet2.res3.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6544};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res3_Medium_ThermodynamicState tmp18;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp18, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1661]] /* junCHWRet2.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1660]] /* junCHWRet2.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1654]] /* junCHWRet2.res3.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res3_Medium_dynamicViscosity(threadData, tmp18);
  threadData->lastEquationSolved = 6544;
}

/*
equation index: 6553
type: SIMPLE_ASSIGN
junCHWRet2.res3.m_flow_small = 1e-4 * abs(junCHWRet2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6553};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1658]] /* junCHWRet2.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1656]] /* junCHWRet2.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6553;
}

/*
equation index: 6560
type: SIMPLE_ASSIGN
junCHWRet2.res2.m_flow_nominal = junCHWRet2.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6560};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1642]] /* junCHWRet2.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1616]] /* junCHWRet2.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 6560;
}

/*
equation index: 6561
type: SIMPLE_ASSIGN
junCHWRet2.res2.m_flow_nominal_pos = abs(junCHWRet2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6561};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1643]] /* junCHWRet2.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1642]] /* junCHWRet2.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6561;
}

/*
equation index: 6564
type: SIMPLE_ASSIGN
junCHWRet2.res2.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet2.res2.Medium.dynamicViscosity(junCHWRet2.res2.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6564};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res2_Medium_ThermodynamicState tmp19;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp19, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1647]] /* junCHWRet2.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1646]] /* junCHWRet2.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1640]] /* junCHWRet2.res2.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res2_Medium_dynamicViscosity(threadData, tmp19);
  threadData->lastEquationSolved = 6564;
}

/*
equation index: 6573
type: SIMPLE_ASSIGN
junCHWRet2.res2.m_flow_small = 1e-4 * abs(junCHWRet2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6573};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1644]] /* junCHWRet2.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1642]] /* junCHWRet2.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6573;
}

/*
equation index: 6580
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow_nominal = junCHWRet2.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6580};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1628]] /* junCHWRet2.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1615]] /* junCHWRet2.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 6580;
}

/*
equation index: 6581
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow_nominal_pos = abs(junCHWRet2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6581};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1629]] /* junCHWRet2.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1628]] /* junCHWRet2.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6581;
}

/*
equation index: 6584
type: SIMPLE_ASSIGN
junCHWRet2.res1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet2.res1.Medium.dynamicViscosity(junCHWRet2.res1.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6584};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res1_Medium_ThermodynamicState tmp20;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp20, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1633]] /* junCHWRet2.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1632]] /* junCHWRet2.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1626]] /* junCHWRet2.res1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res1_Medium_dynamicViscosity(threadData, tmp20);
  threadData->lastEquationSolved = 6584;
}

/*
equation index: 6593
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow_small = 1e-4 * abs(junCHWRet2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6593};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1630]] /* junCHWRet2.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1628]] /* junCHWRet2.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6593;
}

/*
equation index: 6595
type: SIMPLE_ASSIGN
junCHWRet2.m_flow_small = 1e-4 * junCHWRet2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6595};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1618]] /* junCHWRet2.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1613]] /* junCHWRet2.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6595;
}

/*
equation index: 6608
type: SIMPLE_ASSIGN
tan.ATan = 0.3333333333333333 * tan.VTan
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6608};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* tan.ATan PARAM */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2875]] /* tan.VTan PARAM */));
  threadData->lastEquationSolved = 6608;
}

/*
equation index: 6609
type: SIMPLE_ASSIGN
tan.rTan = sqrt(tan.ATan / 3.141592653589793)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6609};
  modelica_real tmp21;
  tmp21 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* tan.ATan PARAM */),3.141592653589793,"3.141592653589793",equationIndexes);
  if(!(tmp21 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(tan.ATan / 3.141592653589793) was %g should be >= 0", tmp21);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3224]] /* tan.rTan PARAM */) = sqrt(tmp21);
  threadData->lastEquationSolved = 6609;
}

/*
equation index: 6610
type: SIMPLE_ASSIGN
tan.lHex = 6.283185307179586 * tan.rTan
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6610};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3219]] /* tan.lHex PARAM */) = (6.283185307179586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3224]] /* tan.rTan PARAM */));
  threadData->lastEquationSolved = 6610;
}

/*
equation index: 6611
type: SIMPLE_ASSIGN
tan.volHexFlu = 0.7853981633974483 * (0.8 * tan.dExtHex) ^ 2.0 * tan.lHex
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6611};
  modelica_real tmp22;
  tmp22 = (0.8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2898]] /* tan.dExtHex PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3338]] /* tan.volHexFlu PARAM */) = (0.7853981633974483) * (((tmp22 * tmp22)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3219]] /* tan.lHex PARAM */)));
  threadData->lastEquationSolved = 6611;
}

/*
equation index: 6616
type: SIMPLE_ASSIGN
tan.indTanHex.TTan_nominal = tan.TTan_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6616};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2873]] /* tan.TTan_nominal PARAM */);
  threadData->lastEquationSolved = 6616;
}

/*
equation index: 6617
type: SIMPLE_ASSIGN
tan.indTanHex.THex_nominal = tan.THex_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6617};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2872]] /* tan.THex_nominal PARAM */);
  threadData->lastEquationSolved = 6617;
}

/*
equation index: 6618
type: SIMPLE_ASSIGN
tan.indTanHex.r_nominal = tan.r_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6618};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3225]] /* tan.r_nominal PARAM */);
  threadData->lastEquationSolved = 6618;
}

/*
equation index: 6619
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].TSur_nominal = tan.indTanHex.TTan_nominal + tan.indTanHex.r_nominal * (tan.indTanHex.THex_nominal - tan.indTanHex.TTan_nominal) / (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6619};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2979]] /* tan.indTanHex.hANatCyl[6].TSur_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */) + DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */)),1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"1.0 + tan.indTanHex.r_nominal",equationIndexes);
  threadData->lastEquationSolved = 6619;
}

/*
equation index: 6620
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].TFlu_nominal = tan.indTanHex.TTan_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6620};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2973]] /* tan.indTanHex.hANatCyl[6].TFlu_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */);
  threadData->lastEquationSolved = 6620;
}

/*
equation index: 6621
type: SIMPLE_ASSIGN
tan.indTanHex.Q_flow_nominal = tan.Q_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6621};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2909]] /* tan.indTanHex.Q_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2871]] /* tan.Q_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6621;
}

/*
equation index: 6622
type: SIMPLE_ASSIGN
tan.indTanHex.UA_nominal = abs(tan.indTanHex.Q_flow_nominal / (tan.indTanHex.THex_nominal - tan.indTanHex.TTan_nominal))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6622};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */) = fabs(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2909]] /* tan.indTanHex.Q_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */),"tan.indTanHex.THex_nominal - tan.indTanHex.TTan_nominal",equationIndexes));
  threadData->lastEquationSolved = 6622;
}

/*
equation index: 6623
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6623};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2985]] /* tan.indTanHex.hANatCyl[6].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)));
  threadData->lastEquationSolved = 6623;
}

/*
equation index: 6624
type: SIMPLE_ASSIGN
tan.indTanHex.dExtHex = tan.dExtHex
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6624};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* tan.indTanHex.dExtHex PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2898]] /* tan.dExtHex PARAM */);
  threadData->lastEquationSolved = 6624;
}

/*
equation index: 6625
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].ChaLen = tan.indTanHex.dExtHex
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6625};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2943]] /* tan.indTanHex.hANatCyl[6].ChaLen PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* tan.indTanHex.dExtHex PARAM */);
  threadData->lastEquationSolved = 6625;
}

/*
equation index: 6626
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].TSur_nominal = tan.indTanHex.TTan_nominal + tan.indTanHex.r_nominal * (tan.indTanHex.THex_nominal - tan.indTanHex.TTan_nominal) / (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6626};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* tan.indTanHex.hANatCyl[5].TSur_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */) + DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */)),1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"1.0 + tan.indTanHex.r_nominal",equationIndexes);
  threadData->lastEquationSolved = 6626;
}

/*
equation index: 6627
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].TFlu_nominal = tan.indTanHex.TTan_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6627};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2972]] /* tan.indTanHex.hANatCyl[5].TFlu_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */);
  threadData->lastEquationSolved = 6627;
}

/*
equation index: 6628
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6628};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2984]] /* tan.indTanHex.hANatCyl[5].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)));
  threadData->lastEquationSolved = 6628;
}

/*
equation index: 6629
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].ChaLen = tan.indTanHex.dExtHex
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6629};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2942]] /* tan.indTanHex.hANatCyl[5].ChaLen PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* tan.indTanHex.dExtHex PARAM */);
  threadData->lastEquationSolved = 6629;
}

/*
equation index: 6630
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].TSur_nominal = tan.indTanHex.TTan_nominal + tan.indTanHex.r_nominal * (tan.indTanHex.THex_nominal - tan.indTanHex.TTan_nominal) / (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6630};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2977]] /* tan.indTanHex.hANatCyl[4].TSur_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */) + DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */)),1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"1.0 + tan.indTanHex.r_nominal",equationIndexes);
  threadData->lastEquationSolved = 6630;
}

/*
equation index: 6631
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].TFlu_nominal = tan.indTanHex.TTan_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6631};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2971]] /* tan.indTanHex.hANatCyl[4].TFlu_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */);
  threadData->lastEquationSolved = 6631;
}

/*
equation index: 6632
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6632};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2983]] /* tan.indTanHex.hANatCyl[4].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)));
  threadData->lastEquationSolved = 6632;
}

/*
equation index: 6633
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].ChaLen = tan.indTanHex.dExtHex
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6633};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2941]] /* tan.indTanHex.hANatCyl[4].ChaLen PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* tan.indTanHex.dExtHex PARAM */);
  threadData->lastEquationSolved = 6633;
}

/*
equation index: 6634
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].TSur_nominal = tan.indTanHex.TTan_nominal + tan.indTanHex.r_nominal * (tan.indTanHex.THex_nominal - tan.indTanHex.TTan_nominal) / (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6634};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2976]] /* tan.indTanHex.hANatCyl[3].TSur_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */) + DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */)),1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"1.0 + tan.indTanHex.r_nominal",equationIndexes);
  threadData->lastEquationSolved = 6634;
}

/*
equation index: 6635
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].TFlu_nominal = tan.indTanHex.TTan_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6635};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2970]] /* tan.indTanHex.hANatCyl[3].TFlu_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */);
  threadData->lastEquationSolved = 6635;
}

/*
equation index: 6636
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6636};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2982]] /* tan.indTanHex.hANatCyl[3].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)));
  threadData->lastEquationSolved = 6636;
}

/*
equation index: 6637
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].ChaLen = tan.indTanHex.dExtHex
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6637};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2940]] /* tan.indTanHex.hANatCyl[3].ChaLen PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* tan.indTanHex.dExtHex PARAM */);
  threadData->lastEquationSolved = 6637;
}

/*
equation index: 6638
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].TSur_nominal = tan.indTanHex.TTan_nominal + tan.indTanHex.r_nominal * (tan.indTanHex.THex_nominal - tan.indTanHex.TTan_nominal) / (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6638};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2975]] /* tan.indTanHex.hANatCyl[2].TSur_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */) + DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */)),1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"1.0 + tan.indTanHex.r_nominal",equationIndexes);
  threadData->lastEquationSolved = 6638;
}

/*
equation index: 6639
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].TFlu_nominal = tan.indTanHex.TTan_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6639};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2969]] /* tan.indTanHex.hANatCyl[2].TFlu_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */);
  threadData->lastEquationSolved = 6639;
}

/*
equation index: 6640
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6640};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2981]] /* tan.indTanHex.hANatCyl[2].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)));
  threadData->lastEquationSolved = 6640;
}

/*
equation index: 6641
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].ChaLen = tan.indTanHex.dExtHex
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6641};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2939]] /* tan.indTanHex.hANatCyl[2].ChaLen PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* tan.indTanHex.dExtHex PARAM */);
  threadData->lastEquationSolved = 6641;
}

/*
equation index: 6642
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].TSur_nominal = tan.indTanHex.TTan_nominal + tan.indTanHex.r_nominal * (tan.indTanHex.THex_nominal - tan.indTanHex.TTan_nominal) / (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6642};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2974]] /* tan.indTanHex.hANatCyl[1].TSur_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */) + DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */)),1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"1.0 + tan.indTanHex.r_nominal",equationIndexes);
  threadData->lastEquationSolved = 6642;
}

/*
equation index: 6643
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].TFlu_nominal = tan.indTanHex.TTan_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6643};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* tan.indTanHex.hANatCyl[1].TFlu_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */);
  threadData->lastEquationSolved = 6643;
}

/*
equation index: 6644
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6644};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2980]] /* tan.indTanHex.hANatCyl[1].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)));
  threadData->lastEquationSolved = 6644;
}

/*
equation index: 6645
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].ChaLen = tan.indTanHex.dExtHex
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6645};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2938]] /* tan.indTanHex.hANatCyl[1].ChaLen PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* tan.indTanHex.dExtHex PARAM */);
  threadData->lastEquationSolved = 6645;
}

/*
equation index: 6648
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[6].T_nominal = tan.indTanHex.THex_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6648};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3021]] /* tan.indTanHex.hAPipIns[6].T_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */);
  threadData->lastEquationSolved = 6648;
}

/*
equation index: 6650
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[6].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal) / tan.indTanHex.r_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6650};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3027]] /* tan.indTanHex.hAPipIns[6].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (DIVISION_SIM(1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"tan.indTanHex.r_nominal",equationIndexes)));
  threadData->lastEquationSolved = 6650;
}

/*
equation index: 6654
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[5].T_nominal = tan.indTanHex.THex_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6654};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3020]] /* tan.indTanHex.hAPipIns[5].T_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */);
  threadData->lastEquationSolved = 6654;
}

/*
equation index: 6656
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[5].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal) / tan.indTanHex.r_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6656};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3026]] /* tan.indTanHex.hAPipIns[5].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (DIVISION_SIM(1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"tan.indTanHex.r_nominal",equationIndexes)));
  threadData->lastEquationSolved = 6656;
}

/*
equation index: 6660
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[4].T_nominal = tan.indTanHex.THex_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6660};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3019]] /* tan.indTanHex.hAPipIns[4].T_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */);
  threadData->lastEquationSolved = 6660;
}

/*
equation index: 6662
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[4].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal) / tan.indTanHex.r_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6662};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3025]] /* tan.indTanHex.hAPipIns[4].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (DIVISION_SIM(1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"tan.indTanHex.r_nominal",equationIndexes)));
  threadData->lastEquationSolved = 6662;
}

/*
equation index: 6666
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[3].T_nominal = tan.indTanHex.THex_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6666};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3018]] /* tan.indTanHex.hAPipIns[3].T_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */);
  threadData->lastEquationSolved = 6666;
}

/*
equation index: 6668
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[3].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal) / tan.indTanHex.r_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6668};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3024]] /* tan.indTanHex.hAPipIns[3].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (DIVISION_SIM(1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"tan.indTanHex.r_nominal",equationIndexes)));
  threadData->lastEquationSolved = 6668;
}

/*
equation index: 6672
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[2].T_nominal = tan.indTanHex.THex_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6672};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3017]] /* tan.indTanHex.hAPipIns[2].T_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */);
  threadData->lastEquationSolved = 6672;
}

/*
equation index: 6674
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[2].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal) / tan.indTanHex.r_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6674};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3023]] /* tan.indTanHex.hAPipIns[2].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (DIVISION_SIM(1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"tan.indTanHex.r_nominal",equationIndexes)));
  threadData->lastEquationSolved = 6674;
}

/*
equation index: 6678
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[1].T_nominal = tan.indTanHex.THex_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6678};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3016]] /* tan.indTanHex.hAPipIns[1].T_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */);
  threadData->lastEquationSolved = 6678;
}

/*
equation index: 6680
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[1].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal) / tan.indTanHex.r_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6680};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3022]] /* tan.indTanHex.hAPipIns[1].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (DIVISION_SIM(1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"tan.indTanHex.r_nominal",equationIndexes)));
  threadData->lastEquationSolved = 6680;
}

/*
equation index: 6686
type: SIMPLE_ASSIGN
tan.ACroHex = 0.7853981633974483 * (tan.dExtHex ^ 2.0 - (0.8 * tan.dExtHex) ^ 2.0)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6686};
  modelica_real tmp23;
  modelica_real tmp24;
  tmp23 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2898]] /* tan.dExtHex PARAM */);
  tmp24 = (0.8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2898]] /* tan.dExtHex PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2843]] /* tan.ACroHex PARAM */) = (0.7853981633974483) * ((tmp23 * tmp23) - ((tmp24 * tmp24)));
  threadData->lastEquationSolved = 6686;
}

/*
equation index: 6687
type: SIMPLE_ASSIGN
tan.CHex = tan.ACroHex * tan.lHex * tan.dHex * tan.cHex
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6687};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2845]] /* tan.CHex PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2843]] /* tan.ACroHex PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3219]] /* tan.lHex PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2900]] /* tan.dHex PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2886]] /* tan.cHex PARAM */))));
  threadData->lastEquationSolved = 6687;
}

/*
equation index: 6688
type: SIMPLE_ASSIGN
tan.indTanHex.CHex = tan.CHex
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6688};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* tan.indTanHex.CHex PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2845]] /* tan.CHex PARAM */);
  threadData->lastEquationSolved = 6688;
}

/*
equation index: 6689
type: SIMPLE_ASSIGN
tan.indTanHex.cap[6].C = 0.16666666666666666 * tan.indTanHex.CHex
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6689};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2922]] /* tan.indTanHex.cap[6].C PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* tan.indTanHex.CHex PARAM */));
  threadData->lastEquationSolved = 6689;
}

/*
equation index: 6690
type: SIMPLE_ASSIGN
tan.indTanHex.cap[5].C = 0.16666666666666666 * tan.indTanHex.CHex
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6690};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2921]] /* tan.indTanHex.cap[5].C PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* tan.indTanHex.CHex PARAM */));
  threadData->lastEquationSolved = 6690;
}

/*
equation index: 6691
type: SIMPLE_ASSIGN
tan.indTanHex.cap[4].C = 0.16666666666666666 * tan.indTanHex.CHex
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6691};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2920]] /* tan.indTanHex.cap[4].C PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* tan.indTanHex.CHex PARAM */));
  threadData->lastEquationSolved = 6691;
}

/*
equation index: 6692
type: SIMPLE_ASSIGN
tan.indTanHex.cap[3].C = 0.16666666666666666 * tan.indTanHex.CHex
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6692};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2919]] /* tan.indTanHex.cap[3].C PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* tan.indTanHex.CHex PARAM */));
  threadData->lastEquationSolved = 6692;
}

/*
equation index: 6693
type: SIMPLE_ASSIGN
tan.indTanHex.cap[2].C = 0.16666666666666666 * tan.indTanHex.CHex
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6693};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2918]] /* tan.indTanHex.cap[2].C PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* tan.indTanHex.CHex PARAM */));
  threadData->lastEquationSolved = 6693;
}

/*
equation index: 6694
type: SIMPLE_ASSIGN
tan.indTanHex.cap[1].C = 0.16666666666666666 * tan.indTanHex.CHex
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6694};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2917]] /* tan.indTanHex.cap[1].C PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* tan.indTanHex.CHex PARAM */));
  threadData->lastEquationSolved = 6694;
}

/*
equation index: 6697
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].T_start = tan.indTanHex.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6697};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3072]] /* tan.indTanHex.vol[6].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2912]] /* tan.indTanHex.T_start PARAM */);
  threadData->lastEquationSolved = 6697;
}

/*
equation index: 6698
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].state_start.T = tan.indTanHex.vol[6].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6698};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3210]] /* tan.indTanHex.vol[6].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3072]] /* tan.indTanHex.vol[6].T_start PARAM */);
  threadData->lastEquationSolved = 6698;
}

/*
equation index: 6699
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].p_start = tan.indTanHex.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6699};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3180]] /* tan.indTanHex.vol[6].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3049]] /* tan.indTanHex.p_start PARAM */);
  threadData->lastEquationSolved = 6699;
}

/*
equation index: 6700
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].state_start.p = tan.indTanHex.vol[6].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6700};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3216]] /* tan.indTanHex.vol[6].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3180]] /* tan.indTanHex.vol[6].p_start PARAM */);
  threadData->lastEquationSolved = 6700;
}

/*
equation index: 6704
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.Medium.density(tan.indTanHex.vol[6].state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6704};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState tmp25;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp25, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3216]] /* tan.indTanHex.vol[6].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3210]] /* tan.indTanHex.vol[6].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3192]] /* tan.indTanHex.vol[6].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_density(threadData, tmp25);
  threadData->lastEquationSolved = 6704;
}

/*
equation index: 6705
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.p_start = tan.indTanHex.vol[6].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6705};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3132]] /* tan.indTanHex.vol[6].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3180]] /* tan.indTanHex.vol[6].p_start PARAM */);
  threadData->lastEquationSolved = 6705;
}

/*
equation index: 6706
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.T_start = tan.indTanHex.vol[6].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6706};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3096]] /* tan.indTanHex.vol[6].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3072]] /* tan.indTanHex.vol[6].T_start PARAM */);
  threadData->lastEquationSolved = 6706;
}

/*
equation index: 6707
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].X_start[1] = tan.indTanHex.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6707};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3084]] /* tan.indTanHex.vol[6].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* tan.indTanHex.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6707;
}

/*
equation index: 6708
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.X_start[1] = tan.indTanHex.vol[6].X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6708};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3102]] /* tan.indTanHex.vol[6].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3084]] /* tan.indTanHex.vol[6].X_start[1] PARAM */);
  threadData->lastEquationSolved = 6708;
}

/*
equation index: 6709
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.specificEnthalpy_pTX(tan.indTanHex.vol[6].dynBal.p_start, tan.indTanHex.vol[6].dynBal.T_start, tan.indTanHex.vol[6].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6709};
  real_array tmp26;
  real_array_create(&tmp26, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3102]] /* tan.indTanHex.vol[6].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3120]] /* tan.indTanHex.vol[6].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3132]] /* tan.indTanHex.vol[6].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3096]] /* tan.indTanHex.vol[6].dynBal.T_start PARAM */), tmp26);
  threadData->lastEquationSolved = 6709;
}

/*
equation index: 6714
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.setState_pTX(tan.indTanHex.vol[6].dynBal.p_start, tan.indTanHex.vol[6].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6714};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3144]] /* tan.indTanHex.vol[6].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3132]] /* tan.indTanHex.vol[6].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3096]] /* tan.indTanHex.vol[6].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6714;
}

/*
equation index: 6717
type: SIMPLE_ASSIGN
tan.indTanHex.volHexFlu = tan.volHexFlu
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6717};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3217]] /* tan.indTanHex.volHexFlu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3338]] /* tan.volHexFlu PARAM */);
  threadData->lastEquationSolved = 6717;
}

/*
equation index: 6718
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].V = 0.16666666666666666 * tan.indTanHex.volHexFlu
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6718};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3078]] /* tan.indTanHex.vol[6].V PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3217]] /* tan.indTanHex.volHexFlu PARAM */));
  threadData->lastEquationSolved = 6718;
}

/*
equation index: 6719
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.fluidVolume = tan.indTanHex.vol[6].V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6719};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3114]] /* tan.indTanHex.vol[6].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3078]] /* tan.indTanHex.vol[6].V PARAM */);
  threadData->lastEquationSolved = 6719;
}

/*
equation index: 6742
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].T_start = tan.indTanHex.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6742};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3071]] /* tan.indTanHex.vol[5].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2912]] /* tan.indTanHex.T_start PARAM */);
  threadData->lastEquationSolved = 6742;
}

/*
equation index: 6743
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].state_start.T = tan.indTanHex.vol[5].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6743};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3209]] /* tan.indTanHex.vol[5].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3071]] /* tan.indTanHex.vol[5].T_start PARAM */);
  threadData->lastEquationSolved = 6743;
}

/*
equation index: 6744
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].p_start = tan.indTanHex.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6744};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3179]] /* tan.indTanHex.vol[5].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3049]] /* tan.indTanHex.p_start PARAM */);
  threadData->lastEquationSolved = 6744;
}

/*
equation index: 6745
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].state_start.p = tan.indTanHex.vol[5].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6745};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3215]] /* tan.indTanHex.vol[5].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3179]] /* tan.indTanHex.vol[5].p_start PARAM */);
  threadData->lastEquationSolved = 6745;
}

/*
equation index: 6749
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.Medium.density(tan.indTanHex.vol[5].state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6749};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState tmp27;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp27, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3215]] /* tan.indTanHex.vol[5].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3209]] /* tan.indTanHex.vol[5].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3191]] /* tan.indTanHex.vol[5].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_density(threadData, tmp27);
  threadData->lastEquationSolved = 6749;
}

/*
equation index: 6750
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.p_start = tan.indTanHex.vol[5].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6750};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3131]] /* tan.indTanHex.vol[5].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3179]] /* tan.indTanHex.vol[5].p_start PARAM */);
  threadData->lastEquationSolved = 6750;
}

/*
equation index: 6751
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.T_start = tan.indTanHex.vol[5].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6751};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3095]] /* tan.indTanHex.vol[5].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3071]] /* tan.indTanHex.vol[5].T_start PARAM */);
  threadData->lastEquationSolved = 6751;
}

/*
equation index: 6752
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].X_start[1] = tan.indTanHex.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6752};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3083]] /* tan.indTanHex.vol[5].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* tan.indTanHex.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6752;
}

/*
equation index: 6753
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.X_start[1] = tan.indTanHex.vol[5].X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6753};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3101]] /* tan.indTanHex.vol[5].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3083]] /* tan.indTanHex.vol[5].X_start[1] PARAM */);
  threadData->lastEquationSolved = 6753;
}

/*
equation index: 6754
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.specificEnthalpy_pTX(tan.indTanHex.vol[5].dynBal.p_start, tan.indTanHex.vol[5].dynBal.T_start, tan.indTanHex.vol[5].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6754};
  real_array tmp28;
  real_array_create(&tmp28, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3101]] /* tan.indTanHex.vol[5].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3119]] /* tan.indTanHex.vol[5].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3131]] /* tan.indTanHex.vol[5].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3095]] /* tan.indTanHex.vol[5].dynBal.T_start PARAM */), tmp28);
  threadData->lastEquationSolved = 6754;
}

/*
equation index: 6759
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.setState_pTX(tan.indTanHex.vol[5].dynBal.p_start, tan.indTanHex.vol[5].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6759};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3143]] /* tan.indTanHex.vol[5].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3131]] /* tan.indTanHex.vol[5].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3095]] /* tan.indTanHex.vol[5].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6759;
}

/*
equation index: 6762
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].V = 0.16666666666666666 * tan.indTanHex.volHexFlu
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6762};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3077]] /* tan.indTanHex.vol[5].V PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3217]] /* tan.indTanHex.volHexFlu PARAM */));
  threadData->lastEquationSolved = 6762;
}

/*
equation index: 6763
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.fluidVolume = tan.indTanHex.vol[5].V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6763};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3113]] /* tan.indTanHex.vol[5].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3077]] /* tan.indTanHex.vol[5].V PARAM */);
  threadData->lastEquationSolved = 6763;
}

/*
equation index: 6786
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].T_start = tan.indTanHex.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6786};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3070]] /* tan.indTanHex.vol[4].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2912]] /* tan.indTanHex.T_start PARAM */);
  threadData->lastEquationSolved = 6786;
}

/*
equation index: 6787
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].state_start.T = tan.indTanHex.vol[4].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6787};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3208]] /* tan.indTanHex.vol[4].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3070]] /* tan.indTanHex.vol[4].T_start PARAM */);
  threadData->lastEquationSolved = 6787;
}

/*
equation index: 6788
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].p_start = tan.indTanHex.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6788};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3178]] /* tan.indTanHex.vol[4].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3049]] /* tan.indTanHex.p_start PARAM */);
  threadData->lastEquationSolved = 6788;
}

/*
equation index: 6789
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].state_start.p = tan.indTanHex.vol[4].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6789};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3214]] /* tan.indTanHex.vol[4].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3178]] /* tan.indTanHex.vol[4].p_start PARAM */);
  threadData->lastEquationSolved = 6789;
}

/*
equation index: 6793
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.Medium.density(tan.indTanHex.vol[4].state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6793};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState tmp29;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp29, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3214]] /* tan.indTanHex.vol[4].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3208]] /* tan.indTanHex.vol[4].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3190]] /* tan.indTanHex.vol[4].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_density(threadData, tmp29);
  threadData->lastEquationSolved = 6793;
}

/*
equation index: 6794
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.p_start = tan.indTanHex.vol[4].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6794};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3130]] /* tan.indTanHex.vol[4].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3178]] /* tan.indTanHex.vol[4].p_start PARAM */);
  threadData->lastEquationSolved = 6794;
}

/*
equation index: 6795
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.T_start = tan.indTanHex.vol[4].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6795};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3094]] /* tan.indTanHex.vol[4].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3070]] /* tan.indTanHex.vol[4].T_start PARAM */);
  threadData->lastEquationSolved = 6795;
}

/*
equation index: 6796
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].X_start[1] = tan.indTanHex.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6796};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3082]] /* tan.indTanHex.vol[4].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* tan.indTanHex.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6796;
}

/*
equation index: 6797
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.X_start[1] = tan.indTanHex.vol[4].X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6797};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3100]] /* tan.indTanHex.vol[4].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3082]] /* tan.indTanHex.vol[4].X_start[1] PARAM */);
  threadData->lastEquationSolved = 6797;
}

/*
equation index: 6798
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.specificEnthalpy_pTX(tan.indTanHex.vol[4].dynBal.p_start, tan.indTanHex.vol[4].dynBal.T_start, tan.indTanHex.vol[4].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6798};
  real_array tmp30;
  real_array_create(&tmp30, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3100]] /* tan.indTanHex.vol[4].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3118]] /* tan.indTanHex.vol[4].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3130]] /* tan.indTanHex.vol[4].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3094]] /* tan.indTanHex.vol[4].dynBal.T_start PARAM */), tmp30);
  threadData->lastEquationSolved = 6798;
}

/*
equation index: 6803
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.setState_pTX(tan.indTanHex.vol[4].dynBal.p_start, tan.indTanHex.vol[4].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6803};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3142]] /* tan.indTanHex.vol[4].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3130]] /* tan.indTanHex.vol[4].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3094]] /* tan.indTanHex.vol[4].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6803;
}

/*
equation index: 6806
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].V = 0.16666666666666666 * tan.indTanHex.volHexFlu
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6806};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3076]] /* tan.indTanHex.vol[4].V PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3217]] /* tan.indTanHex.volHexFlu PARAM */));
  threadData->lastEquationSolved = 6806;
}

/*
equation index: 6807
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.fluidVolume = tan.indTanHex.vol[4].V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6807};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3112]] /* tan.indTanHex.vol[4].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3076]] /* tan.indTanHex.vol[4].V PARAM */);
  threadData->lastEquationSolved = 6807;
}

/*
equation index: 6830
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].T_start = tan.indTanHex.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6830};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3069]] /* tan.indTanHex.vol[3].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2912]] /* tan.indTanHex.T_start PARAM */);
  threadData->lastEquationSolved = 6830;
}

/*
equation index: 6831
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].state_start.T = tan.indTanHex.vol[3].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6831};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3207]] /* tan.indTanHex.vol[3].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3069]] /* tan.indTanHex.vol[3].T_start PARAM */);
  threadData->lastEquationSolved = 6831;
}

/*
equation index: 6832
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].p_start = tan.indTanHex.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6832};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3177]] /* tan.indTanHex.vol[3].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3049]] /* tan.indTanHex.p_start PARAM */);
  threadData->lastEquationSolved = 6832;
}

/*
equation index: 6833
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].state_start.p = tan.indTanHex.vol[3].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6833};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3213]] /* tan.indTanHex.vol[3].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3177]] /* tan.indTanHex.vol[3].p_start PARAM */);
  threadData->lastEquationSolved = 6833;
}

/*
equation index: 6837
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.Medium.density(tan.indTanHex.vol[3].state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6837};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState tmp31;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp31, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3213]] /* tan.indTanHex.vol[3].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3207]] /* tan.indTanHex.vol[3].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3189]] /* tan.indTanHex.vol[3].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_density(threadData, tmp31);
  threadData->lastEquationSolved = 6837;
}

/*
equation index: 6838
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.p_start = tan.indTanHex.vol[3].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6838};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3129]] /* tan.indTanHex.vol[3].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3177]] /* tan.indTanHex.vol[3].p_start PARAM */);
  threadData->lastEquationSolved = 6838;
}

/*
equation index: 6839
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.T_start = tan.indTanHex.vol[3].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6839};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3093]] /* tan.indTanHex.vol[3].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3069]] /* tan.indTanHex.vol[3].T_start PARAM */);
  threadData->lastEquationSolved = 6839;
}

/*
equation index: 6840
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].X_start[1] = tan.indTanHex.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6840};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3081]] /* tan.indTanHex.vol[3].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* tan.indTanHex.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6840;
}

/*
equation index: 6841
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.X_start[1] = tan.indTanHex.vol[3].X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6841};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3099]] /* tan.indTanHex.vol[3].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3081]] /* tan.indTanHex.vol[3].X_start[1] PARAM */);
  threadData->lastEquationSolved = 6841;
}

/*
equation index: 6842
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.specificEnthalpy_pTX(tan.indTanHex.vol[3].dynBal.p_start, tan.indTanHex.vol[3].dynBal.T_start, tan.indTanHex.vol[3].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6842};
  real_array tmp32;
  real_array_create(&tmp32, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3099]] /* tan.indTanHex.vol[3].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3117]] /* tan.indTanHex.vol[3].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3129]] /* tan.indTanHex.vol[3].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3093]] /* tan.indTanHex.vol[3].dynBal.T_start PARAM */), tmp32);
  threadData->lastEquationSolved = 6842;
}

/*
equation index: 6847
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.setState_pTX(tan.indTanHex.vol[3].dynBal.p_start, tan.indTanHex.vol[3].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6847};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3141]] /* tan.indTanHex.vol[3].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3129]] /* tan.indTanHex.vol[3].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3093]] /* tan.indTanHex.vol[3].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6847;
}

/*
equation index: 6850
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].V = 0.16666666666666666 * tan.indTanHex.volHexFlu
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6850};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3075]] /* tan.indTanHex.vol[3].V PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3217]] /* tan.indTanHex.volHexFlu PARAM */));
  threadData->lastEquationSolved = 6850;
}

/*
equation index: 6851
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.fluidVolume = tan.indTanHex.vol[3].V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6851};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3111]] /* tan.indTanHex.vol[3].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3075]] /* tan.indTanHex.vol[3].V PARAM */);
  threadData->lastEquationSolved = 6851;
}

/*
equation index: 6874
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].T_start = tan.indTanHex.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6874};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3068]] /* tan.indTanHex.vol[2].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2912]] /* tan.indTanHex.T_start PARAM */);
  threadData->lastEquationSolved = 6874;
}

/*
equation index: 6875
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].state_start.T = tan.indTanHex.vol[2].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6875};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3206]] /* tan.indTanHex.vol[2].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3068]] /* tan.indTanHex.vol[2].T_start PARAM */);
  threadData->lastEquationSolved = 6875;
}

/*
equation index: 6876
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].p_start = tan.indTanHex.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6876};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3176]] /* tan.indTanHex.vol[2].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3049]] /* tan.indTanHex.p_start PARAM */);
  threadData->lastEquationSolved = 6876;
}

/*
equation index: 6877
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].state_start.p = tan.indTanHex.vol[2].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6877};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3212]] /* tan.indTanHex.vol[2].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3176]] /* tan.indTanHex.vol[2].p_start PARAM */);
  threadData->lastEquationSolved = 6877;
}

/*
equation index: 6881
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.Medium.density(tan.indTanHex.vol[2].state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6881};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState tmp33;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp33, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3212]] /* tan.indTanHex.vol[2].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3206]] /* tan.indTanHex.vol[2].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3188]] /* tan.indTanHex.vol[2].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_density(threadData, tmp33);
  threadData->lastEquationSolved = 6881;
}

/*
equation index: 6882
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.p_start = tan.indTanHex.vol[2].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6882};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3128]] /* tan.indTanHex.vol[2].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3176]] /* tan.indTanHex.vol[2].p_start PARAM */);
  threadData->lastEquationSolved = 6882;
}

/*
equation index: 6883
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.T_start = tan.indTanHex.vol[2].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6883};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3092]] /* tan.indTanHex.vol[2].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3068]] /* tan.indTanHex.vol[2].T_start PARAM */);
  threadData->lastEquationSolved = 6883;
}

/*
equation index: 6884
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].X_start[1] = tan.indTanHex.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6884};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3080]] /* tan.indTanHex.vol[2].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* tan.indTanHex.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6884;
}

/*
equation index: 6885
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.X_start[1] = tan.indTanHex.vol[2].X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6885};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3098]] /* tan.indTanHex.vol[2].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3080]] /* tan.indTanHex.vol[2].X_start[1] PARAM */);
  threadData->lastEquationSolved = 6885;
}

/*
equation index: 6886
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.specificEnthalpy_pTX(tan.indTanHex.vol[2].dynBal.p_start, tan.indTanHex.vol[2].dynBal.T_start, tan.indTanHex.vol[2].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6886};
  real_array tmp34;
  real_array_create(&tmp34, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3098]] /* tan.indTanHex.vol[2].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3116]] /* tan.indTanHex.vol[2].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3128]] /* tan.indTanHex.vol[2].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3092]] /* tan.indTanHex.vol[2].dynBal.T_start PARAM */), tmp34);
  threadData->lastEquationSolved = 6886;
}

/*
equation index: 6891
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.setState_pTX(tan.indTanHex.vol[2].dynBal.p_start, tan.indTanHex.vol[2].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6891};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3140]] /* tan.indTanHex.vol[2].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3128]] /* tan.indTanHex.vol[2].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3092]] /* tan.indTanHex.vol[2].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6891;
}

/*
equation index: 6894
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].V = 0.16666666666666666 * tan.indTanHex.volHexFlu
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6894};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3074]] /* tan.indTanHex.vol[2].V PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3217]] /* tan.indTanHex.volHexFlu PARAM */));
  threadData->lastEquationSolved = 6894;
}

/*
equation index: 6895
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.fluidVolume = tan.indTanHex.vol[2].V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6895};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3110]] /* tan.indTanHex.vol[2].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3074]] /* tan.indTanHex.vol[2].V PARAM */);
  threadData->lastEquationSolved = 6895;
}

/*
equation index: 6918
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].T_start = tan.indTanHex.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6918};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3067]] /* tan.indTanHex.vol[1].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2912]] /* tan.indTanHex.T_start PARAM */);
  threadData->lastEquationSolved = 6918;
}

/*
equation index: 6919
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].state_start.T = tan.indTanHex.vol[1].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6919};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3205]] /* tan.indTanHex.vol[1].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3067]] /* tan.indTanHex.vol[1].T_start PARAM */);
  threadData->lastEquationSolved = 6919;
}

/*
equation index: 6920
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].p_start = tan.indTanHex.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6920};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3175]] /* tan.indTanHex.vol[1].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3049]] /* tan.indTanHex.p_start PARAM */);
  threadData->lastEquationSolved = 6920;
}

/*
equation index: 6921
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].state_start.p = tan.indTanHex.vol[1].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6921};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3211]] /* tan.indTanHex.vol[1].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3175]] /* tan.indTanHex.vol[1].p_start PARAM */);
  threadData->lastEquationSolved = 6921;
}

/*
equation index: 6925
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.Medium.density(tan.indTanHex.vol[1].state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6925};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState tmp35;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp35, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3211]] /* tan.indTanHex.vol[1].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3205]] /* tan.indTanHex.vol[1].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3187]] /* tan.indTanHex.vol[1].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_density(threadData, tmp35);
  threadData->lastEquationSolved = 6925;
}

/*
equation index: 6926
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.p_start = tan.indTanHex.vol[1].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6926};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3127]] /* tan.indTanHex.vol[1].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3175]] /* tan.indTanHex.vol[1].p_start PARAM */);
  threadData->lastEquationSolved = 6926;
}

/*
equation index: 6927
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.T_start = tan.indTanHex.vol[1].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6927};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3091]] /* tan.indTanHex.vol[1].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3067]] /* tan.indTanHex.vol[1].T_start PARAM */);
  threadData->lastEquationSolved = 6927;
}

/*
equation index: 6928
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].X_start[1] = tan.indTanHex.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6928};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3079]] /* tan.indTanHex.vol[1].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* tan.indTanHex.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6928;
}

/*
equation index: 6929
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.X_start[1] = tan.indTanHex.vol[1].X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6929};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3097]] /* tan.indTanHex.vol[1].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3079]] /* tan.indTanHex.vol[1].X_start[1] PARAM */);
  threadData->lastEquationSolved = 6929;
}

/*
equation index: 6930
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.specificEnthalpy_pTX(tan.indTanHex.vol[1].dynBal.p_start, tan.indTanHex.vol[1].dynBal.T_start, tan.indTanHex.vol[1].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6930};
  real_array tmp36;
  real_array_create(&tmp36, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3097]] /* tan.indTanHex.vol[1].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3115]] /* tan.indTanHex.vol[1].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3127]] /* tan.indTanHex.vol[1].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3091]] /* tan.indTanHex.vol[1].dynBal.T_start PARAM */), tmp36);
  threadData->lastEquationSolved = 6930;
}

/*
equation index: 6935
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.setState_pTX(tan.indTanHex.vol[1].dynBal.p_start, tan.indTanHex.vol[1].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6935};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3139]] /* tan.indTanHex.vol[1].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3127]] /* tan.indTanHex.vol[1].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3091]] /* tan.indTanHex.vol[1].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6935;
}

/*
equation index: 6938
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].V = 0.16666666666666666 * tan.indTanHex.volHexFlu
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6938};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3073]] /* tan.indTanHex.vol[1].V PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3217]] /* tan.indTanHex.volHexFlu PARAM */));
  threadData->lastEquationSolved = 6938;
}

/*
equation index: 6939
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.fluidVolume = tan.indTanHex.vol[1].V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6939};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3109]] /* tan.indTanHex.vol[1].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3073]] /* tan.indTanHex.vol[1].V PARAM */);
  threadData->lastEquationSolved = 6939;
}

/*
equation index: 6968
type: SIMPLE_ASSIGN
tan.indTanHex.res.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.res.Medium.dynamicViscosity(tan.indTanHex.res.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6968};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_res_Medium_ThermodynamicState tmp37;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_res_Medium_ThermodynamicState_wrap_vars(threadData,tmp37, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3064]] /* tan.indTanHex.res.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3063]] /* tan.indTanHex.res.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3057]] /* tan.indTanHex.res.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_res_Medium_dynamicViscosity(threadData, tmp37);
  threadData->lastEquationSolved = 6968;
}

/*
equation index: 6995
type: SIMPLE_ASSIGN
tan.indTanHex.deltaM = tan.deltaM
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_6995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6995};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2924]] /* tan.indTanHex.deltaM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2902]] /* tan.deltaM PARAM */);
  threadData->lastEquationSolved = 6995;
}

/*
equation index: 7014
type: SIMPLE_ASSIGN
tan.str.m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7014};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3230]] /* tan.str.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7014;
}

/*
equation index: 7020
type: SIMPLE_ASSIGN
tan.H_b_flow.m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7020};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2853]] /* tan.H_b_flow.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7020;
}

/*
equation index: 7028
type: SIMPLE_ASSIGN
tan.H_vol_flow[3].m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7028};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2864]] /* tan.H_vol_flow[3].m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7028;
}

/*
equation index: 7036
type: SIMPLE_ASSIGN
tan.H_vol_flow[2].m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7036};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2863]] /* tan.H_vol_flow[2].m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7036;
}

/*
equation index: 7044
type: SIMPLE_ASSIGN
tan.H_vol_flow[1].m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7044};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2862]] /* tan.H_vol_flow[1].m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7044;
}

/*
equation index: 7052
type: SIMPLE_ASSIGN
tan.H_a_flow.m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7052};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2848]] /* tan.H_a_flow.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7052;
}

/*
equation index: 7066
type: SIMPLE_ASSIGN
tan.conTopSeg = tan.ATan * tan.kIns / tan.dIns
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7066};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2893]] /* tan.conTopSeg PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* tan.ATan PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3218]] /* tan.kIns PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2901]] /* tan.dIns PARAM */),"tan.dIns",equationIndexes));
  threadData->lastEquationSolved = 7066;
}

/*
equation index: 7067
type: SIMPLE_ASSIGN
tan.conBot.G = tan.conTopSeg
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7067};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2887]] /* tan.conBot.G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2893]] /* tan.conTopSeg PARAM */);
  threadData->lastEquationSolved = 7067;
}

/*
equation index: 7068
type: SIMPLE_ASSIGN
tan.conTop.G = tan.conTopSeg
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7068};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2892]] /* tan.conTop.G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2893]] /* tan.conTopSeg PARAM */);
  threadData->lastEquationSolved = 7068;
}

/*
equation index: 7070
type: SIMPLE_ASSIGN
tan.conWal[4].G = 6.283185307179586 * tan.kIns * tan.hSeg / log((tan.rTan + tan.dIns) / tan.rTan)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7070};
  modelica_real tmp38;
  tmp38 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3224]] /* tan.rTan PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2901]] /* tan.dIns PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3224]] /* tan.rTan PARAM */),"tan.rTan",equationIndexes);
  if(!(tmp38 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log((tan.rTan + tan.dIns) / tan.rTan) was %g should be > 0", tmp38);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2897]] /* tan.conWal[4].G PARAM */) = (6.283185307179586) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3218]] /* tan.kIns PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2906]] /* tan.hSeg PARAM */),log(tmp38),"log((tan.rTan + tan.dIns) / tan.rTan)",equationIndexes)));
  threadData->lastEquationSolved = 7070;
}

/*
equation index: 7071
type: SIMPLE_ASSIGN
tan.conWal[3].G = 6.283185307179586 * tan.kIns * tan.hSeg / log((tan.rTan + tan.dIns) / tan.rTan)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7071};
  modelica_real tmp39;
  tmp39 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3224]] /* tan.rTan PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2901]] /* tan.dIns PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3224]] /* tan.rTan PARAM */),"tan.rTan",equationIndexes);
  if(!(tmp39 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log((tan.rTan + tan.dIns) / tan.rTan) was %g should be > 0", tmp39);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* tan.conWal[3].G PARAM */) = (6.283185307179586) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3218]] /* tan.kIns PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2906]] /* tan.hSeg PARAM */),log(tmp39),"log((tan.rTan + tan.dIns) / tan.rTan)",equationIndexes)));
  threadData->lastEquationSolved = 7071;
}

/*
equation index: 7072
type: SIMPLE_ASSIGN
tan.conWal[2].G = 6.283185307179586 * tan.kIns * tan.hSeg / log((tan.rTan + tan.dIns) / tan.rTan)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7072};
  modelica_real tmp40;
  tmp40 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3224]] /* tan.rTan PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2901]] /* tan.dIns PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3224]] /* tan.rTan PARAM */),"tan.rTan",equationIndexes);
  if(!(tmp40 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log((tan.rTan + tan.dIns) / tan.rTan) was %g should be > 0", tmp40);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* tan.conWal[2].G PARAM */) = (6.283185307179586) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3218]] /* tan.kIns PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2906]] /* tan.hSeg PARAM */),log(tmp40),"log((tan.rTan + tan.dIns) / tan.rTan)",equationIndexes)));
  threadData->lastEquationSolved = 7072;
}

/*
equation index: 7073
type: SIMPLE_ASSIGN
tan.conWal[1].G = 6.283185307179586 * tan.kIns * tan.hSeg / log((tan.rTan + tan.dIns) / tan.rTan)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7073};
  modelica_real tmp41;
  tmp41 = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3224]] /* tan.rTan PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2901]] /* tan.dIns PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3224]] /* tan.rTan PARAM */),"tan.rTan",equationIndexes);
  if(!(tmp41 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log((tan.rTan + tan.dIns) / tan.rTan) was %g should be > 0", tmp41);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2894]] /* tan.conWal[1].G PARAM */) = (6.283185307179586) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3218]] /* tan.kIns PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2906]] /* tan.hSeg PARAM */),log(tmp41),"log((tan.rTan + tan.dIns) / tan.rTan)",equationIndexes)));
  threadData->lastEquationSolved = 7073;
}

/*
equation index: 7076
type: SIMPLE_ASSIGN
tan.conFluSeg = tan.ATan * WaterCooledChillerExample.WaterCooledChillerExample7.tan.Medium.thermalConductivity(tan.sta_default) / tan.hSeg
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7076};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_Medium_ThermodynamicState tmp42;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_Medium_ThermodynamicState_wrap_vars(threadData,tmp42, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3228]] /* tan.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3227]] /* tan.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* tan.conFluSeg PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* tan.ATan PARAM */)) * (DIVISION_SIM(omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_Medium_thermalConductivity(threadData, tmp42),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2906]] /* tan.hSeg PARAM */),"tan.hSeg",equationIndexes));
  threadData->lastEquationSolved = 7076;
}

/*
equation index: 7077
type: SIMPLE_ASSIGN
tan.conFlu[3].G = tan.conFluSeg
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7077};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2890]] /* tan.conFlu[3].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* tan.conFluSeg PARAM */);
  threadData->lastEquationSolved = 7077;
}

/*
equation index: 7078
type: SIMPLE_ASSIGN
tan.conFlu[2].G = tan.conFluSeg
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7078};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2889]] /* tan.conFlu[2].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* tan.conFluSeg PARAM */);
  threadData->lastEquationSolved = 7078;
}

/*
equation index: 7079
type: SIMPLE_ASSIGN
tan.conFlu[1].G = tan.conFluSeg
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7079};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2888]] /* tan.conFlu[1].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* tan.conFluSeg PARAM */);
  threadData->lastEquationSolved = 7079;
}

/*
equation index: 7080
type: SIMPLE_ASSIGN
tan.buo.V = tan.VTan
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7080};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2879]] /* tan.buo.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2875]] /* tan.VTan PARAM */);
  threadData->lastEquationSolved = 7080;
}

/*
equation index: 7081
type: SIMPLE_ASSIGN
tan.buo.tau = tan.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7081};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2885]] /* tan.buo.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3237]] /* tan.tau PARAM */);
  threadData->lastEquationSolved = 7081;
}

/*
equation index: 7084
type: SIMPLE_ASSIGN
tan.buo.rho_default = WaterCooledChillerExample.WaterCooledChillerExample7.tan.buo.Medium.density(tan.buo.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7084};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_buo_Medium_ThermodynamicState tmp43;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_buo_Medium_ThermodynamicState_wrap_vars(threadData,tmp43, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2884]] /* tan.buo.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2883]] /* tan.buo.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2882]] /* tan.buo.rho_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_buo_Medium_density(threadData, tmp43);
  threadData->lastEquationSolved = 7084;
}

/*
equation index: 7085
type: SIMPLE_ASSIGN
tan.buo.cp_default = WaterCooledChillerExample.WaterCooledChillerExample7.tan.buo.Medium.specificHeatCapacityCp(tan.buo.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7085};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_buo_Medium_ThermodynamicState tmp44;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_buo_Medium_ThermodynamicState_wrap_vars(threadData,tmp44, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2884]] /* tan.buo.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2883]] /* tan.buo.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2880]] /* tan.buo.cp_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_buo_Medium_specificHeatCapacityCp(threadData, tmp44);
  threadData->lastEquationSolved = 7085;
}

/*
equation index: 7086
type: SIMPLE_ASSIGN
tan.buo.k = 0.25 * tan.buo.V * tan.buo.rho_default * tan.buo.cp_default / tan.buo.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7086};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2881]] /* tan.buo.k PARAM */) = (0.25) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2879]] /* tan.buo.V PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2882]] /* tan.buo.rho_default PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2880]] /* tan.buo.cp_default PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2885]] /* tan.buo.tau PARAM */),"tan.buo.tau",equationIndexes))));
  threadData->lastEquationSolved = 7086;
}

/*
equation index: 7090
type: SIMPLE_ASSIGN
tan.vol[4].T_start = tan.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7090};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3241]] /* tan.vol[4].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2874]] /* tan.T_start PARAM */);
  threadData->lastEquationSolved = 7090;
}

/*
equation index: 7091
type: SIMPLE_ASSIGN
tan.vol[4].state_start.T = tan.vol[4].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7091};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3333]] /* tan.vol[4].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3241]] /* tan.vol[4].T_start PARAM */);
  threadData->lastEquationSolved = 7091;
}

/*
equation index: 7092
type: SIMPLE_ASSIGN
tan.vol[4].p_start = tan.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7092};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3313]] /* tan.vol[4].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3223]] /* tan.p_start PARAM */);
  threadData->lastEquationSolved = 7092;
}

/*
equation index: 7093
type: SIMPLE_ASSIGN
tan.vol[4].state_start.p = tan.vol[4].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7093};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3337]] /* tan.vol[4].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3313]] /* tan.vol[4].p_start PARAM */);
  threadData->lastEquationSolved = 7093;
}

/*
equation index: 7097
type: SIMPLE_ASSIGN
tan.vol[4].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.Medium.density(tan.vol[4].state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7097};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_ThermodynamicState tmp45;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp45, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3337]] /* tan.vol[4].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3333]] /* tan.vol[4].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3321]] /* tan.vol[4].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_density(threadData, tmp45);
  threadData->lastEquationSolved = 7097;
}

/*
equation index: 7098
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.p_start = tan.vol[4].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7098};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3281]] /* tan.vol[4].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3313]] /* tan.vol[4].p_start PARAM */);
  threadData->lastEquationSolved = 7098;
}

/*
equation index: 7099
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.T_start = tan.vol[4].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7099};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3257]] /* tan.vol[4].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3241]] /* tan.vol[4].T_start PARAM */);
  threadData->lastEquationSolved = 7099;
}

/*
equation index: 7100
type: SIMPLE_ASSIGN
tan.vol[4].X_start[1] = tan.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7100};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3249]] /* tan.vol[4].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2876]] /* tan.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7100;
}

/*
equation index: 7101
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.X_start[1] = tan.vol[4].X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7101};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3261]] /* tan.vol[4].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3249]] /* tan.vol[4].X_start[1] PARAM */);
  threadData->lastEquationSolved = 7101;
}

/*
equation index: 7102
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.specificEnthalpy_pTX(tan.vol[4].dynBal.p_start, tan.vol[4].dynBal.T_start, tan.vol[4].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7102};
  real_array tmp46;
  real_array_create(&tmp46, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3261]] /* tan.vol[4].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3273]] /* tan.vol[4].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3281]] /* tan.vol[4].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3257]] /* tan.vol[4].dynBal.T_start PARAM */), tmp46);
  threadData->lastEquationSolved = 7102;
}

/*
equation index: 7107
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.setState_pTX(tan.vol[4].dynBal.p_start, tan.vol[4].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7107};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3289]] /* tan.vol[4].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3281]] /* tan.vol[4].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3257]] /* tan.vol[4].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7107;
}

/*
equation index: 7110
type: SIMPLE_ASSIGN
tan.vol[4].V = 0.25 * tan.VTan
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7110};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3245]] /* tan.vol[4].V PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2875]] /* tan.VTan PARAM */));
  threadData->lastEquationSolved = 7110;
}

/*
equation index: 7111
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.fluidVolume = tan.vol[4].V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7111};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3269]] /* tan.vol[4].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3245]] /* tan.vol[4].V PARAM */);
  threadData->lastEquationSolved = 7111;
}

/*
equation index: 7124
type: SIMPLE_ASSIGN
tan.vol[4].m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7124};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3309]] /* tan.vol[4].m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7124;
}

/*
equation index: 7135
type: SIMPLE_ASSIGN
tan.vol[3].T_start = tan.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7135};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3240]] /* tan.vol[3].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2874]] /* tan.T_start PARAM */);
  threadData->lastEquationSolved = 7135;
}

/*
equation index: 7136
type: SIMPLE_ASSIGN
tan.vol[3].state_start.T = tan.vol[3].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7136};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3332]] /* tan.vol[3].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3240]] /* tan.vol[3].T_start PARAM */);
  threadData->lastEquationSolved = 7136;
}

/*
equation index: 7137
type: SIMPLE_ASSIGN
tan.vol[3].p_start = tan.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7137};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3312]] /* tan.vol[3].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3223]] /* tan.p_start PARAM */);
  threadData->lastEquationSolved = 7137;
}

/*
equation index: 7138
type: SIMPLE_ASSIGN
tan.vol[3].state_start.p = tan.vol[3].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7138};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3336]] /* tan.vol[3].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3312]] /* tan.vol[3].p_start PARAM */);
  threadData->lastEquationSolved = 7138;
}

/*
equation index: 7142
type: SIMPLE_ASSIGN
tan.vol[3].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.Medium.density(tan.vol[3].state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7142};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_ThermodynamicState tmp47;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp47, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3336]] /* tan.vol[3].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3332]] /* tan.vol[3].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3320]] /* tan.vol[3].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_density(threadData, tmp47);
  threadData->lastEquationSolved = 7142;
}

/*
equation index: 7143
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.p_start = tan.vol[3].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7143};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3280]] /* tan.vol[3].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3312]] /* tan.vol[3].p_start PARAM */);
  threadData->lastEquationSolved = 7143;
}

/*
equation index: 7144
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.T_start = tan.vol[3].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7144};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3256]] /* tan.vol[3].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3240]] /* tan.vol[3].T_start PARAM */);
  threadData->lastEquationSolved = 7144;
}

/*
equation index: 7145
type: SIMPLE_ASSIGN
tan.vol[3].X_start[1] = tan.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7145};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3248]] /* tan.vol[3].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2876]] /* tan.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7145;
}

/*
equation index: 7146
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.X_start[1] = tan.vol[3].X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7146};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3260]] /* tan.vol[3].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3248]] /* tan.vol[3].X_start[1] PARAM */);
  threadData->lastEquationSolved = 7146;
}

/*
equation index: 7147
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.specificEnthalpy_pTX(tan.vol[3].dynBal.p_start, tan.vol[3].dynBal.T_start, tan.vol[3].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7147};
  real_array tmp48;
  real_array_create(&tmp48, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3260]] /* tan.vol[3].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3272]] /* tan.vol[3].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3280]] /* tan.vol[3].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3256]] /* tan.vol[3].dynBal.T_start PARAM */), tmp48);
  threadData->lastEquationSolved = 7147;
}

/*
equation index: 7152
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.setState_pTX(tan.vol[3].dynBal.p_start, tan.vol[3].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7152};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3288]] /* tan.vol[3].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3280]] /* tan.vol[3].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3256]] /* tan.vol[3].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7152;
}

/*
equation index: 7155
type: SIMPLE_ASSIGN
tan.vol[3].V = 0.25 * tan.VTan
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7155};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3244]] /* tan.vol[3].V PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2875]] /* tan.VTan PARAM */));
  threadData->lastEquationSolved = 7155;
}

/*
equation index: 7156
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.fluidVolume = tan.vol[3].V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7156};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3268]] /* tan.vol[3].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3244]] /* tan.vol[3].V PARAM */);
  threadData->lastEquationSolved = 7156;
}

/*
equation index: 7169
type: SIMPLE_ASSIGN
tan.vol[3].m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7169};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3308]] /* tan.vol[3].m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7169;
}

/*
equation index: 7180
type: SIMPLE_ASSIGN
tan.vol[2].T_start = tan.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7180};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3239]] /* tan.vol[2].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2874]] /* tan.T_start PARAM */);
  threadData->lastEquationSolved = 7180;
}

/*
equation index: 7181
type: SIMPLE_ASSIGN
tan.vol[2].state_start.T = tan.vol[2].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7181};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3331]] /* tan.vol[2].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3239]] /* tan.vol[2].T_start PARAM */);
  threadData->lastEquationSolved = 7181;
}

/*
equation index: 7182
type: SIMPLE_ASSIGN
tan.vol[2].p_start = tan.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7182};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3311]] /* tan.vol[2].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3223]] /* tan.p_start PARAM */);
  threadData->lastEquationSolved = 7182;
}

/*
equation index: 7183
type: SIMPLE_ASSIGN
tan.vol[2].state_start.p = tan.vol[2].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7183};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3335]] /* tan.vol[2].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3311]] /* tan.vol[2].p_start PARAM */);
  threadData->lastEquationSolved = 7183;
}

/*
equation index: 7187
type: SIMPLE_ASSIGN
tan.vol[2].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.Medium.density(tan.vol[2].state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7187};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_ThermodynamicState tmp49;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp49, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3335]] /* tan.vol[2].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3331]] /* tan.vol[2].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3319]] /* tan.vol[2].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_density(threadData, tmp49);
  threadData->lastEquationSolved = 7187;
}

/*
equation index: 7188
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.p_start = tan.vol[2].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7188};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3279]] /* tan.vol[2].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3311]] /* tan.vol[2].p_start PARAM */);
  threadData->lastEquationSolved = 7188;
}

/*
equation index: 7189
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.T_start = tan.vol[2].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7189};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3255]] /* tan.vol[2].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3239]] /* tan.vol[2].T_start PARAM */);
  threadData->lastEquationSolved = 7189;
}

/*
equation index: 7190
type: SIMPLE_ASSIGN
tan.vol[2].X_start[1] = tan.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7190};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3247]] /* tan.vol[2].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2876]] /* tan.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7190;
}

/*
equation index: 7191
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.X_start[1] = tan.vol[2].X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7191};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3259]] /* tan.vol[2].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3247]] /* tan.vol[2].X_start[1] PARAM */);
  threadData->lastEquationSolved = 7191;
}

/*
equation index: 7192
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.specificEnthalpy_pTX(tan.vol[2].dynBal.p_start, tan.vol[2].dynBal.T_start, tan.vol[2].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7192};
  real_array tmp50;
  real_array_create(&tmp50, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3259]] /* tan.vol[2].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3271]] /* tan.vol[2].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3279]] /* tan.vol[2].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3255]] /* tan.vol[2].dynBal.T_start PARAM */), tmp50);
  threadData->lastEquationSolved = 7192;
}

/*
equation index: 7197
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.setState_pTX(tan.vol[2].dynBal.p_start, tan.vol[2].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7197};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3287]] /* tan.vol[2].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3279]] /* tan.vol[2].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3255]] /* tan.vol[2].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7197;
}

/*
equation index: 7200
type: SIMPLE_ASSIGN
tan.vol[2].V = 0.25 * tan.VTan
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7200};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3243]] /* tan.vol[2].V PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2875]] /* tan.VTan PARAM */));
  threadData->lastEquationSolved = 7200;
}

/*
equation index: 7201
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.fluidVolume = tan.vol[2].V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7201};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3267]] /* tan.vol[2].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3243]] /* tan.vol[2].V PARAM */);
  threadData->lastEquationSolved = 7201;
}

/*
equation index: 7214
type: SIMPLE_ASSIGN
tan.vol[2].m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7214};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3307]] /* tan.vol[2].m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7214;
}

/*
equation index: 7225
type: SIMPLE_ASSIGN
tan.vol[1].T_start = tan.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7225};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3238]] /* tan.vol[1].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2874]] /* tan.T_start PARAM */);
  threadData->lastEquationSolved = 7225;
}

/*
equation index: 7226
type: SIMPLE_ASSIGN
tan.vol[1].state_start.T = tan.vol[1].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7226};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3330]] /* tan.vol[1].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3238]] /* tan.vol[1].T_start PARAM */);
  threadData->lastEquationSolved = 7226;
}

/*
equation index: 7227
type: SIMPLE_ASSIGN
tan.vol[1].p_start = tan.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7227};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3310]] /* tan.vol[1].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3223]] /* tan.p_start PARAM */);
  threadData->lastEquationSolved = 7227;
}

/*
equation index: 7228
type: SIMPLE_ASSIGN
tan.vol[1].state_start.p = tan.vol[1].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7228};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3334]] /* tan.vol[1].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3310]] /* tan.vol[1].p_start PARAM */);
  threadData->lastEquationSolved = 7228;
}

/*
equation index: 7232
type: SIMPLE_ASSIGN
tan.vol[1].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.Medium.density(tan.vol[1].state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7232};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_ThermodynamicState tmp51;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp51, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3334]] /* tan.vol[1].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3330]] /* tan.vol[1].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3318]] /* tan.vol[1].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_density(threadData, tmp51);
  threadData->lastEquationSolved = 7232;
}

/*
equation index: 7233
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.p_start = tan.vol[1].p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7233};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3278]] /* tan.vol[1].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3310]] /* tan.vol[1].p_start PARAM */);
  threadData->lastEquationSolved = 7233;
}

/*
equation index: 7234
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.T_start = tan.vol[1].T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7234};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3254]] /* tan.vol[1].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3238]] /* tan.vol[1].T_start PARAM */);
  threadData->lastEquationSolved = 7234;
}

/*
equation index: 7235
type: SIMPLE_ASSIGN
tan.vol[1].X_start[1] = tan.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7235};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3246]] /* tan.vol[1].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2876]] /* tan.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7235;
}

/*
equation index: 7236
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.X_start[1] = tan.vol[1].X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7236};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3258]] /* tan.vol[1].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3246]] /* tan.vol[1].X_start[1] PARAM */);
  threadData->lastEquationSolved = 7236;
}

/*
equation index: 7237
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.specificEnthalpy_pTX(tan.vol[1].dynBal.p_start, tan.vol[1].dynBal.T_start, tan.vol[1].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7237};
  real_array tmp52;
  real_array_create(&tmp52, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3258]] /* tan.vol[1].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3270]] /* tan.vol[1].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3278]] /* tan.vol[1].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3254]] /* tan.vol[1].dynBal.T_start PARAM */), tmp52);
  threadData->lastEquationSolved = 7237;
}

/*
equation index: 7242
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.setState_pTX(tan.vol[1].dynBal.p_start, tan.vol[1].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7242};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3286]] /* tan.vol[1].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3278]] /* tan.vol[1].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3254]] /* tan.vol[1].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7242;
}

/*
equation index: 7245
type: SIMPLE_ASSIGN
tan.vol[1].V = 0.25 * tan.VTan
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7245};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3242]] /* tan.vol[1].V PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2875]] /* tan.VTan PARAM */));
  threadData->lastEquationSolved = 7245;
}

/*
equation index: 7246
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.fluidVolume = tan.vol[1].V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7246};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3266]] /* tan.vol[1].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3242]] /* tan.vol[1].V PARAM */);
  threadData->lastEquationSolved = 7246;
}

/*
equation index: 7259
type: SIMPLE_ASSIGN
tan.vol[1].m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7259};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3306]] /* tan.vol[1].m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7259;
}

/*
equation index: 7284
type: SIMPLE_ASSIGN
junCHWRet.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWRet.m_flow_nominal[1]) + abs(junCHWRet.m_flow_nominal[2]) + abs(junCHWRet.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7284};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1530]] /* junCHWRet.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1532]] /* junCHWRet.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1533]] /* junCHWRet.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1534]] /* junCHWRet.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 7284;
}

/*
equation index: 7285
type: SIMPLE_ASSIGN
junCHWRet.vol.m_flow_nominal = junCHWRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7285};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1597]] /* junCHWRet.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1530]] /* junCHWRet.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7285;
}

/*
equation index: 7286
type: SIMPLE_ASSIGN
junCHWRet.vol.tau = junCHWRet.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7286};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1606]] /* junCHWRet.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1579]] /* junCHWRet.tau PARAM */);
  threadData->lastEquationSolved = 7286;
}

/*
equation index: 7287
type: SIMPLE_ASSIGN
junCHWRet.vol.V_nominal = 0.0010044335697769957 * junCHWRet.vol.m_flow_nominal * junCHWRet.vol.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7287};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1582]] /* junCHWRet.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1597]] /* junCHWRet.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1606]] /* junCHWRet.vol.tau PARAM */)));
  threadData->lastEquationSolved = 7287;
}

/*
equation index: 7290
type: SIMPLE_ASSIGN
junCHWRet.vol.T_start = junCHWRet.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7290};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1580]] /* junCHWRet.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1524]] /* junCHWRet.T_start PARAM */);
  threadData->lastEquationSolved = 7290;
}

/*
equation index: 7291
type: SIMPLE_ASSIGN
junCHWRet.vol.state_start.T = junCHWRet.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7291};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1604]] /* junCHWRet.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1580]] /* junCHWRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 7291;
}

/*
equation index: 7292
type: SIMPLE_ASSIGN
junCHWRet.vol.p_start = junCHWRet.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7292};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1599]] /* junCHWRet.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1536]] /* junCHWRet.p_start PARAM */);
  threadData->lastEquationSolved = 7292;
}

/*
equation index: 7293
type: SIMPLE_ASSIGN
junCHWRet.vol.state_start.p = junCHWRet.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7293};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1605]] /* junCHWRet.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1599]] /* junCHWRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 7293;
}

/*
equation index: 7297
type: SIMPLE_ASSIGN
junCHWRet.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet.vol.Medium.density(junCHWRet.vol.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7297};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_vol_Medium_ThermodynamicState tmp53;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp53, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1605]] /* junCHWRet.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1604]] /* junCHWRet.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1601]] /* junCHWRet.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_vol_Medium_density(threadData, tmp53);
  threadData->lastEquationSolved = 7297;
}

/*
equation index: 7298
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.p_start = junCHWRet.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7298};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* junCHWRet.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1599]] /* junCHWRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 7298;
}

/*
equation index: 7299
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.T_start = junCHWRet.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7299};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1585]] /* junCHWRet.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1580]] /* junCHWRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 7299;
}

/*
equation index: 7300
type: SIMPLE_ASSIGN
junCHWRet.vol.X_start[1] = junCHWRet.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7300};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1583]] /* junCHWRet.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1525]] /* junCHWRet.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7300;
}

/*
equation index: 7301
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.X_start[1] = junCHWRet.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7301};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1586]] /* junCHWRet.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1583]] /* junCHWRet.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7301;
}

/*
equation index: 7302
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWRet.vol.dynBal.p_start, junCHWRet.vol.dynBal.T_start, junCHWRet.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7302};
  real_array tmp54;
  real_array_create(&tmp54, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1586]] /* junCHWRet.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1589]] /* junCHWRet.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* junCHWRet.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1585]] /* junCHWRet.vol.dynBal.T_start PARAM */), tmp54);
  threadData->lastEquationSolved = 7302;
}

/*
equation index: 7307
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet.vol.dynBal.Medium.setState_pTX(junCHWRet.vol.dynBal.p_start, junCHWRet.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7307};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1593]] /* junCHWRet.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* junCHWRet.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1585]] /* junCHWRet.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7307;
}

/*
equation index: 7310
type: SIMPLE_ASSIGN
junCHWRet.vol.V = junCHWRet.vol.V_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7310};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1581]] /* junCHWRet.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1582]] /* junCHWRet.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 7310;
}

/*
equation index: 7311
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.fluidVolume = junCHWRet.vol.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7311};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1588]] /* junCHWRet.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1581]] /* junCHWRet.vol.V PARAM */);
  threadData->lastEquationSolved = 7311;
}

/*
equation index: 7324
type: SIMPLE_ASSIGN
junCHWRet.vol.m_flow_small = 1e-4 * abs(junCHWRet.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7324};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1598]] /* junCHWRet.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1597]] /* junCHWRet.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7324;
}
OMC_DISABLE_OPT
void outputs_WaterCooledChillerExample7_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[478])(DATA*, threadData_t*) = {
    outputs_WaterCooledChillerExample7_eqFunction_5801,
    outputs_WaterCooledChillerExample7_eqFunction_5802,
    outputs_WaterCooledChillerExample7_eqFunction_5803,
    outputs_WaterCooledChillerExample7_eqFunction_5804,
    outputs_WaterCooledChillerExample7_eqFunction_5805,
    outputs_WaterCooledChillerExample7_eqFunction_5806,
    outputs_WaterCooledChillerExample7_eqFunction_5807,
    outputs_WaterCooledChillerExample7_eqFunction_5808,
    outputs_WaterCooledChillerExample7_eqFunction_5809,
    outputs_WaterCooledChillerExample7_eqFunction_1976,
    outputs_WaterCooledChillerExample7_eqFunction_1975,
    outputs_WaterCooledChillerExample7_eqFunction_1974,
    outputs_WaterCooledChillerExample7_eqFunction_1973,
    outputs_WaterCooledChillerExample7_eqFunction_1972,
    outputs_WaterCooledChillerExample7_eqFunction_1971,
    outputs_WaterCooledChillerExample7_eqFunction_1970,
    outputs_WaterCooledChillerExample7_eqFunction_1969,
    outputs_WaterCooledChillerExample7_eqFunction_1968,
    outputs_WaterCooledChillerExample7_eqFunction_1967,
    outputs_WaterCooledChillerExample7_eqFunction_1966,
    outputs_WaterCooledChillerExample7_eqFunction_1965,
    outputs_WaterCooledChillerExample7_eqFunction_1964,
    outputs_WaterCooledChillerExample7_eqFunction_1963,
    outputs_WaterCooledChillerExample7_eqFunction_351,
    outputs_WaterCooledChillerExample7_eqFunction_350,
    outputs_WaterCooledChillerExample7_eqFunction_1962,
    outputs_WaterCooledChillerExample7_eqFunction_1961,
    outputs_WaterCooledChillerExample7_eqFunction_349,
    outputs_WaterCooledChillerExample7_eqFunction_1960,
    outputs_WaterCooledChillerExample7_eqFunction_1959,
    outputs_WaterCooledChillerExample7_eqFunction_1958,
    outputs_WaterCooledChillerExample7_eqFunction_1957,
    outputs_WaterCooledChillerExample7_eqFunction_1956,
    outputs_WaterCooledChillerExample7_eqFunction_1955,
    outputs_WaterCooledChillerExample7_eqFunction_1954,
    outputs_WaterCooledChillerExample7_eqFunction_1953,
    outputs_WaterCooledChillerExample7_eqFunction_1952,
    outputs_WaterCooledChillerExample7_eqFunction_1951,
    outputs_WaterCooledChillerExample7_eqFunction_1950,
    outputs_WaterCooledChillerExample7_eqFunction_1949,
    outputs_WaterCooledChillerExample7_eqFunction_1948,
    outputs_WaterCooledChillerExample7_eqFunction_1947,
    outputs_WaterCooledChillerExample7_eqFunction_1946,
    outputs_WaterCooledChillerExample7_eqFunction_1945,
    outputs_WaterCooledChillerExample7_eqFunction_1944,
    outputs_WaterCooledChillerExample7_eqFunction_1943,
    outputs_WaterCooledChillerExample7_eqFunction_1942,
    outputs_WaterCooledChillerExample7_eqFunction_1941,
    outputs_WaterCooledChillerExample7_eqFunction_1939,
    outputs_WaterCooledChillerExample7_eqFunction_1938,
    outputs_WaterCooledChillerExample7_eqFunction_1937,
    outputs_WaterCooledChillerExample7_eqFunction_1936,
    outputs_WaterCooledChillerExample7_eqFunction_1935,
    outputs_WaterCooledChillerExample7_eqFunction_1934,
    outputs_WaterCooledChillerExample7_eqFunction_1933,
    outputs_WaterCooledChillerExample7_eqFunction_1932,
    outputs_WaterCooledChillerExample7_eqFunction_1931,
    outputs_WaterCooledChillerExample7_eqFunction_1930,
    outputs_WaterCooledChillerExample7_eqFunction_1928,
    outputs_WaterCooledChillerExample7_eqFunction_1927,
    outputs_WaterCooledChillerExample7_eqFunction_1924,
    outputs_WaterCooledChillerExample7_eqFunction_1923,
    outputs_WaterCooledChillerExample7_eqFunction_1922,
    outputs_WaterCooledChillerExample7_eqFunction_1921,
    outputs_WaterCooledChillerExample7_eqFunction_1920,
    outputs_WaterCooledChillerExample7_eqFunction_1919,
    outputs_WaterCooledChillerExample7_eqFunction_1918,
    outputs_WaterCooledChillerExample7_eqFunction_1917,
    outputs_WaterCooledChillerExample7_eqFunction_1890,
    outputs_WaterCooledChillerExample7_eqFunction_1889,
    outputs_WaterCooledChillerExample7_eqFunction_1888,
    outputs_WaterCooledChillerExample7_eqFunction_1887,
    outputs_WaterCooledChillerExample7_eqFunction_1886,
    outputs_WaterCooledChillerExample7_eqFunction_1885,
    outputs_WaterCooledChillerExample7_eqFunction_1884,
    outputs_WaterCooledChillerExample7_eqFunction_1883,
    outputs_WaterCooledChillerExample7_eqFunction_1882,
    outputs_WaterCooledChillerExample7_eqFunction_1881,
    outputs_WaterCooledChillerExample7_eqFunction_1880,
    outputs_WaterCooledChillerExample7_eqFunction_1879,
    outputs_WaterCooledChillerExample7_eqFunction_1878,
    outputs_WaterCooledChillerExample7_eqFunction_1877,
    outputs_WaterCooledChillerExample7_eqFunction_1876,
    outputs_WaterCooledChillerExample7_eqFunction_1875,
    outputs_WaterCooledChillerExample7_eqFunction_1874,
    outputs_WaterCooledChillerExample7_eqFunction_1873,
    outputs_WaterCooledChillerExample7_eqFunction_1872,
    outputs_WaterCooledChillerExample7_eqFunction_1871,
    outputs_WaterCooledChillerExample7_eqFunction_1870,
    outputs_WaterCooledChillerExample7_eqFunction_1869,
    outputs_WaterCooledChillerExample7_eqFunction_1868,
    outputs_WaterCooledChillerExample7_eqFunction_1867,
    outputs_WaterCooledChillerExample7_eqFunction_5928,
    outputs_WaterCooledChillerExample7_eqFunction_5929,
    outputs_WaterCooledChillerExample7_eqFunction_5933,
    outputs_WaterCooledChillerExample7_eqFunction_5934,
    outputs_WaterCooledChillerExample7_eqFunction_5949,
    outputs_WaterCooledChillerExample7_eqFunction_5950,
    outputs_WaterCooledChillerExample7_eqFunction_5954,
    outputs_WaterCooledChillerExample7_eqFunction_5955,
    outputs_WaterCooledChillerExample7_eqFunction_5970,
    outputs_WaterCooledChillerExample7_eqFunction_5971,
    outputs_WaterCooledChillerExample7_eqFunction_5975,
    outputs_WaterCooledChillerExample7_eqFunction_5976,
    outputs_WaterCooledChillerExample7_eqFunction_5991,
    outputs_WaterCooledChillerExample7_eqFunction_5992,
    outputs_WaterCooledChillerExample7_eqFunction_5996,
    outputs_WaterCooledChillerExample7_eqFunction_5997,
    outputs_WaterCooledChillerExample7_eqFunction_6012,
    outputs_WaterCooledChillerExample7_eqFunction_6013,
    outputs_WaterCooledChillerExample7_eqFunction_6017,
    outputs_WaterCooledChillerExample7_eqFunction_6018,
    outputs_WaterCooledChillerExample7_eqFunction_6072,
    outputs_WaterCooledChillerExample7_eqFunction_6073,
    outputs_WaterCooledChillerExample7_eqFunction_6077,
    outputs_WaterCooledChillerExample7_eqFunction_6078,
    outputs_WaterCooledChillerExample7_eqFunction_6079,
    outputs_WaterCooledChillerExample7_eqFunction_6080,
    outputs_WaterCooledChillerExample7_eqFunction_6081,
    outputs_WaterCooledChillerExample7_eqFunction_6082,
    outputs_WaterCooledChillerExample7_eqFunction_6083,
    outputs_WaterCooledChillerExample7_eqFunction_6097,
    outputs_WaterCooledChillerExample7_eqFunction_6103,
    outputs_WaterCooledChillerExample7_eqFunction_6105,
    outputs_WaterCooledChillerExample7_eqFunction_6107,
    outputs_WaterCooledChillerExample7_eqFunction_6108,
    outputs_WaterCooledChillerExample7_eqFunction_6111,
    outputs_WaterCooledChillerExample7_eqFunction_6112,
    outputs_WaterCooledChillerExample7_eqFunction_6113,
    outputs_WaterCooledChillerExample7_eqFunction_6114,
    outputs_WaterCooledChillerExample7_eqFunction_6118,
    outputs_WaterCooledChillerExample7_eqFunction_6119,
    outputs_WaterCooledChillerExample7_eqFunction_6120,
    outputs_WaterCooledChillerExample7_eqFunction_6121,
    outputs_WaterCooledChillerExample7_eqFunction_6122,
    outputs_WaterCooledChillerExample7_eqFunction_6123,
    outputs_WaterCooledChillerExample7_eqFunction_6128,
    outputs_WaterCooledChillerExample7_eqFunction_6131,
    outputs_WaterCooledChillerExample7_eqFunction_6132,
    outputs_WaterCooledChillerExample7_eqFunction_6145,
    outputs_WaterCooledChillerExample7_eqFunction_6154,
    outputs_WaterCooledChillerExample7_eqFunction_6155,
    outputs_WaterCooledChillerExample7_eqFunction_6156,
    outputs_WaterCooledChillerExample7_eqFunction_6168,
    outputs_WaterCooledChillerExample7_eqFunction_6172,
    outputs_WaterCooledChillerExample7_eqFunction_6173,
    outputs_WaterCooledChillerExample7_eqFunction_6174,
    outputs_WaterCooledChillerExample7_eqFunction_6175,
    outputs_WaterCooledChillerExample7_eqFunction_6235,
    outputs_WaterCooledChillerExample7_eqFunction_6236,
    outputs_WaterCooledChillerExample7_eqFunction_6240,
    outputs_WaterCooledChillerExample7_eqFunction_6241,
    outputs_WaterCooledChillerExample7_eqFunction_6242,
    outputs_WaterCooledChillerExample7_eqFunction_6243,
    outputs_WaterCooledChillerExample7_eqFunction_6244,
    outputs_WaterCooledChillerExample7_eqFunction_6245,
    outputs_WaterCooledChillerExample7_eqFunction_6246,
    outputs_WaterCooledChillerExample7_eqFunction_6260,
    outputs_WaterCooledChillerExample7_eqFunction_6266,
    outputs_WaterCooledChillerExample7_eqFunction_6268,
    outputs_WaterCooledChillerExample7_eqFunction_6270,
    outputs_WaterCooledChillerExample7_eqFunction_6271,
    outputs_WaterCooledChillerExample7_eqFunction_6274,
    outputs_WaterCooledChillerExample7_eqFunction_6275,
    outputs_WaterCooledChillerExample7_eqFunction_6276,
    outputs_WaterCooledChillerExample7_eqFunction_6277,
    outputs_WaterCooledChillerExample7_eqFunction_6281,
    outputs_WaterCooledChillerExample7_eqFunction_6282,
    outputs_WaterCooledChillerExample7_eqFunction_6283,
    outputs_WaterCooledChillerExample7_eqFunction_6284,
    outputs_WaterCooledChillerExample7_eqFunction_6285,
    outputs_WaterCooledChillerExample7_eqFunction_6286,
    outputs_WaterCooledChillerExample7_eqFunction_6291,
    outputs_WaterCooledChillerExample7_eqFunction_6294,
    outputs_WaterCooledChillerExample7_eqFunction_6295,
    outputs_WaterCooledChillerExample7_eqFunction_6308,
    outputs_WaterCooledChillerExample7_eqFunction_6317,
    outputs_WaterCooledChillerExample7_eqFunction_6318,
    outputs_WaterCooledChillerExample7_eqFunction_6319,
    outputs_WaterCooledChillerExample7_eqFunction_6331,
    outputs_WaterCooledChillerExample7_eqFunction_6335,
    outputs_WaterCooledChillerExample7_eqFunction_6336,
    outputs_WaterCooledChillerExample7_eqFunction_6337,
    outputs_WaterCooledChillerExample7_eqFunction_6338,
    outputs_WaterCooledChillerExample7_eqFunction_6361,
    outputs_WaterCooledChillerExample7_eqFunction_6362,
    outputs_WaterCooledChillerExample7_eqFunction_6363,
    outputs_WaterCooledChillerExample7_eqFunction_6364,
    outputs_WaterCooledChillerExample7_eqFunction_6367,
    outputs_WaterCooledChillerExample7_eqFunction_6368,
    outputs_WaterCooledChillerExample7_eqFunction_6369,
    outputs_WaterCooledChillerExample7_eqFunction_6370,
    outputs_WaterCooledChillerExample7_eqFunction_6374,
    outputs_WaterCooledChillerExample7_eqFunction_6375,
    outputs_WaterCooledChillerExample7_eqFunction_6376,
    outputs_WaterCooledChillerExample7_eqFunction_6377,
    outputs_WaterCooledChillerExample7_eqFunction_6378,
    outputs_WaterCooledChillerExample7_eqFunction_6379,
    outputs_WaterCooledChillerExample7_eqFunction_6384,
    outputs_WaterCooledChillerExample7_eqFunction_6387,
    outputs_WaterCooledChillerExample7_eqFunction_6388,
    outputs_WaterCooledChillerExample7_eqFunction_6401,
    outputs_WaterCooledChillerExample7_eqFunction_6414,
    outputs_WaterCooledChillerExample7_eqFunction_6415,
    outputs_WaterCooledChillerExample7_eqFunction_6418,
    outputs_WaterCooledChillerExample7_eqFunction_6427,
    outputs_WaterCooledChillerExample7_eqFunction_6434,
    outputs_WaterCooledChillerExample7_eqFunction_6435,
    outputs_WaterCooledChillerExample7_eqFunction_6438,
    outputs_WaterCooledChillerExample7_eqFunction_6447,
    outputs_WaterCooledChillerExample7_eqFunction_6454,
    outputs_WaterCooledChillerExample7_eqFunction_6455,
    outputs_WaterCooledChillerExample7_eqFunction_6458,
    outputs_WaterCooledChillerExample7_eqFunction_6467,
    outputs_WaterCooledChillerExample7_eqFunction_6469,
    outputs_WaterCooledChillerExample7_eqFunction_6487,
    outputs_WaterCooledChillerExample7_eqFunction_6488,
    outputs_WaterCooledChillerExample7_eqFunction_6489,
    outputs_WaterCooledChillerExample7_eqFunction_6490,
    outputs_WaterCooledChillerExample7_eqFunction_6493,
    outputs_WaterCooledChillerExample7_eqFunction_6494,
    outputs_WaterCooledChillerExample7_eqFunction_6495,
    outputs_WaterCooledChillerExample7_eqFunction_6496,
    outputs_WaterCooledChillerExample7_eqFunction_6500,
    outputs_WaterCooledChillerExample7_eqFunction_6501,
    outputs_WaterCooledChillerExample7_eqFunction_6502,
    outputs_WaterCooledChillerExample7_eqFunction_6503,
    outputs_WaterCooledChillerExample7_eqFunction_6504,
    outputs_WaterCooledChillerExample7_eqFunction_6505,
    outputs_WaterCooledChillerExample7_eqFunction_6510,
    outputs_WaterCooledChillerExample7_eqFunction_6513,
    outputs_WaterCooledChillerExample7_eqFunction_6514,
    outputs_WaterCooledChillerExample7_eqFunction_6527,
    outputs_WaterCooledChillerExample7_eqFunction_6540,
    outputs_WaterCooledChillerExample7_eqFunction_6541,
    outputs_WaterCooledChillerExample7_eqFunction_6544,
    outputs_WaterCooledChillerExample7_eqFunction_6553,
    outputs_WaterCooledChillerExample7_eqFunction_6560,
    outputs_WaterCooledChillerExample7_eqFunction_6561,
    outputs_WaterCooledChillerExample7_eqFunction_6564,
    outputs_WaterCooledChillerExample7_eqFunction_6573,
    outputs_WaterCooledChillerExample7_eqFunction_6580,
    outputs_WaterCooledChillerExample7_eqFunction_6581,
    outputs_WaterCooledChillerExample7_eqFunction_6584,
    outputs_WaterCooledChillerExample7_eqFunction_6593,
    outputs_WaterCooledChillerExample7_eqFunction_6595,
    outputs_WaterCooledChillerExample7_eqFunction_6608,
    outputs_WaterCooledChillerExample7_eqFunction_6609,
    outputs_WaterCooledChillerExample7_eqFunction_6610,
    outputs_WaterCooledChillerExample7_eqFunction_6611,
    outputs_WaterCooledChillerExample7_eqFunction_6616,
    outputs_WaterCooledChillerExample7_eqFunction_6617,
    outputs_WaterCooledChillerExample7_eqFunction_6618,
    outputs_WaterCooledChillerExample7_eqFunction_6619,
    outputs_WaterCooledChillerExample7_eqFunction_6620,
    outputs_WaterCooledChillerExample7_eqFunction_6621,
    outputs_WaterCooledChillerExample7_eqFunction_6622,
    outputs_WaterCooledChillerExample7_eqFunction_6623,
    outputs_WaterCooledChillerExample7_eqFunction_6624,
    outputs_WaterCooledChillerExample7_eqFunction_6625,
    outputs_WaterCooledChillerExample7_eqFunction_6626,
    outputs_WaterCooledChillerExample7_eqFunction_6627,
    outputs_WaterCooledChillerExample7_eqFunction_6628,
    outputs_WaterCooledChillerExample7_eqFunction_6629,
    outputs_WaterCooledChillerExample7_eqFunction_6630,
    outputs_WaterCooledChillerExample7_eqFunction_6631,
    outputs_WaterCooledChillerExample7_eqFunction_6632,
    outputs_WaterCooledChillerExample7_eqFunction_6633,
    outputs_WaterCooledChillerExample7_eqFunction_6634,
    outputs_WaterCooledChillerExample7_eqFunction_6635,
    outputs_WaterCooledChillerExample7_eqFunction_6636,
    outputs_WaterCooledChillerExample7_eqFunction_6637,
    outputs_WaterCooledChillerExample7_eqFunction_6638,
    outputs_WaterCooledChillerExample7_eqFunction_6639,
    outputs_WaterCooledChillerExample7_eqFunction_6640,
    outputs_WaterCooledChillerExample7_eqFunction_6641,
    outputs_WaterCooledChillerExample7_eqFunction_6642,
    outputs_WaterCooledChillerExample7_eqFunction_6643,
    outputs_WaterCooledChillerExample7_eqFunction_6644,
    outputs_WaterCooledChillerExample7_eqFunction_6645,
    outputs_WaterCooledChillerExample7_eqFunction_6648,
    outputs_WaterCooledChillerExample7_eqFunction_6650,
    outputs_WaterCooledChillerExample7_eqFunction_6654,
    outputs_WaterCooledChillerExample7_eqFunction_6656,
    outputs_WaterCooledChillerExample7_eqFunction_6660,
    outputs_WaterCooledChillerExample7_eqFunction_6662,
    outputs_WaterCooledChillerExample7_eqFunction_6666,
    outputs_WaterCooledChillerExample7_eqFunction_6668,
    outputs_WaterCooledChillerExample7_eqFunction_6672,
    outputs_WaterCooledChillerExample7_eqFunction_6674,
    outputs_WaterCooledChillerExample7_eqFunction_6678,
    outputs_WaterCooledChillerExample7_eqFunction_6680,
    outputs_WaterCooledChillerExample7_eqFunction_6686,
    outputs_WaterCooledChillerExample7_eqFunction_6687,
    outputs_WaterCooledChillerExample7_eqFunction_6688,
    outputs_WaterCooledChillerExample7_eqFunction_6689,
    outputs_WaterCooledChillerExample7_eqFunction_6690,
    outputs_WaterCooledChillerExample7_eqFunction_6691,
    outputs_WaterCooledChillerExample7_eqFunction_6692,
    outputs_WaterCooledChillerExample7_eqFunction_6693,
    outputs_WaterCooledChillerExample7_eqFunction_6694,
    outputs_WaterCooledChillerExample7_eqFunction_6697,
    outputs_WaterCooledChillerExample7_eqFunction_6698,
    outputs_WaterCooledChillerExample7_eqFunction_6699,
    outputs_WaterCooledChillerExample7_eqFunction_6700,
    outputs_WaterCooledChillerExample7_eqFunction_6704,
    outputs_WaterCooledChillerExample7_eqFunction_6705,
    outputs_WaterCooledChillerExample7_eqFunction_6706,
    outputs_WaterCooledChillerExample7_eqFunction_6707,
    outputs_WaterCooledChillerExample7_eqFunction_6708,
    outputs_WaterCooledChillerExample7_eqFunction_6709,
    outputs_WaterCooledChillerExample7_eqFunction_6714,
    outputs_WaterCooledChillerExample7_eqFunction_6717,
    outputs_WaterCooledChillerExample7_eqFunction_6718,
    outputs_WaterCooledChillerExample7_eqFunction_6719,
    outputs_WaterCooledChillerExample7_eqFunction_6742,
    outputs_WaterCooledChillerExample7_eqFunction_6743,
    outputs_WaterCooledChillerExample7_eqFunction_6744,
    outputs_WaterCooledChillerExample7_eqFunction_6745,
    outputs_WaterCooledChillerExample7_eqFunction_6749,
    outputs_WaterCooledChillerExample7_eqFunction_6750,
    outputs_WaterCooledChillerExample7_eqFunction_6751,
    outputs_WaterCooledChillerExample7_eqFunction_6752,
    outputs_WaterCooledChillerExample7_eqFunction_6753,
    outputs_WaterCooledChillerExample7_eqFunction_6754,
    outputs_WaterCooledChillerExample7_eqFunction_6759,
    outputs_WaterCooledChillerExample7_eqFunction_6762,
    outputs_WaterCooledChillerExample7_eqFunction_6763,
    outputs_WaterCooledChillerExample7_eqFunction_6786,
    outputs_WaterCooledChillerExample7_eqFunction_6787,
    outputs_WaterCooledChillerExample7_eqFunction_6788,
    outputs_WaterCooledChillerExample7_eqFunction_6789,
    outputs_WaterCooledChillerExample7_eqFunction_6793,
    outputs_WaterCooledChillerExample7_eqFunction_6794,
    outputs_WaterCooledChillerExample7_eqFunction_6795,
    outputs_WaterCooledChillerExample7_eqFunction_6796,
    outputs_WaterCooledChillerExample7_eqFunction_6797,
    outputs_WaterCooledChillerExample7_eqFunction_6798,
    outputs_WaterCooledChillerExample7_eqFunction_6803,
    outputs_WaterCooledChillerExample7_eqFunction_6806,
    outputs_WaterCooledChillerExample7_eqFunction_6807,
    outputs_WaterCooledChillerExample7_eqFunction_6830,
    outputs_WaterCooledChillerExample7_eqFunction_6831,
    outputs_WaterCooledChillerExample7_eqFunction_6832,
    outputs_WaterCooledChillerExample7_eqFunction_6833,
    outputs_WaterCooledChillerExample7_eqFunction_6837,
    outputs_WaterCooledChillerExample7_eqFunction_6838,
    outputs_WaterCooledChillerExample7_eqFunction_6839,
    outputs_WaterCooledChillerExample7_eqFunction_6840,
    outputs_WaterCooledChillerExample7_eqFunction_6841,
    outputs_WaterCooledChillerExample7_eqFunction_6842,
    outputs_WaterCooledChillerExample7_eqFunction_6847,
    outputs_WaterCooledChillerExample7_eqFunction_6850,
    outputs_WaterCooledChillerExample7_eqFunction_6851,
    outputs_WaterCooledChillerExample7_eqFunction_6874,
    outputs_WaterCooledChillerExample7_eqFunction_6875,
    outputs_WaterCooledChillerExample7_eqFunction_6876,
    outputs_WaterCooledChillerExample7_eqFunction_6877,
    outputs_WaterCooledChillerExample7_eqFunction_6881,
    outputs_WaterCooledChillerExample7_eqFunction_6882,
    outputs_WaterCooledChillerExample7_eqFunction_6883,
    outputs_WaterCooledChillerExample7_eqFunction_6884,
    outputs_WaterCooledChillerExample7_eqFunction_6885,
    outputs_WaterCooledChillerExample7_eqFunction_6886,
    outputs_WaterCooledChillerExample7_eqFunction_6891,
    outputs_WaterCooledChillerExample7_eqFunction_6894,
    outputs_WaterCooledChillerExample7_eqFunction_6895,
    outputs_WaterCooledChillerExample7_eqFunction_6918,
    outputs_WaterCooledChillerExample7_eqFunction_6919,
    outputs_WaterCooledChillerExample7_eqFunction_6920,
    outputs_WaterCooledChillerExample7_eqFunction_6921,
    outputs_WaterCooledChillerExample7_eqFunction_6925,
    outputs_WaterCooledChillerExample7_eqFunction_6926,
    outputs_WaterCooledChillerExample7_eqFunction_6927,
    outputs_WaterCooledChillerExample7_eqFunction_6928,
    outputs_WaterCooledChillerExample7_eqFunction_6929,
    outputs_WaterCooledChillerExample7_eqFunction_6930,
    outputs_WaterCooledChillerExample7_eqFunction_6935,
    outputs_WaterCooledChillerExample7_eqFunction_6938,
    outputs_WaterCooledChillerExample7_eqFunction_6939,
    outputs_WaterCooledChillerExample7_eqFunction_6968,
    outputs_WaterCooledChillerExample7_eqFunction_6995,
    outputs_WaterCooledChillerExample7_eqFunction_7014,
    outputs_WaterCooledChillerExample7_eqFunction_7020,
    outputs_WaterCooledChillerExample7_eqFunction_7028,
    outputs_WaterCooledChillerExample7_eqFunction_7036,
    outputs_WaterCooledChillerExample7_eqFunction_7044,
    outputs_WaterCooledChillerExample7_eqFunction_7052,
    outputs_WaterCooledChillerExample7_eqFunction_7066,
    outputs_WaterCooledChillerExample7_eqFunction_7067,
    outputs_WaterCooledChillerExample7_eqFunction_7068,
    outputs_WaterCooledChillerExample7_eqFunction_7070,
    outputs_WaterCooledChillerExample7_eqFunction_7071,
    outputs_WaterCooledChillerExample7_eqFunction_7072,
    outputs_WaterCooledChillerExample7_eqFunction_7073,
    outputs_WaterCooledChillerExample7_eqFunction_7076,
    outputs_WaterCooledChillerExample7_eqFunction_7077,
    outputs_WaterCooledChillerExample7_eqFunction_7078,
    outputs_WaterCooledChillerExample7_eqFunction_7079,
    outputs_WaterCooledChillerExample7_eqFunction_7080,
    outputs_WaterCooledChillerExample7_eqFunction_7081,
    outputs_WaterCooledChillerExample7_eqFunction_7084,
    outputs_WaterCooledChillerExample7_eqFunction_7085,
    outputs_WaterCooledChillerExample7_eqFunction_7086,
    outputs_WaterCooledChillerExample7_eqFunction_7090,
    outputs_WaterCooledChillerExample7_eqFunction_7091,
    outputs_WaterCooledChillerExample7_eqFunction_7092,
    outputs_WaterCooledChillerExample7_eqFunction_7093,
    outputs_WaterCooledChillerExample7_eqFunction_7097,
    outputs_WaterCooledChillerExample7_eqFunction_7098,
    outputs_WaterCooledChillerExample7_eqFunction_7099,
    outputs_WaterCooledChillerExample7_eqFunction_7100,
    outputs_WaterCooledChillerExample7_eqFunction_7101,
    outputs_WaterCooledChillerExample7_eqFunction_7102,
    outputs_WaterCooledChillerExample7_eqFunction_7107,
    outputs_WaterCooledChillerExample7_eqFunction_7110,
    outputs_WaterCooledChillerExample7_eqFunction_7111,
    outputs_WaterCooledChillerExample7_eqFunction_7124,
    outputs_WaterCooledChillerExample7_eqFunction_7135,
    outputs_WaterCooledChillerExample7_eqFunction_7136,
    outputs_WaterCooledChillerExample7_eqFunction_7137,
    outputs_WaterCooledChillerExample7_eqFunction_7138,
    outputs_WaterCooledChillerExample7_eqFunction_7142,
    outputs_WaterCooledChillerExample7_eqFunction_7143,
    outputs_WaterCooledChillerExample7_eqFunction_7144,
    outputs_WaterCooledChillerExample7_eqFunction_7145,
    outputs_WaterCooledChillerExample7_eqFunction_7146,
    outputs_WaterCooledChillerExample7_eqFunction_7147,
    outputs_WaterCooledChillerExample7_eqFunction_7152,
    outputs_WaterCooledChillerExample7_eqFunction_7155,
    outputs_WaterCooledChillerExample7_eqFunction_7156,
    outputs_WaterCooledChillerExample7_eqFunction_7169,
    outputs_WaterCooledChillerExample7_eqFunction_7180,
    outputs_WaterCooledChillerExample7_eqFunction_7181,
    outputs_WaterCooledChillerExample7_eqFunction_7182,
    outputs_WaterCooledChillerExample7_eqFunction_7183,
    outputs_WaterCooledChillerExample7_eqFunction_7187,
    outputs_WaterCooledChillerExample7_eqFunction_7188,
    outputs_WaterCooledChillerExample7_eqFunction_7189,
    outputs_WaterCooledChillerExample7_eqFunction_7190,
    outputs_WaterCooledChillerExample7_eqFunction_7191,
    outputs_WaterCooledChillerExample7_eqFunction_7192,
    outputs_WaterCooledChillerExample7_eqFunction_7197,
    outputs_WaterCooledChillerExample7_eqFunction_7200,
    outputs_WaterCooledChillerExample7_eqFunction_7201,
    outputs_WaterCooledChillerExample7_eqFunction_7214,
    outputs_WaterCooledChillerExample7_eqFunction_7225,
    outputs_WaterCooledChillerExample7_eqFunction_7226,
    outputs_WaterCooledChillerExample7_eqFunction_7227,
    outputs_WaterCooledChillerExample7_eqFunction_7228,
    outputs_WaterCooledChillerExample7_eqFunction_7232,
    outputs_WaterCooledChillerExample7_eqFunction_7233,
    outputs_WaterCooledChillerExample7_eqFunction_7234,
    outputs_WaterCooledChillerExample7_eqFunction_7235,
    outputs_WaterCooledChillerExample7_eqFunction_7236,
    outputs_WaterCooledChillerExample7_eqFunction_7237,
    outputs_WaterCooledChillerExample7_eqFunction_7242,
    outputs_WaterCooledChillerExample7_eqFunction_7245,
    outputs_WaterCooledChillerExample7_eqFunction_7246,
    outputs_WaterCooledChillerExample7_eqFunction_7259,
    outputs_WaterCooledChillerExample7_eqFunction_7284,
    outputs_WaterCooledChillerExample7_eqFunction_7285,
    outputs_WaterCooledChillerExample7_eqFunction_7286,
    outputs_WaterCooledChillerExample7_eqFunction_7287,
    outputs_WaterCooledChillerExample7_eqFunction_7290,
    outputs_WaterCooledChillerExample7_eqFunction_7291,
    outputs_WaterCooledChillerExample7_eqFunction_7292,
    outputs_WaterCooledChillerExample7_eqFunction_7293,
    outputs_WaterCooledChillerExample7_eqFunction_7297,
    outputs_WaterCooledChillerExample7_eqFunction_7298,
    outputs_WaterCooledChillerExample7_eqFunction_7299,
    outputs_WaterCooledChillerExample7_eqFunction_7300,
    outputs_WaterCooledChillerExample7_eqFunction_7301,
    outputs_WaterCooledChillerExample7_eqFunction_7302,
    outputs_WaterCooledChillerExample7_eqFunction_7307,
    outputs_WaterCooledChillerExample7_eqFunction_7310,
    outputs_WaterCooledChillerExample7_eqFunction_7311,
    outputs_WaterCooledChillerExample7_eqFunction_7324
  };
  
  for (int id = 0; id < 478; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif