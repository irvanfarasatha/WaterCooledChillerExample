#include "WaterCooledChillerExample.WaterCooledChillerExample7_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 5797
type: SIMPLE_ASSIGN
cooTow2.dp = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(15.873015873015873, 0.04909989084974072, 1.5873015873015874)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5797};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1037]] /* cooTow2.dp PARAM */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, 15.873015873015873, 0.04909989084974072, 1.5873015873015874);
  threadData->lastEquationSolved = 5797;
}

/*
equation index: 5798
type: SIMPLE_ASSIGN
weaData.lat = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLatitudeTMY3(weaData.filNam)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5798};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3661]] /* weaData.lat PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */));
  threadData->lastEquationSolved = 5798;
}

/*
equation index: 5799
type: SIMPLE_ASSIGN
weaData.zenAng.lat = weaData.lat
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5799};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3677]] /* weaData.zenAng.lat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3661]] /* weaData.lat PARAM */);
  threadData->lastEquationSolved = 5799;
}

/*
equation index: 5800
type: SIMPLE_ASSIGN
$cse35 = cos(weaData.zenAng.lat)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5800};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* $cse35 PARAM */) = cos((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3677]] /* weaData.zenAng.lat PARAM */));
  threadData->lastEquationSolved = 5800;
}

/*
equation index: 5801
type: SIMPLE_ASSIGN
$cse38 = sin(weaData.zenAng.lat)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5801};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* $cse38 PARAM */) = sin((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3677]] /* weaData.zenAng.lat PARAM */));
  threadData->lastEquationSolved = 5801;
}

/*
equation index: 5802
type: SIMPLE_ASSIGN
weaData.datRea.fileName = weaData.filNam
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5802};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */);
  threadData->lastEquationSolved = 5802;
}

/*
equation index: 5804
type: SIMPLE_ASSIGN
weaData.datRea.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor("tab1", if weaData.datRea.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(weaData.datRea.fileName) then weaData.datRea.fileName else "NoName", {}, {2, 3, 4, 5, 6, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 8}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, weaData.datRea.verboseRead)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5804};
  (data->simulationInfo->extObjs[0]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, _OMC_LIT95, (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */), _OMC_LIT96)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */):_OMC_LIT96), _OMC_LIT97, _OMC_LIT98, 2, 2, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1108]] /* weaData.datRea.verboseRead PARAM */));
  threadData->lastEquationSolved = 5804;
}

/*
equation index: 5805
type: SIMPLE_ASSIGN
weaData.datRea1.fileName = weaData.filNam
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5805};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */);
  threadData->lastEquationSolved = 5805;
}

/*
equation index: 5807
type: SIMPLE_ASSIGN
weaData.datRea1.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor("tab1", if weaData.datRea1.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(weaData.datRea1.fileName) then weaData.datRea1.fileName else "NoName", {}, {9, 10, 11}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, weaData.datRea1.verboseRead)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5807};
  (data->simulationInfo->extObjs[1]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, _OMC_LIT95, (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */), _OMC_LIT96)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */):_OMC_LIT96), _OMC_LIT97, _OMC_LIT99, 2, 2, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1111]] /* weaData.datRea1.verboseRead PARAM */));
  threadData->lastEquationSolved = 5807;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1974(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1973(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1972(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1971(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1970(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1969(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1968(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1967(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1966(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1965(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1964(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1963(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1962(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1961(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_419(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_418(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1960(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1959(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_417(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1958(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1957(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1956(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1955(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1954(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1953(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1952(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1951(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1950(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1949(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1948(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1947(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1946(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1945(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1944(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1943(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1942(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1941(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1940(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1939(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1937(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1936(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1935(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1934(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1933(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1932(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1931(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1930(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1929(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1928(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1926(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1925(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1922(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1921(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1920(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1919(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1918(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1917(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1916(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1915(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1888(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1887(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1886(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1885(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1884(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1883(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1882(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1881(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1880(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1879(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1878(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1877(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1876(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1875(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1874(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1873(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1872(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1871(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1870(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1869(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1868(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1867(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1866(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1865(DATA *data, threadData_t *threadData);


/*
equation index: 5926
type: SIMPLE_ASSIGN
val8Rel.dp_nominal = 104510.0 + val8Rel.dpValve_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5926};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3470]] /* val8Rel.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3469]] /* val8Rel.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 5926;
}

/*
equation index: 5927
type: SIMPLE_ASSIGN
val8Rel.dp_nominal_pos = abs(val8Rel.dp_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5927};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3471]] /* val8Rel.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3470]] /* val8Rel.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5927;
}

/*
equation index: 5931
type: SIMPLE_ASSIGN
val8Rel.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val8Rel.Medium.dynamicViscosity(val8Rel.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5931};
  WaterCooledChillerExample_WaterCooledChillerExample7_val8Rel_Medium_ThermodynamicState tmp0;
  WaterCooledChillerExample_WaterCooledChillerExample7_val8Rel_Medium_ThermodynamicState_wrap_vars(threadData,tmp0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3482]] /* val8Rel.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3481]] /* val8Rel.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3472]] /* val8Rel.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val8Rel_Medium_dynamicViscosity(threadData, tmp0);
  threadData->lastEquationSolved = 5931;
}

/*
equation index: 5932
type: SIMPLE_ASSIGN
val8Rel.m_flow_turbulent = 4.761904761904762 * val8Rel.deltaM
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5932};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3478]] /* val8Rel.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3467]] /* val8Rel.deltaM PARAM */));
  threadData->lastEquationSolved = 5932;
}

/*
equation index: 5947
type: SIMPLE_ASSIGN
val8_2Rel.dp_nominal = 104510.0 + val8_2Rel.dpValve_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5947};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3539]] /* val8_2Rel.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3538]] /* val8_2Rel.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 5947;
}

/*
equation index: 5948
type: SIMPLE_ASSIGN
val8_2Rel.dp_nominal_pos = abs(val8_2Rel.dp_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5948};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3540]] /* val8_2Rel.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3539]] /* val8_2Rel.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5948;
}

/*
equation index: 5952
type: SIMPLE_ASSIGN
val8_2Rel.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val8_2Rel.Medium.dynamicViscosity(val8_2Rel.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5952};
  WaterCooledChillerExample_WaterCooledChillerExample7_val8__2Rel_Medium_ThermodynamicState tmp1;
  WaterCooledChillerExample_WaterCooledChillerExample7_val8__2Rel_Medium_ThermodynamicState_wrap_vars(threadData,tmp1, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3551]] /* val8_2Rel.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3550]] /* val8_2Rel.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3541]] /* val8_2Rel.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val8__2Rel_Medium_dynamicViscosity(threadData, tmp1);
  threadData->lastEquationSolved = 5952;
}

/*
equation index: 5953
type: SIMPLE_ASSIGN
val8_2Rel.m_flow_turbulent = 4.761904761904762 * val8_2Rel.deltaM
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5953};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3547]] /* val8_2Rel.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3536]] /* val8_2Rel.deltaM PARAM */));
  threadData->lastEquationSolved = 5953;
}

/*
equation index: 5968
type: SIMPLE_ASSIGN
val8Sto.dp_nominal = 104510.0 + val8Sto.dpValve_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5968};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3493]] /* val8Sto.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3492]] /* val8Sto.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 5968;
}

/*
equation index: 5969
type: SIMPLE_ASSIGN
val8Sto.dp_nominal_pos = abs(val8Sto.dp_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5969};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3494]] /* val8Sto.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3493]] /* val8Sto.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5969;
}

/*
equation index: 5973
type: SIMPLE_ASSIGN
val8Sto.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val8Sto.Medium.dynamicViscosity(val8Sto.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5973};
  WaterCooledChillerExample_WaterCooledChillerExample7_val8Sto_Medium_ThermodynamicState tmp2;
  WaterCooledChillerExample_WaterCooledChillerExample7_val8Sto_Medium_ThermodynamicState_wrap_vars(threadData,tmp2, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3505]] /* val8Sto.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3504]] /* val8Sto.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3495]] /* val8Sto.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val8Sto_Medium_dynamicViscosity(threadData, tmp2);
  threadData->lastEquationSolved = 5973;
}

/*
equation index: 5974
type: SIMPLE_ASSIGN
val8Sto.m_flow_turbulent = 4.761904761904762 * val8Sto.deltaM
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5974};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3501]] /* val8Sto.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3490]] /* val8Sto.deltaM PARAM */));
  threadData->lastEquationSolved = 5974;
}

/*
equation index: 5989
type: SIMPLE_ASSIGN
val8_2Sto.dp_nominal = 104510.0 + val8_2Sto.dpValve_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5989};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3562]] /* val8_2Sto.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3561]] /* val8_2Sto.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 5989;
}

/*
equation index: 5990
type: SIMPLE_ASSIGN
val8_2Sto.dp_nominal_pos = abs(val8_2Sto.dp_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5990};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3563]] /* val8_2Sto.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3562]] /* val8_2Sto.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5990;
}

/*
equation index: 5994
type: SIMPLE_ASSIGN
val8_2Sto.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val8_2Sto.Medium.dynamicViscosity(val8_2Sto.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5994};
  WaterCooledChillerExample_WaterCooledChillerExample7_val8__2Sto_Medium_ThermodynamicState tmp3;
  WaterCooledChillerExample_WaterCooledChillerExample7_val8__2Sto_Medium_ThermodynamicState_wrap_vars(threadData,tmp3, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3574]] /* val8_2Sto.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3573]] /* val8_2Sto.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3564]] /* val8_2Sto.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val8__2Sto_Medium_dynamicViscosity(threadData, tmp3);
  threadData->lastEquationSolved = 5994;
}

/*
equation index: 5995
type: SIMPLE_ASSIGN
val8_2Sto.m_flow_turbulent = 4.761904761904762 * val8_2Sto.deltaM
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5995};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3570]] /* val8_2Sto.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3559]] /* val8_2Sto.deltaM PARAM */));
  threadData->lastEquationSolved = 5995;
}

/*
equation index: 6010
type: SIMPLE_ASSIGN
val8_2.dp_nominal = 104510.0 + val8_2.dpValve_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6010};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3516]] /* val8_2.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3515]] /* val8_2.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 6010;
}

/*
equation index: 6011
type: SIMPLE_ASSIGN
val8_2.dp_nominal_pos = abs(val8_2.dp_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6011};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3517]] /* val8_2.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3516]] /* val8_2.dp_nominal PARAM */));
  threadData->lastEquationSolved = 6011;
}

/*
equation index: 6015
type: SIMPLE_ASSIGN
val8_2.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val8_2.Medium.dynamicViscosity(val8_2.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6015};
  WaterCooledChillerExample_WaterCooledChillerExample7_val8__2_Medium_ThermodynamicState tmp4;
  WaterCooledChillerExample_WaterCooledChillerExample7_val8__2_Medium_ThermodynamicState_wrap_vars(threadData,tmp4, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3528]] /* val8_2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3527]] /* val8_2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3518]] /* val8_2.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val8__2_Medium_dynamicViscosity(threadData, tmp4);
  threadData->lastEquationSolved = 6015;
}

/*
equation index: 6016
type: SIMPLE_ASSIGN
val8_2.m_flow_turbulent = 4.761904761904762 * val8_2.deltaM
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6016};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3524]] /* val8_2.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3513]] /* val8_2.deltaM PARAM */));
  threadData->lastEquationSolved = 6016;
}

/*
equation index: 6070
type: SIMPLE_ASSIGN
pumTanRet.eff.per.speeds_rpm[1] = pumTanRet.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6070};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2630]] /* pumTanRet.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2628]] /* pumTanRet.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6070;
}

/*
equation index: 6071
type: SIMPLE_ASSIGN
pumTanRet.eff.per.constantSpeed_rpm = pumTanRet.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6071};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2616]] /* pumTanRet.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2628]] /* pumTanRet.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6071;
}

/*
equation index: 6075
type: SIMPLE_ASSIGN
pumTanRet.eff.per.motorCooledByFluid = pumTanRet.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6075};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[813]] /* pumTanRet.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[822]] /* pumTanRet.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6075;
}

/*
equation index: 6076
type: SIMPLE_ASSIGN
pumTanRet.eff.per.power.P[1] = pumTanRet.per.power.P[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6076};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2621]] /* pumTanRet.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2656]] /* pumTanRet.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 6076;
}

/*
equation index: 6077
type: SIMPLE_ASSIGN
pumTanRet.eff.per.power.V_flow[1] = pumTanRet.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6077};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2622]] /* pumTanRet.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2657]] /* pumTanRet.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6077;
}

/*
equation index: 6078
type: SIMPLE_ASSIGN
pumTanRet.eff.per.motorEfficiency.eta[1] = pumTanRet.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6078};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2620]] /* pumTanRet.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2655]] /* pumTanRet.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6078;
}

/*
equation index: 6079
type: SIMPLE_ASSIGN
pumTanRet.eff.per.motorEfficiency.V_flow[1] = pumTanRet.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6079};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2619]] /* pumTanRet.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2654]] /* pumTanRet.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6079;
}

/*
equation index: 6080
type: SIMPLE_ASSIGN
pumTanRet.eff.per.hydraulicEfficiency.eta[1] = pumTanRet.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6080};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2618]] /* pumTanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2653]] /* pumTanRet.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6080;
}

/*
equation index: 6081
type: SIMPLE_ASSIGN
pumTanRet.eff.per.hydraulicEfficiency.V_flow[1] = pumTanRet.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6081};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2617]] /* pumTanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2652]] /* pumTanRet.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6081;
}

/*
equation index: 6095
type: SIMPLE_ASSIGN
pumTanRet.heaDis.motorCooledByFluid = pumTanRet.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6095};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[819]] /* pumTanRet.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[822]] /* pumTanRet.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6095;
}

/*
equation index: 6101
type: SIMPLE_ASSIGN
pumTanRet.preSou.m_flow_small = pumTanRet.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6101};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2669]] /* pumTanRet.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2648]] /* pumTanRet.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6101;
}

/*
equation index: 6103
type: SIMPLE_ASSIGN
pumTanRet.preSou.dp_start = pumTanRet.dp_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6103};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2668]] /* pumTanRet.preSou.dp_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2589]] /* pumTanRet.dp_start PARAM */);
  threadData->lastEquationSolved = 6103;
}

/*
equation index: 6105
type: SIMPLE_ASSIGN
pumTanRet.vol.tau = pumTanRet.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6105};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2705]] /* pumTanRet.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2678]] /* pumTanRet.tau PARAM */);
  threadData->lastEquationSolved = 6105;
}

/*
equation index: 6106
type: SIMPLE_ASSIGN
pumTanRet.vol.V_nominal = 4.761904761904762 * pumTanRet.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6106};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2681]] /* pumTanRet.vol.V_nominal PARAM */) = (4.761904761904762) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2705]] /* pumTanRet.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 6106;
}

/*
equation index: 6109
type: SIMPLE_ASSIGN
pumTanRet.vol.T_start = pumTanRet.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6109};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2679]] /* pumTanRet.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2580]] /* pumTanRet.T_start PARAM */);
  threadData->lastEquationSolved = 6109;
}

/*
equation index: 6110
type: SIMPLE_ASSIGN
pumTanRet.vol.state_start.T = pumTanRet.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6110};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2703]] /* pumTanRet.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2679]] /* pumTanRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6110;
}

/*
equation index: 6111
type: SIMPLE_ASSIGN
pumTanRet.vol.p_start = pumTanRet.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6111};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2698]] /* pumTanRet.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2649]] /* pumTanRet.p_start PARAM */);
  threadData->lastEquationSolved = 6111;
}

/*
equation index: 6112
type: SIMPLE_ASSIGN
pumTanRet.vol.state_start.p = pumTanRet.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6112};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2704]] /* pumTanRet.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2698]] /* pumTanRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6112;
}

/*
equation index: 6116
type: SIMPLE_ASSIGN
pumTanRet.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.vol.Medium.density(pumTanRet.vol.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6116};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_vol_Medium_ThermodynamicState tmp5;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp5, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2704]] /* pumTanRet.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2703]] /* pumTanRet.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2700]] /* pumTanRet.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_vol_Medium_density(threadData, tmp5);
  threadData->lastEquationSolved = 6116;
}

/*
equation index: 6117
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.p_start = pumTanRet.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6117};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2690]] /* pumTanRet.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2698]] /* pumTanRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6117;
}

/*
equation index: 6118
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.T_start = pumTanRet.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6118};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2684]] /* pumTanRet.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2679]] /* pumTanRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6118;
}

/*
equation index: 6119
type: SIMPLE_ASSIGN
pumTanRet.vol.X_start[1] = pumTanRet.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6119};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2682]] /* pumTanRet.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2582]] /* pumTanRet.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6119;
}

/*
equation index: 6120
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.X_start[1] = pumTanRet.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6120};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2685]] /* pumTanRet.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2682]] /* pumTanRet.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6120;
}

/*
equation index: 6121
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.vol.dynBal.Medium.specificEnthalpy_pTX(pumTanRet.vol.dynBal.p_start, pumTanRet.vol.dynBal.T_start, pumTanRet.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6121};
  real_array tmp6;
  real_array_create(&tmp6, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2685]] /* pumTanRet.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2688]] /* pumTanRet.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2690]] /* pumTanRet.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2684]] /* pumTanRet.vol.dynBal.T_start PARAM */), tmp6);
  threadData->lastEquationSolved = 6121;
}

/*
equation index: 6126
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.vol.dynBal.Medium.setState_pTX(pumTanRet.vol.dynBal.p_start, pumTanRet.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6126};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2692]] /* pumTanRet.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2690]] /* pumTanRet.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2684]] /* pumTanRet.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6126;
}

/*
equation index: 6129
type: SIMPLE_ASSIGN
pumTanRet.vol.V = pumTanRet.vol.V_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6129};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* pumTanRet.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2681]] /* pumTanRet.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 6129;
}

/*
equation index: 6130
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.fluidVolume = pumTanRet.vol.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6130};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2687]] /* pumTanRet.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* pumTanRet.vol.V PARAM */);
  threadData->lastEquationSolved = 6130;
}

/*
equation index: 6143
type: SIMPLE_ASSIGN
pumTanRet.vol.m_flow_small = pumTanRet.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6143};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2697]] /* pumTanRet.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2648]] /* pumTanRet.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6143;
}

/*
equation index: 6152
type: SIMPLE_ASSIGN
pumTanRet.sta_start.p = pumTanRet.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6152};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2676]] /* pumTanRet.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2649]] /* pumTanRet.p_start PARAM */);
  threadData->lastEquationSolved = 6152;
}

/*
equation index: 6153
type: SIMPLE_ASSIGN
pumTanRet.sta_start.T = pumTanRet.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6153};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* pumTanRet.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2580]] /* pumTanRet.T_start PARAM */);
  threadData->lastEquationSolved = 6153;
}

/*
equation index: 6154
type: SIMPLE_ASSIGN
pumTanRet.h_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.Medium.specificEnthalpy(pumTanRet.sta_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6154};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_Medium_ThermodynamicState tmp7;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_Medium_ThermodynamicState_wrap_vars(threadData,tmp7, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2676]] /* pumTanRet.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* pumTanRet.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2643]] /* pumTanRet.h_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_Medium_specificEnthalpy(threadData, tmp7);
  threadData->lastEquationSolved = 6154;
}

/*
equation index: 6166
type: SIMPLE_ASSIGN
pumTanRet.stageInputs[1] = pumTanRet.heads[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6166};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2677]] /* pumTanRet.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2645]] /* pumTanRet.heads[1] PARAM */);
  threadData->lastEquationSolved = 6166;
}

/*
equation index: 6170
type: SIMPLE_ASSIGN
pumTanRet.per.speeds_rpm[1] = pumTanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6170};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2665]] /* pumTanRet.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* pumTanRet.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6170;
}

/*
equation index: 6171
type: SIMPLE_ASSIGN
pumTanRet.per.constantSpeed_rpm = pumTanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6171};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2651]] /* pumTanRet.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* pumTanRet.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6171;
}

/*
equation index: 6172
type: SIMPLE_ASSIGN
pumTanRet.per.speeds[1] = pumTanRet.per.speeds_rpm[1] / pumTanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6172};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2664]] /* pumTanRet.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2665]] /* pumTanRet.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* pumTanRet.per.speed_rpm_nominal PARAM */),"pumTanRet.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6172;
}

/*
equation index: 6173
type: SIMPLE_ASSIGN
pumTanRet.per.constantSpeed = pumTanRet.per.constantSpeed_rpm / pumTanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6173};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2650]] /* pumTanRet.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2651]] /* pumTanRet.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* pumTanRet.per.speed_rpm_nominal PARAM */),"pumTanRet.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6173;
}

/*
equation index: 6233
type: SIMPLE_ASSIGN
pumTanSup.eff.per.speeds_rpm[1] = pumTanSup.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6233};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2759]] /* pumTanSup.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2757]] /* pumTanSup.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6233;
}

/*
equation index: 6234
type: SIMPLE_ASSIGN
pumTanSup.eff.per.constantSpeed_rpm = pumTanSup.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6234};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2745]] /* pumTanSup.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2757]] /* pumTanSup.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6234;
}

/*
equation index: 6238
type: SIMPLE_ASSIGN
pumTanSup.eff.per.motorCooledByFluid = pumTanSup.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6238};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[853]] /* pumTanSup.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[862]] /* pumTanSup.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6238;
}

/*
equation index: 6239
type: SIMPLE_ASSIGN
pumTanSup.eff.per.power.P[1] = pumTanSup.per.power.P[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6239};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2750]] /* pumTanSup.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2785]] /* pumTanSup.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 6239;
}

/*
equation index: 6240
type: SIMPLE_ASSIGN
pumTanSup.eff.per.power.V_flow[1] = pumTanSup.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6240};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2751]] /* pumTanSup.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2786]] /* pumTanSup.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6240;
}

/*
equation index: 6241
type: SIMPLE_ASSIGN
pumTanSup.eff.per.motorEfficiency.eta[1] = pumTanSup.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6241};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2749]] /* pumTanSup.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2784]] /* pumTanSup.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6241;
}

/*
equation index: 6242
type: SIMPLE_ASSIGN
pumTanSup.eff.per.motorEfficiency.V_flow[1] = pumTanSup.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6242};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2748]] /* pumTanSup.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* pumTanSup.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6242;
}

/*
equation index: 6243
type: SIMPLE_ASSIGN
pumTanSup.eff.per.hydraulicEfficiency.eta[1] = pumTanSup.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6243};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* pumTanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2782]] /* pumTanSup.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6243;
}

/*
equation index: 6244
type: SIMPLE_ASSIGN
pumTanSup.eff.per.hydraulicEfficiency.V_flow[1] = pumTanSup.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6244};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2746]] /* pumTanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2781]] /* pumTanSup.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6244;
}

/*
equation index: 6258
type: SIMPLE_ASSIGN
pumTanSup.heaDis.motorCooledByFluid = pumTanSup.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6258};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[859]] /* pumTanSup.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[862]] /* pumTanSup.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6258;
}

/*
equation index: 6264
type: SIMPLE_ASSIGN
pumTanSup.preSou.m_flow_small = pumTanSup.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6264};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2798]] /* pumTanSup.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2777]] /* pumTanSup.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6264;
}

/*
equation index: 6266
type: SIMPLE_ASSIGN
pumTanSup.preSou.dp_start = pumTanSup.dp_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6266};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2797]] /* pumTanSup.preSou.dp_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2718]] /* pumTanSup.dp_start PARAM */);
  threadData->lastEquationSolved = 6266;
}

/*
equation index: 6268
type: SIMPLE_ASSIGN
pumTanSup.vol.tau = pumTanSup.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6268};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2834]] /* pumTanSup.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2807]] /* pumTanSup.tau PARAM */);
  threadData->lastEquationSolved = 6268;
}

/*
equation index: 6269
type: SIMPLE_ASSIGN
pumTanSup.vol.V_nominal = 4.761904761904762 * pumTanSup.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6269};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2810]] /* pumTanSup.vol.V_nominal PARAM */) = (4.761904761904762) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2834]] /* pumTanSup.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 6269;
}

/*
equation index: 6272
type: SIMPLE_ASSIGN
pumTanSup.vol.T_start = pumTanSup.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6272};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2808]] /* pumTanSup.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2709]] /* pumTanSup.T_start PARAM */);
  threadData->lastEquationSolved = 6272;
}

/*
equation index: 6273
type: SIMPLE_ASSIGN
pumTanSup.vol.state_start.T = pumTanSup.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6273};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2832]] /* pumTanSup.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2808]] /* pumTanSup.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6273;
}

/*
equation index: 6274
type: SIMPLE_ASSIGN
pumTanSup.vol.p_start = pumTanSup.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6274};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2827]] /* pumTanSup.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2778]] /* pumTanSup.p_start PARAM */);
  threadData->lastEquationSolved = 6274;
}

/*
equation index: 6275
type: SIMPLE_ASSIGN
pumTanSup.vol.state_start.p = pumTanSup.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6275};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2833]] /* pumTanSup.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2827]] /* pumTanSup.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6275;
}

/*
equation index: 6279
type: SIMPLE_ASSIGN
pumTanSup.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.vol.Medium.density(pumTanSup.vol.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6279};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_vol_Medium_ThermodynamicState tmp8;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp8, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2833]] /* pumTanSup.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2832]] /* pumTanSup.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2829]] /* pumTanSup.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_vol_Medium_density(threadData, tmp8);
  threadData->lastEquationSolved = 6279;
}

/*
equation index: 6280
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.p_start = pumTanSup.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6280};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* pumTanSup.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2827]] /* pumTanSup.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6280;
}

/*
equation index: 6281
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.T_start = pumTanSup.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6281};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* pumTanSup.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2808]] /* pumTanSup.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6281;
}

/*
equation index: 6282
type: SIMPLE_ASSIGN
pumTanSup.vol.X_start[1] = pumTanSup.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6282};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2811]] /* pumTanSup.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* pumTanSup.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6282;
}

/*
equation index: 6283
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.X_start[1] = pumTanSup.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6283};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2814]] /* pumTanSup.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2811]] /* pumTanSup.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6283;
}

/*
equation index: 6284
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.vol.dynBal.Medium.specificEnthalpy_pTX(pumTanSup.vol.dynBal.p_start, pumTanSup.vol.dynBal.T_start, pumTanSup.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6284};
  real_array tmp9;
  real_array_create(&tmp9, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2814]] /* pumTanSup.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2817]] /* pumTanSup.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* pumTanSup.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* pumTanSup.vol.dynBal.T_start PARAM */), tmp9);
  threadData->lastEquationSolved = 6284;
}

/*
equation index: 6289
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.vol.dynBal.Medium.setState_pTX(pumTanSup.vol.dynBal.p_start, pumTanSup.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6289};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2821]] /* pumTanSup.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* pumTanSup.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* pumTanSup.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6289;
}

/*
equation index: 6292
type: SIMPLE_ASSIGN
pumTanSup.vol.V = pumTanSup.vol.V_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6292};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2809]] /* pumTanSup.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2810]] /* pumTanSup.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 6292;
}

/*
equation index: 6293
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.fluidVolume = pumTanSup.vol.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6293};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2816]] /* pumTanSup.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2809]] /* pumTanSup.vol.V PARAM */);
  threadData->lastEquationSolved = 6293;
}

/*
equation index: 6306
type: SIMPLE_ASSIGN
pumTanSup.vol.m_flow_small = pumTanSup.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6306};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2826]] /* pumTanSup.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2777]] /* pumTanSup.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6306;
}

/*
equation index: 6315
type: SIMPLE_ASSIGN
pumTanSup.sta_start.p = pumTanSup.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6315};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2805]] /* pumTanSup.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2778]] /* pumTanSup.p_start PARAM */);
  threadData->lastEquationSolved = 6315;
}

/*
equation index: 6316
type: SIMPLE_ASSIGN
pumTanSup.sta_start.T = pumTanSup.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6316};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2804]] /* pumTanSup.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2709]] /* pumTanSup.T_start PARAM */);
  threadData->lastEquationSolved = 6316;
}

/*
equation index: 6317
type: SIMPLE_ASSIGN
pumTanSup.h_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.Medium.specificEnthalpy(pumTanSup.sta_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6317};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_Medium_ThermodynamicState tmp10;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_Medium_ThermodynamicState_wrap_vars(threadData,tmp10, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2805]] /* pumTanSup.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2804]] /* pumTanSup.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2772]] /* pumTanSup.h_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_Medium_specificEnthalpy(threadData, tmp10);
  threadData->lastEquationSolved = 6317;
}

/*
equation index: 6329
type: SIMPLE_ASSIGN
pumTanSup.stageInputs[1] = pumTanSup.heads[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6329};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2806]] /* pumTanSup.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2774]] /* pumTanSup.heads[1] PARAM */);
  threadData->lastEquationSolved = 6329;
}

/*
equation index: 6333
type: SIMPLE_ASSIGN
pumTanSup.per.speeds_rpm[1] = pumTanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6333};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2794]] /* pumTanSup.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2792]] /* pumTanSup.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6333;
}

/*
equation index: 6334
type: SIMPLE_ASSIGN
pumTanSup.per.constantSpeed_rpm = pumTanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6334};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2780]] /* pumTanSup.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2792]] /* pumTanSup.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6334;
}

/*
equation index: 6335
type: SIMPLE_ASSIGN
pumTanSup.per.speeds[1] = pumTanSup.per.speeds_rpm[1] / pumTanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6335};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2793]] /* pumTanSup.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2794]] /* pumTanSup.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2792]] /* pumTanSup.per.speed_rpm_nominal PARAM */),"pumTanSup.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6335;
}

/*
equation index: 6336
type: SIMPLE_ASSIGN
pumTanSup.per.constantSpeed = pumTanSup.per.constantSpeed_rpm / pumTanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6336};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2779]] /* pumTanSup.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2780]] /* pumTanSup.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2792]] /* pumTanSup.per.speed_rpm_nominal PARAM */),"pumTanSup.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6336;
}

/*
equation index: 6359
type: SIMPLE_ASSIGN
junCHWSup2.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWSup2.m_flow_nominal[1]) + abs(junCHWSup2.m_flow_nominal[2]) + abs(junCHWSup2.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6359};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1779]] /* junCHWSup2.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1781]] /* junCHWSup2.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1782]] /* junCHWSup2.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1783]] /* junCHWSup2.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 6359;
}

/*
equation index: 6360
type: SIMPLE_ASSIGN
junCHWSup2.vol.m_flow_nominal = junCHWSup2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6360};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1846]] /* junCHWSup2.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1779]] /* junCHWSup2.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6360;
}

/*
equation index: 6361
type: SIMPLE_ASSIGN
junCHWSup2.vol.tau = junCHWSup2.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6361};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1855]] /* junCHWSup2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1828]] /* junCHWSup2.tau PARAM */);
  threadData->lastEquationSolved = 6361;
}

/*
equation index: 6362
type: SIMPLE_ASSIGN
junCHWSup2.vol.V_nominal = 0.0010044335697769957 * junCHWSup2.vol.m_flow_nominal * junCHWSup2.vol.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6362};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1831]] /* junCHWSup2.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1846]] /* junCHWSup2.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1855]] /* junCHWSup2.vol.tau PARAM */)));
  threadData->lastEquationSolved = 6362;
}

/*
equation index: 6365
type: SIMPLE_ASSIGN
junCHWSup2.vol.T_start = junCHWSup2.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6365};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1829]] /* junCHWSup2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1773]] /* junCHWSup2.T_start PARAM */);
  threadData->lastEquationSolved = 6365;
}

/*
equation index: 6366
type: SIMPLE_ASSIGN
junCHWSup2.vol.state_start.T = junCHWSup2.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6366};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1853]] /* junCHWSup2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1829]] /* junCHWSup2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6366;
}

/*
equation index: 6367
type: SIMPLE_ASSIGN
junCHWSup2.vol.p_start = junCHWSup2.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6367};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1848]] /* junCHWSup2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1785]] /* junCHWSup2.p_start PARAM */);
  threadData->lastEquationSolved = 6367;
}

/*
equation index: 6368
type: SIMPLE_ASSIGN
junCHWSup2.vol.state_start.p = junCHWSup2.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6368};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1854]] /* junCHWSup2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1848]] /* junCHWSup2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6368;
}

/*
equation index: 6372
type: SIMPLE_ASSIGN
junCHWSup2.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup2.vol.Medium.density(junCHWSup2.vol.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6372};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_vol_Medium_ThermodynamicState tmp11;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp11, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1854]] /* junCHWSup2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1853]] /* junCHWSup2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1850]] /* junCHWSup2.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_vol_Medium_density(threadData, tmp11);
  threadData->lastEquationSolved = 6372;
}

/*
equation index: 6373
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.p_start = junCHWSup2.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6373};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1840]] /* junCHWSup2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1848]] /* junCHWSup2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6373;
}

/*
equation index: 6374
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.T_start = junCHWSup2.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6374};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1834]] /* junCHWSup2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1829]] /* junCHWSup2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6374;
}

/*
equation index: 6375
type: SIMPLE_ASSIGN
junCHWSup2.vol.X_start[1] = junCHWSup2.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6375};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1832]] /* junCHWSup2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1774]] /* junCHWSup2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6375;
}

/*
equation index: 6376
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.X_start[1] = junCHWSup2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6376};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1835]] /* junCHWSup2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1832]] /* junCHWSup2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6376;
}

/*
equation index: 6377
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup2.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWSup2.vol.dynBal.p_start, junCHWSup2.vol.dynBal.T_start, junCHWSup2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6377};
  real_array tmp12;
  real_array_create(&tmp12, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1835]] /* junCHWSup2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1838]] /* junCHWSup2.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1840]] /* junCHWSup2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1834]] /* junCHWSup2.vol.dynBal.T_start PARAM */), tmp12);
  threadData->lastEquationSolved = 6377;
}

/*
equation index: 6382
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup2.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup2.vol.dynBal.Medium.setState_pTX(junCHWSup2.vol.dynBal.p_start, junCHWSup2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6382};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1842]] /* junCHWSup2.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1840]] /* junCHWSup2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1834]] /* junCHWSup2.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6382;
}

/*
equation index: 6385
type: SIMPLE_ASSIGN
junCHWSup2.vol.V = junCHWSup2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6385};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1830]] /* junCHWSup2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1831]] /* junCHWSup2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 6385;
}

/*
equation index: 6386
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.fluidVolume = junCHWSup2.vol.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6386};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1837]] /* junCHWSup2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1830]] /* junCHWSup2.vol.V PARAM */);
  threadData->lastEquationSolved = 6386;
}

/*
equation index: 6399
type: SIMPLE_ASSIGN
junCHWSup2.vol.m_flow_small = 1e-4 * abs(junCHWSup2.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6399};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1847]] /* junCHWSup2.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1846]] /* junCHWSup2.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6399;
}

/*
equation index: 6412
type: SIMPLE_ASSIGN
junCHWSup2.res3.m_flow_nominal = junCHWSup2.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6412};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1822]] /* junCHWSup2.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1783]] /* junCHWSup2.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 6412;
}

/*
equation index: 6413
type: SIMPLE_ASSIGN
junCHWSup2.res3.m_flow_nominal_pos = abs(junCHWSup2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6413};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1823]] /* junCHWSup2.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1822]] /* junCHWSup2.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6413;
}

/*
equation index: 6416
type: SIMPLE_ASSIGN
junCHWSup2.res3.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup2.res3.Medium.dynamicViscosity(junCHWSup2.res3.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6416};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res3_Medium_ThermodynamicState tmp13;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp13, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1827]] /* junCHWSup2.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1826]] /* junCHWSup2.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1820]] /* junCHWSup2.res3.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res3_Medium_dynamicViscosity(threadData, tmp13);
  threadData->lastEquationSolved = 6416;
}

/*
equation index: 6425
type: SIMPLE_ASSIGN
junCHWSup2.res3.m_flow_small = 1e-4 * abs(junCHWSup2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6425};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1824]] /* junCHWSup2.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1822]] /* junCHWSup2.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6425;
}

/*
equation index: 6432
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow_nominal = junCHWSup2.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6432};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1808]] /* junCHWSup2.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1782]] /* junCHWSup2.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 6432;
}

/*
equation index: 6433
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow_nominal_pos = abs(junCHWSup2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6433};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1809]] /* junCHWSup2.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1808]] /* junCHWSup2.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6433;
}

/*
equation index: 6436
type: SIMPLE_ASSIGN
junCHWSup2.res2.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup2.res2.Medium.dynamicViscosity(junCHWSup2.res2.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6436};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res2_Medium_ThermodynamicState tmp14;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp14, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1813]] /* junCHWSup2.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1812]] /* junCHWSup2.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1806]] /* junCHWSup2.res2.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res2_Medium_dynamicViscosity(threadData, tmp14);
  threadData->lastEquationSolved = 6436;
}

/*
equation index: 6445
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow_small = 1e-4 * abs(junCHWSup2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6445};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1810]] /* junCHWSup2.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1808]] /* junCHWSup2.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6445;
}

/*
equation index: 6452
type: SIMPLE_ASSIGN
junCHWSup2.res1.m_flow_nominal = junCHWSup2.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6452};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* junCHWSup2.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1781]] /* junCHWSup2.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 6452;
}

/*
equation index: 6453
type: SIMPLE_ASSIGN
junCHWSup2.res1.m_flow_nominal_pos = abs(junCHWSup2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6453};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1795]] /* junCHWSup2.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* junCHWSup2.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6453;
}

/*
equation index: 6456
type: SIMPLE_ASSIGN
junCHWSup2.res1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup2.res1.Medium.dynamicViscosity(junCHWSup2.res1.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6456};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res1_Medium_ThermodynamicState tmp15;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp15, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1799]] /* junCHWSup2.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1798]] /* junCHWSup2.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1792]] /* junCHWSup2.res1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup2_res1_Medium_dynamicViscosity(threadData, tmp15);
  threadData->lastEquationSolved = 6456;
}

/*
equation index: 6465
type: SIMPLE_ASSIGN
junCHWSup2.res1.m_flow_small = 1e-4 * abs(junCHWSup2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6465};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1796]] /* junCHWSup2.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* junCHWSup2.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6465;
}

/*
equation index: 6467
type: SIMPLE_ASSIGN
junCHWSup2.m_flow_small = 1e-4 * junCHWSup2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6467};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1784]] /* junCHWSup2.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1779]] /* junCHWSup2.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6467;
}

/*
equation index: 6485
type: SIMPLE_ASSIGN
junCHWRet2.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWRet2.m_flow_nominal[1]) + abs(junCHWRet2.m_flow_nominal[2]) + abs(junCHWRet2.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6485};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1613]] /* junCHWRet2.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1615]] /* junCHWRet2.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1616]] /* junCHWRet2.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* junCHWRet2.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 6485;
}

/*
equation index: 6486
type: SIMPLE_ASSIGN
junCHWRet2.vol.m_flow_nominal = junCHWRet2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6486};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1680]] /* junCHWRet2.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1613]] /* junCHWRet2.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6486;
}

/*
equation index: 6487
type: SIMPLE_ASSIGN
junCHWRet2.vol.tau = junCHWRet2.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6487};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1689]] /* junCHWRet2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1662]] /* junCHWRet2.tau PARAM */);
  threadData->lastEquationSolved = 6487;
}

/*
equation index: 6488
type: SIMPLE_ASSIGN
junCHWRet2.vol.V_nominal = 0.0010044335697769957 * junCHWRet2.vol.m_flow_nominal * junCHWRet2.vol.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6488};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1665]] /* junCHWRet2.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1680]] /* junCHWRet2.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1689]] /* junCHWRet2.vol.tau PARAM */)));
  threadData->lastEquationSolved = 6488;
}

/*
equation index: 6491
type: SIMPLE_ASSIGN
junCHWRet2.vol.T_start = junCHWRet2.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6491};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1663]] /* junCHWRet2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1607]] /* junCHWRet2.T_start PARAM */);
  threadData->lastEquationSolved = 6491;
}

/*
equation index: 6492
type: SIMPLE_ASSIGN
junCHWRet2.vol.state_start.T = junCHWRet2.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6492};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1687]] /* junCHWRet2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1663]] /* junCHWRet2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6492;
}

/*
equation index: 6493
type: SIMPLE_ASSIGN
junCHWRet2.vol.p_start = junCHWRet2.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6493};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1682]] /* junCHWRet2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1619]] /* junCHWRet2.p_start PARAM */);
  threadData->lastEquationSolved = 6493;
}

/*
equation index: 6494
type: SIMPLE_ASSIGN
junCHWRet2.vol.state_start.p = junCHWRet2.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6494};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1688]] /* junCHWRet2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1682]] /* junCHWRet2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6494;
}

/*
equation index: 6498
type: SIMPLE_ASSIGN
junCHWRet2.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet2.vol.Medium.density(junCHWRet2.vol.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6498};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_vol_Medium_ThermodynamicState tmp16;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp16, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1688]] /* junCHWRet2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1687]] /* junCHWRet2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1684]] /* junCHWRet2.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_vol_Medium_density(threadData, tmp16);
  threadData->lastEquationSolved = 6498;
}

/*
equation index: 6499
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.p_start = junCHWRet2.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6499};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1674]] /* junCHWRet2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1682]] /* junCHWRet2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6499;
}

/*
equation index: 6500
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.T_start = junCHWRet2.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6500};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1668]] /* junCHWRet2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1663]] /* junCHWRet2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6500;
}

/*
equation index: 6501
type: SIMPLE_ASSIGN
junCHWRet2.vol.X_start[1] = junCHWRet2.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6501};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1666]] /* junCHWRet2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1608]] /* junCHWRet2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6501;
}

/*
equation index: 6502
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.X_start[1] = junCHWRet2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6502};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1669]] /* junCHWRet2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1666]] /* junCHWRet2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6502;
}

/*
equation index: 6503
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet2.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWRet2.vol.dynBal.p_start, junCHWRet2.vol.dynBal.T_start, junCHWRet2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6503};
  real_array tmp17;
  real_array_create(&tmp17, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1669]] /* junCHWRet2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1672]] /* junCHWRet2.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1674]] /* junCHWRet2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1668]] /* junCHWRet2.vol.dynBal.T_start PARAM */), tmp17);
  threadData->lastEquationSolved = 6503;
}

/*
equation index: 6508
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet2.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet2.vol.dynBal.Medium.setState_pTX(junCHWRet2.vol.dynBal.p_start, junCHWRet2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1676]] /* junCHWRet2.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1674]] /* junCHWRet2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1668]] /* junCHWRet2.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6508;
}

/*
equation index: 6511
type: SIMPLE_ASSIGN
junCHWRet2.vol.V = junCHWRet2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6511};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1664]] /* junCHWRet2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1665]] /* junCHWRet2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 6511;
}

/*
equation index: 6512
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.fluidVolume = junCHWRet2.vol.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6512};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1671]] /* junCHWRet2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1664]] /* junCHWRet2.vol.V PARAM */);
  threadData->lastEquationSolved = 6512;
}

/*
equation index: 6525
type: SIMPLE_ASSIGN
junCHWRet2.vol.m_flow_small = 1e-4 * abs(junCHWRet2.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6525};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1681]] /* junCHWRet2.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1680]] /* junCHWRet2.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6525;
}

/*
equation index: 6538
type: SIMPLE_ASSIGN
junCHWRet2.res3.m_flow_nominal = junCHWRet2.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6538};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1656]] /* junCHWRet2.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* junCHWRet2.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 6538;
}

/*
equation index: 6539
type: SIMPLE_ASSIGN
junCHWRet2.res3.m_flow_nominal_pos = abs(junCHWRet2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6539};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1657]] /* junCHWRet2.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1656]] /* junCHWRet2.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6539;
}

/*
equation index: 6542
type: SIMPLE_ASSIGN
junCHWRet2.res3.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet2.res3.Medium.dynamicViscosity(junCHWRet2.res3.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6542};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res3_Medium_ThermodynamicState tmp18;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp18, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1661]] /* junCHWRet2.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1660]] /* junCHWRet2.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1654]] /* junCHWRet2.res3.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res3_Medium_dynamicViscosity(threadData, tmp18);
  threadData->lastEquationSolved = 6542;
}

/*
equation index: 6551
type: SIMPLE_ASSIGN
junCHWRet2.res3.m_flow_small = 1e-4 * abs(junCHWRet2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6551};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1658]] /* junCHWRet2.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1656]] /* junCHWRet2.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6551;
}

/*
equation index: 6558
type: SIMPLE_ASSIGN
junCHWRet2.res2.m_flow_nominal = junCHWRet2.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6558};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1642]] /* junCHWRet2.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1616]] /* junCHWRet2.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 6558;
}

/*
equation index: 6559
type: SIMPLE_ASSIGN
junCHWRet2.res2.m_flow_nominal_pos = abs(junCHWRet2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6559};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1643]] /* junCHWRet2.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1642]] /* junCHWRet2.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6559;
}

/*
equation index: 6562
type: SIMPLE_ASSIGN
junCHWRet2.res2.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet2.res2.Medium.dynamicViscosity(junCHWRet2.res2.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6562};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res2_Medium_ThermodynamicState tmp19;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp19, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1647]] /* junCHWRet2.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1646]] /* junCHWRet2.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1640]] /* junCHWRet2.res2.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res2_Medium_dynamicViscosity(threadData, tmp19);
  threadData->lastEquationSolved = 6562;
}

/*
equation index: 6571
type: SIMPLE_ASSIGN
junCHWRet2.res2.m_flow_small = 1e-4 * abs(junCHWRet2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6571};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1644]] /* junCHWRet2.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1642]] /* junCHWRet2.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6571;
}

/*
equation index: 6578
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow_nominal = junCHWRet2.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6578};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1628]] /* junCHWRet2.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1615]] /* junCHWRet2.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 6578;
}

/*
equation index: 6579
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow_nominal_pos = abs(junCHWRet2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6579};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1629]] /* junCHWRet2.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1628]] /* junCHWRet2.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6579;
}

/*
equation index: 6582
type: SIMPLE_ASSIGN
junCHWRet2.res1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet2.res1.Medium.dynamicViscosity(junCHWRet2.res1.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6582};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res1_Medium_ThermodynamicState tmp20;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp20, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1633]] /* junCHWRet2.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1632]] /* junCHWRet2.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1626]] /* junCHWRet2.res1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet2_res1_Medium_dynamicViscosity(threadData, tmp20);
  threadData->lastEquationSolved = 6582;
}

/*
equation index: 6591
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow_small = 1e-4 * abs(junCHWRet2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6591};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1630]] /* junCHWRet2.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1628]] /* junCHWRet2.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6591;
}

/*
equation index: 6593
type: SIMPLE_ASSIGN
junCHWRet2.m_flow_small = 1e-4 * junCHWRet2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6593};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1618]] /* junCHWRet2.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1613]] /* junCHWRet2.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6593;
}

/*
equation index: 6606
type: SIMPLE_ASSIGN
tan.ATan = 0.3333333333333333 * tan.VTan
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6606};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* tan.ATan PARAM */) = (0.3333333333333333) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2875]] /* tan.VTan PARAM */));
  threadData->lastEquationSolved = 6606;
}

/*
equation index: 6607
type: SIMPLE_ASSIGN
tan.rTan = sqrt(tan.ATan / 3.141592653589793)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6607};
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
  threadData->lastEquationSolved = 6607;
}

/*
equation index: 6608
type: SIMPLE_ASSIGN
tan.lHex = 6.283185307179586 * tan.rTan
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6608};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3219]] /* tan.lHex PARAM */) = (6.283185307179586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3224]] /* tan.rTan PARAM */));
  threadData->lastEquationSolved = 6608;
}

/*
equation index: 6609
type: SIMPLE_ASSIGN
tan.volHexFlu = 0.7853981633974483 * (0.8 * tan.dExtHex) ^ 2.0 * tan.lHex
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6609};
  modelica_real tmp22;
  tmp22 = (0.8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2898]] /* tan.dExtHex PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3338]] /* tan.volHexFlu PARAM */) = (0.7853981633974483) * (((tmp22 * tmp22)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3219]] /* tan.lHex PARAM */)));
  threadData->lastEquationSolved = 6609;
}

/*
equation index: 6614
type: SIMPLE_ASSIGN
tan.indTanHex.TTan_nominal = tan.TTan_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6614};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2873]] /* tan.TTan_nominal PARAM */);
  threadData->lastEquationSolved = 6614;
}

/*
equation index: 6615
type: SIMPLE_ASSIGN
tan.indTanHex.THex_nominal = tan.THex_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6615};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2872]] /* tan.THex_nominal PARAM */);
  threadData->lastEquationSolved = 6615;
}

/*
equation index: 6616
type: SIMPLE_ASSIGN
tan.indTanHex.r_nominal = tan.r_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6616};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3225]] /* tan.r_nominal PARAM */);
  threadData->lastEquationSolved = 6616;
}

/*
equation index: 6617
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].TSur_nominal = tan.indTanHex.TTan_nominal + tan.indTanHex.r_nominal * (tan.indTanHex.THex_nominal - tan.indTanHex.TTan_nominal) / (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6617};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2979]] /* tan.indTanHex.hANatCyl[6].TSur_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */) + DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */)),1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"1.0 + tan.indTanHex.r_nominal",equationIndexes);
  threadData->lastEquationSolved = 6617;
}

/*
equation index: 6618
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].TFlu_nominal = tan.indTanHex.TTan_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6618};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2973]] /* tan.indTanHex.hANatCyl[6].TFlu_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */);
  threadData->lastEquationSolved = 6618;
}

/*
equation index: 6619
type: SIMPLE_ASSIGN
tan.indTanHex.Q_flow_nominal = tan.Q_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6619};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2909]] /* tan.indTanHex.Q_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2871]] /* tan.Q_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6619;
}

/*
equation index: 6620
type: SIMPLE_ASSIGN
tan.indTanHex.UA_nominal = abs(tan.indTanHex.Q_flow_nominal / (tan.indTanHex.THex_nominal - tan.indTanHex.TTan_nominal))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6620};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */) = fabs(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2909]] /* tan.indTanHex.Q_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */),"tan.indTanHex.THex_nominal - tan.indTanHex.TTan_nominal",equationIndexes));
  threadData->lastEquationSolved = 6620;
}

/*
equation index: 6621
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6621};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2985]] /* tan.indTanHex.hANatCyl[6].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)));
  threadData->lastEquationSolved = 6621;
}

/*
equation index: 6622
type: SIMPLE_ASSIGN
tan.indTanHex.dExtHex = tan.dExtHex
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6622};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* tan.indTanHex.dExtHex PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2898]] /* tan.dExtHex PARAM */);
  threadData->lastEquationSolved = 6622;
}

/*
equation index: 6623
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].ChaLen = tan.indTanHex.dExtHex
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6623};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2943]] /* tan.indTanHex.hANatCyl[6].ChaLen PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* tan.indTanHex.dExtHex PARAM */);
  threadData->lastEquationSolved = 6623;
}

/*
equation index: 6624
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].TSur_nominal = tan.indTanHex.TTan_nominal + tan.indTanHex.r_nominal * (tan.indTanHex.THex_nominal - tan.indTanHex.TTan_nominal) / (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6624};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* tan.indTanHex.hANatCyl[5].TSur_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */) + DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */)),1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"1.0 + tan.indTanHex.r_nominal",equationIndexes);
  threadData->lastEquationSolved = 6624;
}

/*
equation index: 6625
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].TFlu_nominal = tan.indTanHex.TTan_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6625};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2972]] /* tan.indTanHex.hANatCyl[5].TFlu_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */);
  threadData->lastEquationSolved = 6625;
}

/*
equation index: 6626
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6626};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2984]] /* tan.indTanHex.hANatCyl[5].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)));
  threadData->lastEquationSolved = 6626;
}

/*
equation index: 6627
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].ChaLen = tan.indTanHex.dExtHex
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6627};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2942]] /* tan.indTanHex.hANatCyl[5].ChaLen PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* tan.indTanHex.dExtHex PARAM */);
  threadData->lastEquationSolved = 6627;
}

/*
equation index: 6628
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].TSur_nominal = tan.indTanHex.TTan_nominal + tan.indTanHex.r_nominal * (tan.indTanHex.THex_nominal - tan.indTanHex.TTan_nominal) / (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6628};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2977]] /* tan.indTanHex.hANatCyl[4].TSur_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */) + DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */)),1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"1.0 + tan.indTanHex.r_nominal",equationIndexes);
  threadData->lastEquationSolved = 6628;
}

/*
equation index: 6629
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].TFlu_nominal = tan.indTanHex.TTan_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6629};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2971]] /* tan.indTanHex.hANatCyl[4].TFlu_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */);
  threadData->lastEquationSolved = 6629;
}

/*
equation index: 6630
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6630};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2983]] /* tan.indTanHex.hANatCyl[4].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)));
  threadData->lastEquationSolved = 6630;
}

/*
equation index: 6631
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].ChaLen = tan.indTanHex.dExtHex
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6631};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2941]] /* tan.indTanHex.hANatCyl[4].ChaLen PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* tan.indTanHex.dExtHex PARAM */);
  threadData->lastEquationSolved = 6631;
}

/*
equation index: 6632
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].TSur_nominal = tan.indTanHex.TTan_nominal + tan.indTanHex.r_nominal * (tan.indTanHex.THex_nominal - tan.indTanHex.TTan_nominal) / (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6632};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2976]] /* tan.indTanHex.hANatCyl[3].TSur_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */) + DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */)),1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"1.0 + tan.indTanHex.r_nominal",equationIndexes);
  threadData->lastEquationSolved = 6632;
}

/*
equation index: 6633
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].TFlu_nominal = tan.indTanHex.TTan_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6633};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2970]] /* tan.indTanHex.hANatCyl[3].TFlu_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */);
  threadData->lastEquationSolved = 6633;
}

/*
equation index: 6634
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6634};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2982]] /* tan.indTanHex.hANatCyl[3].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)));
  threadData->lastEquationSolved = 6634;
}

/*
equation index: 6635
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].ChaLen = tan.indTanHex.dExtHex
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6635};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2940]] /* tan.indTanHex.hANatCyl[3].ChaLen PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* tan.indTanHex.dExtHex PARAM */);
  threadData->lastEquationSolved = 6635;
}

/*
equation index: 6636
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].TSur_nominal = tan.indTanHex.TTan_nominal + tan.indTanHex.r_nominal * (tan.indTanHex.THex_nominal - tan.indTanHex.TTan_nominal) / (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6636};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2975]] /* tan.indTanHex.hANatCyl[2].TSur_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */) + DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */)),1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"1.0 + tan.indTanHex.r_nominal",equationIndexes);
  threadData->lastEquationSolved = 6636;
}

/*
equation index: 6637
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].TFlu_nominal = tan.indTanHex.TTan_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6637};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2969]] /* tan.indTanHex.hANatCyl[2].TFlu_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */);
  threadData->lastEquationSolved = 6637;
}

/*
equation index: 6638
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6638};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2981]] /* tan.indTanHex.hANatCyl[2].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)));
  threadData->lastEquationSolved = 6638;
}

/*
equation index: 6639
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].ChaLen = tan.indTanHex.dExtHex
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6639};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2939]] /* tan.indTanHex.hANatCyl[2].ChaLen PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* tan.indTanHex.dExtHex PARAM */);
  threadData->lastEquationSolved = 6639;
}

/*
equation index: 6640
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].TSur_nominal = tan.indTanHex.TTan_nominal + tan.indTanHex.r_nominal * (tan.indTanHex.THex_nominal - tan.indTanHex.TTan_nominal) / (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6640};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2974]] /* tan.indTanHex.hANatCyl[1].TSur_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */) + DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */)),1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"1.0 + tan.indTanHex.r_nominal",equationIndexes);
  threadData->lastEquationSolved = 6640;
}

/*
equation index: 6641
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].TFlu_nominal = tan.indTanHex.TTan_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6641};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* tan.indTanHex.hANatCyl[1].TFlu_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* tan.indTanHex.TTan_nominal PARAM */);
  threadData->lastEquationSolved = 6641;
}

/*
equation index: 6642
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6642};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2980]] /* tan.indTanHex.hANatCyl[1].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */)));
  threadData->lastEquationSolved = 6642;
}

/*
equation index: 6643
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].ChaLen = tan.indTanHex.dExtHex
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6643};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2938]] /* tan.indTanHex.hANatCyl[1].ChaLen PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* tan.indTanHex.dExtHex PARAM */);
  threadData->lastEquationSolved = 6643;
}

/*
equation index: 6646
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[6].T_nominal = tan.indTanHex.THex_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6646};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3021]] /* tan.indTanHex.hAPipIns[6].T_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */);
  threadData->lastEquationSolved = 6646;
}

/*
equation index: 6648
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[6].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal) / tan.indTanHex.r_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6648};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3027]] /* tan.indTanHex.hAPipIns[6].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (DIVISION_SIM(1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"tan.indTanHex.r_nominal",equationIndexes)));
  threadData->lastEquationSolved = 6648;
}

/*
equation index: 6652
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[5].T_nominal = tan.indTanHex.THex_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6652};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3020]] /* tan.indTanHex.hAPipIns[5].T_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */);
  threadData->lastEquationSolved = 6652;
}

/*
equation index: 6654
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[5].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal) / tan.indTanHex.r_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6654};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3026]] /* tan.indTanHex.hAPipIns[5].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (DIVISION_SIM(1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"tan.indTanHex.r_nominal",equationIndexes)));
  threadData->lastEquationSolved = 6654;
}

/*
equation index: 6658
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[4].T_nominal = tan.indTanHex.THex_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6658};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3019]] /* tan.indTanHex.hAPipIns[4].T_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */);
  threadData->lastEquationSolved = 6658;
}

/*
equation index: 6660
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[4].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal) / tan.indTanHex.r_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6660};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3025]] /* tan.indTanHex.hAPipIns[4].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (DIVISION_SIM(1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"tan.indTanHex.r_nominal",equationIndexes)));
  threadData->lastEquationSolved = 6660;
}

/*
equation index: 6664
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[3].T_nominal = tan.indTanHex.THex_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6664};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3018]] /* tan.indTanHex.hAPipIns[3].T_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */);
  threadData->lastEquationSolved = 6664;
}

/*
equation index: 6666
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[3].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal) / tan.indTanHex.r_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6666};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3024]] /* tan.indTanHex.hAPipIns[3].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (DIVISION_SIM(1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"tan.indTanHex.r_nominal",equationIndexes)));
  threadData->lastEquationSolved = 6666;
}

/*
equation index: 6670
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[2].T_nominal = tan.indTanHex.THex_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6670};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3017]] /* tan.indTanHex.hAPipIns[2].T_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */);
  threadData->lastEquationSolved = 6670;
}

/*
equation index: 6672
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[2].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal) / tan.indTanHex.r_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6672};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3023]] /* tan.indTanHex.hAPipIns[2].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (DIVISION_SIM(1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"tan.indTanHex.r_nominal",equationIndexes)));
  threadData->lastEquationSolved = 6672;
}

/*
equation index: 6676
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[1].T_nominal = tan.indTanHex.THex_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6676};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3016]] /* tan.indTanHex.hAPipIns[1].T_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* tan.indTanHex.THex_nominal PARAM */);
  threadData->lastEquationSolved = 6676;
}

/*
equation index: 6678
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[1].hA_nominal = 0.16666666666666666 * tan.indTanHex.UA_nominal * (1.0 + tan.indTanHex.r_nominal) / tan.indTanHex.r_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6678};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3022]] /* tan.indTanHex.hAPipIns[1].hA_nominal PARAM */) = (0.16666666666666666) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* tan.indTanHex.UA_nominal PARAM */)) * (DIVISION_SIM(1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3050]] /* tan.indTanHex.r_nominal PARAM */),"tan.indTanHex.r_nominal",equationIndexes)));
  threadData->lastEquationSolved = 6678;
}

/*
equation index: 6684
type: SIMPLE_ASSIGN
tan.ACroHex = 0.7853981633974483 * (tan.dExtHex ^ 2.0 - (0.8 * tan.dExtHex) ^ 2.0)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6684};
  modelica_real tmp23;
  modelica_real tmp24;
  tmp23 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2898]] /* tan.dExtHex PARAM */);
  tmp24 = (0.8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2898]] /* tan.dExtHex PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2843]] /* tan.ACroHex PARAM */) = (0.7853981633974483) * ((tmp23 * tmp23) - ((tmp24 * tmp24)));
  threadData->lastEquationSolved = 6684;
}

/*
equation index: 6685
type: SIMPLE_ASSIGN
tan.CHex = tan.ACroHex * tan.lHex * tan.dHex * tan.cHex
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6685};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2845]] /* tan.CHex PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2843]] /* tan.ACroHex PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3219]] /* tan.lHex PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2900]] /* tan.dHex PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2886]] /* tan.cHex PARAM */))));
  threadData->lastEquationSolved = 6685;
}

/*
equation index: 6686
type: SIMPLE_ASSIGN
tan.indTanHex.CHex = tan.CHex
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6686};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* tan.indTanHex.CHex PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2845]] /* tan.CHex PARAM */);
  threadData->lastEquationSolved = 6686;
}

/*
equation index: 6687
type: SIMPLE_ASSIGN
tan.indTanHex.cap[6].C = 0.16666666666666666 * tan.indTanHex.CHex
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6687};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2922]] /* tan.indTanHex.cap[6].C PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* tan.indTanHex.CHex PARAM */));
  threadData->lastEquationSolved = 6687;
}

/*
equation index: 6688
type: SIMPLE_ASSIGN
tan.indTanHex.cap[5].C = 0.16666666666666666 * tan.indTanHex.CHex
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6688};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2921]] /* tan.indTanHex.cap[5].C PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* tan.indTanHex.CHex PARAM */));
  threadData->lastEquationSolved = 6688;
}

/*
equation index: 6689
type: SIMPLE_ASSIGN
tan.indTanHex.cap[4].C = 0.16666666666666666 * tan.indTanHex.CHex
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6689};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2920]] /* tan.indTanHex.cap[4].C PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* tan.indTanHex.CHex PARAM */));
  threadData->lastEquationSolved = 6689;
}

/*
equation index: 6690
type: SIMPLE_ASSIGN
tan.indTanHex.cap[3].C = 0.16666666666666666 * tan.indTanHex.CHex
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6690};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2919]] /* tan.indTanHex.cap[3].C PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* tan.indTanHex.CHex PARAM */));
  threadData->lastEquationSolved = 6690;
}

/*
equation index: 6691
type: SIMPLE_ASSIGN
tan.indTanHex.cap[2].C = 0.16666666666666666 * tan.indTanHex.CHex
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6691};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2918]] /* tan.indTanHex.cap[2].C PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* tan.indTanHex.CHex PARAM */));
  threadData->lastEquationSolved = 6691;
}

/*
equation index: 6692
type: SIMPLE_ASSIGN
tan.indTanHex.cap[1].C = 0.16666666666666666 * tan.indTanHex.CHex
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6692};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2917]] /* tan.indTanHex.cap[1].C PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* tan.indTanHex.CHex PARAM */));
  threadData->lastEquationSolved = 6692;
}

/*
equation index: 6695
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].T_start = tan.indTanHex.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6695};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3072]] /* tan.indTanHex.vol[6].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2912]] /* tan.indTanHex.T_start PARAM */);
  threadData->lastEquationSolved = 6695;
}

/*
equation index: 6696
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].state_start.T = tan.indTanHex.vol[6].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6696};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3210]] /* tan.indTanHex.vol[6].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3072]] /* tan.indTanHex.vol[6].T_start PARAM */);
  threadData->lastEquationSolved = 6696;
}

/*
equation index: 6697
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].p_start = tan.indTanHex.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6697};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3180]] /* tan.indTanHex.vol[6].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3049]] /* tan.indTanHex.p_start PARAM */);
  threadData->lastEquationSolved = 6697;
}

/*
equation index: 6698
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].state_start.p = tan.indTanHex.vol[6].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6698};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3216]] /* tan.indTanHex.vol[6].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3180]] /* tan.indTanHex.vol[6].p_start PARAM */);
  threadData->lastEquationSolved = 6698;
}

/*
equation index: 6702
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.Medium.density(tan.indTanHex.vol[6].state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6702};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState tmp25;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp25, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3216]] /* tan.indTanHex.vol[6].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3210]] /* tan.indTanHex.vol[6].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3192]] /* tan.indTanHex.vol[6].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_density(threadData, tmp25);
  threadData->lastEquationSolved = 6702;
}

/*
equation index: 6703
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.p_start = tan.indTanHex.vol[6].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6703};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3132]] /* tan.indTanHex.vol[6].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3180]] /* tan.indTanHex.vol[6].p_start PARAM */);
  threadData->lastEquationSolved = 6703;
}

/*
equation index: 6704
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.T_start = tan.indTanHex.vol[6].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6704};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3096]] /* tan.indTanHex.vol[6].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3072]] /* tan.indTanHex.vol[6].T_start PARAM */);
  threadData->lastEquationSolved = 6704;
}

/*
equation index: 6705
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].X_start[1] = tan.indTanHex.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6705};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3084]] /* tan.indTanHex.vol[6].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* tan.indTanHex.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6705;
}

/*
equation index: 6706
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.X_start[1] = tan.indTanHex.vol[6].X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6706};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3102]] /* tan.indTanHex.vol[6].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3084]] /* tan.indTanHex.vol[6].X_start[1] PARAM */);
  threadData->lastEquationSolved = 6706;
}

/*
equation index: 6707
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.specificEnthalpy_pTX(tan.indTanHex.vol[6].dynBal.p_start, tan.indTanHex.vol[6].dynBal.T_start, tan.indTanHex.vol[6].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6707};
  real_array tmp26;
  real_array_create(&tmp26, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3102]] /* tan.indTanHex.vol[6].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3120]] /* tan.indTanHex.vol[6].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3132]] /* tan.indTanHex.vol[6].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3096]] /* tan.indTanHex.vol[6].dynBal.T_start PARAM */), tmp26);
  threadData->lastEquationSolved = 6707;
}

/*
equation index: 6712
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.setState_pTX(tan.indTanHex.vol[6].dynBal.p_start, tan.indTanHex.vol[6].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6712};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3144]] /* tan.indTanHex.vol[6].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3132]] /* tan.indTanHex.vol[6].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3096]] /* tan.indTanHex.vol[6].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6712;
}

/*
equation index: 6715
type: SIMPLE_ASSIGN
tan.indTanHex.volHexFlu = tan.volHexFlu
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6715};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3217]] /* tan.indTanHex.volHexFlu PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3338]] /* tan.volHexFlu PARAM */);
  threadData->lastEquationSolved = 6715;
}

/*
equation index: 6716
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].V = 0.16666666666666666 * tan.indTanHex.volHexFlu
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6716};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3078]] /* tan.indTanHex.vol[6].V PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3217]] /* tan.indTanHex.volHexFlu PARAM */));
  threadData->lastEquationSolved = 6716;
}

/*
equation index: 6717
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.fluidVolume = tan.indTanHex.vol[6].V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6717};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3114]] /* tan.indTanHex.vol[6].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3078]] /* tan.indTanHex.vol[6].V PARAM */);
  threadData->lastEquationSolved = 6717;
}

/*
equation index: 6740
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].T_start = tan.indTanHex.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6740};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3071]] /* tan.indTanHex.vol[5].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2912]] /* tan.indTanHex.T_start PARAM */);
  threadData->lastEquationSolved = 6740;
}

/*
equation index: 6741
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].state_start.T = tan.indTanHex.vol[5].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6741};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3209]] /* tan.indTanHex.vol[5].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3071]] /* tan.indTanHex.vol[5].T_start PARAM */);
  threadData->lastEquationSolved = 6741;
}

/*
equation index: 6742
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].p_start = tan.indTanHex.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6742};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3179]] /* tan.indTanHex.vol[5].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3049]] /* tan.indTanHex.p_start PARAM */);
  threadData->lastEquationSolved = 6742;
}

/*
equation index: 6743
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].state_start.p = tan.indTanHex.vol[5].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6743};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3215]] /* tan.indTanHex.vol[5].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3179]] /* tan.indTanHex.vol[5].p_start PARAM */);
  threadData->lastEquationSolved = 6743;
}

/*
equation index: 6747
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.Medium.density(tan.indTanHex.vol[5].state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6747};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState tmp27;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp27, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3215]] /* tan.indTanHex.vol[5].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3209]] /* tan.indTanHex.vol[5].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3191]] /* tan.indTanHex.vol[5].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_density(threadData, tmp27);
  threadData->lastEquationSolved = 6747;
}

/*
equation index: 6748
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.p_start = tan.indTanHex.vol[5].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6748};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3131]] /* tan.indTanHex.vol[5].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3179]] /* tan.indTanHex.vol[5].p_start PARAM */);
  threadData->lastEquationSolved = 6748;
}

/*
equation index: 6749
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.T_start = tan.indTanHex.vol[5].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6749};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3095]] /* tan.indTanHex.vol[5].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3071]] /* tan.indTanHex.vol[5].T_start PARAM */);
  threadData->lastEquationSolved = 6749;
}

/*
equation index: 6750
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].X_start[1] = tan.indTanHex.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6750};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3083]] /* tan.indTanHex.vol[5].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* tan.indTanHex.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6750;
}

/*
equation index: 6751
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.X_start[1] = tan.indTanHex.vol[5].X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6751};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3101]] /* tan.indTanHex.vol[5].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3083]] /* tan.indTanHex.vol[5].X_start[1] PARAM */);
  threadData->lastEquationSolved = 6751;
}

/*
equation index: 6752
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.specificEnthalpy_pTX(tan.indTanHex.vol[5].dynBal.p_start, tan.indTanHex.vol[5].dynBal.T_start, tan.indTanHex.vol[5].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6752};
  real_array tmp28;
  real_array_create(&tmp28, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3101]] /* tan.indTanHex.vol[5].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3119]] /* tan.indTanHex.vol[5].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3131]] /* tan.indTanHex.vol[5].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3095]] /* tan.indTanHex.vol[5].dynBal.T_start PARAM */), tmp28);
  threadData->lastEquationSolved = 6752;
}

/*
equation index: 6757
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.setState_pTX(tan.indTanHex.vol[5].dynBal.p_start, tan.indTanHex.vol[5].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6757};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3143]] /* tan.indTanHex.vol[5].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3131]] /* tan.indTanHex.vol[5].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3095]] /* tan.indTanHex.vol[5].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6757;
}

/*
equation index: 6760
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].V = 0.16666666666666666 * tan.indTanHex.volHexFlu
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6760};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3077]] /* tan.indTanHex.vol[5].V PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3217]] /* tan.indTanHex.volHexFlu PARAM */));
  threadData->lastEquationSolved = 6760;
}

/*
equation index: 6761
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.fluidVolume = tan.indTanHex.vol[5].V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6761};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3113]] /* tan.indTanHex.vol[5].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3077]] /* tan.indTanHex.vol[5].V PARAM */);
  threadData->lastEquationSolved = 6761;
}

/*
equation index: 6784
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].T_start = tan.indTanHex.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6784};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3070]] /* tan.indTanHex.vol[4].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2912]] /* tan.indTanHex.T_start PARAM */);
  threadData->lastEquationSolved = 6784;
}

/*
equation index: 6785
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].state_start.T = tan.indTanHex.vol[4].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6785};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3208]] /* tan.indTanHex.vol[4].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3070]] /* tan.indTanHex.vol[4].T_start PARAM */);
  threadData->lastEquationSolved = 6785;
}

/*
equation index: 6786
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].p_start = tan.indTanHex.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6786};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3178]] /* tan.indTanHex.vol[4].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3049]] /* tan.indTanHex.p_start PARAM */);
  threadData->lastEquationSolved = 6786;
}

/*
equation index: 6787
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].state_start.p = tan.indTanHex.vol[4].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6787};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3214]] /* tan.indTanHex.vol[4].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3178]] /* tan.indTanHex.vol[4].p_start PARAM */);
  threadData->lastEquationSolved = 6787;
}

/*
equation index: 6791
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.Medium.density(tan.indTanHex.vol[4].state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6791};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState tmp29;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp29, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3214]] /* tan.indTanHex.vol[4].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3208]] /* tan.indTanHex.vol[4].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3190]] /* tan.indTanHex.vol[4].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_density(threadData, tmp29);
  threadData->lastEquationSolved = 6791;
}

/*
equation index: 6792
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.p_start = tan.indTanHex.vol[4].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6792};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3130]] /* tan.indTanHex.vol[4].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3178]] /* tan.indTanHex.vol[4].p_start PARAM */);
  threadData->lastEquationSolved = 6792;
}

/*
equation index: 6793
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.T_start = tan.indTanHex.vol[4].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6793};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3094]] /* tan.indTanHex.vol[4].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3070]] /* tan.indTanHex.vol[4].T_start PARAM */);
  threadData->lastEquationSolved = 6793;
}

/*
equation index: 6794
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].X_start[1] = tan.indTanHex.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6794};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3082]] /* tan.indTanHex.vol[4].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* tan.indTanHex.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6794;
}

/*
equation index: 6795
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.X_start[1] = tan.indTanHex.vol[4].X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6795};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3100]] /* tan.indTanHex.vol[4].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3082]] /* tan.indTanHex.vol[4].X_start[1] PARAM */);
  threadData->lastEquationSolved = 6795;
}

/*
equation index: 6796
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.specificEnthalpy_pTX(tan.indTanHex.vol[4].dynBal.p_start, tan.indTanHex.vol[4].dynBal.T_start, tan.indTanHex.vol[4].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6796};
  real_array tmp30;
  real_array_create(&tmp30, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3100]] /* tan.indTanHex.vol[4].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3118]] /* tan.indTanHex.vol[4].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3130]] /* tan.indTanHex.vol[4].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3094]] /* tan.indTanHex.vol[4].dynBal.T_start PARAM */), tmp30);
  threadData->lastEquationSolved = 6796;
}

/*
equation index: 6801
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.setState_pTX(tan.indTanHex.vol[4].dynBal.p_start, tan.indTanHex.vol[4].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6801};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3142]] /* tan.indTanHex.vol[4].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3130]] /* tan.indTanHex.vol[4].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3094]] /* tan.indTanHex.vol[4].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6801;
}

/*
equation index: 6804
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].V = 0.16666666666666666 * tan.indTanHex.volHexFlu
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6804};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3076]] /* tan.indTanHex.vol[4].V PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3217]] /* tan.indTanHex.volHexFlu PARAM */));
  threadData->lastEquationSolved = 6804;
}

/*
equation index: 6805
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.fluidVolume = tan.indTanHex.vol[4].V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6805};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3112]] /* tan.indTanHex.vol[4].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3076]] /* tan.indTanHex.vol[4].V PARAM */);
  threadData->lastEquationSolved = 6805;
}

/*
equation index: 6828
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].T_start = tan.indTanHex.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6828};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3069]] /* tan.indTanHex.vol[3].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2912]] /* tan.indTanHex.T_start PARAM */);
  threadData->lastEquationSolved = 6828;
}

/*
equation index: 6829
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].state_start.T = tan.indTanHex.vol[3].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6829};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3207]] /* tan.indTanHex.vol[3].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3069]] /* tan.indTanHex.vol[3].T_start PARAM */);
  threadData->lastEquationSolved = 6829;
}

/*
equation index: 6830
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].p_start = tan.indTanHex.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6830};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3177]] /* tan.indTanHex.vol[3].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3049]] /* tan.indTanHex.p_start PARAM */);
  threadData->lastEquationSolved = 6830;
}

/*
equation index: 6831
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].state_start.p = tan.indTanHex.vol[3].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6831};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3213]] /* tan.indTanHex.vol[3].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3177]] /* tan.indTanHex.vol[3].p_start PARAM */);
  threadData->lastEquationSolved = 6831;
}

/*
equation index: 6835
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.Medium.density(tan.indTanHex.vol[3].state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6835};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState tmp31;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp31, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3213]] /* tan.indTanHex.vol[3].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3207]] /* tan.indTanHex.vol[3].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3189]] /* tan.indTanHex.vol[3].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_density(threadData, tmp31);
  threadData->lastEquationSolved = 6835;
}

/*
equation index: 6836
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.p_start = tan.indTanHex.vol[3].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6836};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3129]] /* tan.indTanHex.vol[3].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3177]] /* tan.indTanHex.vol[3].p_start PARAM */);
  threadData->lastEquationSolved = 6836;
}

/*
equation index: 6837
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.T_start = tan.indTanHex.vol[3].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6837};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3093]] /* tan.indTanHex.vol[3].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3069]] /* tan.indTanHex.vol[3].T_start PARAM */);
  threadData->lastEquationSolved = 6837;
}

/*
equation index: 6838
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].X_start[1] = tan.indTanHex.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6838};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3081]] /* tan.indTanHex.vol[3].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* tan.indTanHex.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6838;
}

/*
equation index: 6839
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.X_start[1] = tan.indTanHex.vol[3].X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6839};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3099]] /* tan.indTanHex.vol[3].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3081]] /* tan.indTanHex.vol[3].X_start[1] PARAM */);
  threadData->lastEquationSolved = 6839;
}

/*
equation index: 6840
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.specificEnthalpy_pTX(tan.indTanHex.vol[3].dynBal.p_start, tan.indTanHex.vol[3].dynBal.T_start, tan.indTanHex.vol[3].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6840};
  real_array tmp32;
  real_array_create(&tmp32, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3099]] /* tan.indTanHex.vol[3].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3117]] /* tan.indTanHex.vol[3].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3129]] /* tan.indTanHex.vol[3].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3093]] /* tan.indTanHex.vol[3].dynBal.T_start PARAM */), tmp32);
  threadData->lastEquationSolved = 6840;
}

/*
equation index: 6845
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.setState_pTX(tan.indTanHex.vol[3].dynBal.p_start, tan.indTanHex.vol[3].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6845};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3141]] /* tan.indTanHex.vol[3].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3129]] /* tan.indTanHex.vol[3].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3093]] /* tan.indTanHex.vol[3].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6845;
}

/*
equation index: 6848
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].V = 0.16666666666666666 * tan.indTanHex.volHexFlu
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6848};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3075]] /* tan.indTanHex.vol[3].V PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3217]] /* tan.indTanHex.volHexFlu PARAM */));
  threadData->lastEquationSolved = 6848;
}

/*
equation index: 6849
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.fluidVolume = tan.indTanHex.vol[3].V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6849};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3111]] /* tan.indTanHex.vol[3].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3075]] /* tan.indTanHex.vol[3].V PARAM */);
  threadData->lastEquationSolved = 6849;
}

/*
equation index: 6872
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].T_start = tan.indTanHex.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6872};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3068]] /* tan.indTanHex.vol[2].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2912]] /* tan.indTanHex.T_start PARAM */);
  threadData->lastEquationSolved = 6872;
}

/*
equation index: 6873
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].state_start.T = tan.indTanHex.vol[2].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6873};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3206]] /* tan.indTanHex.vol[2].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3068]] /* tan.indTanHex.vol[2].T_start PARAM */);
  threadData->lastEquationSolved = 6873;
}

/*
equation index: 6874
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].p_start = tan.indTanHex.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6874};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3176]] /* tan.indTanHex.vol[2].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3049]] /* tan.indTanHex.p_start PARAM */);
  threadData->lastEquationSolved = 6874;
}

/*
equation index: 6875
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].state_start.p = tan.indTanHex.vol[2].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6875};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3212]] /* tan.indTanHex.vol[2].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3176]] /* tan.indTanHex.vol[2].p_start PARAM */);
  threadData->lastEquationSolved = 6875;
}

/*
equation index: 6879
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.Medium.density(tan.indTanHex.vol[2].state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6879};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState tmp33;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp33, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3212]] /* tan.indTanHex.vol[2].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3206]] /* tan.indTanHex.vol[2].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3188]] /* tan.indTanHex.vol[2].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_density(threadData, tmp33);
  threadData->lastEquationSolved = 6879;
}

/*
equation index: 6880
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.p_start = tan.indTanHex.vol[2].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6880};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3128]] /* tan.indTanHex.vol[2].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3176]] /* tan.indTanHex.vol[2].p_start PARAM */);
  threadData->lastEquationSolved = 6880;
}

/*
equation index: 6881
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.T_start = tan.indTanHex.vol[2].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6881};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3092]] /* tan.indTanHex.vol[2].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3068]] /* tan.indTanHex.vol[2].T_start PARAM */);
  threadData->lastEquationSolved = 6881;
}

/*
equation index: 6882
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].X_start[1] = tan.indTanHex.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6882};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3080]] /* tan.indTanHex.vol[2].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* tan.indTanHex.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6882;
}

/*
equation index: 6883
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.X_start[1] = tan.indTanHex.vol[2].X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6883};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3098]] /* tan.indTanHex.vol[2].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3080]] /* tan.indTanHex.vol[2].X_start[1] PARAM */);
  threadData->lastEquationSolved = 6883;
}

/*
equation index: 6884
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.specificEnthalpy_pTX(tan.indTanHex.vol[2].dynBal.p_start, tan.indTanHex.vol[2].dynBal.T_start, tan.indTanHex.vol[2].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6884};
  real_array tmp34;
  real_array_create(&tmp34, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3098]] /* tan.indTanHex.vol[2].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3116]] /* tan.indTanHex.vol[2].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3128]] /* tan.indTanHex.vol[2].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3092]] /* tan.indTanHex.vol[2].dynBal.T_start PARAM */), tmp34);
  threadData->lastEquationSolved = 6884;
}

/*
equation index: 6889
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.setState_pTX(tan.indTanHex.vol[2].dynBal.p_start, tan.indTanHex.vol[2].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6889};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3140]] /* tan.indTanHex.vol[2].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3128]] /* tan.indTanHex.vol[2].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3092]] /* tan.indTanHex.vol[2].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6889;
}

/*
equation index: 6892
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].V = 0.16666666666666666 * tan.indTanHex.volHexFlu
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6892};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3074]] /* tan.indTanHex.vol[2].V PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3217]] /* tan.indTanHex.volHexFlu PARAM */));
  threadData->lastEquationSolved = 6892;
}

/*
equation index: 6893
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.fluidVolume = tan.indTanHex.vol[2].V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6893};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3110]] /* tan.indTanHex.vol[2].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3074]] /* tan.indTanHex.vol[2].V PARAM */);
  threadData->lastEquationSolved = 6893;
}

/*
equation index: 6916
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].T_start = tan.indTanHex.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6916};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3067]] /* tan.indTanHex.vol[1].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2912]] /* tan.indTanHex.T_start PARAM */);
  threadData->lastEquationSolved = 6916;
}

/*
equation index: 6917
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].state_start.T = tan.indTanHex.vol[1].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6917};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3205]] /* tan.indTanHex.vol[1].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3067]] /* tan.indTanHex.vol[1].T_start PARAM */);
  threadData->lastEquationSolved = 6917;
}

/*
equation index: 6918
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].p_start = tan.indTanHex.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6918};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3175]] /* tan.indTanHex.vol[1].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3049]] /* tan.indTanHex.p_start PARAM */);
  threadData->lastEquationSolved = 6918;
}

/*
equation index: 6919
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].state_start.p = tan.indTanHex.vol[1].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6919};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3211]] /* tan.indTanHex.vol[1].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3175]] /* tan.indTanHex.vol[1].p_start PARAM */);
  threadData->lastEquationSolved = 6919;
}

/*
equation index: 6923
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.Medium.density(tan.indTanHex.vol[1].state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6923};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState tmp35;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp35, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3211]] /* tan.indTanHex.vol[1].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3205]] /* tan.indTanHex.vol[1].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3187]] /* tan.indTanHex.vol[1].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_Medium_density(threadData, tmp35);
  threadData->lastEquationSolved = 6923;
}

/*
equation index: 6924
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.p_start = tan.indTanHex.vol[1].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6924};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3127]] /* tan.indTanHex.vol[1].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3175]] /* tan.indTanHex.vol[1].p_start PARAM */);
  threadData->lastEquationSolved = 6924;
}

/*
equation index: 6925
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.T_start = tan.indTanHex.vol[1].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6925};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3091]] /* tan.indTanHex.vol[1].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3067]] /* tan.indTanHex.vol[1].T_start PARAM */);
  threadData->lastEquationSolved = 6925;
}

/*
equation index: 6926
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].X_start[1] = tan.indTanHex.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6926};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3079]] /* tan.indTanHex.vol[1].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* tan.indTanHex.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6926;
}

/*
equation index: 6927
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.X_start[1] = tan.indTanHex.vol[1].X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6927};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3097]] /* tan.indTanHex.vol[1].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3079]] /* tan.indTanHex.vol[1].X_start[1] PARAM */);
  threadData->lastEquationSolved = 6927;
}

/*
equation index: 6928
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.specificEnthalpy_pTX(tan.indTanHex.vol[1].dynBal.p_start, tan.indTanHex.vol[1].dynBal.T_start, tan.indTanHex.vol[1].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6928};
  real_array tmp36;
  real_array_create(&tmp36, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3097]] /* tan.indTanHex.vol[1].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3115]] /* tan.indTanHex.vol[1].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3127]] /* tan.indTanHex.vol[1].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3091]] /* tan.indTanHex.vol[1].dynBal.T_start PARAM */), tmp36);
  threadData->lastEquationSolved = 6928;
}

/*
equation index: 6933
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.vol.dynBal.Medium.setState_pTX(tan.indTanHex.vol[1].dynBal.p_start, tan.indTanHex.vol[1].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6933};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3139]] /* tan.indTanHex.vol[1].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3127]] /* tan.indTanHex.vol[1].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3091]] /* tan.indTanHex.vol[1].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 6933;
}

/*
equation index: 6936
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].V = 0.16666666666666666 * tan.indTanHex.volHexFlu
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6936};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3073]] /* tan.indTanHex.vol[1].V PARAM */) = (0.16666666666666666) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3217]] /* tan.indTanHex.volHexFlu PARAM */));
  threadData->lastEquationSolved = 6936;
}

/*
equation index: 6937
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.fluidVolume = tan.indTanHex.vol[1].V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6937};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3109]] /* tan.indTanHex.vol[1].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3073]] /* tan.indTanHex.vol[1].V PARAM */);
  threadData->lastEquationSolved = 6937;
}

/*
equation index: 6966
type: SIMPLE_ASSIGN
tan.indTanHex.res.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.res.Medium.dynamicViscosity(tan.indTanHex.res.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6966};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_res_Medium_ThermodynamicState tmp37;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_res_Medium_ThermodynamicState_wrap_vars(threadData,tmp37, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3064]] /* tan.indTanHex.res.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3063]] /* tan.indTanHex.res.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3057]] /* tan.indTanHex.res.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_res_Medium_dynamicViscosity(threadData, tmp37);
  threadData->lastEquationSolved = 6966;
}

/*
equation index: 6993
type: SIMPLE_ASSIGN
tan.indTanHex.deltaM = tan.deltaM
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6993};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2924]] /* tan.indTanHex.deltaM PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2902]] /* tan.deltaM PARAM */);
  threadData->lastEquationSolved = 6993;
}

/*
equation index: 7012
type: SIMPLE_ASSIGN
tan.str.m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7012};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3230]] /* tan.str.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7012;
}

/*
equation index: 7018
type: SIMPLE_ASSIGN
tan.H_b_flow.m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7018};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2853]] /* tan.H_b_flow.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7018;
}

/*
equation index: 7026
type: SIMPLE_ASSIGN
tan.H_vol_flow[3].m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7026};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2864]] /* tan.H_vol_flow[3].m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7026;
}

/*
equation index: 7034
type: SIMPLE_ASSIGN
tan.H_vol_flow[2].m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7034};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2863]] /* tan.H_vol_flow[2].m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7034;
}

/*
equation index: 7042
type: SIMPLE_ASSIGN
tan.H_vol_flow[1].m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7042};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2862]] /* tan.H_vol_flow[1].m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7042;
}

/*
equation index: 7050
type: SIMPLE_ASSIGN
tan.H_a_flow.m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7050};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2848]] /* tan.H_a_flow.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7050;
}

/*
equation index: 7064
type: SIMPLE_ASSIGN
tan.conTopSeg = tan.ATan * tan.kIns / tan.dIns
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7064};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2893]] /* tan.conTopSeg PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* tan.ATan PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3218]] /* tan.kIns PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2901]] /* tan.dIns PARAM */),"tan.dIns",equationIndexes));
  threadData->lastEquationSolved = 7064;
}

/*
equation index: 7065
type: SIMPLE_ASSIGN
tan.conBot.G = tan.conTopSeg
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7065};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2887]] /* tan.conBot.G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2893]] /* tan.conTopSeg PARAM */);
  threadData->lastEquationSolved = 7065;
}

/*
equation index: 7066
type: SIMPLE_ASSIGN
tan.conTop.G = tan.conTopSeg
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7066};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2892]] /* tan.conTop.G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2893]] /* tan.conTopSeg PARAM */);
  threadData->lastEquationSolved = 7066;
}

/*
equation index: 7068
type: SIMPLE_ASSIGN
tan.conWal[4].G = 6.283185307179586 * tan.kIns * tan.hSeg / log((tan.rTan + tan.dIns) / tan.rTan)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7068};
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
  threadData->lastEquationSolved = 7068;
}

/*
equation index: 7069
type: SIMPLE_ASSIGN
tan.conWal[3].G = 6.283185307179586 * tan.kIns * tan.hSeg / log((tan.rTan + tan.dIns) / tan.rTan)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7069};
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
  threadData->lastEquationSolved = 7069;
}

/*
equation index: 7070
type: SIMPLE_ASSIGN
tan.conWal[2].G = 6.283185307179586 * tan.kIns * tan.hSeg / log((tan.rTan + tan.dIns) / tan.rTan)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7070};
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
  threadData->lastEquationSolved = 7070;
}

/*
equation index: 7071
type: SIMPLE_ASSIGN
tan.conWal[1].G = 6.283185307179586 * tan.kIns * tan.hSeg / log((tan.rTan + tan.dIns) / tan.rTan)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7071};
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
  threadData->lastEquationSolved = 7071;
}

/*
equation index: 7074
type: SIMPLE_ASSIGN
tan.conFluSeg = tan.ATan * WaterCooledChillerExample.WaterCooledChillerExample7.tan.Medium.thermalConductivity(tan.sta_default) / tan.hSeg
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7074};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_Medium_ThermodynamicState tmp42;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_Medium_ThermodynamicState_wrap_vars(threadData,tmp42, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3228]] /* tan.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3227]] /* tan.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* tan.conFluSeg PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* tan.ATan PARAM */)) * (DIVISION_SIM(omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_Medium_thermalConductivity(threadData, tmp42),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2906]] /* tan.hSeg PARAM */),"tan.hSeg",equationIndexes));
  threadData->lastEquationSolved = 7074;
}

/*
equation index: 7075
type: SIMPLE_ASSIGN
tan.conFlu[3].G = tan.conFluSeg
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7075};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2890]] /* tan.conFlu[3].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* tan.conFluSeg PARAM */);
  threadData->lastEquationSolved = 7075;
}

/*
equation index: 7076
type: SIMPLE_ASSIGN
tan.conFlu[2].G = tan.conFluSeg
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7076};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2889]] /* tan.conFlu[2].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* tan.conFluSeg PARAM */);
  threadData->lastEquationSolved = 7076;
}

/*
equation index: 7077
type: SIMPLE_ASSIGN
tan.conFlu[1].G = tan.conFluSeg
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7077};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2888]] /* tan.conFlu[1].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* tan.conFluSeg PARAM */);
  threadData->lastEquationSolved = 7077;
}

/*
equation index: 7078
type: SIMPLE_ASSIGN
tan.buo.V = tan.VTan
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7078};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2879]] /* tan.buo.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2875]] /* tan.VTan PARAM */);
  threadData->lastEquationSolved = 7078;
}

/*
equation index: 7079
type: SIMPLE_ASSIGN
tan.buo.tau = tan.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7079};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2885]] /* tan.buo.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3237]] /* tan.tau PARAM */);
  threadData->lastEquationSolved = 7079;
}

/*
equation index: 7082
type: SIMPLE_ASSIGN
tan.buo.rho_default = WaterCooledChillerExample.WaterCooledChillerExample7.tan.buo.Medium.density(tan.buo.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7082};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_buo_Medium_ThermodynamicState tmp43;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_buo_Medium_ThermodynamicState_wrap_vars(threadData,tmp43, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2884]] /* tan.buo.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2883]] /* tan.buo.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2882]] /* tan.buo.rho_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_buo_Medium_density(threadData, tmp43);
  threadData->lastEquationSolved = 7082;
}

/*
equation index: 7083
type: SIMPLE_ASSIGN
tan.buo.cp_default = WaterCooledChillerExample.WaterCooledChillerExample7.tan.buo.Medium.specificHeatCapacityCp(tan.buo.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7083};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_buo_Medium_ThermodynamicState tmp44;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_buo_Medium_ThermodynamicState_wrap_vars(threadData,tmp44, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2884]] /* tan.buo.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2883]] /* tan.buo.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2880]] /* tan.buo.cp_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_buo_Medium_specificHeatCapacityCp(threadData, tmp44);
  threadData->lastEquationSolved = 7083;
}

/*
equation index: 7084
type: SIMPLE_ASSIGN
tan.buo.k = 0.25 * tan.buo.V * tan.buo.rho_default * tan.buo.cp_default / tan.buo.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7084};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2881]] /* tan.buo.k PARAM */) = (0.25) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2879]] /* tan.buo.V PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2882]] /* tan.buo.rho_default PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2880]] /* tan.buo.cp_default PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2885]] /* tan.buo.tau PARAM */),"tan.buo.tau",equationIndexes))));
  threadData->lastEquationSolved = 7084;
}

/*
equation index: 7088
type: SIMPLE_ASSIGN
tan.vol[4].T_start = tan.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7088};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3241]] /* tan.vol[4].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2874]] /* tan.T_start PARAM */);
  threadData->lastEquationSolved = 7088;
}

/*
equation index: 7089
type: SIMPLE_ASSIGN
tan.vol[4].state_start.T = tan.vol[4].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7089};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3333]] /* tan.vol[4].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3241]] /* tan.vol[4].T_start PARAM */);
  threadData->lastEquationSolved = 7089;
}

/*
equation index: 7090
type: SIMPLE_ASSIGN
tan.vol[4].p_start = tan.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7090};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3313]] /* tan.vol[4].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3223]] /* tan.p_start PARAM */);
  threadData->lastEquationSolved = 7090;
}

/*
equation index: 7091
type: SIMPLE_ASSIGN
tan.vol[4].state_start.p = tan.vol[4].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7091};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3337]] /* tan.vol[4].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3313]] /* tan.vol[4].p_start PARAM */);
  threadData->lastEquationSolved = 7091;
}

/*
equation index: 7095
type: SIMPLE_ASSIGN
tan.vol[4].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.Medium.density(tan.vol[4].state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7095};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_ThermodynamicState tmp45;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp45, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3337]] /* tan.vol[4].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3333]] /* tan.vol[4].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3321]] /* tan.vol[4].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_density(threadData, tmp45);
  threadData->lastEquationSolved = 7095;
}

/*
equation index: 7096
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.p_start = tan.vol[4].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7096};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3281]] /* tan.vol[4].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3313]] /* tan.vol[4].p_start PARAM */);
  threadData->lastEquationSolved = 7096;
}

/*
equation index: 7097
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.T_start = tan.vol[4].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7097};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3257]] /* tan.vol[4].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3241]] /* tan.vol[4].T_start PARAM */);
  threadData->lastEquationSolved = 7097;
}

/*
equation index: 7098
type: SIMPLE_ASSIGN
tan.vol[4].X_start[1] = tan.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7098};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3249]] /* tan.vol[4].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2876]] /* tan.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7098;
}

/*
equation index: 7099
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.X_start[1] = tan.vol[4].X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7099};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3261]] /* tan.vol[4].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3249]] /* tan.vol[4].X_start[1] PARAM */);
  threadData->lastEquationSolved = 7099;
}

/*
equation index: 7100
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.specificEnthalpy_pTX(tan.vol[4].dynBal.p_start, tan.vol[4].dynBal.T_start, tan.vol[4].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7100};
  real_array tmp46;
  real_array_create(&tmp46, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3261]] /* tan.vol[4].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3273]] /* tan.vol[4].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3281]] /* tan.vol[4].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3257]] /* tan.vol[4].dynBal.T_start PARAM */), tmp46);
  threadData->lastEquationSolved = 7100;
}

/*
equation index: 7105
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.setState_pTX(tan.vol[4].dynBal.p_start, tan.vol[4].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7105};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3289]] /* tan.vol[4].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3281]] /* tan.vol[4].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3257]] /* tan.vol[4].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7105;
}

/*
equation index: 7108
type: SIMPLE_ASSIGN
tan.vol[4].V = 0.25 * tan.VTan
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7108};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3245]] /* tan.vol[4].V PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2875]] /* tan.VTan PARAM */));
  threadData->lastEquationSolved = 7108;
}

/*
equation index: 7109
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.fluidVolume = tan.vol[4].V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7109};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3269]] /* tan.vol[4].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3245]] /* tan.vol[4].V PARAM */);
  threadData->lastEquationSolved = 7109;
}

/*
equation index: 7122
type: SIMPLE_ASSIGN
tan.vol[4].m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7122};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3309]] /* tan.vol[4].m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7122;
}

/*
equation index: 7133
type: SIMPLE_ASSIGN
tan.vol[3].T_start = tan.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7133};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3240]] /* tan.vol[3].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2874]] /* tan.T_start PARAM */);
  threadData->lastEquationSolved = 7133;
}

/*
equation index: 7134
type: SIMPLE_ASSIGN
tan.vol[3].state_start.T = tan.vol[3].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7134};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3332]] /* tan.vol[3].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3240]] /* tan.vol[3].T_start PARAM */);
  threadData->lastEquationSolved = 7134;
}

/*
equation index: 7135
type: SIMPLE_ASSIGN
tan.vol[3].p_start = tan.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7135};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3312]] /* tan.vol[3].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3223]] /* tan.p_start PARAM */);
  threadData->lastEquationSolved = 7135;
}

/*
equation index: 7136
type: SIMPLE_ASSIGN
tan.vol[3].state_start.p = tan.vol[3].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7136};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3336]] /* tan.vol[3].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3312]] /* tan.vol[3].p_start PARAM */);
  threadData->lastEquationSolved = 7136;
}

/*
equation index: 7140
type: SIMPLE_ASSIGN
tan.vol[3].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.Medium.density(tan.vol[3].state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7140};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_ThermodynamicState tmp47;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp47, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3336]] /* tan.vol[3].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3332]] /* tan.vol[3].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3320]] /* tan.vol[3].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_density(threadData, tmp47);
  threadData->lastEquationSolved = 7140;
}

/*
equation index: 7141
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.p_start = tan.vol[3].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7141};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3280]] /* tan.vol[3].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3312]] /* tan.vol[3].p_start PARAM */);
  threadData->lastEquationSolved = 7141;
}

/*
equation index: 7142
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.T_start = tan.vol[3].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7142};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3256]] /* tan.vol[3].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3240]] /* tan.vol[3].T_start PARAM */);
  threadData->lastEquationSolved = 7142;
}

/*
equation index: 7143
type: SIMPLE_ASSIGN
tan.vol[3].X_start[1] = tan.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7143};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3248]] /* tan.vol[3].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2876]] /* tan.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7143;
}

/*
equation index: 7144
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.X_start[1] = tan.vol[3].X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7144};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3260]] /* tan.vol[3].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3248]] /* tan.vol[3].X_start[1] PARAM */);
  threadData->lastEquationSolved = 7144;
}

/*
equation index: 7145
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.specificEnthalpy_pTX(tan.vol[3].dynBal.p_start, tan.vol[3].dynBal.T_start, tan.vol[3].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7145};
  real_array tmp48;
  real_array_create(&tmp48, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3260]] /* tan.vol[3].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3272]] /* tan.vol[3].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3280]] /* tan.vol[3].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3256]] /* tan.vol[3].dynBal.T_start PARAM */), tmp48);
  threadData->lastEquationSolved = 7145;
}

/*
equation index: 7150
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.setState_pTX(tan.vol[3].dynBal.p_start, tan.vol[3].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7150};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3288]] /* tan.vol[3].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3280]] /* tan.vol[3].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3256]] /* tan.vol[3].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7150;
}

/*
equation index: 7153
type: SIMPLE_ASSIGN
tan.vol[3].V = 0.25 * tan.VTan
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7153};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3244]] /* tan.vol[3].V PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2875]] /* tan.VTan PARAM */));
  threadData->lastEquationSolved = 7153;
}

/*
equation index: 7154
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.fluidVolume = tan.vol[3].V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7154};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3268]] /* tan.vol[3].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3244]] /* tan.vol[3].V PARAM */);
  threadData->lastEquationSolved = 7154;
}

/*
equation index: 7167
type: SIMPLE_ASSIGN
tan.vol[3].m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7167};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3308]] /* tan.vol[3].m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7167;
}

/*
equation index: 7178
type: SIMPLE_ASSIGN
tan.vol[2].T_start = tan.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7178};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3239]] /* tan.vol[2].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2874]] /* tan.T_start PARAM */);
  threadData->lastEquationSolved = 7178;
}

/*
equation index: 7179
type: SIMPLE_ASSIGN
tan.vol[2].state_start.T = tan.vol[2].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7179};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3331]] /* tan.vol[2].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3239]] /* tan.vol[2].T_start PARAM */);
  threadData->lastEquationSolved = 7179;
}

/*
equation index: 7180
type: SIMPLE_ASSIGN
tan.vol[2].p_start = tan.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7180};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3311]] /* tan.vol[2].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3223]] /* tan.p_start PARAM */);
  threadData->lastEquationSolved = 7180;
}

/*
equation index: 7181
type: SIMPLE_ASSIGN
tan.vol[2].state_start.p = tan.vol[2].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7181};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3335]] /* tan.vol[2].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3311]] /* tan.vol[2].p_start PARAM */);
  threadData->lastEquationSolved = 7181;
}

/*
equation index: 7185
type: SIMPLE_ASSIGN
tan.vol[2].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.Medium.density(tan.vol[2].state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7185};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_ThermodynamicState tmp49;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp49, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3335]] /* tan.vol[2].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3331]] /* tan.vol[2].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3319]] /* tan.vol[2].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_density(threadData, tmp49);
  threadData->lastEquationSolved = 7185;
}

/*
equation index: 7186
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.p_start = tan.vol[2].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7186};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3279]] /* tan.vol[2].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3311]] /* tan.vol[2].p_start PARAM */);
  threadData->lastEquationSolved = 7186;
}

/*
equation index: 7187
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.T_start = tan.vol[2].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7187};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3255]] /* tan.vol[2].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3239]] /* tan.vol[2].T_start PARAM */);
  threadData->lastEquationSolved = 7187;
}

/*
equation index: 7188
type: SIMPLE_ASSIGN
tan.vol[2].X_start[1] = tan.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7188};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3247]] /* tan.vol[2].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2876]] /* tan.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7188;
}

/*
equation index: 7189
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.X_start[1] = tan.vol[2].X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7189};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3259]] /* tan.vol[2].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3247]] /* tan.vol[2].X_start[1] PARAM */);
  threadData->lastEquationSolved = 7189;
}

/*
equation index: 7190
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.specificEnthalpy_pTX(tan.vol[2].dynBal.p_start, tan.vol[2].dynBal.T_start, tan.vol[2].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7190};
  real_array tmp50;
  real_array_create(&tmp50, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3259]] /* tan.vol[2].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3271]] /* tan.vol[2].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3279]] /* tan.vol[2].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3255]] /* tan.vol[2].dynBal.T_start PARAM */), tmp50);
  threadData->lastEquationSolved = 7190;
}

/*
equation index: 7195
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.setState_pTX(tan.vol[2].dynBal.p_start, tan.vol[2].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7195};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3287]] /* tan.vol[2].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3279]] /* tan.vol[2].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3255]] /* tan.vol[2].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7195;
}

/*
equation index: 7198
type: SIMPLE_ASSIGN
tan.vol[2].V = 0.25 * tan.VTan
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7198};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3243]] /* tan.vol[2].V PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2875]] /* tan.VTan PARAM */));
  threadData->lastEquationSolved = 7198;
}

/*
equation index: 7199
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.fluidVolume = tan.vol[2].V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7199};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3267]] /* tan.vol[2].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3243]] /* tan.vol[2].V PARAM */);
  threadData->lastEquationSolved = 7199;
}

/*
equation index: 7212
type: SIMPLE_ASSIGN
tan.vol[2].m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7212};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3307]] /* tan.vol[2].m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7212;
}

/*
equation index: 7223
type: SIMPLE_ASSIGN
tan.vol[1].T_start = tan.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7223};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3238]] /* tan.vol[1].T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2874]] /* tan.T_start PARAM */);
  threadData->lastEquationSolved = 7223;
}

/*
equation index: 7224
type: SIMPLE_ASSIGN
tan.vol[1].state_start.T = tan.vol[1].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7224};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3330]] /* tan.vol[1].state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3238]] /* tan.vol[1].T_start PARAM */);
  threadData->lastEquationSolved = 7224;
}

/*
equation index: 7225
type: SIMPLE_ASSIGN
tan.vol[1].p_start = tan.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7225};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3310]] /* tan.vol[1].p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3223]] /* tan.p_start PARAM */);
  threadData->lastEquationSolved = 7225;
}

/*
equation index: 7226
type: SIMPLE_ASSIGN
tan.vol[1].state_start.p = tan.vol[1].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7226};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3334]] /* tan.vol[1].state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3310]] /* tan.vol[1].p_start PARAM */);
  threadData->lastEquationSolved = 7226;
}

/*
equation index: 7230
type: SIMPLE_ASSIGN
tan.vol[1].rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.Medium.density(tan.vol[1].state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7230};
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_ThermodynamicState tmp51;
  WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp51, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3334]] /* tan.vol[1].state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3330]] /* tan.vol[1].state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3318]] /* tan.vol[1].rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_Medium_density(threadData, tmp51);
  threadData->lastEquationSolved = 7230;
}

/*
equation index: 7231
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.p_start = tan.vol[1].p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7231};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3278]] /* tan.vol[1].dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3310]] /* tan.vol[1].p_start PARAM */);
  threadData->lastEquationSolved = 7231;
}

/*
equation index: 7232
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.T_start = tan.vol[1].T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7232};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3254]] /* tan.vol[1].dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3238]] /* tan.vol[1].T_start PARAM */);
  threadData->lastEquationSolved = 7232;
}

/*
equation index: 7233
type: SIMPLE_ASSIGN
tan.vol[1].X_start[1] = tan.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7233};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3246]] /* tan.vol[1].X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2876]] /* tan.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7233;
}

/*
equation index: 7234
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.X_start[1] = tan.vol[1].X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7234};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3258]] /* tan.vol[1].dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3246]] /* tan.vol[1].X_start[1] PARAM */);
  threadData->lastEquationSolved = 7234;
}

/*
equation index: 7235
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.specificEnthalpy_pTX(tan.vol[1].dynBal.p_start, tan.vol[1].dynBal.T_start, tan.vol[1].dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7235};
  real_array tmp52;
  real_array_create(&tmp52, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3258]] /* tan.vol[1].dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3270]] /* tan.vol[1].dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3278]] /* tan.vol[1].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3254]] /* tan.vol[1].dynBal.T_start PARAM */), tmp52);
  threadData->lastEquationSolved = 7235;
}

/*
equation index: 7240
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.vol.dynBal.Medium.setState_pTX(tan.vol[1].dynBal.p_start, tan.vol[1].dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7240};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3286]] /* tan.vol[1].dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3278]] /* tan.vol[1].dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3254]] /* tan.vol[1].dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7240;
}

/*
equation index: 7243
type: SIMPLE_ASSIGN
tan.vol[1].V = 0.25 * tan.VTan
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7243};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3242]] /* tan.vol[1].V PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2875]] /* tan.VTan PARAM */));
  threadData->lastEquationSolved = 7243;
}

/*
equation index: 7244
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.fluidVolume = tan.vol[1].V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7244};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3266]] /* tan.vol[1].dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3242]] /* tan.vol[1].V PARAM */);
  threadData->lastEquationSolved = 7244;
}

/*
equation index: 7257
type: SIMPLE_ASSIGN
tan.vol[1].m_flow_small = tan.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7257};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3306]] /* tan.vol[1].m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3222]] /* tan.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7257;
}

/*
equation index: 7282
type: SIMPLE_ASSIGN
junCHWRet.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWRet.m_flow_nominal[1]) + abs(junCHWRet.m_flow_nominal[2]) + abs(junCHWRet.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7282};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1530]] /* junCHWRet.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1532]] /* junCHWRet.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1533]] /* junCHWRet.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1534]] /* junCHWRet.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 7282;
}

/*
equation index: 7283
type: SIMPLE_ASSIGN
junCHWRet.vol.m_flow_nominal = junCHWRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7283};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1597]] /* junCHWRet.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1530]] /* junCHWRet.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7283;
}

/*
equation index: 7284
type: SIMPLE_ASSIGN
junCHWRet.vol.tau = junCHWRet.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7284};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1606]] /* junCHWRet.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1579]] /* junCHWRet.tau PARAM */);
  threadData->lastEquationSolved = 7284;
}

/*
equation index: 7285
type: SIMPLE_ASSIGN
junCHWRet.vol.V_nominal = 0.0010044335697769957 * junCHWRet.vol.m_flow_nominal * junCHWRet.vol.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7285};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1582]] /* junCHWRet.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1597]] /* junCHWRet.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1606]] /* junCHWRet.vol.tau PARAM */)));
  threadData->lastEquationSolved = 7285;
}

/*
equation index: 7288
type: SIMPLE_ASSIGN
junCHWRet.vol.T_start = junCHWRet.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7288};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1580]] /* junCHWRet.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1524]] /* junCHWRet.T_start PARAM */);
  threadData->lastEquationSolved = 7288;
}

/*
equation index: 7289
type: SIMPLE_ASSIGN
junCHWRet.vol.state_start.T = junCHWRet.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7289};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1604]] /* junCHWRet.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1580]] /* junCHWRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 7289;
}

/*
equation index: 7290
type: SIMPLE_ASSIGN
junCHWRet.vol.p_start = junCHWRet.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7290};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1599]] /* junCHWRet.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1536]] /* junCHWRet.p_start PARAM */);
  threadData->lastEquationSolved = 7290;
}

/*
equation index: 7291
type: SIMPLE_ASSIGN
junCHWRet.vol.state_start.p = junCHWRet.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7291};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1605]] /* junCHWRet.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1599]] /* junCHWRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 7291;
}

/*
equation index: 7295
type: SIMPLE_ASSIGN
junCHWRet.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet.vol.Medium.density(junCHWRet.vol.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7295};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_vol_Medium_ThermodynamicState tmp53;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp53, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1605]] /* junCHWRet.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1604]] /* junCHWRet.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1601]] /* junCHWRet.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_vol_Medium_density(threadData, tmp53);
  threadData->lastEquationSolved = 7295;
}

/*
equation index: 7296
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.p_start = junCHWRet.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7296};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* junCHWRet.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1599]] /* junCHWRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 7296;
}

/*
equation index: 7297
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.T_start = junCHWRet.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7297};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1585]] /* junCHWRet.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1580]] /* junCHWRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 7297;
}

/*
equation index: 7298
type: SIMPLE_ASSIGN
junCHWRet.vol.X_start[1] = junCHWRet.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7298};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1583]] /* junCHWRet.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1525]] /* junCHWRet.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7298;
}

/*
equation index: 7299
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.X_start[1] = junCHWRet.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7299};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1586]] /* junCHWRet.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1583]] /* junCHWRet.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7299;
}

/*
equation index: 7300
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWRet.vol.dynBal.p_start, junCHWRet.vol.dynBal.T_start, junCHWRet.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7300};
  real_array tmp54;
  real_array_create(&tmp54, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1586]] /* junCHWRet.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1589]] /* junCHWRet.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* junCHWRet.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1585]] /* junCHWRet.vol.dynBal.T_start PARAM */), tmp54);
  threadData->lastEquationSolved = 7300;
}

/*
equation index: 7305
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet.vol.dynBal.Medium.setState_pTX(junCHWRet.vol.dynBal.p_start, junCHWRet.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7305};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1593]] /* junCHWRet.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* junCHWRet.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1585]] /* junCHWRet.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7305;
}

/*
equation index: 7308
type: SIMPLE_ASSIGN
junCHWRet.vol.V = junCHWRet.vol.V_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7308};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1581]] /* junCHWRet.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1582]] /* junCHWRet.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 7308;
}

/*
equation index: 7309
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.fluidVolume = junCHWRet.vol.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7309};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1588]] /* junCHWRet.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1581]] /* junCHWRet.vol.V PARAM */);
  threadData->lastEquationSolved = 7309;
}

/*
equation index: 7322
type: SIMPLE_ASSIGN
junCHWRet.vol.m_flow_small = 1e-4 * abs(junCHWRet.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7322};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1598]] /* junCHWRet.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1597]] /* junCHWRet.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7322;
}
OMC_DISABLE_OPT
void WaterCooledChillerExample_WaterCooledChillerExample7_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[478])(DATA*, threadData_t*) = {
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5797,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5798,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5799,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5800,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5801,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5802,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5804,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5805,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5807,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1974,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1973,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1972,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1971,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1970,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1969,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1968,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1967,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1966,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1965,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1964,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1963,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1962,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1961,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_419,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_418,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1960,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1959,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_417,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1958,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1957,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1956,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1955,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1954,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1953,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1952,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1951,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1950,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1949,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1948,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1947,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1946,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1945,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1944,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1943,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1942,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1941,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1940,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1939,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1937,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1936,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1935,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1934,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1933,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1932,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1931,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1930,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1929,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1928,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1926,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1925,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1922,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1921,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1920,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1919,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1918,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1917,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1916,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1915,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1888,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1887,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1886,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1885,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1884,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1883,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1882,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1881,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1880,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1879,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1878,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1877,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1876,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1875,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1874,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1873,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1872,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1871,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1870,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1869,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1868,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1867,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1866,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1865,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5926,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5927,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5931,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5932,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5947,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5948,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5952,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5953,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5968,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5969,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5973,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5974,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5989,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5990,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5994,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5995,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6010,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6011,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6015,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6016,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6070,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6071,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6075,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6076,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6077,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6078,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6079,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6080,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6081,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6095,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6101,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6103,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6105,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6106,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6109,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6110,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6111,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6112,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6116,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6117,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6118,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6119,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6120,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6121,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6126,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6129,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6130,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6143,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6152,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6153,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6154,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6166,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6170,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6171,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6172,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6173,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6233,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6234,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6238,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6239,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6240,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6241,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6242,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6243,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6244,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6258,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6264,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6266,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6268,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6269,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6272,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6273,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6274,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6275,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6279,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6280,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6281,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6282,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6283,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6284,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6289,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6292,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6293,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6306,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6315,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6316,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6317,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6329,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6333,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6334,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6335,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6336,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6359,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6360,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6361,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6362,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6365,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6366,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6367,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6368,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6372,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6373,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6374,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6375,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6376,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6377,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6382,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6385,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6386,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6399,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6412,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6413,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6416,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6425,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6432,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6433,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6436,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6445,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6452,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6453,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6456,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6465,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6467,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6485,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6486,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6487,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6488,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6491,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6492,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6493,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6494,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6498,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6499,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6500,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6501,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6502,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6503,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6508,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6511,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6512,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6525,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6538,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6539,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6542,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6551,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6558,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6559,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6562,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6571,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6578,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6579,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6582,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6591,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6593,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6606,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6607,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6608,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6609,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6614,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6615,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6616,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6617,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6618,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6619,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6620,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6621,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6622,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6623,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6624,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6625,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6626,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6627,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6628,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6629,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6630,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6631,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6632,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6633,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6634,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6635,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6636,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6637,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6638,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6639,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6640,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6641,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6642,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6643,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6646,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6648,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6652,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6654,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6658,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6660,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6664,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6666,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6670,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6672,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6676,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6678,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6684,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6685,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6686,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6687,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6688,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6689,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6690,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6691,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6692,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6695,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6696,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6697,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6698,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6702,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6703,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6704,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6705,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6706,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6707,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6712,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6715,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6716,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6717,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6740,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6741,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6742,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6743,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6747,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6748,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6749,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6750,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6751,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6752,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6757,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6760,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6761,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6784,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6785,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6786,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6787,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6791,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6792,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6793,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6794,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6795,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6796,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6801,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6804,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6805,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6828,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6829,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6830,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6831,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6835,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6836,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6837,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6838,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6839,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6840,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6845,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6848,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6849,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6872,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6873,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6874,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6875,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6879,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6880,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6881,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6882,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6883,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6884,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6889,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6892,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6893,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6916,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6917,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6918,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6919,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6923,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6924,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6925,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6926,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6927,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6928,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6933,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6936,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6937,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6966,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6993,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7012,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7018,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7026,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7034,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7042,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7050,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7064,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7065,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7066,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7068,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7069,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7070,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7071,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7074,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7075,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7076,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7077,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7078,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7079,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7082,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7083,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7084,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7088,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7089,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7090,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7091,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7095,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7096,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7097,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7098,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7099,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7100,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7105,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7108,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7109,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7122,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7133,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7134,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7135,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7136,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7140,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7141,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7142,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7143,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7144,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7145,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7150,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7153,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7154,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7167,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7178,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7179,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7180,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7181,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7185,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7186,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7187,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7188,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7189,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7190,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7195,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7198,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7199,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7212,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7223,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7224,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7225,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7226,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7230,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7231,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7232,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7233,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7234,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7235,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7240,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7243,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7244,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7257,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7282,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7283,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7284,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7285,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7288,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7289,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7290,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7291,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7295,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7296,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7297,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7298,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7299,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7300,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7305,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7308,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7309,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7322
  };
  
  for (int id = 0; id < 478; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif