/* Asserts */
#include "logic2_raw_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 10191
type: ALGORITHM

  assert(weaBus.nTot >= 0.0 and weaBus.nTot <= 1.0, "Variable violating min/max constraint: 0.0 <= weaBus.nTot <= 1.0, has value: " + String(weaBus.nTot, "g"));
*/
void logic2_raw_eqFunction_10191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10191};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,77,"Variable violating min/max constraint: 0.0 <= weaBus.nTot <= 1.0, has value: ");
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  static int tmp5 = 0;
  if(!tmp5)
  {
    tmp0 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.nTot variable */),0.0);
    tmp1 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.nTot variable */),1.0);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.nTot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta4 = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        const char* assert_cond = "(weaBus.nTot >= 0.0 and weaBus.nTot <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",686,3,691,29,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",686,3,691,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4));
        }
      }
      tmp5 = 1;
    }
  }
  threadData->lastEquationSolved = 10191;
}

/*
equation index: 10192
type: ALGORITHM

  assert(weaBus.TDryBul >= 0.0, "Variable violating min constraint: 0.0 <= weaBus.TDryBul, has value: " + String(weaBus.TDryBul, "g"));
*/
void logic2_raw_eqFunction_10192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10192};
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,69,"Variable violating min constraint: 0.0 <= weaBus.TDryBul, has value: ");
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  static int tmp10 = 0;
  if(!tmp10)
  {
    tmp6 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* weaBus.TDryBul variable */),0.0);
    if(!tmp6)
    {
      tmp8 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* weaBus.TDryBul variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta9 = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        const char* assert_cond = "(weaBus.TDryBul >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",828,3,833,29,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta9));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",828,3,833,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta9));
        }
      }
      tmp10 = 1;
    }
  }
  threadData->lastEquationSolved = 10192;
}

/*
equation index: 10193
type: ALGORITHM

  assert(weaBus.relHum >= 0.0 and weaBus.relHum <= 1.0, "Variable violating min/max constraint: 0.0 <= weaBus.relHum <= 1.0, has value: " + String(weaBus.relHum, "g"));
*/
void logic2_raw_eqFunction_10193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10193};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,79,"Variable violating min/max constraint: 0.0 <= weaBus.relHum <= 1.0, has value: ");
  modelica_string tmp14;
  modelica_metatype tmpMeta15;
  static int tmp16 = 0;
  if(!tmp16)
  {
    tmp11 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* weaBus.relHum variable */),0.0);
    tmp12 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* weaBus.relHum variable */),1.0);
    if(!(tmp11 && tmp12))
    {
      tmp14 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* weaBus.relHum variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta15 = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      {
        const char* assert_cond = "(weaBus.relHum >= 0.0 and weaBus.relHum <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",822,3,827,29,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta15));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",822,3,827,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta15));
        }
      }
      tmp16 = 1;
    }
  }
  threadData->lastEquationSolved = 10193;
}

/*
equation index: 10194
type: ALGORITHM

  assert(weaBus.HHorIR >= 0.0, "Variable violating min constraint: 0.0 <= weaBus.HHorIR, has value: " + String(weaBus.HHorIR, "g"));
*/
void logic2_raw_eqFunction_10194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10194};
  modelica_boolean tmp17;
  static const MMC_DEFSTRINGLIT(tmp18,68,"Variable violating min constraint: 0.0 <= weaBus.HHorIR, has value: ");
  modelica_string tmp19;
  modelica_metatype tmpMeta20;
  static int tmp21 = 0;
  if(!tmp21)
  {
    tmp17 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1267]] /* weaBus.HHorIR variable */),0.0);
    if(!tmp17)
    {
      tmp19 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1267]] /* weaBus.HHorIR variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta20 = stringAppend(MMC_REFSTRINGLIT(tmp18),tmp19);
      {
        const char* assert_cond = "(weaBus.HHorIR >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",728,3,733,29,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta20));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",728,3,733,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta20));
        }
      }
      tmp21 = 1;
    }
  }
  threadData->lastEquationSolved = 10194;
}

/*
equation index: 10195
type: ALGORITHM

  assert(weaBus.nOpa >= 0.0 and weaBus.nOpa <= 1.0, "Variable violating min/max constraint: 0.0 <= weaBus.nOpa <= 1.0, has value: " + String(weaBus.nOpa, "g"));
*/
void logic2_raw_eqFunction_10195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10195};
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,77,"Variable violating min/max constraint: 0.0 <= weaBus.nOpa <= 1.0, has value: ");
  modelica_string tmp25;
  modelica_metatype tmpMeta26;
  static int tmp27 = 0;
  if(!tmp27)
  {
    tmp22 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* weaBus.nOpa variable */),0.0);
    tmp23 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* weaBus.nOpa variable */),1.0);
    if(!(tmp22 && tmp23))
    {
      tmp25 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* weaBus.nOpa variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta26 = stringAppend(MMC_REFSTRINGLIT(tmp24),tmp25);
      {
        const char* assert_cond = "(weaBus.nOpa >= 0.0 and weaBus.nOpa <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",692,3,697,29,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta26));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",692,3,697,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta26));
        }
      }
      tmp27 = 1;
    }
  }
  threadData->lastEquationSolved = 10195;
}

/*
equation index: 10196
type: ALGORITHM

  assert(weaBus.TWetBul >= 0.0, "Variable violating min constraint: 0.0 <= weaBus.TWetBul, has value: " + String(weaBus.TWetBul, "g"));
*/
void logic2_raw_eqFunction_10196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10196};
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,69,"Variable violating min constraint: 0.0 <= weaBus.TWetBul, has value: ");
  modelica_string tmp30;
  modelica_metatype tmpMeta31;
  static int tmp32 = 0;
  if(!tmp32)
  {
    tmp28 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */),0.0);
    if(!tmp28)
    {
      tmp30 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta31 = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        const char* assert_cond = "(weaBus.TWetBul >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",857,3,862,29,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta31));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",857,3,862,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta31));
        }
      }
      tmp32 = 1;
    }
  }
  threadData->lastEquationSolved = 10196;
}

/*
equation index: 10197
type: ALGORITHM

  assert(fanSup.heatPort.T >= 1.0 and fanSup.heatPort.T <= 1e4, "Variable violating min/max constraint: 1.0 <= fanSup.heatPort.T <= 1e4, has value: " + String(fanSup.heatPort.T, "g"));
*/
void logic2_raw_eqFunction_10197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10197};
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  static const MMC_DEFSTRINGLIT(tmp35,83,"Variable violating min/max constraint: 1.0 <= fanSup.heatPort.T <= 1e4, has value: ");
  modelica_string tmp36;
  modelica_metatype tmpMeta37;
  static int tmp38 = 0;
  if(!tmp38)
  {
    tmp33 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[864]] /* fanSup.heatPort.T variable */),1.0);
    tmp34 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[864]] /* fanSup.heatPort.T variable */),1e4);
    if(!(tmp33 && tmp34))
    {
      tmp36 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[864]] /* fanSup.heatPort.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta37 = stringAppend(MMC_REFSTRINGLIT(tmp35),tmp36);
      {
        const char* assert_cond = "(fanSup.heatPort.T >= 1.0 and fanSup.heatPort.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta37));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta37));
        }
      }
      tmp38 = 1;
    }
  }
  threadData->lastEquationSolved = 10197;
}

/*
equation index: 10198
type: ALGORITHM

  assert(fanSup.vol.Xi[1] >= 0.0 and fanSup.vol.Xi[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= fanSup.vol.Xi[1] <= 1.0, has value: " + String(fanSup.vol.Xi[1], "g"));
*/
void logic2_raw_eqFunction_10198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10198};
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,82,"Variable violating min/max constraint: 0.0 <= fanSup.vol.Xi[1] <= 1.0, has value: ");
  modelica_string tmp42;
  modelica_metatype tmpMeta43;
  static int tmp44 = 0;
  if(!tmp44)
  {
    tmp39 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[879]] /* fanSup.vol.Xi[1] variable */),0.0);
    tmp40 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[879]] /* fanSup.vol.Xi[1] variable */),1.0);
    if(!(tmp39 && tmp40))
    {
      tmp42 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[879]] /* fanSup.vol.Xi[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta43 = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        const char* assert_cond = "(fanSup.vol.Xi[1] >= 0.0 and fanSup.vol.Xi[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",45,3,46,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta43));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",45,3,46,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta43));
        }
      }
      tmp44 = 1;
    }
  }
  threadData->lastEquationSolved = 10198;
}

/*
equation index: 10199
type: ALGORITHM

  assert(fanSup.rho_inlet.y >= 0.0, "Variable violating min constraint: 0.0 <= fanSup.rho_inlet.y, has value: " + String(fanSup.rho_inlet.y, "g"));
*/
void logic2_raw_eqFunction_10199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10199};
  modelica_boolean tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,73,"Variable violating min constraint: 0.0 <= fanSup.rho_inlet.y, has value: ");
  modelica_string tmp47;
  modelica_metatype tmpMeta48;
  static int tmp49 = 0;
  if(!tmp49)
  {
    tmp45 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[870]] /* fanSup.rho_inlet.y variable */),0.0);
    if(!tmp45)
    {
      tmp47 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[870]] /* fanSup.rho_inlet.y variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta48 = stringAppend(MMC_REFSTRINGLIT(tmp46),tmp47);
      {
        const char* assert_cond = "(fanSup.rho_inlet.y >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Sources.mo",10,5,12,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta48));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Sources.mo",10,5,12,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta48));
        }
      }
      tmp49 = 1;
    }
  }
  threadData->lastEquationSolved = 10199;
}

/*
equation index: 10200
type: ALGORITHM

  assert(cooCoi.port_b1.h_outflow >= -1e10 and cooCoi.port_b1.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= cooCoi.port_b1.h_outflow <= 1e10, has value: " + String(cooCoi.port_b1.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10200};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,93,"Variable violating min/max constraint: -1e10 <= cooCoi.port_b1.h_outflow <= 1e10, has value: ");
  modelica_string tmp53;
  modelica_metatype tmpMeta54;
  static int tmp55 = 0;
  if(!tmp55)
  {
    tmp50 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.port_b1.h_outflow variable */),-1e10);
    tmp51 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.port_b1.h_outflow variable */),1e10);
    if(!(tmp50 && tmp51))
    {
      tmp53 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.port_b1.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta54 = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      {
        const char* assert_cond = "(cooCoi.port_b1.h_outflow >= -1e10 and cooCoi.port_b1.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta54));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta54));
        }
      }
      tmp55 = 1;
    }
  }
  threadData->lastEquationSolved = 10200;
}

/*
equation index: 10201
type: ALGORITHM

  assert(cooCoi.port_a2.h_outflow >= -1e10 and cooCoi.port_a2.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= cooCoi.port_a2.h_outflow <= 1e10, has value: " + String(cooCoi.port_a2.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10201};
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  static const MMC_DEFSTRINGLIT(tmp58,93,"Variable violating min/max constraint: -1e10 <= cooCoi.port_a2.h_outflow <= 1e10, has value: ");
  modelica_string tmp59;
  modelica_metatype tmpMeta60;
  static int tmp61 = 0;
  if(!tmp61)
  {
    tmp56 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.port_a2.h_outflow variable */),-1e10);
    tmp57 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.port_a2.h_outflow variable */),1e10);
    if(!(tmp56 && tmp57))
    {
      tmp59 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.port_a2.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta60 = stringAppend(MMC_REFSTRINGLIT(tmp58),tmp59);
      {
        const char* assert_cond = "(cooCoi.port_a2.h_outflow >= -1e10 and cooCoi.port_a2.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta60));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta60));
        }
      }
      tmp61 = 1;
    }
  }
  threadData->lastEquationSolved = 10201;
}

/*
equation index: 10202
type: ALGORITHM

  assert(cooCoi.m1_flow >= -1e5 and cooCoi.m1_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= cooCoi.m1_flow <= 1e5, has value: " + String(cooCoi.m1_flow, "g"));
*/
void logic2_raw_eqFunction_10202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10202};
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,81,"Variable violating min/max constraint: -1e5 <= cooCoi.m1_flow <= 1e5, has value: ");
  modelica_string tmp65;
  modelica_metatype tmpMeta66;
  static int tmp67 = 0;
  if(!tmp67)
  {
    tmp62 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */),-1e5);
    tmp63 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */),1e5);
    if(!(tmp62 && tmp63))
    {
      tmp65 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta66 = stringAppend(MMC_REFSTRINGLIT(tmp64),tmp65);
      {
        const char* assert_cond = "(cooCoi.m1_flow >= -1e5 and cooCoi.m1_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialFourPortInterface.mo",22,3,23,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta66));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialFourPortInterface.mo",22,3,23,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta66));
        }
      }
      tmp67 = 1;
    }
  }
  threadData->lastEquationSolved = 10202;
}

/*
equation index: 10203
type: ALGORITHM

  assert(cooCoi.m2_flow >= -1e5 and cooCoi.m2_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= cooCoi.m2_flow <= 1e5, has value: " + String(cooCoi.m2_flow, "g"));
*/
void logic2_raw_eqFunction_10203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10203};
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  static const MMC_DEFSTRINGLIT(tmp70,81,"Variable violating min/max constraint: -1e5 <= cooCoi.m2_flow <= 1e5, has value: ");
  modelica_string tmp71;
  modelica_metatype tmpMeta72;
  static int tmp73 = 0;
  if(!tmp73)
  {
    tmp68 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */),-1e5);
    tmp69 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */),1e5);
    if(!(tmp68 && tmp69))
    {
      tmp71 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta72 = stringAppend(MMC_REFSTRINGLIT(tmp70),tmp71);
      {
        const char* assert_cond = "(cooCoi.m2_flow >= -1e5 and cooCoi.m2_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialFourPortInterface.mo",27,3,28,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta72));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialFourPortInterface.mo",27,3,28,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta72));
        }
      }
      tmp73 = 1;
    }
  }
  threadData->lastEquationSolved = 10203;
}

/*
equation index: 10204
type: ALGORITHM

  assert(cooCoi.state_a1_inflow.T >= 1.0 and cooCoi.state_a1_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.state_a1_inflow.T <= 1e4, has value: " + String(cooCoi.state_a1_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10204};
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  static const MMC_DEFSTRINGLIT(tmp76,90,"Variable violating min/max constraint: 1.0 <= cooCoi.state_a1_inflow.T <= 1e4, has value: ");
  modelica_string tmp77;
  modelica_metatype tmpMeta78;
  static int tmp79 = 0;
  if(!tmp79)
  {
    tmp74 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.state_a1_inflow.T variable */),1.0);
    tmp75 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.state_a1_inflow.T variable */),1e4);
    if(!(tmp74 && tmp75))
    {
      tmp77 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.state_a1_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta78 = stringAppend(MMC_REFSTRINGLIT(tmp76),tmp77);
      {
        const char* assert_cond = "(cooCoi.state_a1_inflow.T >= 1.0 and cooCoi.state_a1_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta78));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta78));
        }
      }
      tmp79 = 1;
    }
  }
  threadData->lastEquationSolved = 10204;
}

/*
equation index: 10205
type: ALGORITHM

  assert(cooCoi.state_a2_inflow.T >= 1.0 and cooCoi.state_a2_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.state_a2_inflow.T <= 1e4, has value: " + String(cooCoi.state_a2_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10205};
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  static const MMC_DEFSTRINGLIT(tmp82,90,"Variable violating min/max constraint: 1.0 <= cooCoi.state_a2_inflow.T <= 1e4, has value: ");
  modelica_string tmp83;
  modelica_metatype tmpMeta84;
  static int tmp85 = 0;
  if(!tmp85)
  {
    tmp80 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* cooCoi.state_a2_inflow.T variable */),1.0);
    tmp81 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* cooCoi.state_a2_inflow.T variable */),1e4);
    if(!(tmp80 && tmp81))
    {
      tmp83 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* cooCoi.state_a2_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta84 = stringAppend(MMC_REFSTRINGLIT(tmp82),tmp83);
      {
        const char* assert_cond = "(cooCoi.state_a2_inflow.T >= 1.0 and cooCoi.state_a2_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta84));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta84));
        }
      }
      tmp85 = 1;
    }
  }
  threadData->lastEquationSolved = 10205;
}

/*
equation index: 10206
type: ALGORITHM

  assert(cooCoi.state_a2_inflow.X[2] >= 0.0 and cooCoi.state_a2_inflow.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= cooCoi.state_a2_inflow.X[2] <= 1.0, has value: " + String(cooCoi.state_a2_inflow.X[2], "g"));
*/
void logic2_raw_eqFunction_10206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10206};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  static const MMC_DEFSTRINGLIT(tmp88,93,"Variable violating min/max constraint: 0.0 <= cooCoi.state_a2_inflow.X[2] <= 1.0, has value: ");
  modelica_string tmp89;
  modelica_metatype tmpMeta90;
  static int tmp91 = 0;
  if(!tmp91)
  {
    tmp86 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* cooCoi.state_a2_inflow.X[2] variable */),0.0);
    tmp87 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* cooCoi.state_a2_inflow.X[2] variable */),1.0);
    if(!(tmp86 && tmp87))
    {
      tmp89 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* cooCoi.state_a2_inflow.X[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta90 = stringAppend(MMC_REFSTRINGLIT(tmp88),tmp89);
      {
        const char* assert_cond = "(cooCoi.state_a2_inflow.X[2] >= 0.0 and cooCoi.state_a2_inflow.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta90));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta90));
        }
      }
      tmp91 = 1;
    }
  }
  threadData->lastEquationSolved = 10206;
}

/*
equation index: 10207
type: ALGORITHM

  assert(cooCoi.state_b2_inflow.T >= 1.0 and cooCoi.state_b2_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.state_b2_inflow.T <= 1e4, has value: " + String(cooCoi.state_b2_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10207};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  static const MMC_DEFSTRINGLIT(tmp94,90,"Variable violating min/max constraint: 1.0 <= cooCoi.state_b2_inflow.T <= 1e4, has value: ");
  modelica_string tmp95;
  modelica_metatype tmpMeta96;
  static int tmp97 = 0;
  if(!tmp97)
  {
    tmp92 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[701]] /* cooCoi.state_b2_inflow.T variable */),1.0);
    tmp93 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[701]] /* cooCoi.state_b2_inflow.T variable */),1e4);
    if(!(tmp92 && tmp93))
    {
      tmp95 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[701]] /* cooCoi.state_b2_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta96 = stringAppend(MMC_REFSTRINGLIT(tmp94),tmp95);
      {
        const char* assert_cond = "(cooCoi.state_b2_inflow.T >= 1.0 and cooCoi.state_b2_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta96));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta96));
        }
      }
      tmp97 = 1;
    }
  }
  threadData->lastEquationSolved = 10207;
}

/*
equation index: 10208
type: ALGORITHM

  assert(cooCoi.state_b2_inflow.X[2] >= 0.0 and cooCoi.state_b2_inflow.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= cooCoi.state_b2_inflow.X[2] <= 1.0, has value: " + String(cooCoi.state_b2_inflow.X[2], "g"));
*/
void logic2_raw_eqFunction_10208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10208};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  static const MMC_DEFSTRINGLIT(tmp100,93,"Variable violating min/max constraint: 0.0 <= cooCoi.state_b2_inflow.X[2] <= 1.0, has value: ");
  modelica_string tmp101;
  modelica_metatype tmpMeta102;
  static int tmp103 = 0;
  if(!tmp103)
  {
    tmp98 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.state_b2_inflow.X[2] variable */),0.0);
    tmp99 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.state_b2_inflow.X[2] variable */),1.0);
    if(!(tmp98 && tmp99))
    {
      tmp101 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.state_b2_inflow.X[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta102 = stringAppend(MMC_REFSTRINGLIT(tmp100),tmp101);
      {
        const char* assert_cond = "(cooCoi.state_b2_inflow.X[2] >= 0.0 and cooCoi.state_b2_inflow.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta102));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta102));
        }
      }
      tmp103 = 1;
    }
  }
  threadData->lastEquationSolved = 10208;
}

/*
equation index: 10209
type: ALGORITHM

  assert(cooCoi.T1[1] >= 1.0 and cooCoi.T1[1] <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.T1[1] <= 1e4, has value: " + String(cooCoi.T1[1], "g"));
*/
void logic2_raw_eqFunction_10209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10209};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  static const MMC_DEFSTRINGLIT(tmp106,78,"Variable violating min/max constraint: 1.0 <= cooCoi.T1[1] <= 1e4, has value: ");
  modelica_string tmp107;
  modelica_metatype tmpMeta108;
  static int tmp109 = 0;
  if(!tmp109)
  {
    tmp104 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[466]] /* cooCoi.T1[1] variable */),1.0);
    tmp105 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[466]] /* cooCoi.T1[1] variable */),1e4);
    if(!(tmp104 && tmp105))
    {
      tmp107 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[466]] /* cooCoi.T1[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta108 = stringAppend(MMC_REFSTRINGLIT(tmp106),tmp107);
      {
        const char* assert_cond = "(cooCoi.T1[1] >= 1.0 and cooCoi.T1[1] <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",58,3,58,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta108));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",58,3,58,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta108));
        }
      }
      tmp109 = 1;
    }
  }
  threadData->lastEquationSolved = 10209;
}

/*
equation index: 10210
type: ALGORITHM

  assert(cooCoi.T1[2] >= 1.0 and cooCoi.T1[2] <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.T1[2] <= 1e4, has value: " + String(cooCoi.T1[2], "g"));
*/
void logic2_raw_eqFunction_10210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10210};
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  static const MMC_DEFSTRINGLIT(tmp112,78,"Variable violating min/max constraint: 1.0 <= cooCoi.T1[2] <= 1e4, has value: ");
  modelica_string tmp113;
  modelica_metatype tmpMeta114;
  static int tmp115 = 0;
  if(!tmp115)
  {
    tmp110 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[467]] /* cooCoi.T1[2] variable */),1.0);
    tmp111 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[467]] /* cooCoi.T1[2] variable */),1e4);
    if(!(tmp110 && tmp111))
    {
      tmp113 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[467]] /* cooCoi.T1[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta114 = stringAppend(MMC_REFSTRINGLIT(tmp112),tmp113);
      {
        const char* assert_cond = "(cooCoi.T1[2] >= 1.0 and cooCoi.T1[2] <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",58,3,58,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta114));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",58,3,58,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta114));
        }
      }
      tmp115 = 1;
    }
  }
  threadData->lastEquationSolved = 10210;
}

/*
equation index: 10211
type: ALGORITHM

  assert(cooCoi.T1[3] >= 1.0 and cooCoi.T1[3] <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.T1[3] <= 1e4, has value: " + String(cooCoi.T1[3], "g"));
*/
void logic2_raw_eqFunction_10211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10211};
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  static const MMC_DEFSTRINGLIT(tmp118,78,"Variable violating min/max constraint: 1.0 <= cooCoi.T1[3] <= 1e4, has value: ");
  modelica_string tmp119;
  modelica_metatype tmpMeta120;
  static int tmp121 = 0;
  if(!tmp121)
  {
    tmp116 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[468]] /* cooCoi.T1[3] variable */),1.0);
    tmp117 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[468]] /* cooCoi.T1[3] variable */),1e4);
    if(!(tmp116 && tmp117))
    {
      tmp119 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[468]] /* cooCoi.T1[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta120 = stringAppend(MMC_REFSTRINGLIT(tmp118),tmp119);
      {
        const char* assert_cond = "(cooCoi.T1[3] >= 1.0 and cooCoi.T1[3] <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",58,3,58,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta120));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",58,3,58,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta120));
        }
      }
      tmp121 = 1;
    }
  }
  threadData->lastEquationSolved = 10211;
}

/*
equation index: 10212
type: ALGORITHM

  assert(cooCoi.T1[4] >= 1.0 and cooCoi.T1[4] <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.T1[4] <= 1e4, has value: " + String(cooCoi.T1[4], "g"));
*/
void logic2_raw_eqFunction_10212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10212};
  modelica_boolean tmp122;
  modelica_boolean tmp123;
  static const MMC_DEFSTRINGLIT(tmp124,78,"Variable violating min/max constraint: 1.0 <= cooCoi.T1[4] <= 1e4, has value: ");
  modelica_string tmp125;
  modelica_metatype tmpMeta126;
  static int tmp127 = 0;
  if(!tmp127)
  {
    tmp122 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[469]] /* cooCoi.T1[4] variable */),1.0);
    tmp123 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[469]] /* cooCoi.T1[4] variable */),1e4);
    if(!(tmp122 && tmp123))
    {
      tmp125 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[469]] /* cooCoi.T1[4] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta126 = stringAppend(MMC_REFSTRINGLIT(tmp124),tmp125);
      {
        const char* assert_cond = "(cooCoi.T1[4] >= 1.0 and cooCoi.T1[4] <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",58,3,58,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta126));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",58,3,58,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta126));
        }
      }
      tmp127 = 1;
    }
  }
  threadData->lastEquationSolved = 10212;
}

/*
equation index: 10213
type: ALGORITHM

  assert(cooCoi.T2[1] >= 1.0 and cooCoi.T2[1] <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.T2[1] <= 1e4, has value: " + String(cooCoi.T2[1], "g"));
*/
void logic2_raw_eqFunction_10213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10213};
  modelica_boolean tmp128;
  modelica_boolean tmp129;
  static const MMC_DEFSTRINGLIT(tmp130,78,"Variable violating min/max constraint: 1.0 <= cooCoi.T2[1] <= 1e4, has value: ");
  modelica_string tmp131;
  modelica_metatype tmpMeta132;
  static int tmp133 = 0;
  if(!tmp133)
  {
    tmp128 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* cooCoi.T2[1] variable */),1.0);
    tmp129 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* cooCoi.T2[1] variable */),1e4);
    if(!(tmp128 && tmp129))
    {
      tmp131 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* cooCoi.T2[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta132 = stringAppend(MMC_REFSTRINGLIT(tmp130),tmp131);
      {
        const char* assert_cond = "(cooCoi.T2[1] >= 1.0 and cooCoi.T2[1] <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",59,3,59,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta132));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",59,3,59,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta132));
        }
      }
      tmp133 = 1;
    }
  }
  threadData->lastEquationSolved = 10213;
}

/*
equation index: 10214
type: ALGORITHM

  assert(cooCoi.T2[2] >= 1.0 and cooCoi.T2[2] <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.T2[2] <= 1e4, has value: " + String(cooCoi.T2[2], "g"));
*/
void logic2_raw_eqFunction_10214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10214};
  modelica_boolean tmp134;
  modelica_boolean tmp135;
  static const MMC_DEFSTRINGLIT(tmp136,78,"Variable violating min/max constraint: 1.0 <= cooCoi.T2[2] <= 1e4, has value: ");
  modelica_string tmp137;
  modelica_metatype tmpMeta138;
  static int tmp139 = 0;
  if(!tmp139)
  {
    tmp134 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[471]] /* cooCoi.T2[2] variable */),1.0);
    tmp135 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[471]] /* cooCoi.T2[2] variable */),1e4);
    if(!(tmp134 && tmp135))
    {
      tmp137 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[471]] /* cooCoi.T2[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta138 = stringAppend(MMC_REFSTRINGLIT(tmp136),tmp137);
      {
        const char* assert_cond = "(cooCoi.T2[2] >= 1.0 and cooCoi.T2[2] <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",59,3,59,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta138));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",59,3,59,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta138));
        }
      }
      tmp139 = 1;
    }
  }
  threadData->lastEquationSolved = 10214;
}

/*
equation index: 10215
type: ALGORITHM

  assert(cooCoi.T2[3] >= 1.0 and cooCoi.T2[3] <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.T2[3] <= 1e4, has value: " + String(cooCoi.T2[3], "g"));
*/
void logic2_raw_eqFunction_10215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10215};
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  static const MMC_DEFSTRINGLIT(tmp142,78,"Variable violating min/max constraint: 1.0 <= cooCoi.T2[3] <= 1e4, has value: ");
  modelica_string tmp143;
  modelica_metatype tmpMeta144;
  static int tmp145 = 0;
  if(!tmp145)
  {
    tmp140 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[472]] /* cooCoi.T2[3] variable */),1.0);
    tmp141 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[472]] /* cooCoi.T2[3] variable */),1e4);
    if(!(tmp140 && tmp141))
    {
      tmp143 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[472]] /* cooCoi.T2[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta144 = stringAppend(MMC_REFSTRINGLIT(tmp142),tmp143);
      {
        const char* assert_cond = "(cooCoi.T2[3] >= 1.0 and cooCoi.T2[3] <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",59,3,59,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta144));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",59,3,59,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta144));
        }
      }
      tmp145 = 1;
    }
  }
  threadData->lastEquationSolved = 10215;
}

/*
equation index: 10216
type: ALGORITHM

  assert(cooCoi.T2[4] >= 1.0 and cooCoi.T2[4] <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.T2[4] <= 1e4, has value: " + String(cooCoi.T2[4], "g"));
*/
void logic2_raw_eqFunction_10216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10216};
  modelica_boolean tmp146;
  modelica_boolean tmp147;
  static const MMC_DEFSTRINGLIT(tmp148,78,"Variable violating min/max constraint: 1.0 <= cooCoi.T2[4] <= 1e4, has value: ");
  modelica_string tmp149;
  modelica_metatype tmpMeta150;
  static int tmp151 = 0;
  if(!tmp151)
  {
    tmp146 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[473]] /* cooCoi.T2[4] variable */),1.0);
    tmp147 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[473]] /* cooCoi.T2[4] variable */),1e4);
    if(!(tmp146 && tmp147))
    {
      tmp149 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[473]] /* cooCoi.T2[4] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta150 = stringAppend(MMC_REFSTRINGLIT(tmp148),tmp149);
      {
        const char* assert_cond = "(cooCoi.T2[4] >= 1.0 and cooCoi.T2[4] <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",59,3,59,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta150));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",59,3,59,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta150));
        }
      }
      tmp151 = 1;
    }
  }
  threadData->lastEquationSolved = 10216;
}

/*
equation index: 10217
type: ALGORITHM

  assert(cooCoi.temSen_1.TMed >= 1.0 and cooCoi.temSen_1.TMed <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.temSen_1.TMed <= 1e4, has value: " + String(cooCoi.temSen_1.TMed, "g"));
*/
void logic2_raw_eqFunction_10217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10217};
  modelica_boolean tmp152;
  modelica_boolean tmp153;
  static const MMC_DEFSTRINGLIT(tmp154,86,"Variable violating min/max constraint: 1.0 <= cooCoi.temSen_1.TMed <= 1e4, has value: ");
  modelica_string tmp155;
  modelica_metatype tmpMeta156;
  static int tmp157 = 0;
  if(!tmp157)
  {
    tmp152 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[703]] /* cooCoi.temSen_1.TMed variable */),1.0);
    tmp153 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[703]] /* cooCoi.temSen_1.TMed variable */),1e4);
    if(!(tmp152 && tmp153))
    {
      tmp155 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[703]] /* cooCoi.temSen_1.TMed variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta156 = stringAppend(MMC_REFSTRINGLIT(tmp154),tmp155);
      {
        const char* assert_cond = "(cooCoi.temSen_1.TMed >= 1.0 and cooCoi.temSen_1.TMed <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta156));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta156));
        }
      }
      tmp157 = 1;
    }
  }
  threadData->lastEquationSolved = 10217;
}

/*
equation index: 10218
type: ALGORITHM

  assert(cooCoi.temSen_1.T_a_inflow >= 1.0 and cooCoi.temSen_1.T_a_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.temSen_1.T_a_inflow <= 1e4, has value: " + String(cooCoi.temSen_1.T_a_inflow, "g"));
*/
void logic2_raw_eqFunction_10218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10218};
  modelica_boolean tmp158;
  modelica_boolean tmp159;
  static const MMC_DEFSTRINGLIT(tmp160,92,"Variable violating min/max constraint: 1.0 <= cooCoi.temSen_1.T_a_inflow <= 1e4, has value: ");
  modelica_string tmp161;
  modelica_metatype tmpMeta162;
  static int tmp163 = 0;
  if(!tmp163)
  {
    tmp158 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* cooCoi.temSen_1.T_a_inflow variable */),1.0);
    tmp159 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* cooCoi.temSen_1.T_a_inflow variable */),1e4);
    if(!(tmp158 && tmp159))
    {
      tmp161 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* cooCoi.temSen_1.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta162 = stringAppend(MMC_REFSTRINGLIT(tmp160),tmp161);
      {
        const char* assert_cond = "(cooCoi.temSen_1.T_a_inflow >= 1.0 and cooCoi.temSen_1.T_a_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta162));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta162));
        }
      }
      tmp163 = 1;
    }
  }
  threadData->lastEquationSolved = 10218;
}

/*
equation index: 10219
type: ALGORITHM

  assert(cooCoi.temSen_1.T_b_inflow >= 1.0 and cooCoi.temSen_1.T_b_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.temSen_1.T_b_inflow <= 1e4, has value: " + String(cooCoi.temSen_1.T_b_inflow, "g"));
*/
void logic2_raw_eqFunction_10219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10219};
  modelica_boolean tmp164;
  modelica_boolean tmp165;
  static const MMC_DEFSTRINGLIT(tmp166,92,"Variable violating min/max constraint: 1.0 <= cooCoi.temSen_1.T_b_inflow <= 1e4, has value: ");
  modelica_string tmp167;
  modelica_metatype tmpMeta168;
  static int tmp169 = 0;
  if(!tmp169)
  {
    tmp164 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* cooCoi.temSen_1.T_b_inflow variable */),1.0);
    tmp165 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* cooCoi.temSen_1.T_b_inflow variable */),1e4);
    if(!(tmp164 && tmp165))
    {
      tmp167 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* cooCoi.temSen_1.T_b_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta168 = stringAppend(MMC_REFSTRINGLIT(tmp166),tmp167);
      {
        const char* assert_cond = "(cooCoi.temSen_1.T_b_inflow >= 1.0 and cooCoi.temSen_1.T_b_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta168));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta168));
        }
      }
      tmp169 = 1;
    }
  }
  threadData->lastEquationSolved = 10219;
}

/*
equation index: 10220
type: ALGORITHM

  assert(cooCoi.temSen_2.TMed >= 1.0 and cooCoi.temSen_2.TMed <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.temSen_2.TMed <= 1e4, has value: " + String(cooCoi.temSen_2.TMed, "g"));
*/
void logic2_raw_eqFunction_10220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10220};
  modelica_boolean tmp170;
  modelica_boolean tmp171;
  static const MMC_DEFSTRINGLIT(tmp172,86,"Variable violating min/max constraint: 1.0 <= cooCoi.temSen_2.TMed <= 1e4, has value: ");
  modelica_string tmp173;
  modelica_metatype tmpMeta174;
  static int tmp175 = 0;
  if(!tmp175)
  {
    tmp170 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* cooCoi.temSen_2.TMed variable */),1.0);
    tmp171 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* cooCoi.temSen_2.TMed variable */),1e4);
    if(!(tmp170 && tmp171))
    {
      tmp173 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* cooCoi.temSen_2.TMed variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta174 = stringAppend(MMC_REFSTRINGLIT(tmp172),tmp173);
      {
        const char* assert_cond = "(cooCoi.temSen_2.TMed >= 1.0 and cooCoi.temSen_2.TMed <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta174));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta174));
        }
      }
      tmp175 = 1;
    }
  }
  threadData->lastEquationSolved = 10220;
}

/*
equation index: 10221
type: ALGORITHM

  assert(cooCoi.temSen_2.T_a_inflow >= 1.0 and cooCoi.temSen_2.T_a_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.temSen_2.T_a_inflow <= 1e4, has value: " + String(cooCoi.temSen_2.T_a_inflow, "g"));
*/
void logic2_raw_eqFunction_10221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10221};
  modelica_boolean tmp176;
  modelica_boolean tmp177;
  static const MMC_DEFSTRINGLIT(tmp178,92,"Variable violating min/max constraint: 1.0 <= cooCoi.temSen_2.T_a_inflow <= 1e4, has value: ");
  modelica_string tmp179;
  modelica_metatype tmpMeta180;
  static int tmp181 = 0;
  if(!tmp181)
  {
    tmp176 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[709]] /* cooCoi.temSen_2.T_a_inflow variable */),1.0);
    tmp177 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[709]] /* cooCoi.temSen_2.T_a_inflow variable */),1e4);
    if(!(tmp176 && tmp177))
    {
      tmp179 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[709]] /* cooCoi.temSen_2.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta180 = stringAppend(MMC_REFSTRINGLIT(tmp178),tmp179);
      {
        const char* assert_cond = "(cooCoi.temSen_2.T_a_inflow >= 1.0 and cooCoi.temSen_2.T_a_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta180));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta180));
        }
      }
      tmp181 = 1;
    }
  }
  threadData->lastEquationSolved = 10221;
}

/*
equation index: 10222
type: ALGORITHM

  assert(cooCoi.ele[1].m2_flow >= -1e5 and cooCoi.ele[1].m2_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= cooCoi.ele[1].m2_flow <= 1e5, has value: " + String(cooCoi.ele[1].m2_flow, "g"));
*/
void logic2_raw_eqFunction_10222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10222};
  modelica_boolean tmp182;
  modelica_boolean tmp183;
  static const MMC_DEFSTRINGLIT(tmp184,88,"Variable violating min/max constraint: -1e5 <= cooCoi.ele[1].m2_flow <= 1e5, has value: ");
  modelica_string tmp185;
  modelica_metatype tmpMeta186;
  static int tmp187 = 0;
  if(!tmp187)
  {
    tmp182 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */),-1e5);
    tmp183 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */),1e5);
    if(!(tmp182 && tmp183))
    {
      tmp185 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta186 = stringAppend(MMC_REFSTRINGLIT(tmp184),tmp185);
      {
        const char* assert_cond = "(cooCoi.ele[1].m2_flow >= -1e5 and cooCoi.ele[1].m2_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialFourPortInterface.mo",27,3,28,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta186));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialFourPortInterface.mo",27,3,28,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta186));
        }
      }
      tmp187 = 1;
    }
  }
  threadData->lastEquationSolved = 10222;
}

/*
equation index: 10223
type: ALGORITHM

  assert(cooCoi.ele[1].state_a1_inflow.T >= 1.0 and cooCoi.ele[1].state_a1_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[1].state_a1_inflow.T <= 1e4, has value: " + String(cooCoi.ele[1].state_a1_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10223};
  modelica_boolean tmp188;
  modelica_boolean tmp189;
  static const MMC_DEFSTRINGLIT(tmp190,97,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[1].state_a1_inflow.T <= 1e4, has value: ");
  modelica_string tmp191;
  modelica_metatype tmpMeta192;
  static int tmp193 = 0;
  if(!tmp193)
  {
    tmp188 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[536]] /* cooCoi.ele[1].state_a1_inflow.T variable */),1.0);
    tmp189 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[536]] /* cooCoi.ele[1].state_a1_inflow.T variable */),1e4);
    if(!(tmp188 && tmp189))
    {
      tmp191 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[536]] /* cooCoi.ele[1].state_a1_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta192 = stringAppend(MMC_REFSTRINGLIT(tmp190),tmp191);
      {
        const char* assert_cond = "(cooCoi.ele[1].state_a1_inflow.T >= 1.0 and cooCoi.ele[1].state_a1_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta192));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta192));
        }
      }
      tmp193 = 1;
    }
  }
  threadData->lastEquationSolved = 10223;
}

/*
equation index: 10224
type: ALGORITHM

  assert(cooCoi.ele[1].state_b1_inflow.T >= 1.0 and cooCoi.ele[1].state_b1_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[1].state_b1_inflow.T <= 1e4, has value: " + String(cooCoi.ele[1].state_b1_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10224};
  modelica_boolean tmp194;
  modelica_boolean tmp195;
  static const MMC_DEFSTRINGLIT(tmp196,97,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[1].state_b1_inflow.T <= 1e4, has value: ");
  modelica_string tmp197;
  modelica_metatype tmpMeta198;
  static int tmp199 = 0;
  if(!tmp199)
  {
    tmp194 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[548]] /* cooCoi.ele[1].state_b1_inflow.T variable */),1.0);
    tmp195 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[548]] /* cooCoi.ele[1].state_b1_inflow.T variable */),1e4);
    if(!(tmp194 && tmp195))
    {
      tmp197 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[548]] /* cooCoi.ele[1].state_b1_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta198 = stringAppend(MMC_REFSTRINGLIT(tmp196),tmp197);
      {
        const char* assert_cond = "(cooCoi.ele[1].state_b1_inflow.T >= 1.0 and cooCoi.ele[1].state_b1_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta198));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta198));
        }
      }
      tmp199 = 1;
    }
  }
  threadData->lastEquationSolved = 10224;
}

/*
equation index: 10225
type: ALGORITHM

  assert(cooCoi.ele[1].state_a2_inflow.T >= 1.0 and cooCoi.ele[1].state_a2_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[1].state_a2_inflow.T <= 1e4, has value: " + String(cooCoi.ele[1].state_a2_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10225};
  modelica_boolean tmp200;
  modelica_boolean tmp201;
  static const MMC_DEFSTRINGLIT(tmp202,97,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[1].state_a2_inflow.T <= 1e4, has value: ");
  modelica_string tmp203;
  modelica_metatype tmpMeta204;
  static int tmp205 = 0;
  if(!tmp205)
  {
    tmp200 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* cooCoi.ele[1].state_a2_inflow.T variable */),1.0);
    tmp201 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* cooCoi.ele[1].state_a2_inflow.T variable */),1e4);
    if(!(tmp200 && tmp201))
    {
      tmp203 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* cooCoi.ele[1].state_a2_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta204 = stringAppend(MMC_REFSTRINGLIT(tmp202),tmp203);
      {
        const char* assert_cond = "(cooCoi.ele[1].state_a2_inflow.T >= 1.0 and cooCoi.ele[1].state_a2_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta204));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta204));
        }
      }
      tmp205 = 1;
    }
  }
  threadData->lastEquationSolved = 10225;
}

/*
equation index: 10226
type: ALGORITHM

  assert(cooCoi.ele[1].state_a2_inflow.X[2] >= 0.0 and cooCoi.ele[1].state_a2_inflow.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[1].state_a2_inflow.X[2] <= 1.0, has value: " + String(cooCoi.ele[1].state_a2_inflow.X[2], "g"));
*/
void logic2_raw_eqFunction_10226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10226};
  modelica_boolean tmp206;
  modelica_boolean tmp207;
  static const MMC_DEFSTRINGLIT(tmp208,100,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[1].state_a2_inflow.X[2] <= 1.0, has value: ");
  modelica_string tmp209;
  modelica_metatype tmpMeta210;
  static int tmp211 = 0;
  if(!tmp211)
  {
    tmp206 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* cooCoi.ele[1].state_a2_inflow.X[2] variable */),0.0);
    tmp207 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* cooCoi.ele[1].state_a2_inflow.X[2] variable */),1.0);
    if(!(tmp206 && tmp207))
    {
      tmp209 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* cooCoi.ele[1].state_a2_inflow.X[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta210 = stringAppend(MMC_REFSTRINGLIT(tmp208),tmp209);
      {
        const char* assert_cond = "(cooCoi.ele[1].state_a2_inflow.X[2] >= 0.0 and cooCoi.ele[1].state_a2_inflow.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta210));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta210));
        }
      }
      tmp211 = 1;
    }
  }
  threadData->lastEquationSolved = 10226;
}

/*
equation index: 10227
type: ALGORITHM

  assert(cooCoi.ele[1].state_b2_inflow.T >= 1.0 and cooCoi.ele[1].state_b2_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[1].state_b2_inflow.T <= 1e4, has value: " + String(cooCoi.ele[1].state_b2_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10227};
  modelica_boolean tmp212;
  modelica_boolean tmp213;
  static const MMC_DEFSTRINGLIT(tmp214,97,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[1].state_b2_inflow.T <= 1e4, has value: ");
  modelica_string tmp215;
  modelica_metatype tmpMeta216;
  static int tmp217 = 0;
  if(!tmp217)
  {
    tmp212 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* cooCoi.ele[1].state_b2_inflow.T variable */),1.0);
    tmp213 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* cooCoi.ele[1].state_b2_inflow.T variable */),1e4);
    if(!(tmp212 && tmp213))
    {
      tmp215 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* cooCoi.ele[1].state_b2_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta216 = stringAppend(MMC_REFSTRINGLIT(tmp214),tmp215);
      {
        const char* assert_cond = "(cooCoi.ele[1].state_b2_inflow.T >= 1.0 and cooCoi.ele[1].state_b2_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta216));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta216));
        }
      }
      tmp217 = 1;
    }
  }
  threadData->lastEquationSolved = 10227;
}

/*
equation index: 10228
type: ALGORITHM

  assert(cooCoi.ele[1].vol1.dynBal.medium.T >= 1.0 and cooCoi.ele[1].vol1.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[1].vol1.dynBal.medium.T <= 1e4, has value: " + String(cooCoi.ele[1].vol1.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10228};
  modelica_boolean tmp218;
  modelica_boolean tmp219;
  static const MMC_DEFSTRINGLIT(tmp220,100,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[1].vol1.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp221;
  modelica_metatype tmpMeta222;
  static int tmp223 = 0;
  if(!tmp223)
  {
    tmp218 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[583]] /* cooCoi.ele[1].vol1.dynBal.medium.T variable */),1.0);
    tmp219 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[583]] /* cooCoi.ele[1].vol1.dynBal.medium.T variable */),1e4);
    if(!(tmp218 && tmp219))
    {
      tmp221 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[583]] /* cooCoi.ele[1].vol1.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta222 = stringAppend(MMC_REFSTRINGLIT(tmp220),tmp221);
      {
        const char* assert_cond = "(cooCoi.ele[1].vol1.dynBal.medium.T >= 1.0 and cooCoi.ele[1].vol1.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta222));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta222));
        }
      }
      tmp223 = 1;
    }
  }
  threadData->lastEquationSolved = 10228;
}

/*
equation index: 10229
type: ALGORITHM

  assert(cooCoi.ele[1].vol1.dynBal.ports_H_flow[1] >= -1e8 and cooCoi.ele[1].vol1.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[1].vol1.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(cooCoi.ele[1].vol1.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10229};
  modelica_boolean tmp224;
  modelica_boolean tmp225;
  static const MMC_DEFSTRINGLIT(tmp226,108,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[1].vol1.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp227;
  modelica_metatype tmpMeta228;
  static int tmp229 = 0;
  if(!tmp229)
  {
    tmp224 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* cooCoi.ele[1].vol1.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp225 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* cooCoi.ele[1].vol1.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp224 && tmp225))
    {
      tmp227 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* cooCoi.ele[1].vol1.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta228 = stringAppend(MMC_REFSTRINGLIT(tmp226),tmp227);
      {
        const char* assert_cond = "(cooCoi.ele[1].vol1.dynBal.ports_H_flow[1] >= -1e8 and cooCoi.ele[1].vol1.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta228));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta228));
        }
      }
      tmp229 = 1;
    }
  }
  threadData->lastEquationSolved = 10229;
}

/*
equation index: 10230
type: ALGORITHM

  assert(cooCoi.ele[1].vol1.dynBal.ports_H_flow[2] >= -1e8 and cooCoi.ele[1].vol1.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[1].vol1.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(cooCoi.ele[1].vol1.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10230};
  modelica_boolean tmp230;
  modelica_boolean tmp231;
  static const MMC_DEFSTRINGLIT(tmp232,108,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[1].vol1.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp233;
  modelica_metatype tmpMeta234;
  static int tmp235 = 0;
  if(!tmp235)
  {
    tmp230 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* cooCoi.ele[1].vol1.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp231 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* cooCoi.ele[1].vol1.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp230 && tmp231))
    {
      tmp233 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* cooCoi.ele[1].vol1.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta234 = stringAppend(MMC_REFSTRINGLIT(tmp232),tmp233);
      {
        const char* assert_cond = "(cooCoi.ele[1].vol1.dynBal.ports_H_flow[2] >= -1e8 and cooCoi.ele[1].vol1.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta234));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta234));
        }
      }
      tmp235 = 1;
    }
  }
  threadData->lastEquationSolved = 10230;
}

/*
equation index: 10231
type: ALGORITHM

  assert(cooCoi.ele[1].vol2.dynBal.medium.p >= 0.0 and cooCoi.ele[1].vol2.dynBal.medium.p <= 1e8, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[1].vol2.dynBal.medium.p <= 1e8, has value: " + String(cooCoi.ele[1].vol2.dynBal.medium.p, "g"));
*/
void logic2_raw_eqFunction_10231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10231};
  modelica_boolean tmp236;
  modelica_boolean tmp237;
  static const MMC_DEFSTRINGLIT(tmp238,100,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[1].vol2.dynBal.medium.p <= 1e8, has value: ");
  modelica_string tmp239;
  modelica_metatype tmpMeta240;
  static int tmp241 = 0;
  if(!tmp241)
  {
    tmp236 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */),0.0);
    tmp237 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */),1e8);
    if(!(tmp236 && tmp237))
    {
      tmp239 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta240 = stringAppend(MMC_REFSTRINGLIT(tmp238),tmp239);
      {
        const char* assert_cond = "(cooCoi.ele[1].vol2.dynBal.medium.p >= 0.0 and cooCoi.ele[1].vol2.dynBal.medium.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5015,7,5015,60,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta240));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5015,7,5015,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta240));
        }
      }
      tmp241 = 1;
    }
  }
  threadData->lastEquationSolved = 10231;
}

/*
equation index: 10232
type: ALGORITHM

  assert(cooCoi.ele[1].vol2.dynBal.medium.Xi[1] >= 0.0 and cooCoi.ele[1].vol2.dynBal.medium.Xi[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[1].vol2.dynBal.medium.Xi[1] <= 1.0, has value: " + String(cooCoi.ele[1].vol2.dynBal.medium.Xi[1], "g"));
*/
void logic2_raw_eqFunction_10232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10232};
  modelica_boolean tmp242;
  modelica_boolean tmp243;
  static const MMC_DEFSTRINGLIT(tmp244,104,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[1].vol2.dynBal.medium.Xi[1] <= 1.0, has value: ");
  modelica_string tmp245;
  modelica_metatype tmpMeta246;
  static int tmp247 = 0;
  if(!tmp247)
  {
    tmp242 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */),0.0);
    tmp243 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */),1.0);
    if(!(tmp242 && tmp243))
    {
      tmp245 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta246 = stringAppend(MMC_REFSTRINGLIT(tmp244),tmp245);
      {
        const char* assert_cond = "(cooCoi.ele[1].vol2.dynBal.medium.Xi[1] >= 0.0 and cooCoi.ele[1].vol2.dynBal.medium.Xi[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5016,7,5017,50,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta246));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5016,7,5017,50,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta246));
        }
      }
      tmp247 = 1;
    }
  }
  threadData->lastEquationSolved = 10232;
}

/*
equation index: 10233
type: ALGORITHM

  assert(cooCoi.ele[1].vol2.dynBal.medium.d >= 0.0 and cooCoi.ele[1].vol2.dynBal.medium.d <= 1e5, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[1].vol2.dynBal.medium.d <= 1e5, has value: " + String(cooCoi.ele[1].vol2.dynBal.medium.d, "g"));
*/
void logic2_raw_eqFunction_10233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10233};
  modelica_boolean tmp248;
  modelica_boolean tmp249;
  static const MMC_DEFSTRINGLIT(tmp250,100,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[1].vol2.dynBal.medium.d <= 1e5, has value: ");
  modelica_string tmp251;
  modelica_metatype tmpMeta252;
  static int tmp253 = 0;
  if(!tmp253)
  {
    tmp248 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[654]] /* cooCoi.ele[1].vol2.dynBal.medium.d variable */),0.0);
    tmp249 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[654]] /* cooCoi.ele[1].vol2.dynBal.medium.d variable */),1e5);
    if(!(tmp248 && tmp249))
    {
      tmp251 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[654]] /* cooCoi.ele[1].vol2.dynBal.medium.d variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta252 = stringAppend(MMC_REFSTRINGLIT(tmp250),tmp251);
      {
        const char* assert_cond = "(cooCoi.ele[1].vol2.dynBal.medium.d >= 0.0 and cooCoi.ele[1].vol2.dynBal.medium.d <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5019,7,5019,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta252));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5019,7,5019,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta252));
        }
      }
      tmp253 = 1;
    }
  }
  threadData->lastEquationSolved = 10233;
}

/*
equation index: 10234
type: ALGORITHM

  assert(cooCoi.ele[1].vol2.dynBal.medium.T >= 1.0 and cooCoi.ele[1].vol2.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[1].vol2.dynBal.medium.T <= 1e4, has value: " + String(cooCoi.ele[1].vol2.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10234};
  modelica_boolean tmp254;
  modelica_boolean tmp255;
  static const MMC_DEFSTRINGLIT(tmp256,100,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[1].vol2.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp257;
  modelica_metatype tmpMeta258;
  static int tmp259 = 0;
  if(!tmp259)
  {
    tmp254 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cooCoi.ele[1].vol2.dynBal.medium.T variable */),1.0);
    tmp255 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cooCoi.ele[1].vol2.dynBal.medium.T variable */),1e4);
    if(!(tmp254 && tmp255))
    {
      tmp257 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cooCoi.ele[1].vol2.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta258 = stringAppend(MMC_REFSTRINGLIT(tmp256),tmp257);
      {
        const char* assert_cond = "(cooCoi.ele[1].vol2.dynBal.medium.T >= 1.0 and cooCoi.ele[1].vol2.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5020,7,5020,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta258));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5020,7,5020,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta258));
        }
      }
      tmp259 = 1;
    }
  }
  threadData->lastEquationSolved = 10234;
}

/*
equation index: 10235
type: ALGORITHM

  assert(cooCoi.ele[1].vol2.dynBal.medium.X[2] >= 0.0 and cooCoi.ele[1].vol2.dynBal.medium.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[1].vol2.dynBal.medium.X[2] <= 1.0, has value: " + String(cooCoi.ele[1].vol2.dynBal.medium.X[2], "g"));
*/
void logic2_raw_eqFunction_10235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10235};
  modelica_boolean tmp260;
  modelica_boolean tmp261;
  static const MMC_DEFSTRINGLIT(tmp262,103,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[1].vol2.dynBal.medium.X[2] <= 1.0, has value: ");
  modelica_string tmp263;
  modelica_metatype tmpMeta264;
  static int tmp265 = 0;
  if(!tmp265)
  {
    tmp260 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cooCoi.ele[1].vol2.dynBal.medium.X[2] variable */),0.0);
    tmp261 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cooCoi.ele[1].vol2.dynBal.medium.X[2] variable */),1.0);
    if(!(tmp260 && tmp261))
    {
      tmp263 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cooCoi.ele[1].vol2.dynBal.medium.X[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta264 = stringAppend(MMC_REFSTRINGLIT(tmp262),tmp263);
      {
        const char* assert_cond = "(cooCoi.ele[1].vol2.dynBal.medium.X[2] >= 0.0 and cooCoi.ele[1].vol2.dynBal.medium.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5021,7,5022,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta264));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5021,7,5022,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta264));
        }
      }
      tmp265 = 1;
    }
  }
  threadData->lastEquationSolved = 10235;
}

/*
equation index: 10236
type: ALGORITHM

  assert(cooCoi.ele[1].vol2.dynBal.medium.u >= -1e8 and cooCoi.ele[1].vol2.dynBal.medium.u <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[1].vol2.dynBal.medium.u <= 1e8, has value: " + String(cooCoi.ele[1].vol2.dynBal.medium.u, "g"));
*/
void logic2_raw_eqFunction_10236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10236};
  modelica_boolean tmp266;
  modelica_boolean tmp267;
  static const MMC_DEFSTRINGLIT(tmp268,101,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[1].vol2.dynBal.medium.u <= 1e8, has value: ");
  modelica_string tmp269;
  modelica_metatype tmpMeta270;
  static int tmp271 = 0;
  if(!tmp271)
  {
    tmp266 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* cooCoi.ele[1].vol2.dynBal.medium.u variable */),-1e8);
    tmp267 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* cooCoi.ele[1].vol2.dynBal.medium.u variable */),1e8);
    if(!(tmp266 && tmp267))
    {
      tmp269 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* cooCoi.ele[1].vol2.dynBal.medium.u variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta270 = stringAppend(MMC_REFSTRINGLIT(tmp268),tmp269);
      {
        const char* assert_cond = "(cooCoi.ele[1].vol2.dynBal.medium.u >= -1e8 and cooCoi.ele[1].vol2.dynBal.medium.u <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5023,7,5023,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta270));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5023,7,5023,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta270));
        }
      }
      tmp271 = 1;
    }
  }
  threadData->lastEquationSolved = 10236;
}

/*
equation index: 10237
type: ALGORITHM

  assert(cooCoi.ele[1].vol2.dynBal.medium.R >= 0.0 and cooCoi.ele[1].vol2.dynBal.medium.R <= 1e7, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[1].vol2.dynBal.medium.R <= 1e7, has value: " + String(cooCoi.ele[1].vol2.dynBal.medium.R, "g"));
*/
void logic2_raw_eqFunction_10237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10237};
  modelica_boolean tmp272;
  modelica_boolean tmp273;
  static const MMC_DEFSTRINGLIT(tmp274,100,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[1].vol2.dynBal.medium.R <= 1e7, has value: ");
  modelica_string tmp275;
  modelica_metatype tmpMeta276;
  static int tmp277 = 0;
  if(!tmp277)
  {
    tmp272 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* cooCoi.ele[1].vol2.dynBal.medium.R variable */),0.0);
    tmp273 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* cooCoi.ele[1].vol2.dynBal.medium.R variable */),1e7);
    if(!(tmp272 && tmp273))
    {
      tmp275 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* cooCoi.ele[1].vol2.dynBal.medium.R variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta276 = stringAppend(MMC_REFSTRINGLIT(tmp274),tmp275);
      {
        const char* assert_cond = "(cooCoi.ele[1].vol2.dynBal.medium.R >= 0.0 and cooCoi.ele[1].vol2.dynBal.medium.R <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5024,7,5024,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta276));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5024,7,5024,71,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta276));
        }
      }
      tmp277 = 1;
    }
  }
  threadData->lastEquationSolved = 10237;
}

/*
equation index: 10238
type: ALGORITHM

  assert(cooCoi.ele[1].vol2.dynBal.medium.MM >= 0.001 and cooCoi.ele[1].vol2.dynBal.medium.MM <= 0.25, "Variable violating min/max constraint: 0.001 <= cooCoi.ele[1].vol2.dynBal.medium.MM <= 0.25, has value: " + String(cooCoi.ele[1].vol2.dynBal.medium.MM, "g"));
*/
void logic2_raw_eqFunction_10238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10238};
  modelica_boolean tmp278;
  modelica_boolean tmp279;
  static const MMC_DEFSTRINGLIT(tmp280,104,"Variable violating min/max constraint: 0.001 <= cooCoi.ele[1].vol2.dynBal.medium.MM <= 0.25, has value: ");
  modelica_string tmp281;
  modelica_metatype tmpMeta282;
  static int tmp283 = 0;
  if(!tmp283)
  {
    tmp278 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* cooCoi.ele[1].vol2.dynBal.medium.MM variable */),0.001);
    tmp279 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* cooCoi.ele[1].vol2.dynBal.medium.MM variable */),0.25);
    if(!(tmp278 && tmp279))
    {
      tmp281 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* cooCoi.ele[1].vol2.dynBal.medium.MM variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta282 = stringAppend(MMC_REFSTRINGLIT(tmp280),tmp281);
      {
        const char* assert_cond = "(cooCoi.ele[1].vol2.dynBal.medium.MM >= 0.001 and cooCoi.ele[1].vol2.dynBal.medium.MM <= 0.25)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5025,7,5025,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta282));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5025,7,5025,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta282));
        }
      }
      tmp283 = 1;
    }
  }
  threadData->lastEquationSolved = 10238;
}

/*
equation index: 10239
type: ALGORITHM

  assert(cooCoi.ele[1].vol2.dynBal.m >= 0.0, "Variable violating min constraint: 0.0 <= cooCoi.ele[1].vol2.dynBal.m, has value: " + String(cooCoi.ele[1].vol2.dynBal.m, "g"));
*/
void logic2_raw_eqFunction_10239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10239};
  modelica_boolean tmp284;
  static const MMC_DEFSTRINGLIT(tmp285,82,"Variable violating min constraint: 0.0 <= cooCoi.ele[1].vol2.dynBal.m, has value: ");
  modelica_string tmp286;
  modelica_metatype tmpMeta287;
  static int tmp288 = 0;
  if(!tmp288)
  {
    tmp284 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[1].vol2.dynBal.m DUMMY_STATE */),0.0);
    if(!tmp284)
    {
      tmp286 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[1].vol2.dynBal.m DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta287 = stringAppend(MMC_REFSTRINGLIT(tmp285),tmp286);
      {
        const char* assert_cond = "(cooCoi.ele[1].vol2.dynBal.m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",94,3,98,20,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta287));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",94,3,98,20,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta287));
        }
      }
      tmp288 = 1;
    }
  }
  threadData->lastEquationSolved = 10239;
}

/*
equation index: 10240
type: ALGORITHM

  assert(cooCoi.ele[1].vol2.dynBal.mXi[1] >= 0.0, "Variable violating min constraint: 0.0 <= cooCoi.ele[1].vol2.dynBal.mXi[1], has value: " + String(cooCoi.ele[1].vol2.dynBal.mXi[1], "g"));
*/
void logic2_raw_eqFunction_10240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10240};
  modelica_boolean tmp289;
  static const MMC_DEFSTRINGLIT(tmp290,87,"Variable violating min constraint: 0.0 <= cooCoi.ele[1].vol2.dynBal.mXi[1], has value: ");
  modelica_string tmp291;
  modelica_metatype tmpMeta292;
  static int tmp293 = 0;
  if(!tmp293)
  {
    tmp289 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* cooCoi.ele[1].vol2.dynBal.mXi[1] STATE(1) */),0.0);
    if(!tmp289)
    {
      tmp291 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* cooCoi.ele[1].vol2.dynBal.mXi[1] STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta292 = stringAppend(MMC_REFSTRINGLIT(tmp290),tmp291);
      {
        const char* assert_cond = "(cooCoi.ele[1].vol2.dynBal.mXi[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",100,3,102,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta292));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",100,3,102,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta292));
        }
      }
      tmp293 = 1;
    }
  }
  threadData->lastEquationSolved = 10240;
}

/*
equation index: 10241
type: ALGORITHM

  assert(cooCoi.ele[1].vol2.dynBal.ports_H_flow[1] >= -1e8 and cooCoi.ele[1].vol2.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[1].vol2.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(cooCoi.ele[1].vol2.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10241};
  modelica_boolean tmp294;
  modelica_boolean tmp295;
  static const MMC_DEFSTRINGLIT(tmp296,108,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[1].vol2.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp297;
  modelica_metatype tmpMeta298;
  static int tmp299 = 0;
  if(!tmp299)
  {
    tmp294 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[668]] /* cooCoi.ele[1].vol2.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp295 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[668]] /* cooCoi.ele[1].vol2.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp294 && tmp295))
    {
      tmp297 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[668]] /* cooCoi.ele[1].vol2.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta298 = stringAppend(MMC_REFSTRINGLIT(tmp296),tmp297);
      {
        const char* assert_cond = "(cooCoi.ele[1].vol2.dynBal.ports_H_flow[1] >= -1e8 and cooCoi.ele[1].vol2.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta298));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta298));
        }
      }
      tmp299 = 1;
    }
  }
  threadData->lastEquationSolved = 10241;
}

/*
equation index: 10242
type: ALGORITHM

  assert(cooCoi.ele[1].vol2.dynBal.ports_H_flow[2] >= -1e8 and cooCoi.ele[1].vol2.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[1].vol2.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(cooCoi.ele[1].vol2.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10242};
  modelica_boolean tmp300;
  modelica_boolean tmp301;
  static const MMC_DEFSTRINGLIT(tmp302,108,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[1].vol2.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp303;
  modelica_metatype tmpMeta304;
  static int tmp305 = 0;
  if(!tmp305)
  {
    tmp300 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* cooCoi.ele[1].vol2.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp301 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* cooCoi.ele[1].vol2.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp300 && tmp301))
    {
      tmp303 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* cooCoi.ele[1].vol2.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta304 = stringAppend(MMC_REFSTRINGLIT(tmp302),tmp303);
      {
        const char* assert_cond = "(cooCoi.ele[1].vol2.dynBal.ports_H_flow[2] >= -1e8 and cooCoi.ele[1].vol2.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta304));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta304));
        }
      }
      tmp305 = 1;
    }
  }
  threadData->lastEquationSolved = 10242;
}

/*
equation index: 10243
type: ALGORITHM

  assert(cooCoi.ele[1].mas.T >= 0.0, "Variable violating min constraint: 0.0 <= cooCoi.ele[1].mas.T, has value: " + String(cooCoi.ele[1].mas.T, "g"));
*/
void logic2_raw_eqFunction_10243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10243};
  modelica_boolean tmp306;
  static const MMC_DEFSTRINGLIT(tmp307,74,"Variable violating min constraint: 0.0 <= cooCoi.ele[1].mas.T, has value: ");
  modelica_string tmp308;
  modelica_metatype tmpMeta309;
  static int tmp310 = 0;
  if(!tmp310)
  {
    tmp306 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* cooCoi.ele[1].mas.T STATE(1,cooCoi.ele[1].mas.der_T) */),0.0);
    if(!tmp306)
    {
      tmp308 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* cooCoi.ele[1].mas.T STATE(1,cooCoi.ele[1].mas.der_T) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta309 = stringAppend(MMC_REFSTRINGLIT(tmp307),tmp308);
      {
        const char* assert_cond = "(cooCoi.ele[1].mas.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",541,7,542,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta309));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",541,7,542,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta309));
        }
      }
      tmp310 = 1;
    }
  }
  threadData->lastEquationSolved = 10243;
}

/*
equation index: 10244
type: ALGORITHM

  assert(cooCoi.ele[1].con1.dT >= -200.0, "Variable violating min constraint: -200.0 <= cooCoi.ele[1].con1.dT, has value: " + String(cooCoi.ele[1].con1.dT, "g"));
*/
void logic2_raw_eqFunction_10244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10244};
  modelica_boolean tmp311;
  static const MMC_DEFSTRINGLIT(tmp312,79,"Variable violating min constraint: -200.0 <= cooCoi.ele[1].con1.dT, has value: ");
  modelica_string tmp313;
  modelica_metatype tmpMeta314;
  static int tmp315 = 0;
  if(!tmp315)
  {
    tmp311 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* cooCoi.ele[1].con1.dT variable */),-200.0);
    if(!tmp311)
    {
      tmp313 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* cooCoi.ele[1].con1.dT variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta314 = stringAppend(MMC_REFSTRINGLIT(tmp312),tmp313);
      {
        const char* assert_cond = "(cooCoi.ele[1].con1.dT >= -200.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",816,7,816,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta314));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",816,7,816,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta314));
        }
      }
      tmp315 = 1;
    }
  }
  threadData->lastEquationSolved = 10244;
}

/*
equation index: 10245
type: ALGORITHM

  assert(cooCoi.ele[1].con2.dT >= -200.0, "Variable violating min constraint: -200.0 <= cooCoi.ele[1].con2.dT, has value: " + String(cooCoi.ele[1].con2.dT, "g"));
*/
void logic2_raw_eqFunction_10245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10245};
  modelica_boolean tmp316;
  static const MMC_DEFSTRINGLIT(tmp317,79,"Variable violating min constraint: -200.0 <= cooCoi.ele[1].con2.dT, has value: ");
  modelica_string tmp318;
  modelica_metatype tmpMeta319;
  static int tmp320 = 0;
  if(!tmp320)
  {
    tmp316 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[498]] /* cooCoi.ele[1].con2.dT variable */),-200.0);
    if(!tmp316)
    {
      tmp318 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[498]] /* cooCoi.ele[1].con2.dT variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta319 = stringAppend(MMC_REFSTRINGLIT(tmp317),tmp318);
      {
        const char* assert_cond = "(cooCoi.ele[1].con2.dT >= -200.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",816,7,816,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta319));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",816,7,816,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta319));
        }
      }
      tmp320 = 1;
    }
  }
  threadData->lastEquationSolved = 10245;
}

/*
equation index: 10246
type: ALGORITHM

  assert(cooCoi.ele[2].port_b1.h_outflow >= -1e10 and cooCoi.ele[2].port_b1.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= cooCoi.ele[2].port_b1.h_outflow <= 1e10, has value: " + String(cooCoi.ele[2].port_b1.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10246};
  modelica_boolean tmp321;
  modelica_boolean tmp322;
  static const MMC_DEFSTRINGLIT(tmp323,100,"Variable violating min/max constraint: -1e10 <= cooCoi.ele[2].port_b1.h_outflow <= 1e10, has value: ");
  modelica_string tmp324;
  modelica_metatype tmpMeta325;
  static int tmp326 = 0;
  if(!tmp326)
  {
    tmp321 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* cooCoi.ele[2].port_b1.h_outflow variable */),-1e10);
    tmp322 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* cooCoi.ele[2].port_b1.h_outflow variable */),1e10);
    if(!(tmp321 && tmp322))
    {
      tmp324 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* cooCoi.ele[2].port_b1.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta325 = stringAppend(MMC_REFSTRINGLIT(tmp323),tmp324);
      {
        const char* assert_cond = "(cooCoi.ele[2].port_b1.h_outflow >= -1e10 and cooCoi.ele[2].port_b1.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta325));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta325));
        }
      }
      tmp326 = 1;
    }
  }
  threadData->lastEquationSolved = 10246;
}

/*
equation index: 10247
type: ALGORITHM

  assert(cooCoi.ele[2].port_a2.h_outflow >= -1e10 and cooCoi.ele[2].port_a2.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= cooCoi.ele[2].port_a2.h_outflow <= 1e10, has value: " + String(cooCoi.ele[2].port_a2.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10247};
  modelica_boolean tmp327;
  modelica_boolean tmp328;
  static const MMC_DEFSTRINGLIT(tmp329,100,"Variable violating min/max constraint: -1e10 <= cooCoi.ele[2].port_a2.h_outflow <= 1e10, has value: ");
  modelica_string tmp330;
  modelica_metatype tmpMeta331;
  static int tmp332 = 0;
  if(!tmp332)
  {
    tmp327 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* cooCoi.ele[2].port_a2.h_outflow variable */),-1e10);
    tmp328 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* cooCoi.ele[2].port_a2.h_outflow variable */),1e10);
    if(!(tmp327 && tmp328))
    {
      tmp330 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* cooCoi.ele[2].port_a2.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta331 = stringAppend(MMC_REFSTRINGLIT(tmp329),tmp330);
      {
        const char* assert_cond = "(cooCoi.ele[2].port_a2.h_outflow >= -1e10 and cooCoi.ele[2].port_a2.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta331));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta331));
        }
      }
      tmp332 = 1;
    }
  }
  threadData->lastEquationSolved = 10247;
}

/*
equation index: 10248
type: ALGORITHM

  assert(cooCoi.ele[2].m2_flow >= -1e5 and cooCoi.ele[2].m2_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= cooCoi.ele[2].m2_flow <= 1e5, has value: " + String(cooCoi.ele[2].m2_flow, "g"));
*/
void logic2_raw_eqFunction_10248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10248};
  modelica_boolean tmp333;
  modelica_boolean tmp334;
  static const MMC_DEFSTRINGLIT(tmp335,88,"Variable violating min/max constraint: -1e5 <= cooCoi.ele[2].m2_flow <= 1e5, has value: ");
  modelica_string tmp336;
  modelica_metatype tmpMeta337;
  static int tmp338 = 0;
  if(!tmp338)
  {
    tmp333 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */),-1e5);
    tmp334 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */),1e5);
    if(!(tmp333 && tmp334))
    {
      tmp336 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta337 = stringAppend(MMC_REFSTRINGLIT(tmp335),tmp336);
      {
        const char* assert_cond = "(cooCoi.ele[2].m2_flow >= -1e5 and cooCoi.ele[2].m2_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialFourPortInterface.mo",27,3,28,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta337));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialFourPortInterface.mo",27,3,28,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta337));
        }
      }
      tmp338 = 1;
    }
  }
  threadData->lastEquationSolved = 10248;
}

/*
equation index: 10249
type: ALGORITHM

  assert(cooCoi.ele[2].state_a1_inflow.T >= 1.0 and cooCoi.ele[2].state_a1_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[2].state_a1_inflow.T <= 1e4, has value: " + String(cooCoi.ele[2].state_a1_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10249};
  modelica_boolean tmp339;
  modelica_boolean tmp340;
  static const MMC_DEFSTRINGLIT(tmp341,97,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[2].state_a1_inflow.T <= 1e4, has value: ");
  modelica_string tmp342;
  modelica_metatype tmpMeta343;
  static int tmp344 = 0;
  if(!tmp344)
  {
    tmp339 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[537]] /* cooCoi.ele[2].state_a1_inflow.T variable */),1.0);
    tmp340 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[537]] /* cooCoi.ele[2].state_a1_inflow.T variable */),1e4);
    if(!(tmp339 && tmp340))
    {
      tmp342 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[537]] /* cooCoi.ele[2].state_a1_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta343 = stringAppend(MMC_REFSTRINGLIT(tmp341),tmp342);
      {
        const char* assert_cond = "(cooCoi.ele[2].state_a1_inflow.T >= 1.0 and cooCoi.ele[2].state_a1_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta343));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta343));
        }
      }
      tmp344 = 1;
    }
  }
  threadData->lastEquationSolved = 10249;
}

/*
equation index: 10250
type: ALGORITHM

  assert(cooCoi.ele[2].state_b1_inflow.T >= 1.0 and cooCoi.ele[2].state_b1_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[2].state_b1_inflow.T <= 1e4, has value: " + String(cooCoi.ele[2].state_b1_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10250};
  modelica_boolean tmp345;
  modelica_boolean tmp346;
  static const MMC_DEFSTRINGLIT(tmp347,97,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[2].state_b1_inflow.T <= 1e4, has value: ");
  modelica_string tmp348;
  modelica_metatype tmpMeta349;
  static int tmp350 = 0;
  if(!tmp350)
  {
    tmp345 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[549]] /* cooCoi.ele[2].state_b1_inflow.T variable */),1.0);
    tmp346 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[549]] /* cooCoi.ele[2].state_b1_inflow.T variable */),1e4);
    if(!(tmp345 && tmp346))
    {
      tmp348 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[549]] /* cooCoi.ele[2].state_b1_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta349 = stringAppend(MMC_REFSTRINGLIT(tmp347),tmp348);
      {
        const char* assert_cond = "(cooCoi.ele[2].state_b1_inflow.T >= 1.0 and cooCoi.ele[2].state_b1_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta349));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta349));
        }
      }
      tmp350 = 1;
    }
  }
  threadData->lastEquationSolved = 10250;
}

/*
equation index: 10251
type: ALGORITHM

  assert(cooCoi.ele[2].state_a2_inflow.T >= 1.0 and cooCoi.ele[2].state_a2_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[2].state_a2_inflow.T <= 1e4, has value: " + String(cooCoi.ele[2].state_a2_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10251};
  modelica_boolean tmp351;
  modelica_boolean tmp352;
  static const MMC_DEFSTRINGLIT(tmp353,97,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[2].state_a2_inflow.T <= 1e4, has value: ");
  modelica_string tmp354;
  modelica_metatype tmpMeta355;
  static int tmp356 = 0;
  if(!tmp356)
  {
    tmp351 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* cooCoi.ele[2].state_a2_inflow.T variable */),1.0);
    tmp352 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* cooCoi.ele[2].state_a2_inflow.T variable */),1e4);
    if(!(tmp351 && tmp352))
    {
      tmp354 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* cooCoi.ele[2].state_a2_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta355 = stringAppend(MMC_REFSTRINGLIT(tmp353),tmp354);
      {
        const char* assert_cond = "(cooCoi.ele[2].state_a2_inflow.T >= 1.0 and cooCoi.ele[2].state_a2_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta355));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta355));
        }
      }
      tmp356 = 1;
    }
  }
  threadData->lastEquationSolved = 10251;
}

/*
equation index: 10252
type: ALGORITHM

  assert(cooCoi.ele[2].state_a2_inflow.X[2] >= 0.0 and cooCoi.ele[2].state_a2_inflow.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[2].state_a2_inflow.X[2] <= 1.0, has value: " + String(cooCoi.ele[2].state_a2_inflow.X[2], "g"));
*/
void logic2_raw_eqFunction_10252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10252};
  modelica_boolean tmp357;
  modelica_boolean tmp358;
  static const MMC_DEFSTRINGLIT(tmp359,100,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[2].state_a2_inflow.X[2] <= 1.0, has value: ");
  modelica_string tmp360;
  modelica_metatype tmpMeta361;
  static int tmp362 = 0;
  if(!tmp362)
  {
    tmp357 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[545]] /* cooCoi.ele[2].state_a2_inflow.X[2] variable */),0.0);
    tmp358 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[545]] /* cooCoi.ele[2].state_a2_inflow.X[2] variable */),1.0);
    if(!(tmp357 && tmp358))
    {
      tmp360 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[545]] /* cooCoi.ele[2].state_a2_inflow.X[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta361 = stringAppend(MMC_REFSTRINGLIT(tmp359),tmp360);
      {
        const char* assert_cond = "(cooCoi.ele[2].state_a2_inflow.X[2] >= 0.0 and cooCoi.ele[2].state_a2_inflow.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta361));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta361));
        }
      }
      tmp362 = 1;
    }
  }
  threadData->lastEquationSolved = 10252;
}

/*
equation index: 10253
type: ALGORITHM

  assert(cooCoi.ele[2].state_b2_inflow.T >= 1.0 and cooCoi.ele[2].state_b2_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[2].state_b2_inflow.T <= 1e4, has value: " + String(cooCoi.ele[2].state_b2_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10253};
  modelica_boolean tmp363;
  modelica_boolean tmp364;
  static const MMC_DEFSTRINGLIT(tmp365,97,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[2].state_b2_inflow.T <= 1e4, has value: ");
  modelica_string tmp366;
  modelica_metatype tmpMeta367;
  static int tmp368 = 0;
  if(!tmp368)
  {
    tmp363 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[553]] /* cooCoi.ele[2].state_b2_inflow.T variable */),1.0);
    tmp364 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[553]] /* cooCoi.ele[2].state_b2_inflow.T variable */),1e4);
    if(!(tmp363 && tmp364))
    {
      tmp366 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[553]] /* cooCoi.ele[2].state_b2_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta367 = stringAppend(MMC_REFSTRINGLIT(tmp365),tmp366);
      {
        const char* assert_cond = "(cooCoi.ele[2].state_b2_inflow.T >= 1.0 and cooCoi.ele[2].state_b2_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta367));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta367));
        }
      }
      tmp368 = 1;
    }
  }
  threadData->lastEquationSolved = 10253;
}

/*
equation index: 10254
type: ALGORITHM

  assert(cooCoi.ele[2].state_b2_inflow.X[2] >= 0.0 and cooCoi.ele[2].state_b2_inflow.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[2].state_b2_inflow.X[2] <= 1.0, has value: " + String(cooCoi.ele[2].state_b2_inflow.X[2], "g"));
*/
void logic2_raw_eqFunction_10254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10254};
  modelica_boolean tmp369;
  modelica_boolean tmp370;
  static const MMC_DEFSTRINGLIT(tmp371,100,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[2].state_b2_inflow.X[2] <= 1.0, has value: ");
  modelica_string tmp372;
  modelica_metatype tmpMeta373;
  static int tmp374 = 0;
  if(!tmp374)
  {
    tmp369 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[556]] /* cooCoi.ele[2].state_b2_inflow.X[2] variable */),0.0);
    tmp370 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[556]] /* cooCoi.ele[2].state_b2_inflow.X[2] variable */),1.0);
    if(!(tmp369 && tmp370))
    {
      tmp372 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[556]] /* cooCoi.ele[2].state_b2_inflow.X[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta373 = stringAppend(MMC_REFSTRINGLIT(tmp371),tmp372);
      {
        const char* assert_cond = "(cooCoi.ele[2].state_b2_inflow.X[2] >= 0.0 and cooCoi.ele[2].state_b2_inflow.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta373));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta373));
        }
      }
      tmp374 = 1;
    }
  }
  threadData->lastEquationSolved = 10254;
}

/*
equation index: 10255
type: ALGORITHM

  assert(cooCoi.ele[2].vol1.dynBal.medium.T >= 1.0 and cooCoi.ele[2].vol1.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[2].vol1.dynBal.medium.T <= 1e4, has value: " + String(cooCoi.ele[2].vol1.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10255};
  modelica_boolean tmp375;
  modelica_boolean tmp376;
  static const MMC_DEFSTRINGLIT(tmp377,100,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[2].vol1.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp378;
  modelica_metatype tmpMeta379;
  static int tmp380 = 0;
  if(!tmp380)
  {
    tmp375 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* cooCoi.ele[2].vol1.dynBal.medium.T variable */),1.0);
    tmp376 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* cooCoi.ele[2].vol1.dynBal.medium.T variable */),1e4);
    if(!(tmp375 && tmp376))
    {
      tmp378 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* cooCoi.ele[2].vol1.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta379 = stringAppend(MMC_REFSTRINGLIT(tmp377),tmp378);
      {
        const char* assert_cond = "(cooCoi.ele[2].vol1.dynBal.medium.T >= 1.0 and cooCoi.ele[2].vol1.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta379));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta379));
        }
      }
      tmp380 = 1;
    }
  }
  threadData->lastEquationSolved = 10255;
}

/*
equation index: 10256
type: ALGORITHM

  assert(cooCoi.ele[2].vol1.dynBal.ports_H_flow[1] >= -1e8 and cooCoi.ele[2].vol1.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[2].vol1.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(cooCoi.ele[2].vol1.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10256};
  modelica_boolean tmp381;
  modelica_boolean tmp382;
  static const MMC_DEFSTRINGLIT(tmp383,108,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[2].vol1.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp384;
  modelica_metatype tmpMeta385;
  static int tmp386 = 0;
  if(!tmp386)
  {
    tmp381 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* cooCoi.ele[2].vol1.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp382 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* cooCoi.ele[2].vol1.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp381 && tmp382))
    {
      tmp384 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* cooCoi.ele[2].vol1.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta385 = stringAppend(MMC_REFSTRINGLIT(tmp383),tmp384);
      {
        const char* assert_cond = "(cooCoi.ele[2].vol1.dynBal.ports_H_flow[1] >= -1e8 and cooCoi.ele[2].vol1.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta385));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta385));
        }
      }
      tmp386 = 1;
    }
  }
  threadData->lastEquationSolved = 10256;
}

/*
equation index: 10257
type: ALGORITHM

  assert(cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] >= -1e8 and cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(cooCoi.ele[2].vol1.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10257};
  modelica_boolean tmp387;
  modelica_boolean tmp388;
  static const MMC_DEFSTRINGLIT(tmp389,108,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp390;
  modelica_metatype tmpMeta391;
  static int tmp392 = 0;
  if(!tmp392)
  {
    tmp387 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp388 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp387 && tmp388))
    {
      tmp390 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta391 = stringAppend(MMC_REFSTRINGLIT(tmp389),tmp390);
      {
        const char* assert_cond = "(cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] >= -1e8 and cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta391));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta391));
        }
      }
      tmp392 = 1;
    }
  }
  threadData->lastEquationSolved = 10257;
}

/*
equation index: 10258
type: ALGORITHM

  assert(cooCoi.ele[2].vol2.dynBal.medium.Xi[1] >= 0.0 and cooCoi.ele[2].vol2.dynBal.medium.Xi[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[2].vol2.dynBal.medium.Xi[1] <= 1.0, has value: " + String(cooCoi.ele[2].vol2.dynBal.medium.Xi[1], "g"));
*/
void logic2_raw_eqFunction_10258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10258};
  modelica_boolean tmp393;
  modelica_boolean tmp394;
  static const MMC_DEFSTRINGLIT(tmp395,104,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[2].vol2.dynBal.medium.Xi[1] <= 1.0, has value: ");
  modelica_string tmp396;
  modelica_metatype tmpMeta397;
  static int tmp398 = 0;
  if(!tmp398)
  {
    tmp393 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */),0.0);
    tmp394 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */),1.0);
    if(!(tmp393 && tmp394))
    {
      tmp396 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta397 = stringAppend(MMC_REFSTRINGLIT(tmp395),tmp396);
      {
        const char* assert_cond = "(cooCoi.ele[2].vol2.dynBal.medium.Xi[1] >= 0.0 and cooCoi.ele[2].vol2.dynBal.medium.Xi[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5016,7,5017,50,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta397));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5016,7,5017,50,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta397));
        }
      }
      tmp398 = 1;
    }
  }
  threadData->lastEquationSolved = 10258;
}

/*
equation index: 10259
type: ALGORITHM

  assert(cooCoi.ele[2].vol2.dynBal.medium.d >= 0.0 and cooCoi.ele[2].vol2.dynBal.medium.d <= 1e5, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[2].vol2.dynBal.medium.d <= 1e5, has value: " + String(cooCoi.ele[2].vol2.dynBal.medium.d, "g"));
*/
void logic2_raw_eqFunction_10259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10259};
  modelica_boolean tmp399;
  modelica_boolean tmp400;
  static const MMC_DEFSTRINGLIT(tmp401,100,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[2].vol2.dynBal.medium.d <= 1e5, has value: ");
  modelica_string tmp402;
  modelica_metatype tmpMeta403;
  static int tmp404 = 0;
  if(!tmp404)
  {
    tmp399 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[655]] /* cooCoi.ele[2].vol2.dynBal.medium.d variable */),0.0);
    tmp400 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[655]] /* cooCoi.ele[2].vol2.dynBal.medium.d variable */),1e5);
    if(!(tmp399 && tmp400))
    {
      tmp402 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[655]] /* cooCoi.ele[2].vol2.dynBal.medium.d variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta403 = stringAppend(MMC_REFSTRINGLIT(tmp401),tmp402);
      {
        const char* assert_cond = "(cooCoi.ele[2].vol2.dynBal.medium.d >= 0.0 and cooCoi.ele[2].vol2.dynBal.medium.d <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5019,7,5019,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta403));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5019,7,5019,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta403));
        }
      }
      tmp404 = 1;
    }
  }
  threadData->lastEquationSolved = 10259;
}

/*
equation index: 10260
type: ALGORITHM

  assert(cooCoi.ele[2].vol2.dynBal.medium.T >= 1.0 and cooCoi.ele[2].vol2.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[2].vol2.dynBal.medium.T <= 1e4, has value: " + String(cooCoi.ele[2].vol2.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10260};
  modelica_boolean tmp405;
  modelica_boolean tmp406;
  static const MMC_DEFSTRINGLIT(tmp407,100,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[2].vol2.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp408;
  modelica_metatype tmpMeta409;
  static int tmp410 = 0;
  if(!tmp410)
  {
    tmp405 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cooCoi.ele[2].vol2.dynBal.medium.T variable */),1.0);
    tmp406 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cooCoi.ele[2].vol2.dynBal.medium.T variable */),1e4);
    if(!(tmp405 && tmp406))
    {
      tmp408 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cooCoi.ele[2].vol2.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta409 = stringAppend(MMC_REFSTRINGLIT(tmp407),tmp408);
      {
        const char* assert_cond = "(cooCoi.ele[2].vol2.dynBal.medium.T >= 1.0 and cooCoi.ele[2].vol2.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5020,7,5020,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta409));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5020,7,5020,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta409));
        }
      }
      tmp410 = 1;
    }
  }
  threadData->lastEquationSolved = 10260;
}

/*
equation index: 10261
type: ALGORITHM

  assert(cooCoi.ele[2].vol2.dynBal.medium.X[2] >= 0.0 and cooCoi.ele[2].vol2.dynBal.medium.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[2].vol2.dynBal.medium.X[2] <= 1.0, has value: " + String(cooCoi.ele[2].vol2.dynBal.medium.X[2], "g"));
*/
void logic2_raw_eqFunction_10261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10261};
  modelica_boolean tmp411;
  modelica_boolean tmp412;
  static const MMC_DEFSTRINGLIT(tmp413,103,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[2].vol2.dynBal.medium.X[2] <= 1.0, has value: ");
  modelica_string tmp414;
  modelica_metatype tmpMeta415;
  static int tmp416 = 0;
  if(!tmp416)
  {
    tmp411 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cooCoi.ele[2].vol2.dynBal.medium.X[2] variable */),0.0);
    tmp412 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cooCoi.ele[2].vol2.dynBal.medium.X[2] variable */),1.0);
    if(!(tmp411 && tmp412))
    {
      tmp414 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cooCoi.ele[2].vol2.dynBal.medium.X[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta415 = stringAppend(MMC_REFSTRINGLIT(tmp413),tmp414);
      {
        const char* assert_cond = "(cooCoi.ele[2].vol2.dynBal.medium.X[2] >= 0.0 and cooCoi.ele[2].vol2.dynBal.medium.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5021,7,5022,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta415));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5021,7,5022,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta415));
        }
      }
      tmp416 = 1;
    }
  }
  threadData->lastEquationSolved = 10261;
}

/*
equation index: 10262
type: ALGORITHM

  assert(cooCoi.ele[2].vol2.dynBal.medium.u >= -1e8 and cooCoi.ele[2].vol2.dynBal.medium.u <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[2].vol2.dynBal.medium.u <= 1e8, has value: " + String(cooCoi.ele[2].vol2.dynBal.medium.u, "g"));
*/
void logic2_raw_eqFunction_10262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10262};
  modelica_boolean tmp417;
  modelica_boolean tmp418;
  static const MMC_DEFSTRINGLIT(tmp419,101,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[2].vol2.dynBal.medium.u <= 1e8, has value: ");
  modelica_string tmp420;
  modelica_metatype tmpMeta421;
  static int tmp422 = 0;
  if(!tmp422)
  {
    tmp417 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* cooCoi.ele[2].vol2.dynBal.medium.u variable */),-1e8);
    tmp418 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* cooCoi.ele[2].vol2.dynBal.medium.u variable */),1e8);
    if(!(tmp417 && tmp418))
    {
      tmp420 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* cooCoi.ele[2].vol2.dynBal.medium.u variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta421 = stringAppend(MMC_REFSTRINGLIT(tmp419),tmp420);
      {
        const char* assert_cond = "(cooCoi.ele[2].vol2.dynBal.medium.u >= -1e8 and cooCoi.ele[2].vol2.dynBal.medium.u <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5023,7,5023,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta421));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5023,7,5023,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta421));
        }
      }
      tmp422 = 1;
    }
  }
  threadData->lastEquationSolved = 10262;
}

/*
equation index: 10263
type: ALGORITHM

  assert(cooCoi.ele[2].vol2.dynBal.medium.R >= 0.0 and cooCoi.ele[2].vol2.dynBal.medium.R <= 1e7, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[2].vol2.dynBal.medium.R <= 1e7, has value: " + String(cooCoi.ele[2].vol2.dynBal.medium.R, "g"));
*/
void logic2_raw_eqFunction_10263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10263};
  modelica_boolean tmp423;
  modelica_boolean tmp424;
  static const MMC_DEFSTRINGLIT(tmp425,100,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[2].vol2.dynBal.medium.R <= 1e7, has value: ");
  modelica_string tmp426;
  modelica_metatype tmpMeta427;
  static int tmp428 = 0;
  if(!tmp428)
  {
    tmp423 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cooCoi.ele[2].vol2.dynBal.medium.R variable */),0.0);
    tmp424 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cooCoi.ele[2].vol2.dynBal.medium.R variable */),1e7);
    if(!(tmp423 && tmp424))
    {
      tmp426 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cooCoi.ele[2].vol2.dynBal.medium.R variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta427 = stringAppend(MMC_REFSTRINGLIT(tmp425),tmp426);
      {
        const char* assert_cond = "(cooCoi.ele[2].vol2.dynBal.medium.R >= 0.0 and cooCoi.ele[2].vol2.dynBal.medium.R <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5024,7,5024,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta427));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5024,7,5024,71,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta427));
        }
      }
      tmp428 = 1;
    }
  }
  threadData->lastEquationSolved = 10263;
}

/*
equation index: 10264
type: ALGORITHM

  assert(cooCoi.ele[2].vol2.dynBal.medium.MM >= 0.001 and cooCoi.ele[2].vol2.dynBal.medium.MM <= 0.25, "Variable violating min/max constraint: 0.001 <= cooCoi.ele[2].vol2.dynBal.medium.MM <= 0.25, has value: " + String(cooCoi.ele[2].vol2.dynBal.medium.MM, "g"));
*/
void logic2_raw_eqFunction_10264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10264};
  modelica_boolean tmp429;
  modelica_boolean tmp430;
  static const MMC_DEFSTRINGLIT(tmp431,104,"Variable violating min/max constraint: 0.001 <= cooCoi.ele[2].vol2.dynBal.medium.MM <= 0.25, has value: ");
  modelica_string tmp432;
  modelica_metatype tmpMeta433;
  static int tmp434 = 0;
  if(!tmp434)
  {
    tmp429 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* cooCoi.ele[2].vol2.dynBal.medium.MM variable */),0.001);
    tmp430 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* cooCoi.ele[2].vol2.dynBal.medium.MM variable */),0.25);
    if(!(tmp429 && tmp430))
    {
      tmp432 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* cooCoi.ele[2].vol2.dynBal.medium.MM variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta433 = stringAppend(MMC_REFSTRINGLIT(tmp431),tmp432);
      {
        const char* assert_cond = "(cooCoi.ele[2].vol2.dynBal.medium.MM >= 0.001 and cooCoi.ele[2].vol2.dynBal.medium.MM <= 0.25)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5025,7,5025,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta433));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5025,7,5025,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta433));
        }
      }
      tmp434 = 1;
    }
  }
  threadData->lastEquationSolved = 10264;
}

/*
equation index: 10265
type: ALGORITHM

  assert(cooCoi.ele[2].vol2.dynBal.m >= 0.0, "Variable violating min constraint: 0.0 <= cooCoi.ele[2].vol2.dynBal.m, has value: " + String(cooCoi.ele[2].vol2.dynBal.m, "g"));
*/
void logic2_raw_eqFunction_10265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10265};
  modelica_boolean tmp435;
  static const MMC_DEFSTRINGLIT(tmp436,82,"Variable violating min constraint: 0.0 <= cooCoi.ele[2].vol2.dynBal.m, has value: ");
  modelica_string tmp437;
  modelica_metatype tmpMeta438;
  static int tmp439 = 0;
  if(!tmp439)
  {
    tmp435 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* cooCoi.ele[2].vol2.dynBal.m DUMMY_STATE */),0.0);
    if(!tmp435)
    {
      tmp437 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* cooCoi.ele[2].vol2.dynBal.m DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta438 = stringAppend(MMC_REFSTRINGLIT(tmp436),tmp437);
      {
        const char* assert_cond = "(cooCoi.ele[2].vol2.dynBal.m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",94,3,98,20,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta438));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",94,3,98,20,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta438));
        }
      }
      tmp439 = 1;
    }
  }
  threadData->lastEquationSolved = 10265;
}

/*
equation index: 10266
type: ALGORITHM

  assert(cooCoi.ele[2].vol2.dynBal.mXi[1] >= 0.0, "Variable violating min constraint: 0.0 <= cooCoi.ele[2].vol2.dynBal.mXi[1], has value: " + String(cooCoi.ele[2].vol2.dynBal.mXi[1], "g"));
*/
void logic2_raw_eqFunction_10266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10266};
  modelica_boolean tmp440;
  static const MMC_DEFSTRINGLIT(tmp441,87,"Variable violating min constraint: 0.0 <= cooCoi.ele[2].vol2.dynBal.mXi[1], has value: ");
  modelica_string tmp442;
  modelica_metatype tmpMeta443;
  static int tmp444 = 0;
  if(!tmp444)
  {
    tmp440 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* cooCoi.ele[2].vol2.dynBal.mXi[1] STATE(1) */),0.0);
    if(!tmp440)
    {
      tmp442 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* cooCoi.ele[2].vol2.dynBal.mXi[1] STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta443 = stringAppend(MMC_REFSTRINGLIT(tmp441),tmp442);
      {
        const char* assert_cond = "(cooCoi.ele[2].vol2.dynBal.mXi[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",100,3,102,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta443));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",100,3,102,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta443));
        }
      }
      tmp444 = 1;
    }
  }
  threadData->lastEquationSolved = 10266;
}

/*
equation index: 10267
type: ALGORITHM

  assert(cooCoi.ele[2].vol2.dynBal.ports_H_flow[1] >= -1e8 and cooCoi.ele[2].vol2.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[2].vol2.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(cooCoi.ele[2].vol2.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10267};
  modelica_boolean tmp445;
  modelica_boolean tmp446;
  static const MMC_DEFSTRINGLIT(tmp447,108,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[2].vol2.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp448;
  modelica_metatype tmpMeta449;
  static int tmp450 = 0;
  if(!tmp450)
  {
    tmp445 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[670]] /* cooCoi.ele[2].vol2.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp446 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[670]] /* cooCoi.ele[2].vol2.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp445 && tmp446))
    {
      tmp448 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[670]] /* cooCoi.ele[2].vol2.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta449 = stringAppend(MMC_REFSTRINGLIT(tmp447),tmp448);
      {
        const char* assert_cond = "(cooCoi.ele[2].vol2.dynBal.ports_H_flow[1] >= -1e8 and cooCoi.ele[2].vol2.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta449));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta449));
        }
      }
      tmp450 = 1;
    }
  }
  threadData->lastEquationSolved = 10267;
}

/*
equation index: 10268
type: ALGORITHM

  assert(cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] >= -1e8 and cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(cooCoi.ele[2].vol2.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10268};
  modelica_boolean tmp451;
  modelica_boolean tmp452;
  static const MMC_DEFSTRINGLIT(tmp453,108,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp454;
  modelica_metatype tmpMeta455;
  static int tmp456 = 0;
  if(!tmp456)
  {
    tmp451 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp452 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp451 && tmp452))
    {
      tmp454 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta455 = stringAppend(MMC_REFSTRINGLIT(tmp453),tmp454);
      {
        const char* assert_cond = "(cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] >= -1e8 and cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta455));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta455));
        }
      }
      tmp456 = 1;
    }
  }
  threadData->lastEquationSolved = 10268;
}

/*
equation index: 10269
type: ALGORITHM

  assert(cooCoi.ele[2].mas.T >= 0.0, "Variable violating min constraint: 0.0 <= cooCoi.ele[2].mas.T, has value: " + String(cooCoi.ele[2].mas.T, "g"));
*/
void logic2_raw_eqFunction_10269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10269};
  modelica_boolean tmp457;
  static const MMC_DEFSTRINGLIT(tmp458,74,"Variable violating min constraint: 0.0 <= cooCoi.ele[2].mas.T, has value: ");
  modelica_string tmp459;
  modelica_metatype tmpMeta460;
  static int tmp461 = 0;
  if(!tmp461)
  {
    tmp457 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* cooCoi.ele[2].mas.T STATE(1,cooCoi.ele[2].mas.der_T) */),0.0);
    if(!tmp457)
    {
      tmp459 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* cooCoi.ele[2].mas.T STATE(1,cooCoi.ele[2].mas.der_T) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta460 = stringAppend(MMC_REFSTRINGLIT(tmp458),tmp459);
      {
        const char* assert_cond = "(cooCoi.ele[2].mas.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",541,7,542,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta460));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",541,7,542,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta460));
        }
      }
      tmp461 = 1;
    }
  }
  threadData->lastEquationSolved = 10269;
}

/*
equation index: 10270
type: ALGORITHM

  assert(cooCoi.ele[2].con1.dT >= -200.0, "Variable violating min constraint: -200.0 <= cooCoi.ele[2].con1.dT, has value: " + String(cooCoi.ele[2].con1.dT, "g"));
*/
void logic2_raw_eqFunction_10270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10270};
  modelica_boolean tmp462;
  static const MMC_DEFSTRINGLIT(tmp463,79,"Variable violating min constraint: -200.0 <= cooCoi.ele[2].con1.dT, has value: ");
  modelica_string tmp464;
  modelica_metatype tmpMeta465;
  static int tmp466 = 0;
  if(!tmp466)
  {
    tmp462 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* cooCoi.ele[2].con1.dT variable */),-200.0);
    if(!tmp462)
    {
      tmp464 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* cooCoi.ele[2].con1.dT variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta465 = stringAppend(MMC_REFSTRINGLIT(tmp463),tmp464);
      {
        const char* assert_cond = "(cooCoi.ele[2].con1.dT >= -200.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",816,7,816,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta465));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",816,7,816,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta465));
        }
      }
      tmp466 = 1;
    }
  }
  threadData->lastEquationSolved = 10270;
}

/*
equation index: 10271
type: ALGORITHM

  assert(cooCoi.ele[2].con2.dT >= -200.0, "Variable violating min constraint: -200.0 <= cooCoi.ele[2].con2.dT, has value: " + String(cooCoi.ele[2].con2.dT, "g"));
*/
void logic2_raw_eqFunction_10271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10271};
  modelica_boolean tmp467;
  static const MMC_DEFSTRINGLIT(tmp468,79,"Variable violating min constraint: -200.0 <= cooCoi.ele[2].con2.dT, has value: ");
  modelica_string tmp469;
  modelica_metatype tmpMeta470;
  static int tmp471 = 0;
  if(!tmp471)
  {
    tmp467 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[2].con2.dT variable */),-200.0);
    if(!tmp467)
    {
      tmp469 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[2].con2.dT variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta470 = stringAppend(MMC_REFSTRINGLIT(tmp468),tmp469);
      {
        const char* assert_cond = "(cooCoi.ele[2].con2.dT >= -200.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",816,7,816,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta470));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",816,7,816,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta470));
        }
      }
      tmp471 = 1;
    }
  }
  threadData->lastEquationSolved = 10271;
}

/*
equation index: 10272
type: ALGORITHM

  assert(cooCoi.ele[3].port_b1.h_outflow >= -1e10 and cooCoi.ele[3].port_b1.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= cooCoi.ele[3].port_b1.h_outflow <= 1e10, has value: " + String(cooCoi.ele[3].port_b1.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10272};
  modelica_boolean tmp472;
  modelica_boolean tmp473;
  static const MMC_DEFSTRINGLIT(tmp474,100,"Variable violating min/max constraint: -1e10 <= cooCoi.ele[3].port_b1.h_outflow <= 1e10, has value: ");
  modelica_string tmp475;
  modelica_metatype tmpMeta476;
  static int tmp477 = 0;
  if(!tmp477)
  {
    tmp472 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* cooCoi.ele[3].port_b1.h_outflow variable */),-1e10);
    tmp473 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* cooCoi.ele[3].port_b1.h_outflow variable */),1e10);
    if(!(tmp472 && tmp473))
    {
      tmp475 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* cooCoi.ele[3].port_b1.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta476 = stringAppend(MMC_REFSTRINGLIT(tmp474),tmp475);
      {
        const char* assert_cond = "(cooCoi.ele[3].port_b1.h_outflow >= -1e10 and cooCoi.ele[3].port_b1.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta476));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta476));
        }
      }
      tmp477 = 1;
    }
  }
  threadData->lastEquationSolved = 10272;
}

/*
equation index: 10273
type: ALGORITHM

  assert(cooCoi.ele[3].port_a2.h_outflow >= -1e10 and cooCoi.ele[3].port_a2.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= cooCoi.ele[3].port_a2.h_outflow <= 1e10, has value: " + String(cooCoi.ele[3].port_a2.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10273};
  modelica_boolean tmp478;
  modelica_boolean tmp479;
  static const MMC_DEFSTRINGLIT(tmp480,100,"Variable violating min/max constraint: -1e10 <= cooCoi.ele[3].port_a2.h_outflow <= 1e10, has value: ");
  modelica_string tmp481;
  modelica_metatype tmpMeta482;
  static int tmp483 = 0;
  if(!tmp483)
  {
    tmp478 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* cooCoi.ele[3].port_a2.h_outflow variable */),-1e10);
    tmp479 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* cooCoi.ele[3].port_a2.h_outflow variable */),1e10);
    if(!(tmp478 && tmp479))
    {
      tmp481 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* cooCoi.ele[3].port_a2.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta482 = stringAppend(MMC_REFSTRINGLIT(tmp480),tmp481);
      {
        const char* assert_cond = "(cooCoi.ele[3].port_a2.h_outflow >= -1e10 and cooCoi.ele[3].port_a2.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta482));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta482));
        }
      }
      tmp483 = 1;
    }
  }
  threadData->lastEquationSolved = 10273;
}

/*
equation index: 10274
type: ALGORITHM

  assert(cooCoi.ele[3].m2_flow >= -1e5 and cooCoi.ele[3].m2_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= cooCoi.ele[3].m2_flow <= 1e5, has value: " + String(cooCoi.ele[3].m2_flow, "g"));
*/
void logic2_raw_eqFunction_10274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10274};
  modelica_boolean tmp484;
  modelica_boolean tmp485;
  static const MMC_DEFSTRINGLIT(tmp486,88,"Variable violating min/max constraint: -1e5 <= cooCoi.ele[3].m2_flow <= 1e5, has value: ");
  modelica_string tmp487;
  modelica_metatype tmpMeta488;
  static int tmp489 = 0;
  if(!tmp489)
  {
    tmp484 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */),-1e5);
    tmp485 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */),1e5);
    if(!(tmp484 && tmp485))
    {
      tmp487 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta488 = stringAppend(MMC_REFSTRINGLIT(tmp486),tmp487);
      {
        const char* assert_cond = "(cooCoi.ele[3].m2_flow >= -1e5 and cooCoi.ele[3].m2_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialFourPortInterface.mo",27,3,28,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta488));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialFourPortInterface.mo",27,3,28,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta488));
        }
      }
      tmp489 = 1;
    }
  }
  threadData->lastEquationSolved = 10274;
}

/*
equation index: 10275
type: ALGORITHM

  assert(cooCoi.ele[3].state_a1_inflow.T >= 1.0 and cooCoi.ele[3].state_a1_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[3].state_a1_inflow.T <= 1e4, has value: " + String(cooCoi.ele[3].state_a1_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10275};
  modelica_boolean tmp490;
  modelica_boolean tmp491;
  static const MMC_DEFSTRINGLIT(tmp492,97,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[3].state_a1_inflow.T <= 1e4, has value: ");
  modelica_string tmp493;
  modelica_metatype tmpMeta494;
  static int tmp495 = 0;
  if(!tmp495)
  {
    tmp490 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[538]] /* cooCoi.ele[3].state_a1_inflow.T variable */),1.0);
    tmp491 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[538]] /* cooCoi.ele[3].state_a1_inflow.T variable */),1e4);
    if(!(tmp490 && tmp491))
    {
      tmp493 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[538]] /* cooCoi.ele[3].state_a1_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta494 = stringAppend(MMC_REFSTRINGLIT(tmp492),tmp493);
      {
        const char* assert_cond = "(cooCoi.ele[3].state_a1_inflow.T >= 1.0 and cooCoi.ele[3].state_a1_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta494));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta494));
        }
      }
      tmp495 = 1;
    }
  }
  threadData->lastEquationSolved = 10275;
}

/*
equation index: 10276
type: ALGORITHM

  assert(cooCoi.ele[3].state_b1_inflow.T >= 1.0 and cooCoi.ele[3].state_b1_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[3].state_b1_inflow.T <= 1e4, has value: " + String(cooCoi.ele[3].state_b1_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10276};
  modelica_boolean tmp496;
  modelica_boolean tmp497;
  static const MMC_DEFSTRINGLIT(tmp498,97,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[3].state_b1_inflow.T <= 1e4, has value: ");
  modelica_string tmp499;
  modelica_metatype tmpMeta500;
  static int tmp501 = 0;
  if(!tmp501)
  {
    tmp496 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[550]] /* cooCoi.ele[3].state_b1_inflow.T variable */),1.0);
    tmp497 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[550]] /* cooCoi.ele[3].state_b1_inflow.T variable */),1e4);
    if(!(tmp496 && tmp497))
    {
      tmp499 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[550]] /* cooCoi.ele[3].state_b1_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta500 = stringAppend(MMC_REFSTRINGLIT(tmp498),tmp499);
      {
        const char* assert_cond = "(cooCoi.ele[3].state_b1_inflow.T >= 1.0 and cooCoi.ele[3].state_b1_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta500));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta500));
        }
      }
      tmp501 = 1;
    }
  }
  threadData->lastEquationSolved = 10276;
}

/*
equation index: 10277
type: ALGORITHM

  assert(cooCoi.ele[3].state_a2_inflow.T >= 1.0 and cooCoi.ele[3].state_a2_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[3].state_a2_inflow.T <= 1e4, has value: " + String(cooCoi.ele[3].state_a2_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10277};
  modelica_boolean tmp502;
  modelica_boolean tmp503;
  static const MMC_DEFSTRINGLIT(tmp504,97,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[3].state_a2_inflow.T <= 1e4, has value: ");
  modelica_string tmp505;
  modelica_metatype tmpMeta506;
  static int tmp507 = 0;
  if(!tmp507)
  {
    tmp502 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* cooCoi.ele[3].state_a2_inflow.T variable */),1.0);
    tmp503 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* cooCoi.ele[3].state_a2_inflow.T variable */),1e4);
    if(!(tmp502 && tmp503))
    {
      tmp505 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* cooCoi.ele[3].state_a2_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta506 = stringAppend(MMC_REFSTRINGLIT(tmp504),tmp505);
      {
        const char* assert_cond = "(cooCoi.ele[3].state_a2_inflow.T >= 1.0 and cooCoi.ele[3].state_a2_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta506));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta506));
        }
      }
      tmp507 = 1;
    }
  }
  threadData->lastEquationSolved = 10277;
}

/*
equation index: 10278
type: ALGORITHM

  assert(cooCoi.ele[3].state_a2_inflow.X[2] >= 0.0 and cooCoi.ele[3].state_a2_inflow.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[3].state_a2_inflow.X[2] <= 1.0, has value: " + String(cooCoi.ele[3].state_a2_inflow.X[2], "g"));
*/
void logic2_raw_eqFunction_10278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10278};
  modelica_boolean tmp508;
  modelica_boolean tmp509;
  static const MMC_DEFSTRINGLIT(tmp510,100,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[3].state_a2_inflow.X[2] <= 1.0, has value: ");
  modelica_string tmp511;
  modelica_metatype tmpMeta512;
  static int tmp513 = 0;
  if(!tmp513)
  {
    tmp508 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[546]] /* cooCoi.ele[3].state_a2_inflow.X[2] variable */),0.0);
    tmp509 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[546]] /* cooCoi.ele[3].state_a2_inflow.X[2] variable */),1.0);
    if(!(tmp508 && tmp509))
    {
      tmp511 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[546]] /* cooCoi.ele[3].state_a2_inflow.X[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta512 = stringAppend(MMC_REFSTRINGLIT(tmp510),tmp511);
      {
        const char* assert_cond = "(cooCoi.ele[3].state_a2_inflow.X[2] >= 0.0 and cooCoi.ele[3].state_a2_inflow.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta512));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta512));
        }
      }
      tmp513 = 1;
    }
  }
  threadData->lastEquationSolved = 10278;
}

/*
equation index: 10279
type: ALGORITHM

  assert(cooCoi.ele[3].state_b2_inflow.T >= 1.0 and cooCoi.ele[3].state_b2_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[3].state_b2_inflow.T <= 1e4, has value: " + String(cooCoi.ele[3].state_b2_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10279};
  modelica_boolean tmp514;
  modelica_boolean tmp515;
  static const MMC_DEFSTRINGLIT(tmp516,97,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[3].state_b2_inflow.T <= 1e4, has value: ");
  modelica_string tmp517;
  modelica_metatype tmpMeta518;
  static int tmp519 = 0;
  if(!tmp519)
  {
    tmp514 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[554]] /* cooCoi.ele[3].state_b2_inflow.T variable */),1.0);
    tmp515 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[554]] /* cooCoi.ele[3].state_b2_inflow.T variable */),1e4);
    if(!(tmp514 && tmp515))
    {
      tmp517 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[554]] /* cooCoi.ele[3].state_b2_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta518 = stringAppend(MMC_REFSTRINGLIT(tmp516),tmp517);
      {
        const char* assert_cond = "(cooCoi.ele[3].state_b2_inflow.T >= 1.0 and cooCoi.ele[3].state_b2_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta518));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta518));
        }
      }
      tmp519 = 1;
    }
  }
  threadData->lastEquationSolved = 10279;
}

/*
equation index: 10280
type: ALGORITHM

  assert(cooCoi.ele[3].state_b2_inflow.X[2] >= 0.0 and cooCoi.ele[3].state_b2_inflow.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[3].state_b2_inflow.X[2] <= 1.0, has value: " + String(cooCoi.ele[3].state_b2_inflow.X[2], "g"));
*/
void logic2_raw_eqFunction_10280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10280};
  modelica_boolean tmp520;
  modelica_boolean tmp521;
  static const MMC_DEFSTRINGLIT(tmp522,100,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[3].state_b2_inflow.X[2] <= 1.0, has value: ");
  modelica_string tmp523;
  modelica_metatype tmpMeta524;
  static int tmp525 = 0;
  if(!tmp525)
  {
    tmp520 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[557]] /* cooCoi.ele[3].state_b2_inflow.X[2] variable */),0.0);
    tmp521 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[557]] /* cooCoi.ele[3].state_b2_inflow.X[2] variable */),1.0);
    if(!(tmp520 && tmp521))
    {
      tmp523 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[557]] /* cooCoi.ele[3].state_b2_inflow.X[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta524 = stringAppend(MMC_REFSTRINGLIT(tmp522),tmp523);
      {
        const char* assert_cond = "(cooCoi.ele[3].state_b2_inflow.X[2] >= 0.0 and cooCoi.ele[3].state_b2_inflow.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta524));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta524));
        }
      }
      tmp525 = 1;
    }
  }
  threadData->lastEquationSolved = 10280;
}

/*
equation index: 10281
type: ALGORITHM

  assert(cooCoi.ele[3].vol1.dynBal.medium.T >= 1.0 and cooCoi.ele[3].vol1.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[3].vol1.dynBal.medium.T <= 1e4, has value: " + String(cooCoi.ele[3].vol1.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10281};
  modelica_boolean tmp526;
  modelica_boolean tmp527;
  static const MMC_DEFSTRINGLIT(tmp528,100,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[3].vol1.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp529;
  modelica_metatype tmpMeta530;
  static int tmp531 = 0;
  if(!tmp531)
  {
    tmp526 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* cooCoi.ele[3].vol1.dynBal.medium.T variable */),1.0);
    tmp527 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* cooCoi.ele[3].vol1.dynBal.medium.T variable */),1e4);
    if(!(tmp526 && tmp527))
    {
      tmp529 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* cooCoi.ele[3].vol1.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta530 = stringAppend(MMC_REFSTRINGLIT(tmp528),tmp529);
      {
        const char* assert_cond = "(cooCoi.ele[3].vol1.dynBal.medium.T >= 1.0 and cooCoi.ele[3].vol1.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta530));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta530));
        }
      }
      tmp531 = 1;
    }
  }
  threadData->lastEquationSolved = 10281;
}

/*
equation index: 10282
type: ALGORITHM

  assert(cooCoi.ele[3].vol1.dynBal.ports_H_flow[1] >= -1e8 and cooCoi.ele[3].vol1.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[3].vol1.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(cooCoi.ele[3].vol1.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10282};
  modelica_boolean tmp532;
  modelica_boolean tmp533;
  static const MMC_DEFSTRINGLIT(tmp534,108,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[3].vol1.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp535;
  modelica_metatype tmpMeta536;
  static int tmp537 = 0;
  if(!tmp537)
  {
    tmp532 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* cooCoi.ele[3].vol1.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp533 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* cooCoi.ele[3].vol1.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp532 && tmp533))
    {
      tmp535 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* cooCoi.ele[3].vol1.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta536 = stringAppend(MMC_REFSTRINGLIT(tmp534),tmp535);
      {
        const char* assert_cond = "(cooCoi.ele[3].vol1.dynBal.ports_H_flow[1] >= -1e8 and cooCoi.ele[3].vol1.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta536));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta536));
        }
      }
      tmp537 = 1;
    }
  }
  threadData->lastEquationSolved = 10282;
}

/*
equation index: 10283
type: ALGORITHM

  assert(cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] >= -1e8 and cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(cooCoi.ele[3].vol1.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10283};
  modelica_boolean tmp538;
  modelica_boolean tmp539;
  static const MMC_DEFSTRINGLIT(tmp540,108,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp541;
  modelica_metatype tmpMeta542;
  static int tmp543 = 0;
  if(!tmp543)
  {
    tmp538 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp539 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp538 && tmp539))
    {
      tmp541 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta542 = stringAppend(MMC_REFSTRINGLIT(tmp540),tmp541);
      {
        const char* assert_cond = "(cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] >= -1e8 and cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta542));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta542));
        }
      }
      tmp543 = 1;
    }
  }
  threadData->lastEquationSolved = 10283;
}

/*
equation index: 10284
type: ALGORITHM

  assert(cooCoi.ele[3].vol2.dynBal.medium.Xi[1] >= 0.0 and cooCoi.ele[3].vol2.dynBal.medium.Xi[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[3].vol2.dynBal.medium.Xi[1] <= 1.0, has value: " + String(cooCoi.ele[3].vol2.dynBal.medium.Xi[1], "g"));
*/
void logic2_raw_eqFunction_10284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10284};
  modelica_boolean tmp544;
  modelica_boolean tmp545;
  static const MMC_DEFSTRINGLIT(tmp546,104,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[3].vol2.dynBal.medium.Xi[1] <= 1.0, has value: ");
  modelica_string tmp547;
  modelica_metatype tmpMeta548;
  static int tmp549 = 0;
  if(!tmp549)
  {
    tmp544 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */),0.0);
    tmp545 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */),1.0);
    if(!(tmp544 && tmp545))
    {
      tmp547 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta548 = stringAppend(MMC_REFSTRINGLIT(tmp546),tmp547);
      {
        const char* assert_cond = "(cooCoi.ele[3].vol2.dynBal.medium.Xi[1] >= 0.0 and cooCoi.ele[3].vol2.dynBal.medium.Xi[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5016,7,5017,50,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta548));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5016,7,5017,50,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta548));
        }
      }
      tmp549 = 1;
    }
  }
  threadData->lastEquationSolved = 10284;
}

/*
equation index: 10285
type: ALGORITHM

  assert(cooCoi.ele[3].vol2.dynBal.medium.d >= 0.0 and cooCoi.ele[3].vol2.dynBal.medium.d <= 1e5, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[3].vol2.dynBal.medium.d <= 1e5, has value: " + String(cooCoi.ele[3].vol2.dynBal.medium.d, "g"));
*/
void logic2_raw_eqFunction_10285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10285};
  modelica_boolean tmp550;
  modelica_boolean tmp551;
  static const MMC_DEFSTRINGLIT(tmp552,100,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[3].vol2.dynBal.medium.d <= 1e5, has value: ");
  modelica_string tmp553;
  modelica_metatype tmpMeta554;
  static int tmp555 = 0;
  if(!tmp555)
  {
    tmp550 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* cooCoi.ele[3].vol2.dynBal.medium.d variable */),0.0);
    tmp551 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* cooCoi.ele[3].vol2.dynBal.medium.d variable */),1e5);
    if(!(tmp550 && tmp551))
    {
      tmp553 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* cooCoi.ele[3].vol2.dynBal.medium.d variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta554 = stringAppend(MMC_REFSTRINGLIT(tmp552),tmp553);
      {
        const char* assert_cond = "(cooCoi.ele[3].vol2.dynBal.medium.d >= 0.0 and cooCoi.ele[3].vol2.dynBal.medium.d <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5019,7,5019,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta554));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5019,7,5019,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta554));
        }
      }
      tmp555 = 1;
    }
  }
  threadData->lastEquationSolved = 10285;
}

/*
equation index: 10286
type: ALGORITHM

  assert(cooCoi.ele[3].vol2.dynBal.medium.T >= 1.0 and cooCoi.ele[3].vol2.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[3].vol2.dynBal.medium.T <= 1e4, has value: " + String(cooCoi.ele[3].vol2.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10286};
  modelica_boolean tmp556;
  modelica_boolean tmp557;
  static const MMC_DEFSTRINGLIT(tmp558,100,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[3].vol2.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp559;
  modelica_metatype tmpMeta560;
  static int tmp561 = 0;
  if(!tmp561)
  {
    tmp556 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* cooCoi.ele[3].vol2.dynBal.medium.T variable */),1.0);
    tmp557 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* cooCoi.ele[3].vol2.dynBal.medium.T variable */),1e4);
    if(!(tmp556 && tmp557))
    {
      tmp559 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* cooCoi.ele[3].vol2.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta560 = stringAppend(MMC_REFSTRINGLIT(tmp558),tmp559);
      {
        const char* assert_cond = "(cooCoi.ele[3].vol2.dynBal.medium.T >= 1.0 and cooCoi.ele[3].vol2.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5020,7,5020,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta560));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5020,7,5020,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta560));
        }
      }
      tmp561 = 1;
    }
  }
  threadData->lastEquationSolved = 10286;
}

/*
equation index: 10287
type: ALGORITHM

  assert(cooCoi.ele[3].vol2.dynBal.medium.X[2] >= 0.0 and cooCoi.ele[3].vol2.dynBal.medium.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[3].vol2.dynBal.medium.X[2] <= 1.0, has value: " + String(cooCoi.ele[3].vol2.dynBal.medium.X[2], "g"));
*/
void logic2_raw_eqFunction_10287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10287};
  modelica_boolean tmp562;
  modelica_boolean tmp563;
  static const MMC_DEFSTRINGLIT(tmp564,103,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[3].vol2.dynBal.medium.X[2] <= 1.0, has value: ");
  modelica_string tmp565;
  modelica_metatype tmpMeta566;
  static int tmp567 = 0;
  if(!tmp567)
  {
    tmp562 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cooCoi.ele[3].vol2.dynBal.medium.X[2] variable */),0.0);
    tmp563 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cooCoi.ele[3].vol2.dynBal.medium.X[2] variable */),1.0);
    if(!(tmp562 && tmp563))
    {
      tmp565 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cooCoi.ele[3].vol2.dynBal.medium.X[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta566 = stringAppend(MMC_REFSTRINGLIT(tmp564),tmp565);
      {
        const char* assert_cond = "(cooCoi.ele[3].vol2.dynBal.medium.X[2] >= 0.0 and cooCoi.ele[3].vol2.dynBal.medium.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5021,7,5022,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta566));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5021,7,5022,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta566));
        }
      }
      tmp567 = 1;
    }
  }
  threadData->lastEquationSolved = 10287;
}

/*
equation index: 10288
type: ALGORITHM

  assert(cooCoi.ele[3].vol2.dynBal.medium.u >= -1e8 and cooCoi.ele[3].vol2.dynBal.medium.u <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[3].vol2.dynBal.medium.u <= 1e8, has value: " + String(cooCoi.ele[3].vol2.dynBal.medium.u, "g"));
*/
void logic2_raw_eqFunction_10288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10288};
  modelica_boolean tmp568;
  modelica_boolean tmp569;
  static const MMC_DEFSTRINGLIT(tmp570,101,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[3].vol2.dynBal.medium.u <= 1e8, has value: ");
  modelica_string tmp571;
  modelica_metatype tmpMeta572;
  static int tmp573 = 0;
  if(!tmp573)
  {
    tmp568 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* cooCoi.ele[3].vol2.dynBal.medium.u variable */),-1e8);
    tmp569 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* cooCoi.ele[3].vol2.dynBal.medium.u variable */),1e8);
    if(!(tmp568 && tmp569))
    {
      tmp571 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* cooCoi.ele[3].vol2.dynBal.medium.u variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta572 = stringAppend(MMC_REFSTRINGLIT(tmp570),tmp571);
      {
        const char* assert_cond = "(cooCoi.ele[3].vol2.dynBal.medium.u >= -1e8 and cooCoi.ele[3].vol2.dynBal.medium.u <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5023,7,5023,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta572));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5023,7,5023,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta572));
        }
      }
      tmp573 = 1;
    }
  }
  threadData->lastEquationSolved = 10288;
}

/*
equation index: 10289
type: ALGORITHM

  assert(cooCoi.ele[3].vol2.dynBal.medium.R >= 0.0 and cooCoi.ele[3].vol2.dynBal.medium.R <= 1e7, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[3].vol2.dynBal.medium.R <= 1e7, has value: " + String(cooCoi.ele[3].vol2.dynBal.medium.R, "g"));
*/
void logic2_raw_eqFunction_10289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10289};
  modelica_boolean tmp574;
  modelica_boolean tmp575;
  static const MMC_DEFSTRINGLIT(tmp576,100,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[3].vol2.dynBal.medium.R <= 1e7, has value: ");
  modelica_string tmp577;
  modelica_metatype tmpMeta578;
  static int tmp579 = 0;
  if(!tmp579)
  {
    tmp574 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cooCoi.ele[3].vol2.dynBal.medium.R variable */),0.0);
    tmp575 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cooCoi.ele[3].vol2.dynBal.medium.R variable */),1e7);
    if(!(tmp574 && tmp575))
    {
      tmp577 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cooCoi.ele[3].vol2.dynBal.medium.R variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta578 = stringAppend(MMC_REFSTRINGLIT(tmp576),tmp577);
      {
        const char* assert_cond = "(cooCoi.ele[3].vol2.dynBal.medium.R >= 0.0 and cooCoi.ele[3].vol2.dynBal.medium.R <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5024,7,5024,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta578));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5024,7,5024,71,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta578));
        }
      }
      tmp579 = 1;
    }
  }
  threadData->lastEquationSolved = 10289;
}

/*
equation index: 10290
type: ALGORITHM

  assert(cooCoi.ele[3].vol2.dynBal.medium.MM >= 0.001 and cooCoi.ele[3].vol2.dynBal.medium.MM <= 0.25, "Variable violating min/max constraint: 0.001 <= cooCoi.ele[3].vol2.dynBal.medium.MM <= 0.25, has value: " + String(cooCoi.ele[3].vol2.dynBal.medium.MM, "g"));
*/
void logic2_raw_eqFunction_10290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10290};
  modelica_boolean tmp580;
  modelica_boolean tmp581;
  static const MMC_DEFSTRINGLIT(tmp582,104,"Variable violating min/max constraint: 0.001 <= cooCoi.ele[3].vol2.dynBal.medium.MM <= 0.25, has value: ");
  modelica_string tmp583;
  modelica_metatype tmpMeta584;
  static int tmp585 = 0;
  if(!tmp585)
  {
    tmp580 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* cooCoi.ele[3].vol2.dynBal.medium.MM variable */),0.001);
    tmp581 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* cooCoi.ele[3].vol2.dynBal.medium.MM variable */),0.25);
    if(!(tmp580 && tmp581))
    {
      tmp583 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* cooCoi.ele[3].vol2.dynBal.medium.MM variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta584 = stringAppend(MMC_REFSTRINGLIT(tmp582),tmp583);
      {
        const char* assert_cond = "(cooCoi.ele[3].vol2.dynBal.medium.MM >= 0.001 and cooCoi.ele[3].vol2.dynBal.medium.MM <= 0.25)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5025,7,5025,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta584));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5025,7,5025,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta584));
        }
      }
      tmp585 = 1;
    }
  }
  threadData->lastEquationSolved = 10290;
}

/*
equation index: 10291
type: ALGORITHM

  assert(cooCoi.ele[3].vol2.dynBal.m >= 0.0, "Variable violating min constraint: 0.0 <= cooCoi.ele[3].vol2.dynBal.m, has value: " + String(cooCoi.ele[3].vol2.dynBal.m, "g"));
*/
void logic2_raw_eqFunction_10291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10291};
  modelica_boolean tmp586;
  static const MMC_DEFSTRINGLIT(tmp587,82,"Variable violating min constraint: 0.0 <= cooCoi.ele[3].vol2.dynBal.m, has value: ");
  modelica_string tmp588;
  modelica_metatype tmpMeta589;
  static int tmp590 = 0;
  if(!tmp590)
  {
    tmp586 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* cooCoi.ele[3].vol2.dynBal.m DUMMY_STATE */),0.0);
    if(!tmp586)
    {
      tmp588 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* cooCoi.ele[3].vol2.dynBal.m DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta589 = stringAppend(MMC_REFSTRINGLIT(tmp587),tmp588);
      {
        const char* assert_cond = "(cooCoi.ele[3].vol2.dynBal.m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",94,3,98,20,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta589));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",94,3,98,20,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta589));
        }
      }
      tmp590 = 1;
    }
  }
  threadData->lastEquationSolved = 10291;
}

/*
equation index: 10292
type: ALGORITHM

  assert(cooCoi.ele[3].vol2.dynBal.mXi[1] >= 0.0, "Variable violating min constraint: 0.0 <= cooCoi.ele[3].vol2.dynBal.mXi[1], has value: " + String(cooCoi.ele[3].vol2.dynBal.mXi[1], "g"));
*/
void logic2_raw_eqFunction_10292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10292};
  modelica_boolean tmp591;
  static const MMC_DEFSTRINGLIT(tmp592,87,"Variable violating min constraint: 0.0 <= cooCoi.ele[3].vol2.dynBal.mXi[1], has value: ");
  modelica_string tmp593;
  modelica_metatype tmpMeta594;
  static int tmp595 = 0;
  if(!tmp595)
  {
    tmp591 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* cooCoi.ele[3].vol2.dynBal.mXi[1] STATE(1) */),0.0);
    if(!tmp591)
    {
      tmp593 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* cooCoi.ele[3].vol2.dynBal.mXi[1] STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta594 = stringAppend(MMC_REFSTRINGLIT(tmp592),tmp593);
      {
        const char* assert_cond = "(cooCoi.ele[3].vol2.dynBal.mXi[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",100,3,102,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta594));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",100,3,102,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta594));
        }
      }
      tmp595 = 1;
    }
  }
  threadData->lastEquationSolved = 10292;
}

/*
equation index: 10293
type: ALGORITHM

  assert(cooCoi.ele[3].vol2.dynBal.ports_H_flow[1] >= -1e8 and cooCoi.ele[3].vol2.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[3].vol2.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(cooCoi.ele[3].vol2.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10293};
  modelica_boolean tmp596;
  modelica_boolean tmp597;
  static const MMC_DEFSTRINGLIT(tmp598,108,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[3].vol2.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp599;
  modelica_metatype tmpMeta600;
  static int tmp601 = 0;
  if(!tmp601)
  {
    tmp596 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* cooCoi.ele[3].vol2.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp597 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* cooCoi.ele[3].vol2.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp596 && tmp597))
    {
      tmp599 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* cooCoi.ele[3].vol2.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta600 = stringAppend(MMC_REFSTRINGLIT(tmp598),tmp599);
      {
        const char* assert_cond = "(cooCoi.ele[3].vol2.dynBal.ports_H_flow[1] >= -1e8 and cooCoi.ele[3].vol2.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta600));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta600));
        }
      }
      tmp601 = 1;
    }
  }
  threadData->lastEquationSolved = 10293;
}

/*
equation index: 10294
type: ALGORITHM

  assert(cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] >= -1e8 and cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(cooCoi.ele[3].vol2.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10294};
  modelica_boolean tmp602;
  modelica_boolean tmp603;
  static const MMC_DEFSTRINGLIT(tmp604,108,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp605;
  modelica_metatype tmpMeta606;
  static int tmp607 = 0;
  if(!tmp607)
  {
    tmp602 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp603 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp602 && tmp603))
    {
      tmp605 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta606 = stringAppend(MMC_REFSTRINGLIT(tmp604),tmp605);
      {
        const char* assert_cond = "(cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] >= -1e8 and cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta606));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta606));
        }
      }
      tmp607 = 1;
    }
  }
  threadData->lastEquationSolved = 10294;
}

/*
equation index: 10295
type: ALGORITHM

  assert(cooCoi.ele[3].mas.T >= 0.0, "Variable violating min constraint: 0.0 <= cooCoi.ele[3].mas.T, has value: " + String(cooCoi.ele[3].mas.T, "g"));
*/
void logic2_raw_eqFunction_10295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10295};
  modelica_boolean tmp608;
  static const MMC_DEFSTRINGLIT(tmp609,74,"Variable violating min constraint: 0.0 <= cooCoi.ele[3].mas.T, has value: ");
  modelica_string tmp610;
  modelica_metatype tmpMeta611;
  static int tmp612 = 0;
  if(!tmp612)
  {
    tmp608 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* cooCoi.ele[3].mas.T STATE(1,cooCoi.ele[3].mas.der_T) */),0.0);
    if(!tmp608)
    {
      tmp610 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* cooCoi.ele[3].mas.T STATE(1,cooCoi.ele[3].mas.der_T) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta611 = stringAppend(MMC_REFSTRINGLIT(tmp609),tmp610);
      {
        const char* assert_cond = "(cooCoi.ele[3].mas.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",541,7,542,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta611));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",541,7,542,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta611));
        }
      }
      tmp612 = 1;
    }
  }
  threadData->lastEquationSolved = 10295;
}

/*
equation index: 10296
type: ALGORITHM

  assert(cooCoi.ele[3].con1.dT >= -200.0, "Variable violating min constraint: -200.0 <= cooCoi.ele[3].con1.dT, has value: " + String(cooCoi.ele[3].con1.dT, "g"));
*/
void logic2_raw_eqFunction_10296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10296};
  modelica_boolean tmp613;
  static const MMC_DEFSTRINGLIT(tmp614,79,"Variable violating min constraint: -200.0 <= cooCoi.ele[3].con1.dT, has value: ");
  modelica_string tmp615;
  modelica_metatype tmpMeta616;
  static int tmp617 = 0;
  if(!tmp617)
  {
    tmp613 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* cooCoi.ele[3].con1.dT variable */),-200.0);
    if(!tmp613)
    {
      tmp615 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* cooCoi.ele[3].con1.dT variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta616 = stringAppend(MMC_REFSTRINGLIT(tmp614),tmp615);
      {
        const char* assert_cond = "(cooCoi.ele[3].con1.dT >= -200.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",816,7,816,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta616));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",816,7,816,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta616));
        }
      }
      tmp617 = 1;
    }
  }
  threadData->lastEquationSolved = 10296;
}

/*
equation index: 10297
type: ALGORITHM

  assert(cooCoi.ele[3].con2.dT >= -200.0, "Variable violating min constraint: -200.0 <= cooCoi.ele[3].con2.dT, has value: " + String(cooCoi.ele[3].con2.dT, "g"));
*/
void logic2_raw_eqFunction_10297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10297};
  modelica_boolean tmp618;
  static const MMC_DEFSTRINGLIT(tmp619,79,"Variable violating min constraint: -200.0 <= cooCoi.ele[3].con2.dT, has value: ");
  modelica_string tmp620;
  modelica_metatype tmpMeta621;
  static int tmp622 = 0;
  if(!tmp622)
  {
    tmp618 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[3].con2.dT variable */),-200.0);
    if(!tmp618)
    {
      tmp620 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[3].con2.dT variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta621 = stringAppend(MMC_REFSTRINGLIT(tmp619),tmp620);
      {
        const char* assert_cond = "(cooCoi.ele[3].con2.dT >= -200.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",816,7,816,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta621));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",816,7,816,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta621));
        }
      }
      tmp622 = 1;
    }
  }
  threadData->lastEquationSolved = 10297;
}

/*
equation index: 10298
type: ALGORITHM

  assert(cooCoi.ele[4].state_a1_inflow.T >= 1.0 and cooCoi.ele[4].state_a1_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[4].state_a1_inflow.T <= 1e4, has value: " + String(cooCoi.ele[4].state_a1_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10298};
  modelica_boolean tmp623;
  modelica_boolean tmp624;
  static const MMC_DEFSTRINGLIT(tmp625,97,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[4].state_a1_inflow.T <= 1e4, has value: ");
  modelica_string tmp626;
  modelica_metatype tmpMeta627;
  static int tmp628 = 0;
  if(!tmp628)
  {
    tmp623 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* cooCoi.ele[4].state_a1_inflow.T variable */),1.0);
    tmp624 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* cooCoi.ele[4].state_a1_inflow.T variable */),1e4);
    if(!(tmp623 && tmp624))
    {
      tmp626 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* cooCoi.ele[4].state_a1_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta627 = stringAppend(MMC_REFSTRINGLIT(tmp625),tmp626);
      {
        const char* assert_cond = "(cooCoi.ele[4].state_a1_inflow.T >= 1.0 and cooCoi.ele[4].state_a1_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta627));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta627));
        }
      }
      tmp628 = 1;
    }
  }
  threadData->lastEquationSolved = 10298;
}

/*
equation index: 10299
type: ALGORITHM

  assert(cooCoi.ele[4].state_b1_inflow.T >= 1.0 and cooCoi.ele[4].state_b1_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[4].state_b1_inflow.T <= 1e4, has value: " + String(cooCoi.ele[4].state_b1_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10299};
  modelica_boolean tmp629;
  modelica_boolean tmp630;
  static const MMC_DEFSTRINGLIT(tmp631,97,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[4].state_b1_inflow.T <= 1e4, has value: ");
  modelica_string tmp632;
  modelica_metatype tmpMeta633;
  static int tmp634 = 0;
  if(!tmp634)
  {
    tmp629 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* cooCoi.ele[4].state_b1_inflow.T variable */),1.0);
    tmp630 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* cooCoi.ele[4].state_b1_inflow.T variable */),1e4);
    if(!(tmp629 && tmp630))
    {
      tmp632 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* cooCoi.ele[4].state_b1_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta633 = stringAppend(MMC_REFSTRINGLIT(tmp631),tmp632);
      {
        const char* assert_cond = "(cooCoi.ele[4].state_b1_inflow.T >= 1.0 and cooCoi.ele[4].state_b1_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta633));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta633));
        }
      }
      tmp634 = 1;
    }
  }
  threadData->lastEquationSolved = 10299;
}

/*
equation index: 10300
type: ALGORITHM

  assert(cooCoi.ele[4].state_a2_inflow.T >= 1.0 and cooCoi.ele[4].state_a2_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[4].state_a2_inflow.T <= 1e4, has value: " + String(cooCoi.ele[4].state_a2_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10300};
  modelica_boolean tmp635;
  modelica_boolean tmp636;
  static const MMC_DEFSTRINGLIT(tmp637,97,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[4].state_a2_inflow.T <= 1e4, has value: ");
  modelica_string tmp638;
  modelica_metatype tmpMeta639;
  static int tmp640 = 0;
  if(!tmp640)
  {
    tmp635 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* cooCoi.ele[4].state_a2_inflow.T variable */),1.0);
    tmp636 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* cooCoi.ele[4].state_a2_inflow.T variable */),1e4);
    if(!(tmp635 && tmp636))
    {
      tmp638 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* cooCoi.ele[4].state_a2_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta639 = stringAppend(MMC_REFSTRINGLIT(tmp637),tmp638);
      {
        const char* assert_cond = "(cooCoi.ele[4].state_a2_inflow.T >= 1.0 and cooCoi.ele[4].state_a2_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta639));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta639));
        }
      }
      tmp640 = 1;
    }
  }
  threadData->lastEquationSolved = 10300;
}

/*
equation index: 10301
type: ALGORITHM

  assert(cooCoi.ele[4].state_a2_inflow.X[2] >= 0.0 and cooCoi.ele[4].state_a2_inflow.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[4].state_a2_inflow.X[2] <= 1.0, has value: " + String(cooCoi.ele[4].state_a2_inflow.X[2], "g"));
*/
void logic2_raw_eqFunction_10301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10301};
  modelica_boolean tmp641;
  modelica_boolean tmp642;
  static const MMC_DEFSTRINGLIT(tmp643,100,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[4].state_a2_inflow.X[2] <= 1.0, has value: ");
  modelica_string tmp644;
  modelica_metatype tmpMeta645;
  static int tmp646 = 0;
  if(!tmp646)
  {
    tmp641 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[547]] /* cooCoi.ele[4].state_a2_inflow.X[2] variable */),0.0);
    tmp642 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[547]] /* cooCoi.ele[4].state_a2_inflow.X[2] variable */),1.0);
    if(!(tmp641 && tmp642))
    {
      tmp644 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[547]] /* cooCoi.ele[4].state_a2_inflow.X[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta645 = stringAppend(MMC_REFSTRINGLIT(tmp643),tmp644);
      {
        const char* assert_cond = "(cooCoi.ele[4].state_a2_inflow.X[2] >= 0.0 and cooCoi.ele[4].state_a2_inflow.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta645));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta645));
        }
      }
      tmp646 = 1;
    }
  }
  threadData->lastEquationSolved = 10301;
}

/*
equation index: 10302
type: ALGORITHM

  assert(cooCoi.ele[4].state_b2_inflow.T >= 1.0 and cooCoi.ele[4].state_b2_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[4].state_b2_inflow.T <= 1e4, has value: " + String(cooCoi.ele[4].state_b2_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10302};
  modelica_boolean tmp647;
  modelica_boolean tmp648;
  static const MMC_DEFSTRINGLIT(tmp649,97,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[4].state_b2_inflow.T <= 1e4, has value: ");
  modelica_string tmp650;
  modelica_metatype tmpMeta651;
  static int tmp652 = 0;
  if(!tmp652)
  {
    tmp647 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[555]] /* cooCoi.ele[4].state_b2_inflow.T variable */),1.0);
    tmp648 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[555]] /* cooCoi.ele[4].state_b2_inflow.T variable */),1e4);
    if(!(tmp647 && tmp648))
    {
      tmp650 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[555]] /* cooCoi.ele[4].state_b2_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta651 = stringAppend(MMC_REFSTRINGLIT(tmp649),tmp650);
      {
        const char* assert_cond = "(cooCoi.ele[4].state_b2_inflow.T >= 1.0 and cooCoi.ele[4].state_b2_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta651));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6134,7,6134,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta651));
        }
      }
      tmp652 = 1;
    }
  }
  threadData->lastEquationSolved = 10302;
}

/*
equation index: 10303
type: ALGORITHM

  assert(cooCoi.ele[4].state_b2_inflow.X[2] >= 0.0 and cooCoi.ele[4].state_b2_inflow.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[4].state_b2_inflow.X[2] <= 1.0, has value: " + String(cooCoi.ele[4].state_b2_inflow.X[2], "g"));
*/
void logic2_raw_eqFunction_10303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10303};
  modelica_boolean tmp653;
  modelica_boolean tmp654;
  static const MMC_DEFSTRINGLIT(tmp655,100,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[4].state_b2_inflow.X[2] <= 1.0, has value: ");
  modelica_string tmp656;
  modelica_metatype tmpMeta657;
  static int tmp658 = 0;
  if(!tmp658)
  {
    tmp653 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[558]] /* cooCoi.ele[4].state_b2_inflow.X[2] variable */),0.0);
    tmp654 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[558]] /* cooCoi.ele[4].state_b2_inflow.X[2] variable */),1.0);
    if(!(tmp653 && tmp654))
    {
      tmp656 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[558]] /* cooCoi.ele[4].state_b2_inflow.X[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta657 = stringAppend(MMC_REFSTRINGLIT(tmp655),tmp656);
      {
        const char* assert_cond = "(cooCoi.ele[4].state_b2_inflow.X[2] >= 0.0 and cooCoi.ele[4].state_b2_inflow.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta657));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6135,7,6136,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta657));
        }
      }
      tmp658 = 1;
    }
  }
  threadData->lastEquationSolved = 10303;
}

/*
equation index: 10304
type: ALGORITHM

  assert(cooCoi.ele[4].vol1.dynBal.medium.T >= 1.0 and cooCoi.ele[4].vol1.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[4].vol1.dynBal.medium.T <= 1e4, has value: " + String(cooCoi.ele[4].vol1.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10304};
  modelica_boolean tmp659;
  modelica_boolean tmp660;
  static const MMC_DEFSTRINGLIT(tmp661,100,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[4].vol1.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp662;
  modelica_metatype tmpMeta663;
  static int tmp664 = 0;
  if(!tmp664)
  {
    tmp659 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[586]] /* cooCoi.ele[4].vol1.dynBal.medium.T variable */),1.0);
    tmp660 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[586]] /* cooCoi.ele[4].vol1.dynBal.medium.T variable */),1e4);
    if(!(tmp659 && tmp660))
    {
      tmp662 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[586]] /* cooCoi.ele[4].vol1.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta663 = stringAppend(MMC_REFSTRINGLIT(tmp661),tmp662);
      {
        const char* assert_cond = "(cooCoi.ele[4].vol1.dynBal.medium.T >= 1.0 and cooCoi.ele[4].vol1.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta663));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta663));
        }
      }
      tmp664 = 1;
    }
  }
  threadData->lastEquationSolved = 10304;
}

/*
equation index: 10305
type: ALGORITHM

  assert(cooCoi.ele[4].vol1.dynBal.ports_H_flow[1] >= -1e8 and cooCoi.ele[4].vol1.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[4].vol1.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(cooCoi.ele[4].vol1.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10305};
  modelica_boolean tmp665;
  modelica_boolean tmp666;
  static const MMC_DEFSTRINGLIT(tmp667,108,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[4].vol1.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp668;
  modelica_metatype tmpMeta669;
  static int tmp670 = 0;
  if(!tmp670)
  {
    tmp665 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* cooCoi.ele[4].vol1.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp666 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* cooCoi.ele[4].vol1.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp665 && tmp666))
    {
      tmp668 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* cooCoi.ele[4].vol1.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta669 = stringAppend(MMC_REFSTRINGLIT(tmp667),tmp668);
      {
        const char* assert_cond = "(cooCoi.ele[4].vol1.dynBal.ports_H_flow[1] >= -1e8 and cooCoi.ele[4].vol1.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta669));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta669));
        }
      }
      tmp670 = 1;
    }
  }
  threadData->lastEquationSolved = 10305;
}

/*
equation index: 10306
type: ALGORITHM

  assert(cooCoi.ele[4].vol1.dynBal.ports_H_flow[2] >= -1e8 and cooCoi.ele[4].vol1.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[4].vol1.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(cooCoi.ele[4].vol1.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10306};
  modelica_boolean tmp671;
  modelica_boolean tmp672;
  static const MMC_DEFSTRINGLIT(tmp673,108,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[4].vol1.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp674;
  modelica_metatype tmpMeta675;
  static int tmp676 = 0;
  if(!tmp676)
  {
    tmp671 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* cooCoi.ele[4].vol1.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp672 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* cooCoi.ele[4].vol1.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp671 && tmp672))
    {
      tmp674 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* cooCoi.ele[4].vol1.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta675 = stringAppend(MMC_REFSTRINGLIT(tmp673),tmp674);
      {
        const char* assert_cond = "(cooCoi.ele[4].vol1.dynBal.ports_H_flow[2] >= -1e8 and cooCoi.ele[4].vol1.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta675));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta675));
        }
      }
      tmp676 = 1;
    }
  }
  threadData->lastEquationSolved = 10306;
}

/*
equation index: 10307
type: ALGORITHM

  assert(cooCoi.ele[4].vol2.dynBal.medium.Xi[1] >= 0.0 and cooCoi.ele[4].vol2.dynBal.medium.Xi[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[4].vol2.dynBal.medium.Xi[1] <= 1.0, has value: " + String(cooCoi.ele[4].vol2.dynBal.medium.Xi[1], "g"));
*/
void logic2_raw_eqFunction_10307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10307};
  modelica_boolean tmp677;
  modelica_boolean tmp678;
  static const MMC_DEFSTRINGLIT(tmp679,104,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[4].vol2.dynBal.medium.Xi[1] <= 1.0, has value: ");
  modelica_string tmp680;
  modelica_metatype tmpMeta681;
  static int tmp682 = 0;
  if(!tmp682)
  {
    tmp677 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */),0.0);
    tmp678 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */),1.0);
    if(!(tmp677 && tmp678))
    {
      tmp680 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta681 = stringAppend(MMC_REFSTRINGLIT(tmp679),tmp680);
      {
        const char* assert_cond = "(cooCoi.ele[4].vol2.dynBal.medium.Xi[1] >= 0.0 and cooCoi.ele[4].vol2.dynBal.medium.Xi[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5016,7,5017,50,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta681));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5016,7,5017,50,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta681));
        }
      }
      tmp682 = 1;
    }
  }
  threadData->lastEquationSolved = 10307;
}

/*
equation index: 10308
type: ALGORITHM

  assert(cooCoi.ele[4].vol2.dynBal.medium.d >= 0.0 and cooCoi.ele[4].vol2.dynBal.medium.d <= 1e5, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[4].vol2.dynBal.medium.d <= 1e5, has value: " + String(cooCoi.ele[4].vol2.dynBal.medium.d, "g"));
*/
void logic2_raw_eqFunction_10308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10308};
  modelica_boolean tmp683;
  modelica_boolean tmp684;
  static const MMC_DEFSTRINGLIT(tmp685,100,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[4].vol2.dynBal.medium.d <= 1e5, has value: ");
  modelica_string tmp686;
  modelica_metatype tmpMeta687;
  static int tmp688 = 0;
  if(!tmp688)
  {
    tmp683 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* cooCoi.ele[4].vol2.dynBal.medium.d variable */),0.0);
    tmp684 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* cooCoi.ele[4].vol2.dynBal.medium.d variable */),1e5);
    if(!(tmp683 && tmp684))
    {
      tmp686 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* cooCoi.ele[4].vol2.dynBal.medium.d variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta687 = stringAppend(MMC_REFSTRINGLIT(tmp685),tmp686);
      {
        const char* assert_cond = "(cooCoi.ele[4].vol2.dynBal.medium.d >= 0.0 and cooCoi.ele[4].vol2.dynBal.medium.d <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5019,7,5019,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta687));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5019,7,5019,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta687));
        }
      }
      tmp688 = 1;
    }
  }
  threadData->lastEquationSolved = 10308;
}

/*
equation index: 10309
type: ALGORITHM

  assert(cooCoi.ele[4].vol2.dynBal.medium.T >= 1.0 and cooCoi.ele[4].vol2.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooCoi.ele[4].vol2.dynBal.medium.T <= 1e4, has value: " + String(cooCoi.ele[4].vol2.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10309};
  modelica_boolean tmp689;
  modelica_boolean tmp690;
  static const MMC_DEFSTRINGLIT(tmp691,100,"Variable violating min/max constraint: 1.0 <= cooCoi.ele[4].vol2.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp692;
  modelica_metatype tmpMeta693;
  static int tmp694 = 0;
  if(!tmp694)
  {
    tmp689 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* cooCoi.ele[4].vol2.dynBal.medium.T variable */),1.0);
    tmp690 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* cooCoi.ele[4].vol2.dynBal.medium.T variable */),1e4);
    if(!(tmp689 && tmp690))
    {
      tmp692 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* cooCoi.ele[4].vol2.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta693 = stringAppend(MMC_REFSTRINGLIT(tmp691),tmp692);
      {
        const char* assert_cond = "(cooCoi.ele[4].vol2.dynBal.medium.T >= 1.0 and cooCoi.ele[4].vol2.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5020,7,5020,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta693));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5020,7,5020,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta693));
        }
      }
      tmp694 = 1;
    }
  }
  threadData->lastEquationSolved = 10309;
}

/*
equation index: 10310
type: ALGORITHM

  assert(cooCoi.ele[4].vol2.dynBal.medium.X[2] >= 0.0 and cooCoi.ele[4].vol2.dynBal.medium.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[4].vol2.dynBal.medium.X[2] <= 1.0, has value: " + String(cooCoi.ele[4].vol2.dynBal.medium.X[2], "g"));
*/
void logic2_raw_eqFunction_10310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10310};
  modelica_boolean tmp695;
  modelica_boolean tmp696;
  static const MMC_DEFSTRINGLIT(tmp697,103,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[4].vol2.dynBal.medium.X[2] <= 1.0, has value: ");
  modelica_string tmp698;
  modelica_metatype tmpMeta699;
  static int tmp700 = 0;
  if(!tmp700)
  {
    tmp695 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* cooCoi.ele[4].vol2.dynBal.medium.X[2] variable */),0.0);
    tmp696 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* cooCoi.ele[4].vol2.dynBal.medium.X[2] variable */),1.0);
    if(!(tmp695 && tmp696))
    {
      tmp698 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* cooCoi.ele[4].vol2.dynBal.medium.X[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta699 = stringAppend(MMC_REFSTRINGLIT(tmp697),tmp698);
      {
        const char* assert_cond = "(cooCoi.ele[4].vol2.dynBal.medium.X[2] >= 0.0 and cooCoi.ele[4].vol2.dynBal.medium.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5021,7,5022,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta699));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5021,7,5022,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta699));
        }
      }
      tmp700 = 1;
    }
  }
  threadData->lastEquationSolved = 10310;
}

/*
equation index: 10311
type: ALGORITHM

  assert(cooCoi.ele[4].vol2.dynBal.medium.u >= -1e8 and cooCoi.ele[4].vol2.dynBal.medium.u <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[4].vol2.dynBal.medium.u <= 1e8, has value: " + String(cooCoi.ele[4].vol2.dynBal.medium.u, "g"));
*/
void logic2_raw_eqFunction_10311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10311};
  modelica_boolean tmp701;
  modelica_boolean tmp702;
  static const MMC_DEFSTRINGLIT(tmp703,101,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[4].vol2.dynBal.medium.u <= 1e8, has value: ");
  modelica_string tmp704;
  modelica_metatype tmpMeta705;
  static int tmp706 = 0;
  if(!tmp706)
  {
    tmp701 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[666]] /* cooCoi.ele[4].vol2.dynBal.medium.u variable */),-1e8);
    tmp702 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[666]] /* cooCoi.ele[4].vol2.dynBal.medium.u variable */),1e8);
    if(!(tmp701 && tmp702))
    {
      tmp704 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[666]] /* cooCoi.ele[4].vol2.dynBal.medium.u variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta705 = stringAppend(MMC_REFSTRINGLIT(tmp703),tmp704);
      {
        const char* assert_cond = "(cooCoi.ele[4].vol2.dynBal.medium.u >= -1e8 and cooCoi.ele[4].vol2.dynBal.medium.u <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5023,7,5023,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta705));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5023,7,5023,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta705));
        }
      }
      tmp706 = 1;
    }
  }
  threadData->lastEquationSolved = 10311;
}

/*
equation index: 10312
type: ALGORITHM

  assert(cooCoi.ele[4].vol2.dynBal.medium.R >= 0.0 and cooCoi.ele[4].vol2.dynBal.medium.R <= 1e7, "Variable violating min/max constraint: 0.0 <= cooCoi.ele[4].vol2.dynBal.medium.R <= 1e7, has value: " + String(cooCoi.ele[4].vol2.dynBal.medium.R, "g"));
*/
void logic2_raw_eqFunction_10312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10312};
  modelica_boolean tmp707;
  modelica_boolean tmp708;
  static const MMC_DEFSTRINGLIT(tmp709,100,"Variable violating min/max constraint: 0.0 <= cooCoi.ele[4].vol2.dynBal.medium.R <= 1e7, has value: ");
  modelica_string tmp710;
  modelica_metatype tmpMeta711;
  static int tmp712 = 0;
  if(!tmp712)
  {
    tmp707 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cooCoi.ele[4].vol2.dynBal.medium.R variable */),0.0);
    tmp708 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cooCoi.ele[4].vol2.dynBal.medium.R variable */),1e7);
    if(!(tmp707 && tmp708))
    {
      tmp710 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cooCoi.ele[4].vol2.dynBal.medium.R variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta711 = stringAppend(MMC_REFSTRINGLIT(tmp709),tmp710);
      {
        const char* assert_cond = "(cooCoi.ele[4].vol2.dynBal.medium.R >= 0.0 and cooCoi.ele[4].vol2.dynBal.medium.R <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5024,7,5024,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta711));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5024,7,5024,71,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta711));
        }
      }
      tmp712 = 1;
    }
  }
  threadData->lastEquationSolved = 10312;
}

/*
equation index: 10313
type: ALGORITHM

  assert(cooCoi.ele[4].vol2.dynBal.medium.MM >= 0.001 and cooCoi.ele[4].vol2.dynBal.medium.MM <= 0.25, "Variable violating min/max constraint: 0.001 <= cooCoi.ele[4].vol2.dynBal.medium.MM <= 0.25, has value: " + String(cooCoi.ele[4].vol2.dynBal.medium.MM, "g"));
*/
void logic2_raw_eqFunction_10313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10313};
  modelica_boolean tmp713;
  modelica_boolean tmp714;
  static const MMC_DEFSTRINGLIT(tmp715,104,"Variable violating min/max constraint: 0.001 <= cooCoi.ele[4].vol2.dynBal.medium.MM <= 0.25, has value: ");
  modelica_string tmp716;
  modelica_metatype tmpMeta717;
  static int tmp718 = 0;
  if(!tmp718)
  {
    tmp713 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* cooCoi.ele[4].vol2.dynBal.medium.MM variable */),0.001);
    tmp714 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* cooCoi.ele[4].vol2.dynBal.medium.MM variable */),0.25);
    if(!(tmp713 && tmp714))
    {
      tmp716 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* cooCoi.ele[4].vol2.dynBal.medium.MM variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta717 = stringAppend(MMC_REFSTRINGLIT(tmp715),tmp716);
      {
        const char* assert_cond = "(cooCoi.ele[4].vol2.dynBal.medium.MM >= 0.001 and cooCoi.ele[4].vol2.dynBal.medium.MM <= 0.25)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5025,7,5025,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta717));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5025,7,5025,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta717));
        }
      }
      tmp718 = 1;
    }
  }
  threadData->lastEquationSolved = 10313;
}

/*
equation index: 10314
type: ALGORITHM

  assert(cooCoi.ele[4].vol2.dynBal.m >= 0.0, "Variable violating min constraint: 0.0 <= cooCoi.ele[4].vol2.dynBal.m, has value: " + String(cooCoi.ele[4].vol2.dynBal.m, "g"));
*/
void logic2_raw_eqFunction_10314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10314};
  modelica_boolean tmp719;
  static const MMC_DEFSTRINGLIT(tmp720,82,"Variable violating min constraint: 0.0 <= cooCoi.ele[4].vol2.dynBal.m, has value: ");
  modelica_string tmp721;
  modelica_metatype tmpMeta722;
  static int tmp723 = 0;
  if(!tmp723)
  {
    tmp719 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* cooCoi.ele[4].vol2.dynBal.m STATE(1,cooCoi.ele[4].vol2.dynBal.mb_flow) */),0.0);
    if(!tmp719)
    {
      tmp721 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* cooCoi.ele[4].vol2.dynBal.m STATE(1,cooCoi.ele[4].vol2.dynBal.mb_flow) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta722 = stringAppend(MMC_REFSTRINGLIT(tmp720),tmp721);
      {
        const char* assert_cond = "(cooCoi.ele[4].vol2.dynBal.m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",94,3,98,20,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta722));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",94,3,98,20,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta722));
        }
      }
      tmp723 = 1;
    }
  }
  threadData->lastEquationSolved = 10314;
}

/*
equation index: 10315
type: ALGORITHM

  assert(cooCoi.ele[4].vol2.dynBal.mXi[1] >= 0.0, "Variable violating min constraint: 0.0 <= cooCoi.ele[4].vol2.dynBal.mXi[1], has value: " + String(cooCoi.ele[4].vol2.dynBal.mXi[1], "g"));
*/
void logic2_raw_eqFunction_10315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10315};
  modelica_boolean tmp724;
  static const MMC_DEFSTRINGLIT(tmp725,87,"Variable violating min constraint: 0.0 <= cooCoi.ele[4].vol2.dynBal.mXi[1], has value: ");
  modelica_string tmp726;
  modelica_metatype tmpMeta727;
  static int tmp728 = 0;
  if(!tmp728)
  {
    tmp724 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* cooCoi.ele[4].vol2.dynBal.mXi[1] STATE(1) */),0.0);
    if(!tmp724)
    {
      tmp726 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* cooCoi.ele[4].vol2.dynBal.mXi[1] STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta727 = stringAppend(MMC_REFSTRINGLIT(tmp725),tmp726);
      {
        const char* assert_cond = "(cooCoi.ele[4].vol2.dynBal.mXi[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",100,3,102,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta727));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",100,3,102,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta727));
        }
      }
      tmp728 = 1;
    }
  }
  threadData->lastEquationSolved = 10315;
}

/*
equation index: 10316
type: ALGORITHM

  assert(cooCoi.ele[4].vol2.dynBal.ports_H_flow[1] >= -1e8 and cooCoi.ele[4].vol2.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[4].vol2.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(cooCoi.ele[4].vol2.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10316};
  modelica_boolean tmp729;
  modelica_boolean tmp730;
  static const MMC_DEFSTRINGLIT(tmp731,108,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[4].vol2.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp732;
  modelica_metatype tmpMeta733;
  static int tmp734 = 0;
  if(!tmp734)
  {
    tmp729 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* cooCoi.ele[4].vol2.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp730 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* cooCoi.ele[4].vol2.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp729 && tmp730))
    {
      tmp732 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* cooCoi.ele[4].vol2.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta733 = stringAppend(MMC_REFSTRINGLIT(tmp731),tmp732);
      {
        const char* assert_cond = "(cooCoi.ele[4].vol2.dynBal.ports_H_flow[1] >= -1e8 and cooCoi.ele[4].vol2.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta733));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta733));
        }
      }
      tmp734 = 1;
    }
  }
  threadData->lastEquationSolved = 10316;
}

/*
equation index: 10317
type: ALGORITHM

  assert(cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] >= -1e8 and cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(cooCoi.ele[4].vol2.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10317};
  modelica_boolean tmp735;
  modelica_boolean tmp736;
  static const MMC_DEFSTRINGLIT(tmp737,108,"Variable violating min/max constraint: -1e8 <= cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp738;
  modelica_metatype tmpMeta739;
  static int tmp740 = 0;
  if(!tmp740)
  {
    tmp735 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp736 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp735 && tmp736))
    {
      tmp738 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta739 = stringAppend(MMC_REFSTRINGLIT(tmp737),tmp738);
      {
        const char* assert_cond = "(cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] >= -1e8 and cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta739));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta739));
        }
      }
      tmp740 = 1;
    }
  }
  threadData->lastEquationSolved = 10317;
}

/*
equation index: 10318
type: ALGORITHM

  assert(cooCoi.ele[4].mas.T >= 0.0, "Variable violating min constraint: 0.0 <= cooCoi.ele[4].mas.T, has value: " + String(cooCoi.ele[4].mas.T, "g"));
*/
void logic2_raw_eqFunction_10318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10318};
  modelica_boolean tmp741;
  static const MMC_DEFSTRINGLIT(tmp742,74,"Variable violating min constraint: 0.0 <= cooCoi.ele[4].mas.T, has value: ");
  modelica_string tmp743;
  modelica_metatype tmpMeta744;
  static int tmp745 = 0;
  if(!tmp745)
  {
    tmp741 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* cooCoi.ele[4].mas.T STATE(1,cooCoi.ele[4].mas.der_T) */),0.0);
    if(!tmp741)
    {
      tmp743 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* cooCoi.ele[4].mas.T STATE(1,cooCoi.ele[4].mas.der_T) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta744 = stringAppend(MMC_REFSTRINGLIT(tmp742),tmp743);
      {
        const char* assert_cond = "(cooCoi.ele[4].mas.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",541,7,542,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta744));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",541,7,542,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta744));
        }
      }
      tmp745 = 1;
    }
  }
  threadData->lastEquationSolved = 10318;
}

/*
equation index: 10319
type: ALGORITHM

  assert(cooCoi.ele[4].con1.dT >= -200.0, "Variable violating min constraint: -200.0 <= cooCoi.ele[4].con1.dT, has value: " + String(cooCoi.ele[4].con1.dT, "g"));
*/
void logic2_raw_eqFunction_10319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10319};
  modelica_boolean tmp746;
  static const MMC_DEFSTRINGLIT(tmp747,79,"Variable violating min constraint: -200.0 <= cooCoi.ele[4].con1.dT, has value: ");
  modelica_string tmp748;
  modelica_metatype tmpMeta749;
  static int tmp750 = 0;
  if(!tmp750)
  {
    tmp746 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* cooCoi.ele[4].con1.dT variable */),-200.0);
    if(!tmp746)
    {
      tmp748 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* cooCoi.ele[4].con1.dT variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta749 = stringAppend(MMC_REFSTRINGLIT(tmp747),tmp748);
      {
        const char* assert_cond = "(cooCoi.ele[4].con1.dT >= -200.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",816,7,816,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta749));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",816,7,816,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta749));
        }
      }
      tmp750 = 1;
    }
  }
  threadData->lastEquationSolved = 10319;
}

/*
equation index: 10320
type: ALGORITHM

  assert(cooCoi.ele[4].con2.dT >= -200.0, "Variable violating min constraint: -200.0 <= cooCoi.ele[4].con2.dT, has value: " + String(cooCoi.ele[4].con2.dT, "g"));
*/
void logic2_raw_eqFunction_10320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10320};
  modelica_boolean tmp751;
  static const MMC_DEFSTRINGLIT(tmp752,79,"Variable violating min constraint: -200.0 <= cooCoi.ele[4].con2.dT, has value: ");
  modelica_string tmp753;
  modelica_metatype tmpMeta754;
  static int tmp755 = 0;
  if(!tmp755)
  {
    tmp751 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[4].con2.dT variable */),-200.0);
    if(!tmp751)
    {
      tmp753 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[4].con2.dT variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta754 = stringAppend(MMC_REFSTRINGLIT(tmp752),tmp753);
      {
        const char* assert_cond = "(cooCoi.ele[4].con2.dT >= -200.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",816,7,816,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta754));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",816,7,816,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta754));
        }
      }
      tmp755 = 1;
    }
  }
  threadData->lastEquationSolved = 10320;
}

/*
equation index: 10321
type: ALGORITHM

  assert(pumCHW.port_a.h_outflow >= -1e10 and pumCHW.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= pumCHW.port_a.h_outflow <= 1e10, has value: " + String(pumCHW.port_a.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10321};
  modelica_boolean tmp756;
  modelica_boolean tmp757;
  static const MMC_DEFSTRINGLIT(tmp758,92,"Variable violating min/max constraint: -1e10 <= pumCHW.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp759;
  modelica_metatype tmpMeta760;
  static int tmp761 = 0;
  if(!tmp761)
  {
    tmp756 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* pumCHW.port_a.h_outflow variable */),-1e10);
    tmp757 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* pumCHW.port_a.h_outflow variable */),1e10);
    if(!(tmp756 && tmp757))
    {
      tmp759 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* pumCHW.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta760 = stringAppend(MMC_REFSTRINGLIT(tmp758),tmp759);
      {
        const char* assert_cond = "(pumCHW.port_a.h_outflow >= -1e10 and pumCHW.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta760));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta760));
        }
      }
      tmp761 = 1;
    }
  }
  threadData->lastEquationSolved = 10321;
}

/*
equation index: 10322
type: ALGORITHM

  assert(pumCHW.heatPort.T >= 1.0 and pumCHW.heatPort.T <= 1e4, "Variable violating min/max constraint: 1.0 <= pumCHW.heatPort.T <= 1e4, has value: " + String(pumCHW.heatPort.T, "g"));
*/
void logic2_raw_eqFunction_10322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10322};
  modelica_boolean tmp762;
  modelica_boolean tmp763;
  static const MMC_DEFSTRINGLIT(tmp764,83,"Variable violating min/max constraint: 1.0 <= pumCHW.heatPort.T <= 1e4, has value: ");
  modelica_string tmp765;
  modelica_metatype tmpMeta766;
  static int tmp767 = 0;
  if(!tmp767)
  {
    tmp762 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1063]] /* pumCHW.heatPort.T variable */),1.0);
    tmp763 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1063]] /* pumCHW.heatPort.T variable */),1e4);
    if(!(tmp762 && tmp763))
    {
      tmp765 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1063]] /* pumCHW.heatPort.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta766 = stringAppend(MMC_REFSTRINGLIT(tmp764),tmp765);
      {
        const char* assert_cond = "(pumCHW.heatPort.T >= 1.0 and pumCHW.heatPort.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta766));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta766));
        }
      }
      tmp767 = 1;
    }
  }
  threadData->lastEquationSolved = 10322;
}

/*
equation index: 10323
type: ALGORITHM

  assert(pumCHW.vol.dynBal.medium.T >= 1.0 and pumCHW.vol.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= pumCHW.vol.dynBal.medium.T <= 1e4, has value: " + String(pumCHW.vol.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10323};
  modelica_boolean tmp768;
  modelica_boolean tmp769;
  static const MMC_DEFSTRINGLIT(tmp770,92,"Variable violating min/max constraint: 1.0 <= pumCHW.vol.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp771;
  modelica_metatype tmpMeta772;
  static int tmp773 = 0;
  if(!tmp773)
  {
    tmp768 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* pumCHW.vol.dynBal.medium.T variable */),1.0);
    tmp769 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* pumCHW.vol.dynBal.medium.T variable */),1e4);
    if(!(tmp768 && tmp769))
    {
      tmp771 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* pumCHW.vol.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta772 = stringAppend(MMC_REFSTRINGLIT(tmp770),tmp771);
      {
        const char* assert_cond = "(pumCHW.vol.dynBal.medium.T >= 1.0 and pumCHW.vol.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta772));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta772));
        }
      }
      tmp773 = 1;
    }
  }
  threadData->lastEquationSolved = 10323;
}

/*
equation index: 10324
type: ALGORITHM

  assert(pumCHW.vol.dynBal.ports_H_flow[1] >= -1e8 and pumCHW.vol.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= pumCHW.vol.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(pumCHW.vol.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10324};
  modelica_boolean tmp774;
  modelica_boolean tmp775;
  static const MMC_DEFSTRINGLIT(tmp776,100,"Variable violating min/max constraint: -1e8 <= pumCHW.vol.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp777;
  modelica_metatype tmpMeta778;
  static int tmp779 = 0;
  if(!tmp779)
  {
    tmp774 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* pumCHW.vol.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp775 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* pumCHW.vol.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp774 && tmp775))
    {
      tmp777 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* pumCHW.vol.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta778 = stringAppend(MMC_REFSTRINGLIT(tmp776),tmp777);
      {
        const char* assert_cond = "(pumCHW.vol.dynBal.ports_H_flow[1] >= -1e8 and pumCHW.vol.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta778));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta778));
        }
      }
      tmp779 = 1;
    }
  }
  threadData->lastEquationSolved = 10324;
}

/*
equation index: 10325
type: ALGORITHM

  assert(pumCHW.vol.dynBal.ports_H_flow[2] >= -1e8 and pumCHW.vol.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= pumCHW.vol.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(pumCHW.vol.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10325};
  modelica_boolean tmp780;
  modelica_boolean tmp781;
  static const MMC_DEFSTRINGLIT(tmp782,100,"Variable violating min/max constraint: -1e8 <= pumCHW.vol.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp783;
  modelica_metatype tmpMeta784;
  static int tmp785 = 0;
  if(!tmp785)
  {
    tmp780 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* pumCHW.vol.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp781 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* pumCHW.vol.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp780 && tmp781))
    {
      tmp783 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* pumCHW.vol.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta784 = stringAppend(MMC_REFSTRINGLIT(tmp782),tmp783);
      {
        const char* assert_cond = "(pumCHW.vol.dynBal.ports_H_flow[2] >= -1e8 and pumCHW.vol.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta784));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta784));
        }
      }
      tmp785 = 1;
    }
  }
  threadData->lastEquationSolved = 10325;
}

/*
equation index: 10326
type: ALGORITHM

  assert(expVesCHW.port_a.m_flow >= -1e5 and expVesCHW.port_a.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= expVesCHW.port_a.m_flow <= 1e5, has value: " + String(expVesCHW.port_a.m_flow, "g"));
*/
void logic2_raw_eqFunction_10326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10326};
  modelica_boolean tmp786;
  modelica_boolean tmp787;
  static const MMC_DEFSTRINGLIT(tmp788,90,"Variable violating min/max constraint: -1e5 <= expVesCHW.port_a.m_flow <= 1e5, has value: ");
  modelica_string tmp789;
  modelica_metatype tmpMeta790;
  static int tmp791 = 0;
  if(!tmp791)
  {
    tmp786 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* expVesCHW.port_a.m_flow variable */),-1e5);
    tmp787 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* expVesCHW.port_a.m_flow variable */),1e5);
    if(!(tmp786 && tmp787))
    {
      tmp789 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* expVesCHW.port_a.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta790 = stringAppend(MMC_REFSTRINGLIT(tmp788),tmp789);
      {
        const char* assert_cond = "(expVesCHW.port_a.m_flow >= -1e5 and expVesCHW.port_a.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",13,5,14,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta790));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",13,5,14,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta790));
        }
      }
      tmp791 = 1;
    }
  }
  threadData->lastEquationSolved = 10326;
}

/*
equation index: 10327
type: ALGORITHM

  assert(expVesCHW.port_a.h_outflow >= -1e10 and expVesCHW.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= expVesCHW.port_a.h_outflow <= 1e10, has value: " + String(expVesCHW.port_a.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10327};
  modelica_boolean tmp792;
  modelica_boolean tmp793;
  static const MMC_DEFSTRINGLIT(tmp794,95,"Variable violating min/max constraint: -1e10 <= expVesCHW.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp795;
  modelica_metatype tmpMeta796;
  static int tmp797 = 0;
  if(!tmp797)
  {
    tmp792 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* expVesCHW.port_a.h_outflow variable */),-1e10);
    tmp793 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* expVesCHW.port_a.h_outflow variable */),1e10);
    if(!(tmp792 && tmp793))
    {
      tmp795 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* expVesCHW.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta796 = stringAppend(MMC_REFSTRINGLIT(tmp794),tmp795);
      {
        const char* assert_cond = "(expVesCHW.port_a.h_outflow >= -1e10 and expVesCHW.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta796));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta796));
        }
      }
      tmp797 = 1;
    }
  }
  threadData->lastEquationSolved = 10327;
}

/*
equation index: 10328
type: ALGORITHM

  assert(expVesCHW.m >= 0.0, "Variable violating min constraint: 0.0 <= expVesCHW.m, has value: " + String(expVesCHW.m, "g"));
*/
void logic2_raw_eqFunction_10328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10328};
  modelica_boolean tmp798;
  static const MMC_DEFSTRINGLIT(tmp799,66,"Variable violating min constraint: 0.0 <= expVesCHW.m, has value: ");
  modelica_string tmp800;
  modelica_metatype tmpMeta801;
  static int tmp802 = 0;
  if(!tmp802)
  {
    tmp798 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* expVesCHW.m STATE(1,expVesCHW.port_a.m_flow) */),0.0);
    if(!tmp798)
    {
      tmp800 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* expVesCHW.m STATE(1,expVesCHW.port_a.m_flow) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta801 = stringAppend(MMC_REFSTRINGLIT(tmp799),tmp800);
      {
        const char* assert_cond = "(expVesCHW.m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Storage/ExpansionVessel.mo",15,3,15,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta801));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Storage/ExpansionVessel.mo",15,3,15,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta801));
        }
      }
      tmp802 = 1;
    }
  }
  threadData->lastEquationSolved = 10328;
}

/*
equation index: 10329
type: ALGORITHM

  assert(cooTow.vol.p >= 0.0 and cooTow.vol.p <= 1e8, "Variable violating min/max constraint: 0.0 <= cooTow.vol.p <= 1e8, has value: " + String(cooTow.vol.p, "g"));
*/
void logic2_raw_eqFunction_10329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10329};
  modelica_boolean tmp803;
  modelica_boolean tmp804;
  static const MMC_DEFSTRINGLIT(tmp805,78,"Variable violating min/max constraint: 0.0 <= cooTow.vol.p <= 1e8, has value: ");
  modelica_string tmp806;
  modelica_metatype tmpMeta807;
  static int tmp808 = 0;
  if(!tmp808)
  {
    tmp803 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow.vol.p variable */),0.0);
    tmp804 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow.vol.p variable */),1e8);
    if(!(tmp803 && tmp804))
    {
      tmp806 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow.vol.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta807 = stringAppend(MMC_REFSTRINGLIT(tmp805),tmp806);
      {
        const char* assert_cond = "(cooTow.vol.p >= 0.0 and cooTow.vol.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",42,3,43,28,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta807));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",42,3,43,28,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta807));
        }
      }
      tmp808 = 1;
    }
  }
  threadData->lastEquationSolved = 10329;
}

/*
equation index: 10330
type: ALGORITHM

  assert(cooTow.vol.dynBal.medium.T >= 1.0 and cooTow.vol.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooTow.vol.dynBal.medium.T <= 1e4, has value: " + String(cooTow.vol.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10330};
  modelica_boolean tmp809;
  modelica_boolean tmp810;
  static const MMC_DEFSTRINGLIT(tmp811,92,"Variable violating min/max constraint: 1.0 <= cooTow.vol.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp812;
  modelica_metatype tmpMeta813;
  static int tmp814 = 0;
  if(!tmp814)
  {
    tmp809 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cooTow.vol.dynBal.medium.T DUMMY_STATE */),1.0);
    tmp810 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cooTow.vol.dynBal.medium.T DUMMY_STATE */),1e4);
    if(!(tmp809 && tmp810))
    {
      tmp812 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cooTow.vol.dynBal.medium.T DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta813 = stringAppend(MMC_REFSTRINGLIT(tmp811),tmp812);
      {
        const char* assert_cond = "(cooTow.vol.dynBal.medium.T >= 1.0 and cooTow.vol.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta813));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta813));
        }
      }
      tmp814 = 1;
    }
  }
  threadData->lastEquationSolved = 10330;
}

/*
equation index: 10331
type: ALGORITHM

  assert(cooTow.vol.dynBal.ports_H_flow[1] >= -1e8 and cooTow.vol.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooTow.vol.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(cooTow.vol.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10331};
  modelica_boolean tmp815;
  modelica_boolean tmp816;
  static const MMC_DEFSTRINGLIT(tmp817,100,"Variable violating min/max constraint: -1e8 <= cooTow.vol.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp818;
  modelica_metatype tmpMeta819;
  static int tmp820 = 0;
  if(!tmp820)
  {
    tmp815 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp816 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp815 && tmp816))
    {
      tmp818 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta819 = stringAppend(MMC_REFSTRINGLIT(tmp817),tmp818);
      {
        const char* assert_cond = "(cooTow.vol.dynBal.ports_H_flow[1] >= -1e8 and cooTow.vol.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta819));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta819));
        }
      }
      tmp820 = 1;
    }
  }
  threadData->lastEquationSolved = 10331;
}

/*
equation index: 10332
type: ALGORITHM

  assert(cooTow.vol.dynBal.ports_H_flow[2] >= -1e8 and cooTow.vol.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooTow.vol.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(cooTow.vol.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10332};
  modelica_boolean tmp821;
  modelica_boolean tmp822;
  static const MMC_DEFSTRINGLIT(tmp823,100,"Variable violating min/max constraint: -1e8 <= cooTow.vol.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp824;
  modelica_metatype tmpMeta825;
  static int tmp826 = 0;
  if(!tmp826)
  {
    tmp821 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp822 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp821 && tmp822))
    {
      tmp824 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta825 = stringAppend(MMC_REFSTRINGLIT(tmp823),tmp824);
      {
        const char* assert_cond = "(cooTow.vol.dynBal.ports_H_flow[2] >= -1e8 and cooTow.vol.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta825));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta825));
        }
      }
      tmp826 = 1;
    }
  }
  threadData->lastEquationSolved = 10332;
}

/*
equation index: 10333
type: ALGORITHM

  assert(cooTow.TLvg >= 1.0 and cooTow.TLvg <= 1e4, "Variable violating min/max constraint: 1.0 <= cooTow.TLvg <= 1e4, has value: " + String(cooTow.TLvg, "g"));
*/
void logic2_raw_eqFunction_10333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10333};
  modelica_boolean tmp827;
  modelica_boolean tmp828;
  static const MMC_DEFSTRINGLIT(tmp829,77,"Variable violating min/max constraint: 1.0 <= cooTow.TLvg <= 1e4, has value: ");
  modelica_string tmp830;
  modelica_metatype tmpMeta831;
  static int tmp832 = 0;
  if(!tmp832)
  {
    tmp827 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.TLvg variable */),1.0);
    tmp828 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.TLvg variable */),1e4);
    if(!(tmp827 && tmp828))
    {
      tmp830 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.TLvg variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta831 = stringAppend(MMC_REFSTRINGLIT(tmp829),tmp830);
      {
        const char* assert_cond = "(cooTow.TLvg >= 1.0 and cooTow.TLvg <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/BaseClasses/CoolingTower.mo",6,3,7,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta831));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/BaseClasses/CoolingTower.mo",6,3,7,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta831));
        }
      }
      tmp832 = 1;
    }
  }
  threadData->lastEquationSolved = 10333;
}

/*
equation index: 10334
type: ALGORITHM

  assert(cooTow.TAppAct >= 0.0, "Variable violating min constraint: 0.0 <= cooTow.TAppAct, has value: " + String(cooTow.TAppAct, "g"));
*/
void logic2_raw_eqFunction_10334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10334};
  modelica_boolean tmp833;
  static const MMC_DEFSTRINGLIT(tmp834,69,"Variable violating min constraint: 0.0 <= cooTow.TAppAct, has value: ");
  modelica_string tmp835;
  modelica_metatype tmpMeta836;
  static int tmp837 = 0;
  if(!tmp837)
  {
    tmp833 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cooTow.TAppAct variable */),0.0);
    if(!tmp833)
    {
      tmp835 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cooTow.TAppAct variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta836 = stringAppend(MMC_REFSTRINGLIT(tmp834),tmp835);
      {
        const char* assert_cond = "(cooTow.TAppAct >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/BaseClasses/CoolingTower.mo",10,3,11,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta836));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/BaseClasses/CoolingTower.mo",10,3,11,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta836));
        }
      }
      tmp837 = 1;
    }
  }
  threadData->lastEquationSolved = 10334;
}

/*
equation index: 10335
type: ALGORITHM

  assert(cooTow.FRWat >= 0.0 and cooTow.FRWat <= 1.0, "Variable violating min/max constraint: 0.0 <= cooTow.FRWat <= 1.0, has value: " + String(cooTow.FRWat, "g"));
*/
void logic2_raw_eqFunction_10335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10335};
  modelica_boolean tmp838;
  modelica_boolean tmp839;
  static const MMC_DEFSTRINGLIT(tmp840,78,"Variable violating min/max constraint: 0.0 <= cooTow.FRWat <= 1.0, has value: ");
  modelica_string tmp841;
  modelica_metatype tmpMeta842;
  static int tmp843 = 0;
  if(!tmp843)
  {
    tmp838 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */),0.0);
    tmp839 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */),1.0);
    if(!(tmp838 && tmp839))
    {
      tmp841 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta842 = stringAppend(MMC_REFSTRINGLIT(tmp840),tmp841);
      {
        const char* assert_cond = "(cooTow.FRWat >= 0.0 and cooTow.FRWat <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",49,3,50,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta842));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",49,3,50,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta842));
        }
      }
      tmp843 = 1;
    }
  }
  threadData->lastEquationSolved = 10335;
}

/*
equation index: 10336
type: ALGORITHM

  assert(cooTow.FRAir >= 0.0 and cooTow.FRAir <= 1.0, "Variable violating min/max constraint: 0.0 <= cooTow.FRAir <= 1.0, has value: " + String(cooTow.FRAir, "g"));
*/
void logic2_raw_eqFunction_10336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10336};
  modelica_boolean tmp844;
  modelica_boolean tmp845;
  static const MMC_DEFSTRINGLIT(tmp846,78,"Variable violating min/max constraint: 0.0 <= cooTow.FRAir <= 1.0, has value: ");
  modelica_string tmp847;
  modelica_metatype tmpMeta848;
  static int tmp849 = 0;
  if(!tmp849)
  {
    tmp844 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */),0.0);
    tmp845 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */),1.0);
    if(!(tmp844 && tmp845))
    {
      tmp847 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta848 = stringAppend(MMC_REFSTRINGLIT(tmp846),tmp847);
      {
        const char* assert_cond = "(cooTow.FRAir >= 0.0 and cooTow.FRAir <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",51,3,52,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta848));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",51,3,52,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta848));
        }
      }
      tmp849 = 1;
    }
  }
  threadData->lastEquationSolved = 10336;
}

/*
equation index: 10337
type: ALGORITHM

  assert(cooTow.TAppCor >= 0.0, "Variable violating min constraint: 0.0 <= cooTow.TAppCor, has value: " + String(cooTow.TAppCor, "g"));
*/
void logic2_raw_eqFunction_10337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10337};
  modelica_boolean tmp850;
  static const MMC_DEFSTRINGLIT(tmp851,69,"Variable violating min constraint: 0.0 <= cooTow.TAppCor, has value: ");
  modelica_string tmp852;
  modelica_metatype tmpMeta853;
  static int tmp854 = 0;
  if(!tmp854)
  {
    tmp850 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cooTow.TAppCor variable */),0.0);
    if(!tmp850)
    {
      tmp852 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cooTow.TAppCor variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta853 = stringAppend(MMC_REFSTRINGLIT(tmp851),tmp852);
      {
        const char* assert_cond = "(cooTow.TAppCor >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",68,3,69,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta853));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",68,3,69,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta853));
        }
      }
      tmp854 = 1;
    }
  }
  threadData->lastEquationSolved = 10337;
}

/*
equation index: 10338
type: ALGORITHM

  assert(cooTow.TAppFreCon >= 0.0, "Variable violating min constraint: 0.0 <= cooTow.TAppFreCon, has value: " + String(cooTow.TAppFreCon, "g"));
*/
void logic2_raw_eqFunction_10338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10338};
  modelica_boolean tmp855;
  static const MMC_DEFSTRINGLIT(tmp856,72,"Variable violating min constraint: 0.0 <= cooTow.TAppFreCon, has value: ");
  modelica_string tmp857;
  modelica_metatype tmpMeta858;
  static int tmp859 = 0;
  if(!tmp859)
  {
    tmp855 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.TAppFreCon variable */),0.0);
    if(!tmp855)
    {
      tmp857 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.TAppFreCon variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta858 = stringAppend(MMC_REFSTRINGLIT(tmp856),tmp857);
      {
        const char* assert_cond = "(cooTow.TAppFreCon >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",70,3,71,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta858));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",70,3,71,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta858));
        }
      }
      tmp859 = 1;
    }
  }
  threadData->lastEquationSolved = 10338;
}

/*
equation index: 10339
type: ALGORITHM

  assert(cooTow.T_a >= 0.0, "Variable violating min constraint: 0.0 <= cooTow.T_a, has value: " + String(cooTow.T_a, "g"));
*/
void logic2_raw_eqFunction_10339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10339};
  modelica_boolean tmp860;
  static const MMC_DEFSTRINGLIT(tmp861,65,"Variable violating min constraint: 0.0 <= cooTow.T_a, has value: ");
  modelica_string tmp862;
  modelica_metatype tmpMeta863;
  static int tmp864 = 0;
  if(!tmp864)
  {
    tmp860 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.T_a variable */),0.0);
    if(!tmp860)
    {
      tmp862 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.T_a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta863 = stringAppend(MMC_REFSTRINGLIT(tmp861),tmp862);
      {
        const char* assert_cond = "(cooTow.T_a >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",76,3,76,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta863));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",76,3,76,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta863));
        }
      }
      tmp864 = 1;
    }
  }
  threadData->lastEquationSolved = 10339;
}

/*
equation index: 10340
type: ALGORITHM

  assert(cooTow.T_b >= 0.0, "Variable violating min constraint: 0.0 <= cooTow.T_b, has value: " + String(cooTow.T_b, "g"));
*/
void logic2_raw_eqFunction_10340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10340};
  modelica_boolean tmp865;
  static const MMC_DEFSTRINGLIT(tmp866,65,"Variable violating min constraint: 0.0 <= cooTow.T_b, has value: ");
  modelica_string tmp867;
  modelica_metatype tmpMeta868;
  static int tmp869 = 0;
  if(!tmp869)
  {
    tmp865 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.T_b variable */),0.0);
    if(!tmp865)
    {
      tmp867 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.T_b variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta868 = stringAppend(MMC_REFSTRINGLIT(tmp866),tmp867);
      {
        const char* assert_cond = "(cooTow.T_b >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",77,3,77,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta868));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",77,3,77,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta868));
        }
      }
      tmp869 = 1;
    }
  }
  threadData->lastEquationSolved = 10340;
}

/*
equation index: 10341
type: ALGORITHM

  assert(pumCW.heatPort.T >= 1.0 and pumCW.heatPort.T <= 1e4, "Variable violating min/max constraint: 1.0 <= pumCW.heatPort.T <= 1e4, has value: " + String(pumCW.heatPort.T, "g"));
*/
void logic2_raw_eqFunction_10341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10341};
  modelica_boolean tmp870;
  modelica_boolean tmp871;
  static const MMC_DEFSTRINGLIT(tmp872,82,"Variable violating min/max constraint: 1.0 <= pumCW.heatPort.T <= 1e4, has value: ");
  modelica_string tmp873;
  modelica_metatype tmpMeta874;
  static int tmp875 = 0;
  if(!tmp875)
  {
    tmp870 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1136]] /* pumCW.heatPort.T variable */),1.0);
    tmp871 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1136]] /* pumCW.heatPort.T variable */),1e4);
    if(!(tmp870 && tmp871))
    {
      tmp873 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1136]] /* pumCW.heatPort.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta874 = stringAppend(MMC_REFSTRINGLIT(tmp872),tmp873);
      {
        const char* assert_cond = "(pumCW.heatPort.T >= 1.0 and pumCW.heatPort.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta874));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta874));
        }
      }
      tmp875 = 1;
    }
  }
  threadData->lastEquationSolved = 10341;
}

/*
equation index: 10342
type: ALGORITHM

  assert(pumCW.vol.dynBal.medium.T >= 1.0 and pumCW.vol.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= pumCW.vol.dynBal.medium.T <= 1e4, has value: " + String(pumCW.vol.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10342};
  modelica_boolean tmp876;
  modelica_boolean tmp877;
  static const MMC_DEFSTRINGLIT(tmp878,91,"Variable violating min/max constraint: 1.0 <= pumCW.vol.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp879;
  modelica_metatype tmpMeta880;
  static int tmp881 = 0;
  if(!tmp881)
  {
    tmp876 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* pumCW.vol.dynBal.medium.T variable */),1.0);
    tmp877 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* pumCW.vol.dynBal.medium.T variable */),1e4);
    if(!(tmp876 && tmp877))
    {
      tmp879 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* pumCW.vol.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta880 = stringAppend(MMC_REFSTRINGLIT(tmp878),tmp879);
      {
        const char* assert_cond = "(pumCW.vol.dynBal.medium.T >= 1.0 and pumCW.vol.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta880));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta880));
        }
      }
      tmp881 = 1;
    }
  }
  threadData->lastEquationSolved = 10342;
}

/*
equation index: 10343
type: ALGORITHM

  assert(pumCW.vol.dynBal.ports_H_flow[1] >= -1e8 and pumCW.vol.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= pumCW.vol.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(pumCW.vol.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10343};
  modelica_boolean tmp882;
  modelica_boolean tmp883;
  static const MMC_DEFSTRINGLIT(tmp884,99,"Variable violating min/max constraint: -1e8 <= pumCW.vol.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp885;
  modelica_metatype tmpMeta886;
  static int tmp887 = 0;
  if(!tmp887)
  {
    tmp882 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1157]] /* pumCW.vol.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp883 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1157]] /* pumCW.vol.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp882 && tmp883))
    {
      tmp885 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1157]] /* pumCW.vol.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta886 = stringAppend(MMC_REFSTRINGLIT(tmp884),tmp885);
      {
        const char* assert_cond = "(pumCW.vol.dynBal.ports_H_flow[1] >= -1e8 and pumCW.vol.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta886));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta886));
        }
      }
      tmp887 = 1;
    }
  }
  threadData->lastEquationSolved = 10343;
}

/*
equation index: 10344
type: ALGORITHM

  assert(pumCW.vol.dynBal.ports_H_flow[2] >= -1e8 and pumCW.vol.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= pumCW.vol.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(pumCW.vol.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10344};
  modelica_boolean tmp888;
  modelica_boolean tmp889;
  static const MMC_DEFSTRINGLIT(tmp890,99,"Variable violating min/max constraint: -1e8 <= pumCW.vol.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp891;
  modelica_metatype tmpMeta892;
  static int tmp893 = 0;
  if(!tmp893)
  {
    tmp888 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1158]] /* pumCW.vol.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp889 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1158]] /* pumCW.vol.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp888 && tmp889))
    {
      tmp891 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1158]] /* pumCW.vol.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta892 = stringAppend(MMC_REFSTRINGLIT(tmp890),tmp891);
      {
        const char* assert_cond = "(pumCW.vol.dynBal.ports_H_flow[2] >= -1e8 and pumCW.vol.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta892));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta892));
        }
      }
      tmp893 = 1;
    }
  }
  threadData->lastEquationSolved = 10344;
}

/*
equation index: 10345
type: ALGORITHM

  assert(val5.m_flow >= -1e5 and val5.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= val5.m_flow <= 1e5, has value: " + String(val5.m_flow, "g"));
*/
void logic2_raw_eqFunction_10345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10345};
  modelica_boolean tmp894;
  modelica_boolean tmp895;
  static const MMC_DEFSTRINGLIT(tmp896,78,"Variable violating min/max constraint: -1e5 <= val5.m_flow <= 1e5, has value: ");
  modelica_string tmp897;
  modelica_metatype tmpMeta898;
  static int tmp899 = 0;
  if(!tmp899)
  {
    tmp894 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */),-1e5);
    tmp895 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */),1e5);
    if(!(tmp894 && tmp895))
    {
      tmp897 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta898 = stringAppend(MMC_REFSTRINGLIT(tmp896),tmp897);
      {
        const char* assert_cond = "(val5.m_flow >= -1e5 and val5.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta898));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta898));
        }
      }
      tmp899 = 1;
    }
  }
  threadData->lastEquationSolved = 10345;
}

/*
equation index: 10346
type: ALGORITHM

  assert(val5.kVal >= 2.2250738585072014e-308, "Variable violating min constraint: 2.2250738585072014e-308 <= val5.kVal, has value: " + String(val5.kVal, "g"));
*/
void logic2_raw_eqFunction_10346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10346};
  modelica_boolean tmp900;
  static const MMC_DEFSTRINGLIT(tmp901,84,"Variable violating min constraint: 2.2250738585072014e-308 <= val5.kVal, has value: ");
  modelica_string tmp902;
  modelica_metatype tmpMeta903;
  static int tmp904 = 0;
  if(!tmp904)
  {
    tmp900 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1209]] /* val5.kVal variable */),2.2250738585072014e-308);
    if(!tmp900)
    {
      tmp902 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1209]] /* val5.kVal variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta903 = stringAppend(MMC_REFSTRINGLIT(tmp901),tmp902);
      {
        const char* assert_cond = "(val5.kVal >= 2.2250738585072014e-308)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",24,3,25,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta903));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",24,3,25,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta903));
        }
      }
      tmp904 = 1;
    }
  }
  threadData->lastEquationSolved = 10346;
}

/*
equation index: 10347
type: ALGORITHM

  assert(val5.k >= 2.2250738585072014e-308, "Variable violating min constraint: 2.2250738585072014e-308 <= val5.k, has value: " + String(val5.k, "g"));
*/
void logic2_raw_eqFunction_10347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10347};
  modelica_boolean tmp905;
  static const MMC_DEFSTRINGLIT(tmp906,81,"Variable violating min constraint: 2.2250738585072014e-308 <= val5.k, has value: ");
  modelica_string tmp907;
  modelica_metatype tmpMeta908;
  static int tmp909 = 0;
  if(!tmp909)
  {
    tmp905 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val5.k variable */),2.2250738585072014e-308);
    if(!tmp905)
    {
      tmp907 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val5.k variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta908 = stringAppend(MMC_REFSTRINGLIT(tmp906),tmp907);
      {
        const char* assert_cond = "(val5.k >= 2.2250738585072014e-308)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",26,3,27,95,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta908));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",26,3,27,95,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta908));
        }
      }
      tmp909 = 1;
    }
  }
  threadData->lastEquationSolved = 10347;
}

/*
equation index: 10348
type: ALGORITHM

  assert(val1.port_b.h_outflow >= -1e10 and val1.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= val1.port_b.h_outflow <= 1e10, has value: " + String(val1.port_b.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10348};
  modelica_boolean tmp910;
  modelica_boolean tmp911;
  static const MMC_DEFSTRINGLIT(tmp912,90,"Variable violating min/max constraint: -1e10 <= val1.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp913;
  modelica_metatype tmpMeta914;
  static int tmp915 = 0;
  if(!tmp915)
  {
    tmp910 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1206]] /* val1.port_b.h_outflow variable */),-1e10);
    tmp911 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1206]] /* val1.port_b.h_outflow variable */),1e10);
    if(!(tmp910 && tmp911))
    {
      tmp913 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1206]] /* val1.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta914 = stringAppend(MMC_REFSTRINGLIT(tmp912),tmp913);
      {
        const char* assert_cond = "(val1.port_b.h_outflow >= -1e10 and val1.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta914));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta914));
        }
      }
      tmp915 = 1;
    }
  }
  threadData->lastEquationSolved = 10348;
}

/*
equation index: 10349
type: ALGORITHM

  assert(val1.m_flow >= -1e60 and val1.m_flow <= 1e5, "Variable violating min/max constraint: -1e60 <= val1.m_flow <= 1e5, has value: " + String(val1.m_flow, "g"));
*/
void logic2_raw_eqFunction_10349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10349};
  modelica_boolean tmp916;
  modelica_boolean tmp917;
  static const MMC_DEFSTRINGLIT(tmp918,79,"Variable violating min/max constraint: -1e60 <= val1.m_flow <= 1e5, has value: ");
  modelica_string tmp919;
  modelica_metatype tmpMeta920;
  static int tmp921 = 0;
  if(!tmp921)
  {
    tmp916 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1204]] /* val1.m_flow variable */),-1e60);
    tmp917 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1204]] /* val1.m_flow variable */),1e5);
    if(!(tmp916 && tmp917))
    {
      tmp919 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1204]] /* val1.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta920 = stringAppend(MMC_REFSTRINGLIT(tmp918),tmp919);
      {
        const char* assert_cond = "(val1.m_flow >= -1e60 and val1.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta920));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta920));
        }
      }
      tmp921 = 1;
    }
  }
  threadData->lastEquationSolved = 10349;
}

/*
equation index: 10350
type: ALGORITHM

  assert(val1.kVal >= 2.2250738585072014e-308, "Variable violating min constraint: 2.2250738585072014e-308 <= val1.kVal, has value: " + String(val1.kVal, "g"));
*/
void logic2_raw_eqFunction_10350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10350};
  modelica_boolean tmp922;
  static const MMC_DEFSTRINGLIT(tmp923,84,"Variable violating min constraint: 2.2250738585072014e-308 <= val1.kVal, has value: ");
  modelica_string tmp924;
  modelica_metatype tmpMeta925;
  static int tmp926 = 0;
  if(!tmp926)
  {
    tmp922 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1203]] /* val1.kVal variable */),2.2250738585072014e-308);
    if(!tmp922)
    {
      tmp924 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1203]] /* val1.kVal variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta925 = stringAppend(MMC_REFSTRINGLIT(tmp923),tmp924);
      {
        const char* assert_cond = "(val1.kVal >= 2.2250738585072014e-308)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",24,3,25,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta925));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",24,3,25,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta925));
        }
      }
      tmp926 = 1;
    }
  }
  threadData->lastEquationSolved = 10350;
}

/*
equation index: 10351
type: ALGORITHM

  assert(val1.k >= 2.2250738585072014e-308, "Variable violating min constraint: 2.2250738585072014e-308 <= val1.k, has value: " + String(val1.k, "g"));
*/
void logic2_raw_eqFunction_10351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10351};
  modelica_boolean tmp927;
  static const MMC_DEFSTRINGLIT(tmp928,81,"Variable violating min constraint: 2.2250738585072014e-308 <= val1.k, has value: ");
  modelica_string tmp929;
  modelica_metatype tmpMeta930;
  static int tmp931 = 0;
  if(!tmp931)
  {
    tmp927 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1202]] /* val1.k variable */),2.2250738585072014e-308);
    if(!tmp927)
    {
      tmp929 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1202]] /* val1.k variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta930 = stringAppend(MMC_REFSTRINGLIT(tmp928),tmp929);
      {
        const char* assert_cond = "(val1.k >= 2.2250738585072014e-308)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",26,3,27,95,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta930));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",26,3,27,95,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta930));
        }
      }
      tmp931 = 1;
    }
  }
  threadData->lastEquationSolved = 10351;
}

/*
equation index: 10352
type: ALGORITHM

  assert(expVesChi.port_a.h_outflow >= -1e10 and expVesChi.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= expVesChi.port_a.h_outflow <= 1e10, has value: " + String(expVesChi.port_a.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10352};
  modelica_boolean tmp932;
  modelica_boolean tmp933;
  static const MMC_DEFSTRINGLIT(tmp934,95,"Variable violating min/max constraint: -1e10 <= expVesChi.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp935;
  modelica_metatype tmpMeta936;
  static int tmp937 = 0;
  if(!tmp937)
  {
    tmp932 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* expVesChi.port_a.h_outflow variable */),-1e10);
    tmp933 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* expVesChi.port_a.h_outflow variable */),1e10);
    if(!(tmp932 && tmp933))
    {
      tmp935 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* expVesChi.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta936 = stringAppend(MMC_REFSTRINGLIT(tmp934),tmp935);
      {
        const char* assert_cond = "(expVesChi.port_a.h_outflow >= -1e10 and expVesChi.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta936));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta936));
        }
      }
      tmp937 = 1;
    }
  }
  threadData->lastEquationSolved = 10352;
}

/*
equation index: 10353
type: ALGORITHM

  assert(expVesChi.m >= 0.0, "Variable violating min constraint: 0.0 <= expVesChi.m, has value: " + String(expVesChi.m, "g"));
*/
void logic2_raw_eqFunction_10353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10353};
  modelica_boolean tmp938;
  static const MMC_DEFSTRINGLIT(tmp939,66,"Variable violating min constraint: 0.0 <= expVesChi.m, has value: ");
  modelica_string tmp940;
  modelica_metatype tmpMeta941;
  static int tmp942 = 0;
  if(!tmp942)
  {
    tmp938 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* expVesChi.m STATE(1) */),0.0);
    if(!tmp938)
    {
      tmp940 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* expVesChi.m STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta941 = stringAppend(MMC_REFSTRINGLIT(tmp939),tmp940);
      {
        const char* assert_cond = "(expVesChi.m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Storage/ExpansionVessel.mo",15,3,15,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta941));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Storage/ExpansionVessel.mo",15,3,15,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta941));
        }
      }
      tmp942 = 1;
    }
  }
  threadData->lastEquationSolved = 10353;
}

/*
equation index: 10354
type: ALGORITHM

  assert(chi.m2_flow >= -1e5 and chi.m2_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= chi.m2_flow <= 1e5, has value: " + String(chi.m2_flow, "g"));
*/
void logic2_raw_eqFunction_10354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10354};
  modelica_boolean tmp943;
  modelica_boolean tmp944;
  static const MMC_DEFSTRINGLIT(tmp945,78,"Variable violating min/max constraint: -1e5 <= chi.m2_flow <= 1e5, has value: ");
  modelica_string tmp946;
  modelica_metatype tmpMeta947;
  static int tmp948 = 0;
  if(!tmp948)
  {
    tmp943 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */),-1e5);
    tmp944 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */),1e5);
    if(!(tmp943 && tmp944))
    {
      tmp946 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta947 = stringAppend(MMC_REFSTRINGLIT(tmp945),tmp946);
      {
        const char* assert_cond = "(chi.m2_flow >= -1e5 and chi.m2_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialFourPortInterface.mo",27,3,28,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta947));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialFourPortInterface.mo",27,3,28,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta947));
        }
      }
      tmp948 = 1;
    }
  }
  threadData->lastEquationSolved = 10354;
}

/*
equation index: 10355
type: ALGORITHM

  assert(chi.state_a1_inflow.T >= 1.0 and chi.state_a1_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= chi.state_a1_inflow.T <= 1e4, has value: " + String(chi.state_a1_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10355};
  modelica_boolean tmp949;
  modelica_boolean tmp950;
  static const MMC_DEFSTRINGLIT(tmp951,87,"Variable violating min/max constraint: 1.0 <= chi.state_a1_inflow.T <= 1e4, has value: ");
  modelica_string tmp952;
  modelica_metatype tmpMeta953;
  static int tmp954 = 0;
  if(!tmp954)
  {
    tmp949 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[357]] /* chi.state_a1_inflow.T variable */),1.0);
    tmp950 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[357]] /* chi.state_a1_inflow.T variable */),1e4);
    if(!(tmp949 && tmp950))
    {
      tmp952 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[357]] /* chi.state_a1_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta953 = stringAppend(MMC_REFSTRINGLIT(tmp951),tmp952);
      {
        const char* assert_cond = "(chi.state_a1_inflow.T >= 1.0 and chi.state_a1_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta953));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta953));
        }
      }
      tmp954 = 1;
    }
  }
  threadData->lastEquationSolved = 10355;
}

/*
equation index: 10356
type: ALGORITHM

  assert(chi.state_b1_inflow.T >= 1.0 and chi.state_b1_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= chi.state_b1_inflow.T <= 1e4, has value: " + String(chi.state_b1_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10356};
  modelica_boolean tmp955;
  modelica_boolean tmp956;
  static const MMC_DEFSTRINGLIT(tmp957,87,"Variable violating min/max constraint: 1.0 <= chi.state_b1_inflow.T <= 1e4, has value: ");
  modelica_string tmp958;
  modelica_metatype tmpMeta959;
  static int tmp960 = 0;
  if(!tmp960)
  {
    tmp955 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[359]] /* chi.state_b1_inflow.T variable */),1.0);
    tmp956 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[359]] /* chi.state_b1_inflow.T variable */),1e4);
    if(!(tmp955 && tmp956))
    {
      tmp958 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[359]] /* chi.state_b1_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta959 = stringAppend(MMC_REFSTRINGLIT(tmp957),tmp958);
      {
        const char* assert_cond = "(chi.state_b1_inflow.T >= 1.0 and chi.state_b1_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta959));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta959));
        }
      }
      tmp960 = 1;
    }
  }
  threadData->lastEquationSolved = 10356;
}

/*
equation index: 10357
type: ALGORITHM

  assert(chi.state_a2_inflow.T >= 1.0 and chi.state_a2_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= chi.state_a2_inflow.T <= 1e4, has value: " + String(chi.state_a2_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10357};
  modelica_boolean tmp961;
  modelica_boolean tmp962;
  static const MMC_DEFSTRINGLIT(tmp963,87,"Variable violating min/max constraint: 1.0 <= chi.state_a2_inflow.T <= 1e4, has value: ");
  modelica_string tmp964;
  modelica_metatype tmpMeta965;
  static int tmp966 = 0;
  if(!tmp966)
  {
    tmp961 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* chi.state_a2_inflow.T variable */),1.0);
    tmp962 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* chi.state_a2_inflow.T variable */),1e4);
    if(!(tmp961 && tmp962))
    {
      tmp964 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* chi.state_a2_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta965 = stringAppend(MMC_REFSTRINGLIT(tmp963),tmp964);
      {
        const char* assert_cond = "(chi.state_a2_inflow.T >= 1.0 and chi.state_a2_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta965));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta965));
        }
      }
      tmp966 = 1;
    }
  }
  threadData->lastEquationSolved = 10357;
}

/*
equation index: 10358
type: ALGORITHM

  assert(chi.state_b2_inflow.T >= 1.0 and chi.state_b2_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= chi.state_b2_inflow.T <= 1e4, has value: " + String(chi.state_b2_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10358};
  modelica_boolean tmp967;
  modelica_boolean tmp968;
  static const MMC_DEFSTRINGLIT(tmp969,87,"Variable violating min/max constraint: 1.0 <= chi.state_b2_inflow.T <= 1e4, has value: ");
  modelica_string tmp970;
  modelica_metatype tmpMeta971;
  static int tmp972 = 0;
  if(!tmp972)
  {
    tmp967 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[360]] /* chi.state_b2_inflow.T variable */),1.0);
    tmp968 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[360]] /* chi.state_b2_inflow.T variable */),1e4);
    if(!(tmp967 && tmp968))
    {
      tmp970 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[360]] /* chi.state_b2_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta971 = stringAppend(MMC_REFSTRINGLIT(tmp969),tmp970);
      {
        const char* assert_cond = "(chi.state_b2_inflow.T >= 1.0 and chi.state_b2_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta971));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta971));
        }
      }
      tmp972 = 1;
    }
  }
  threadData->lastEquationSolved = 10358;
}

/*
equation index: 10359
type: ALGORITHM

  assert(chi.vol1.dynBal.medium.T >= 1.0 and chi.vol1.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= chi.vol1.dynBal.medium.T <= 1e4, has value: " + String(chi.vol1.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10359};
  modelica_boolean tmp973;
  modelica_boolean tmp974;
  static const MMC_DEFSTRINGLIT(tmp975,90,"Variable violating min/max constraint: 1.0 <= chi.vol1.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp976;
  modelica_metatype tmpMeta977;
  static int tmp978 = 0;
  if(!tmp978)
  {
    tmp973 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* chi.vol1.dynBal.medium.T variable */),1.0);
    tmp974 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* chi.vol1.dynBal.medium.T variable */),1e4);
    if(!(tmp973 && tmp974))
    {
      tmp976 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* chi.vol1.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta977 = stringAppend(MMC_REFSTRINGLIT(tmp975),tmp976);
      {
        const char* assert_cond = "(chi.vol1.dynBal.medium.T >= 1.0 and chi.vol1.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta977));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta977));
        }
      }
      tmp978 = 1;
    }
  }
  threadData->lastEquationSolved = 10359;
}

/*
equation index: 10360
type: ALGORITHM

  assert(chi.vol1.dynBal.ports_H_flow[1] >= -1e8 and chi.vol1.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= chi.vol1.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(chi.vol1.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10360};
  modelica_boolean tmp979;
  modelica_boolean tmp980;
  static const MMC_DEFSTRINGLIT(tmp981,98,"Variable violating min/max constraint: -1e8 <= chi.vol1.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp982;
  modelica_metatype tmpMeta983;
  static int tmp984 = 0;
  if(!tmp984)
  {
    tmp979 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* chi.vol1.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp980 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* chi.vol1.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp979 && tmp980))
    {
      tmp982 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* chi.vol1.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta983 = stringAppend(MMC_REFSTRINGLIT(tmp981),tmp982);
      {
        const char* assert_cond = "(chi.vol1.dynBal.ports_H_flow[1] >= -1e8 and chi.vol1.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta983));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta983));
        }
      }
      tmp984 = 1;
    }
  }
  threadData->lastEquationSolved = 10360;
}

/*
equation index: 10361
type: ALGORITHM

  assert(chi.vol1.dynBal.ports_H_flow[2] >= -1e8 and chi.vol1.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= chi.vol1.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(chi.vol1.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10361};
  modelica_boolean tmp985;
  modelica_boolean tmp986;
  static const MMC_DEFSTRINGLIT(tmp987,98,"Variable violating min/max constraint: -1e8 <= chi.vol1.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp988;
  modelica_metatype tmpMeta989;
  static int tmp990 = 0;
  if(!tmp990)
  {
    tmp985 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* chi.vol1.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp986 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* chi.vol1.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp985 && tmp986))
    {
      tmp988 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* chi.vol1.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta989 = stringAppend(MMC_REFSTRINGLIT(tmp987),tmp988);
      {
        const char* assert_cond = "(chi.vol1.dynBal.ports_H_flow[2] >= -1e8 and chi.vol1.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta989));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta989));
        }
      }
      tmp990 = 1;
    }
  }
  threadData->lastEquationSolved = 10361;
}

/*
equation index: 10362
type: ALGORITHM

  assert(chi.vol2.p >= 0.0 and chi.vol2.p <= 1e8, "Variable violating min/max constraint: 0.0 <= chi.vol2.p <= 1e8, has value: " + String(chi.vol2.p, "g"));
*/
void logic2_raw_eqFunction_10362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10362};
  modelica_boolean tmp991;
  modelica_boolean tmp992;
  static const MMC_DEFSTRINGLIT(tmp993,76,"Variable violating min/max constraint: 0.0 <= chi.vol2.p <= 1e8, has value: ");
  modelica_string tmp994;
  modelica_metatype tmpMeta995;
  static int tmp996 = 0;
  if(!tmp996)
  {
    tmp991 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* chi.vol2.p variable */),0.0);
    tmp992 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* chi.vol2.p variable */),1e8);
    if(!(tmp991 && tmp992))
    {
      tmp994 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* chi.vol2.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta995 = stringAppend(MMC_REFSTRINGLIT(tmp993),tmp994);
      {
        const char* assert_cond = "(chi.vol2.p >= 0.0 and chi.vol2.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",42,3,43,28,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta995));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",42,3,43,28,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta995));
        }
      }
      tmp996 = 1;
    }
  }
  threadData->lastEquationSolved = 10362;
}

/*
equation index: 10363
type: ALGORITHM

  assert(chi.vol2.dynBal.medium.T >= 1.0 and chi.vol2.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= chi.vol2.dynBal.medium.T <= 1e4, has value: " + String(chi.vol2.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10363};
  modelica_boolean tmp997;
  modelica_boolean tmp998;
  static const MMC_DEFSTRINGLIT(tmp999,90,"Variable violating min/max constraint: 1.0 <= chi.vol2.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp1000;
  modelica_metatype tmpMeta1001;
  static int tmp1002 = 0;
  if(!tmp1002)
  {
    tmp997 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* chi.vol2.dynBal.medium.T variable */),1.0);
    tmp998 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* chi.vol2.dynBal.medium.T variable */),1e4);
    if(!(tmp997 && tmp998))
    {
      tmp1000 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* chi.vol2.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1001 = stringAppend(MMC_REFSTRINGLIT(tmp999),tmp1000);
      {
        const char* assert_cond = "(chi.vol2.dynBal.medium.T >= 1.0 and chi.vol2.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1001));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1001));
        }
      }
      tmp1002 = 1;
    }
  }
  threadData->lastEquationSolved = 10363;
}

/*
equation index: 10364
type: ALGORITHM

  assert(chi.vol2.dynBal.ports_H_flow[1] >= -1e8 and chi.vol2.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= chi.vol2.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(chi.vol2.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10364};
  modelica_boolean tmp1003;
  modelica_boolean tmp1004;
  static const MMC_DEFSTRINGLIT(tmp1005,98,"Variable violating min/max constraint: -1e8 <= chi.vol2.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp1006;
  modelica_metatype tmpMeta1007;
  static int tmp1008 = 0;
  if(!tmp1008)
  {
    tmp1003 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[385]] /* chi.vol2.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp1004 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[385]] /* chi.vol2.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp1003 && tmp1004))
    {
      tmp1006 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[385]] /* chi.vol2.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1007 = stringAppend(MMC_REFSTRINGLIT(tmp1005),tmp1006);
      {
        const char* assert_cond = "(chi.vol2.dynBal.ports_H_flow[1] >= -1e8 and chi.vol2.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1007));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1007));
        }
      }
      tmp1008 = 1;
    }
  }
  threadData->lastEquationSolved = 10364;
}

/*
equation index: 10365
type: ALGORITHM

  assert(chi.vol2.dynBal.ports_H_flow[2] >= -1e8 and chi.vol2.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= chi.vol2.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(chi.vol2.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10365};
  modelica_boolean tmp1009;
  modelica_boolean tmp1010;
  static const MMC_DEFSTRINGLIT(tmp1011,98,"Variable violating min/max constraint: -1e8 <= chi.vol2.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp1012;
  modelica_metatype tmpMeta1013;
  static int tmp1014 = 0;
  if(!tmp1014)
  {
    tmp1009 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[386]] /* chi.vol2.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp1010 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[386]] /* chi.vol2.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp1009 && tmp1010))
    {
      tmp1012 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[386]] /* chi.vol2.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1013 = stringAppend(MMC_REFSTRINGLIT(tmp1011),tmp1012);
      {
        const char* assert_cond = "(chi.vol2.dynBal.ports_H_flow[2] >= -1e8 and chi.vol2.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1013));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1013));
        }
      }
      tmp1014 = 1;
    }
  }
  threadData->lastEquationSolved = 10365;
}

/*
equation index: 10366
type: ALGORITHM

  assert(chi.TEvaEnt >= 0.0, "Variable violating min constraint: 0.0 <= chi.TEvaEnt, has value: " + String(chi.TEvaEnt, "g"));
*/
void logic2_raw_eqFunction_10366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10366};
  modelica_boolean tmp1015;
  static const MMC_DEFSTRINGLIT(tmp1016,66,"Variable violating min constraint: 0.0 <= chi.TEvaEnt, has value: ");
  modelica_string tmp1017;
  modelica_metatype tmpMeta1018;
  static int tmp1019 = 0;
  if(!tmp1019)
  {
    tmp1015 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* chi.TEvaEnt variable */),0.0);
    if(!tmp1015)
    {
      tmp1017 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* chi.TEvaEnt variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1018 = stringAppend(MMC_REFSTRINGLIT(tmp1016),tmp1017);
      {
        const char* assert_cond = "(chi.TEvaEnt >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",25,3,25,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1018));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",25,3,25,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1018));
        }
      }
      tmp1019 = 1;
    }
  }
  threadData->lastEquationSolved = 10366;
}

/*
equation index: 10367
type: ALGORITHM

  assert(chi.TEvaLvg >= 1.0 and chi.TEvaLvg <= 1e4, "Variable violating min/max constraint: 1.0 <= chi.TEvaLvg <= 1e4, has value: " + String(chi.TEvaLvg, "g"));
*/
void logic2_raw_eqFunction_10367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10367};
  modelica_boolean tmp1020;
  modelica_boolean tmp1021;
  static const MMC_DEFSTRINGLIT(tmp1022,77,"Variable violating min/max constraint: 1.0 <= chi.TEvaLvg <= 1e4, has value: ");
  modelica_string tmp1023;
  modelica_metatype tmpMeta1024;
  static int tmp1025 = 0;
  if(!tmp1025)
  {
    tmp1020 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* chi.TEvaLvg variable */),1.0);
    tmp1021 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* chi.TEvaLvg variable */),1e4);
    if(!(tmp1020 && tmp1021))
    {
      tmp1023 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* chi.TEvaLvg variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1024 = stringAppend(MMC_REFSTRINGLIT(tmp1022),tmp1023);
      {
        const char* assert_cond = "(chi.TEvaLvg >= 1.0 and chi.TEvaLvg <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",26,3,26,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1024));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",26,3,26,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1024));
        }
      }
      tmp1025 = 1;
    }
  }
  threadData->lastEquationSolved = 10367;
}

/*
equation index: 10368
type: ALGORITHM

  assert(chi.TConEnt >= 0.0, "Variable violating min constraint: 0.0 <= chi.TConEnt, has value: " + String(chi.TConEnt, "g"));
*/
void logic2_raw_eqFunction_10368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10368};
  modelica_boolean tmp1026;
  static const MMC_DEFSTRINGLIT(tmp1027,66,"Variable violating min constraint: 0.0 <= chi.TConEnt, has value: ");
  modelica_string tmp1028;
  modelica_metatype tmpMeta1029;
  static int tmp1030 = 0;
  if(!tmp1030)
  {
    tmp1026 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* chi.TConEnt variable */),0.0);
    if(!tmp1026)
    {
      tmp1028 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* chi.TConEnt variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1029 = stringAppend(MMC_REFSTRINGLIT(tmp1027),tmp1028);
      {
        const char* assert_cond = "(chi.TConEnt >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",27,3,27,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1029));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",27,3,27,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1029));
        }
      }
      tmp1030 = 1;
    }
  }
  threadData->lastEquationSolved = 10368;
}

/*
equation index: 10369
type: ALGORITHM

  assert(chi.TConLvg >= 1.0 and chi.TConLvg <= 1e4, "Variable violating min/max constraint: 1.0 <= chi.TConLvg <= 1e4, has value: " + String(chi.TConLvg, "g"));
*/
void logic2_raw_eqFunction_10369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10369};
  modelica_boolean tmp1031;
  modelica_boolean tmp1032;
  static const MMC_DEFSTRINGLIT(tmp1033,77,"Variable violating min/max constraint: 1.0 <= chi.TConLvg <= 1e4, has value: ");
  modelica_string tmp1034;
  modelica_metatype tmpMeta1035;
  static int tmp1036 = 0;
  if(!tmp1036)
  {
    tmp1031 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* chi.TConLvg variable */),1.0);
    tmp1032 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* chi.TConLvg variable */),1e4);
    if(!(tmp1031 && tmp1032))
    {
      tmp1034 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* chi.TConLvg variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1035 = stringAppend(MMC_REFSTRINGLIT(tmp1033),tmp1034);
      {
        const char* assert_cond = "(chi.TConLvg >= 1.0 and chi.TConLvg <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",28,3,28,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1035));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",28,3,28,71,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1035));
        }
      }
      tmp1036 = 1;
    }
  }
  threadData->lastEquationSolved = 10369;
}

/*
equation index: 10370
type: ALGORITHM

  assert(chi.COP >= 0.0, "Variable violating min constraint: 0.0 <= chi.COP, has value: " + String(chi.COP, "g"));
*/
void logic2_raw_eqFunction_10370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10370};
  modelica_boolean tmp1037;
  static const MMC_DEFSTRINGLIT(tmp1038,62,"Variable violating min constraint: 0.0 <= chi.COP, has value: ");
  modelica_string tmp1039;
  modelica_metatype tmpMeta1040;
  static int tmp1041 = 0;
  if(!tmp1041)
  {
    tmp1037 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* chi.COP variable */),0.0);
    if(!tmp1037)
    {
      tmp1039 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* chi.COP variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1040 = stringAppend(MMC_REFSTRINGLIT(tmp1038),tmp1039);
      {
        const char* assert_cond = "(chi.COP >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",30,3,30,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1040));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",30,3,30,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1040));
        }
      }
      tmp1041 = 1;
    }
  }
  threadData->lastEquationSolved = 10370;
}

/*
equation index: 10371
type: ALGORITHM

  assert(chi.capFunT >= 0.0, "Variable violating min constraint: 0.0 <= chi.capFunT, has value: " + String(chi.capFunT, "g"));
*/
void logic2_raw_eqFunction_10371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10371};
  modelica_boolean tmp1042;
  static const MMC_DEFSTRINGLIT(tmp1043,66,"Variable violating min constraint: 0.0 <= chi.capFunT, has value: ");
  modelica_string tmp1044;
  modelica_metatype tmpMeta1045;
  static int tmp1046 = 0;
  if(!tmp1046)
  {
    tmp1042 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[350]] /* chi.capFunT variable */),0.0);
    if(!tmp1042)
    {
      tmp1044 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[350]] /* chi.capFunT variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1045 = stringAppend(MMC_REFSTRINGLIT(tmp1043),tmp1044);
      {
        const char* assert_cond = "(chi.capFunT >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",38,3,39,60,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1045));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",38,3,39,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1045));
        }
      }
      tmp1046 = 1;
    }
  }
  threadData->lastEquationSolved = 10371;
}

/*
equation index: 10372
type: ALGORITHM

  assert(chi.EIRFunT >= 0.0, "Variable violating min constraint: 0.0 <= chi.EIRFunT, has value: " + String(chi.EIRFunT, "g"));
*/
void logic2_raw_eqFunction_10372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10372};
  modelica_boolean tmp1047;
  static const MMC_DEFSTRINGLIT(tmp1048,66,"Variable violating min constraint: 0.0 <= chi.EIRFunT, has value: ");
  modelica_string tmp1049;
  modelica_metatype tmpMeta1050;
  static int tmp1051 = 0;
  if(!tmp1051)
  {
    tmp1047 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* chi.EIRFunT variable */),0.0);
    if(!tmp1047)
    {
      tmp1049 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* chi.EIRFunT variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1050 = stringAppend(MMC_REFSTRINGLIT(tmp1048),tmp1049);
      {
        const char* assert_cond = "(chi.EIRFunT >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",40,3,41,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1050));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",40,3,41,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1050));
        }
      }
      tmp1051 = 1;
    }
  }
  threadData->lastEquationSolved = 10372;
}

/*
equation index: 10373
type: ALGORITHM

  assert(chi.EIRFunPLR >= 0.0, "Variable violating min constraint: 0.0 <= chi.EIRFunPLR, has value: " + String(chi.EIRFunPLR, "g"));
*/
void logic2_raw_eqFunction_10373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10373};
  modelica_boolean tmp1052;
  static const MMC_DEFSTRINGLIT(tmp1053,68,"Variable violating min constraint: 0.0 <= chi.EIRFunPLR, has value: ");
  modelica_string tmp1054;
  modelica_metatype tmpMeta1055;
  static int tmp1056 = 0;
  if(!tmp1056)
  {
    tmp1052 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* chi.EIRFunPLR variable */),0.0);
    if(!tmp1052)
    {
      tmp1054 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* chi.EIRFunPLR variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1055 = stringAppend(MMC_REFSTRINGLIT(tmp1053),tmp1054);
      {
        const char* assert_cond = "(chi.EIRFunPLR >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",42,3,43,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1055));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",42,3,43,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1055));
        }
      }
      tmp1056 = 1;
    }
  }
  threadData->lastEquationSolved = 10373;
}

/*
equation index: 10374
type: ALGORITHM

  assert(chi.PLR1 >= 0.0, "Variable violating min constraint: 0.0 <= chi.PLR1, has value: " + String(chi.PLR1, "g"));
*/
void logic2_raw_eqFunction_10374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10374};
  modelica_boolean tmp1057;
  static const MMC_DEFSTRINGLIT(tmp1058,63,"Variable violating min constraint: 0.0 <= chi.PLR1, has value: ");
  modelica_string tmp1059;
  modelica_metatype tmpMeta1060;
  static int tmp1061 = 0;
  if(!tmp1061)
  {
    tmp1057 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* chi.PLR1 variable */),0.0);
    if(!tmp1057)
    {
      tmp1059 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* chi.PLR1 variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1060 = stringAppend(MMC_REFSTRINGLIT(tmp1058),tmp1059);
      {
        const char* assert_cond = "(chi.PLR1 >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",44,3,44,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1060));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",44,3,44,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1060));
        }
      }
      tmp1061 = 1;
    }
  }
  threadData->lastEquationSolved = 10374;
}

/*
equation index: 10375
type: ALGORITHM

  assert(chi.PLR2 >= 0.0, "Variable violating min constraint: 0.0 <= chi.PLR2, has value: " + String(chi.PLR2, "g"));
*/
void logic2_raw_eqFunction_10375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10375};
  modelica_boolean tmp1062;
  static const MMC_DEFSTRINGLIT(tmp1063,63,"Variable violating min constraint: 0.0 <= chi.PLR2, has value: ");
  modelica_string tmp1064;
  modelica_metatype tmpMeta1065;
  static int tmp1066 = 0;
  if(!tmp1066)
  {
    tmp1062 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* chi.PLR2 variable */),0.0);
    if(!tmp1062)
    {
      tmp1064 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* chi.PLR2 variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1065 = stringAppend(MMC_REFSTRINGLIT(tmp1063),tmp1064);
      {
        const char* assert_cond = "(chi.PLR2 >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",45,3,45,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1065));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",45,3,45,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1065));
        }
      }
      tmp1066 = 1;
    }
  }
  threadData->lastEquationSolved = 10375;
}

/*
equation index: 10376
type: ALGORITHM

  assert(chi.CR >= 0.0, "Variable violating min constraint: 0.0 <= chi.CR, has value: " + String(chi.CR, "g"));
*/
void logic2_raw_eqFunction_10376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10376};
  modelica_boolean tmp1067;
  static const MMC_DEFSTRINGLIT(tmp1068,61,"Variable violating min constraint: 0.0 <= chi.CR, has value: ");
  modelica_string tmp1069;
  modelica_metatype tmpMeta1070;
  static int tmp1071 = 0;
  if(!tmp1071)
  {
    tmp1067 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* chi.CR variable */),0.0);
    if(!tmp1067)
    {
      tmp1069 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* chi.CR variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1070 = stringAppend(MMC_REFSTRINGLIT(tmp1068),tmp1069);
      {
        const char* assert_cond = "(chi.CR >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",46,3,46,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1070));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",46,3,46,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1070));
        }
      }
      tmp1071 = 1;
    }
  }
  threadData->lastEquationSolved = 10376;
}

/*
equation index: 10377
type: ALGORITHM

  assert(val6.port_b.h_outflow >= -1e10 and val6.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= val6.port_b.h_outflow <= 1e10, has value: " + String(val6.port_b.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10377};
  modelica_boolean tmp1072;
  modelica_boolean tmp1073;
  static const MMC_DEFSTRINGLIT(tmp1074,90,"Variable violating min/max constraint: -1e10 <= val6.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp1075;
  modelica_metatype tmpMeta1076;
  static int tmp1077 = 0;
  if(!tmp1077)
  {
    tmp1072 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.port_b.h_outflow variable */),-1e10);
    tmp1073 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.port_b.h_outflow variable */),1e10);
    if(!(tmp1072 && tmp1073))
    {
      tmp1075 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1076 = stringAppend(MMC_REFSTRINGLIT(tmp1074),tmp1075);
      {
        const char* assert_cond = "(val6.port_b.h_outflow >= -1e10 and val6.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1076));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1076));
        }
      }
      tmp1077 = 1;
    }
  }
  threadData->lastEquationSolved = 10377;
}

/*
equation index: 10378
type: ALGORITHM

  assert(val6.kVal >= 2.2250738585072014e-308, "Variable violating min constraint: 2.2250738585072014e-308 <= val6.kVal, has value: " + String(val6.kVal, "g"));
*/
void logic2_raw_eqFunction_10378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10378};
  modelica_boolean tmp1078;
  static const MMC_DEFSTRINGLIT(tmp1079,84,"Variable violating min constraint: 2.2250738585072014e-308 <= val6.kVal, has value: ");
  modelica_string tmp1080;
  modelica_metatype tmpMeta1081;
  static int tmp1082 = 0;
  if(!tmp1082)
  {
    tmp1078 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val6.kVal variable */),2.2250738585072014e-308);
    if(!tmp1078)
    {
      tmp1080 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val6.kVal variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1081 = stringAppend(MMC_REFSTRINGLIT(tmp1079),tmp1080);
      {
        const char* assert_cond = "(val6.kVal >= 2.2250738585072014e-308)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",24,3,25,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1081));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",24,3,25,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1081));
        }
      }
      tmp1082 = 1;
    }
  }
  threadData->lastEquationSolved = 10378;
}

/*
equation index: 10379
type: ALGORITHM

  assert(val6.k >= 2.2250738585072014e-308, "Variable violating min constraint: 2.2250738585072014e-308 <= val6.k, has value: " + String(val6.k, "g"));
*/
void logic2_raw_eqFunction_10379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10379};
  modelica_boolean tmp1083;
  static const MMC_DEFSTRINGLIT(tmp1084,81,"Variable violating min constraint: 2.2250738585072014e-308 <= val6.k, has value: ");
  modelica_string tmp1085;
  modelica_metatype tmpMeta1086;
  static int tmp1087 = 0;
  if(!tmp1087)
  {
    tmp1083 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* val6.k variable */),2.2250738585072014e-308);
    if(!tmp1083)
    {
      tmp1085 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* val6.k variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1086 = stringAppend(MMC_REFSTRINGLIT(tmp1084),tmp1085);
      {
        const char* assert_cond = "(val6.k >= 2.2250738585072014e-308)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",26,3,27,95,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1086));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",26,3,27,95,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1086));
        }
      }
      tmp1087 = 1;
    }
  }
  threadData->lastEquationSolved = 10379;
}

/*
equation index: 10380
type: ALGORITHM

  assert(TCHWChi1In.T >= 0.0, "Variable violating min constraint: 0.0 <= TCHWChi1In.T, has value: " + String(TCHWChi1In.T, "g"));
*/
void logic2_raw_eqFunction_10380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10380};
  modelica_boolean tmp1088;
  static const MMC_DEFSTRINGLIT(tmp1089,67,"Variable violating min constraint: 0.0 <= TCHWChi1In.T, has value: ");
  modelica_string tmp1090;
  modelica_metatype tmpMeta1091;
  static int tmp1092 = 0;
  if(!tmp1092)
  {
    tmp1088 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* TCHWChi1In.T STATE(1) */),0.0);
    if(!tmp1088)
    {
      tmp1090 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* TCHWChi1In.T STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1091 = stringAppend(MMC_REFSTRINGLIT(tmp1089),tmp1090);
      {
        const char* assert_cond = "(TCHWChi1In.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1091));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1091));
        }
      }
      tmp1092 = 1;
    }
  }
  threadData->lastEquationSolved = 10380;
}

/*
equation index: 10381
type: ALGORITHM

  assert(TCHWChi1In.TMed >= 1.0 and TCHWChi1In.TMed <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWChi1In.TMed <= 1e4, has value: " + String(TCHWChi1In.TMed, "g"));
*/
void logic2_raw_eqFunction_10381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10381};
  modelica_boolean tmp1093;
  modelica_boolean tmp1094;
  static const MMC_DEFSTRINGLIT(tmp1095,81,"Variable violating min/max constraint: 1.0 <= TCHWChi1In.TMed <= 1e4, has value: ");
  modelica_string tmp1096;
  modelica_metatype tmpMeta1097;
  static int tmp1098 = 0;
  if(!tmp1098)
  {
    tmp1093 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* TCHWChi1In.TMed variable */),1.0);
    tmp1094 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* TCHWChi1In.TMed variable */),1e4);
    if(!(tmp1093 && tmp1094))
    {
      tmp1096 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* TCHWChi1In.TMed variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1097 = stringAppend(MMC_REFSTRINGLIT(tmp1095),tmp1096);
      {
        const char* assert_cond = "(TCHWChi1In.TMed >= 1.0 and TCHWChi1In.TMed <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1097));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1097));
        }
      }
      tmp1098 = 1;
    }
  }
  threadData->lastEquationSolved = 10381;
}

/*
equation index: 10382
type: ALGORITHM

  assert(TCHWChi1In.T_a_inflow >= 1.0 and TCHWChi1In.T_a_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWChi1In.T_a_inflow <= 1e4, has value: " + String(TCHWChi1In.T_a_inflow, "g"));
*/
void logic2_raw_eqFunction_10382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10382};
  modelica_boolean tmp1099;
  modelica_boolean tmp1100;
  static const MMC_DEFSTRINGLIT(tmp1101,87,"Variable violating min/max constraint: 1.0 <= TCHWChi1In.T_a_inflow <= 1e4, has value: ");
  modelica_string tmp1102;
  modelica_metatype tmpMeta1103;
  static int tmp1104 = 0;
  if(!tmp1104)
  {
    tmp1099 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* TCHWChi1In.T_a_inflow variable */),1.0);
    tmp1100 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* TCHWChi1In.T_a_inflow variable */),1e4);
    if(!(tmp1099 && tmp1100))
    {
      tmp1102 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* TCHWChi1In.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1103 = stringAppend(MMC_REFSTRINGLIT(tmp1101),tmp1102);
      {
        const char* assert_cond = "(TCHWChi1In.T_a_inflow >= 1.0 and TCHWChi1In.T_a_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1103));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1103));
        }
      }
      tmp1104 = 1;
    }
  }
  threadData->lastEquationSolved = 10382;
}

/*
equation index: 10383
type: ALGORITHM

  assert(TCHWChi1In.T_b_inflow >= 1.0 and TCHWChi1In.T_b_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWChi1In.T_b_inflow <= 1e4, has value: " + String(TCHWChi1In.T_b_inflow, "g"));
*/
void logic2_raw_eqFunction_10383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10383};
  modelica_boolean tmp1105;
  modelica_boolean tmp1106;
  static const MMC_DEFSTRINGLIT(tmp1107,87,"Variable violating min/max constraint: 1.0 <= TCHWChi1In.T_b_inflow <= 1e4, has value: ");
  modelica_string tmp1108;
  modelica_metatype tmpMeta1109;
  static int tmp1110 = 0;
  if(!tmp1110)
  {
    tmp1105 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* TCHWChi1In.T_b_inflow variable */),1.0);
    tmp1106 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* TCHWChi1In.T_b_inflow variable */),1e4);
    if(!(tmp1105 && tmp1106))
    {
      tmp1108 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* TCHWChi1In.T_b_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1109 = stringAppend(MMC_REFSTRINGLIT(tmp1107),tmp1108);
      {
        const char* assert_cond = "(TCHWChi1In.T_b_inflow >= 1.0 and TCHWChi1In.T_b_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1109));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1109));
        }
      }
      tmp1110 = 1;
    }
  }
  threadData->lastEquationSolved = 10383;
}

/*
equation index: 10384
type: ALGORITHM

  assert(TCHWChi1Out.T >= 0.0, "Variable violating min constraint: 0.0 <= TCHWChi1Out.T, has value: " + String(TCHWChi1Out.T, "g"));
*/
void logic2_raw_eqFunction_10384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10384};
  modelica_boolean tmp1111;
  static const MMC_DEFSTRINGLIT(tmp1112,68,"Variable violating min constraint: 0.0 <= TCHWChi1Out.T, has value: ");
  modelica_string tmp1113;
  modelica_metatype tmpMeta1114;
  static int tmp1115 = 0;
  if(!tmp1115)
  {
    tmp1111 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* TCHWChi1Out.T STATE(1) */),0.0);
    if(!tmp1111)
    {
      tmp1113 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* TCHWChi1Out.T STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1114 = stringAppend(MMC_REFSTRINGLIT(tmp1112),tmp1113);
      {
        const char* assert_cond = "(TCHWChi1Out.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1114));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1114));
        }
      }
      tmp1115 = 1;
    }
  }
  threadData->lastEquationSolved = 10384;
}

/*
equation index: 10385
type: ALGORITHM

  assert(TCHWChi1Out.TMed >= 1.0 and TCHWChi1Out.TMed <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWChi1Out.TMed <= 1e4, has value: " + String(TCHWChi1Out.TMed, "g"));
*/
void logic2_raw_eqFunction_10385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10385};
  modelica_boolean tmp1116;
  modelica_boolean tmp1117;
  static const MMC_DEFSTRINGLIT(tmp1118,82,"Variable violating min/max constraint: 1.0 <= TCHWChi1Out.TMed <= 1e4, has value: ");
  modelica_string tmp1119;
  modelica_metatype tmpMeta1120;
  static int tmp1121 = 0;
  if(!tmp1121)
  {
    tmp1116 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* TCHWChi1Out.TMed variable */),1.0);
    tmp1117 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* TCHWChi1Out.TMed variable */),1e4);
    if(!(tmp1116 && tmp1117))
    {
      tmp1119 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* TCHWChi1Out.TMed variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1120 = stringAppend(MMC_REFSTRINGLIT(tmp1118),tmp1119);
      {
        const char* assert_cond = "(TCHWChi1Out.TMed >= 1.0 and TCHWChi1Out.TMed <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1120));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1120));
        }
      }
      tmp1121 = 1;
    }
  }
  threadData->lastEquationSolved = 10385;
}

/*
equation index: 10386
type: ALGORITHM

  assert(TCHWChi1Out.T_a_inflow >= 1.0 and TCHWChi1Out.T_a_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWChi1Out.T_a_inflow <= 1e4, has value: " + String(TCHWChi1Out.T_a_inflow, "g"));
*/
void logic2_raw_eqFunction_10386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10386};
  modelica_boolean tmp1122;
  modelica_boolean tmp1123;
  static const MMC_DEFSTRINGLIT(tmp1124,88,"Variable violating min/max constraint: 1.0 <= TCHWChi1Out.T_a_inflow <= 1e4, has value: ");
  modelica_string tmp1125;
  modelica_metatype tmpMeta1126;
  static int tmp1127 = 0;
  if(!tmp1127)
  {
    tmp1122 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* TCHWChi1Out.T_a_inflow variable */),1.0);
    tmp1123 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* TCHWChi1Out.T_a_inflow variable */),1e4);
    if(!(tmp1122 && tmp1123))
    {
      tmp1125 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* TCHWChi1Out.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1126 = stringAppend(MMC_REFSTRINGLIT(tmp1124),tmp1125);
      {
        const char* assert_cond = "(TCHWChi1Out.T_a_inflow >= 1.0 and TCHWChi1Out.T_a_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1126));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1126));
        }
      }
      tmp1127 = 1;
    }
  }
  threadData->lastEquationSolved = 10386;
}

/*
equation index: 10387
type: ALGORITHM

  assert(TCHWChi1Out.T_b_inflow >= 1.0 and TCHWChi1Out.T_b_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWChi1Out.T_b_inflow <= 1e4, has value: " + String(TCHWChi1Out.T_b_inflow, "g"));
*/
void logic2_raw_eqFunction_10387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10387};
  modelica_boolean tmp1128;
  modelica_boolean tmp1129;
  static const MMC_DEFSTRINGLIT(tmp1130,88,"Variable violating min/max constraint: 1.0 <= TCHWChi1Out.T_b_inflow <= 1e4, has value: ");
  modelica_string tmp1131;
  modelica_metatype tmpMeta1132;
  static int tmp1133 = 0;
  if(!tmp1133)
  {
    tmp1128 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* TCHWChi1Out.T_b_inflow variable */),1.0);
    tmp1129 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* TCHWChi1Out.T_b_inflow variable */),1e4);
    if(!(tmp1128 && tmp1129))
    {
      tmp1131 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* TCHWChi1Out.T_b_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1132 = stringAppend(MMC_REFSTRINGLIT(tmp1130),tmp1131);
      {
        const char* assert_cond = "(TCHWChi1Out.T_b_inflow >= 1.0 and TCHWChi1Out.T_b_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1132));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1132));
        }
      }
      tmp1133 = 1;
    }
  }
  threadData->lastEquationSolved = 10387;
}

/*
equation index: 10388
type: ALGORITHM

  assert(TAirSup.port_b.h_outflow >= -1e10 and TAirSup.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= TAirSup.port_b.h_outflow <= 1e10, has value: " + String(TAirSup.port_b.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10388};
  modelica_boolean tmp1134;
  modelica_boolean tmp1135;
  static const MMC_DEFSTRINGLIT(tmp1136,93,"Variable violating min/max constraint: -1e10 <= TAirSup.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp1137;
  modelica_metatype tmpMeta1138;
  static int tmp1139 = 0;
  if(!tmp1139)
  {
    tmp1134 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* TAirSup.port_b.h_outflow variable */),-1e10);
    tmp1135 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* TAirSup.port_b.h_outflow variable */),1e10);
    if(!(tmp1134 && tmp1135))
    {
      tmp1137 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* TAirSup.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1138 = stringAppend(MMC_REFSTRINGLIT(tmp1136),tmp1137);
      {
        const char* assert_cond = "(TAirSup.port_b.h_outflow >= -1e10 and TAirSup.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1138));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1138));
        }
      }
      tmp1139 = 1;
    }
  }
  threadData->lastEquationSolved = 10388;
}

/*
equation index: 10389
type: ALGORITHM

  assert(TAirSup.T >= 0.0, "Variable violating min constraint: 0.0 <= TAirSup.T, has value: " + String(TAirSup.T, "g"));
*/
void logic2_raw_eqFunction_10389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10389};
  modelica_boolean tmp1140;
  static const MMC_DEFSTRINGLIT(tmp1141,64,"Variable violating min constraint: 0.0 <= TAirSup.T, has value: ");
  modelica_string tmp1142;
  modelica_metatype tmpMeta1143;
  static int tmp1144 = 0;
  if(!tmp1144)
  {
    tmp1140 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* TAirSup.T STATE(1) */),0.0);
    if(!tmp1140)
    {
      tmp1142 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* TAirSup.T STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1143 = stringAppend(MMC_REFSTRINGLIT(tmp1141),tmp1142);
      {
        const char* assert_cond = "(TAirSup.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1143));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1143));
        }
      }
      tmp1144 = 1;
    }
  }
  threadData->lastEquationSolved = 10389;
}

/*
equation index: 10390
type: ALGORITHM

  assert(TAirSup.TMed >= 1.0 and TAirSup.TMed <= 1e4, "Variable violating min/max constraint: 1.0 <= TAirSup.TMed <= 1e4, has value: " + String(TAirSup.TMed, "g"));
*/
void logic2_raw_eqFunction_10390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10390};
  modelica_boolean tmp1145;
  modelica_boolean tmp1146;
  static const MMC_DEFSTRINGLIT(tmp1147,78,"Variable violating min/max constraint: 1.0 <= TAirSup.TMed <= 1e4, has value: ");
  modelica_string tmp1148;
  modelica_metatype tmpMeta1149;
  static int tmp1150 = 0;
  if(!tmp1150)
  {
    tmp1145 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* TAirSup.TMed variable */),1.0);
    tmp1146 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* TAirSup.TMed variable */),1e4);
    if(!(tmp1145 && tmp1146))
    {
      tmp1148 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* TAirSup.TMed variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1149 = stringAppend(MMC_REFSTRINGLIT(tmp1147),tmp1148);
      {
        const char* assert_cond = "(TAirSup.TMed >= 1.0 and TAirSup.TMed <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1149));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1149));
        }
      }
      tmp1150 = 1;
    }
  }
  threadData->lastEquationSolved = 10390;
}

/*
equation index: 10391
type: ALGORITHM

  assert(TCHWEntChi.port_a.h_outflow >= -1e10 and TCHWEntChi.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= TCHWEntChi.port_a.h_outflow <= 1e10, has value: " + String(TCHWEntChi.port_a.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10391};
  modelica_boolean tmp1151;
  modelica_boolean tmp1152;
  static const MMC_DEFSTRINGLIT(tmp1153,96,"Variable violating min/max constraint: -1e10 <= TCHWEntChi.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp1154;
  modelica_metatype tmpMeta1155;
  static int tmp1156 = 0;
  if(!tmp1156)
  {
    tmp1151 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* TCHWEntChi.port_a.h_outflow variable */),-1e10);
    tmp1152 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* TCHWEntChi.port_a.h_outflow variable */),1e10);
    if(!(tmp1151 && tmp1152))
    {
      tmp1154 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* TCHWEntChi.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1155 = stringAppend(MMC_REFSTRINGLIT(tmp1153),tmp1154);
      {
        const char* assert_cond = "(TCHWEntChi.port_a.h_outflow >= -1e10 and TCHWEntChi.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1155));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1155));
        }
      }
      tmp1156 = 1;
    }
  }
  threadData->lastEquationSolved = 10391;
}

/*
equation index: 10392
type: ALGORITHM

  assert(TCHWEntChi.port_b.h_outflow >= -1e10 and TCHWEntChi.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= TCHWEntChi.port_b.h_outflow <= 1e10, has value: " + String(TCHWEntChi.port_b.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10392};
  modelica_boolean tmp1157;
  modelica_boolean tmp1158;
  static const MMC_DEFSTRINGLIT(tmp1159,96,"Variable violating min/max constraint: -1e10 <= TCHWEntChi.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp1160;
  modelica_metatype tmpMeta1161;
  static int tmp1162 = 0;
  if(!tmp1162)
  {
    tmp1157 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* TCHWEntChi.port_b.h_outflow variable */),-1e10);
    tmp1158 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* TCHWEntChi.port_b.h_outflow variable */),1e10);
    if(!(tmp1157 && tmp1158))
    {
      tmp1160 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* TCHWEntChi.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1161 = stringAppend(MMC_REFSTRINGLIT(tmp1159),tmp1160);
      {
        const char* assert_cond = "(TCHWEntChi.port_b.h_outflow >= -1e10 and TCHWEntChi.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1161));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1161));
        }
      }
      tmp1162 = 1;
    }
  }
  threadData->lastEquationSolved = 10392;
}

/*
equation index: 10393
type: ALGORITHM

  assert(TCHWEntChi.T >= 0.0, "Variable violating min constraint: 0.0 <= TCHWEntChi.T, has value: " + String(TCHWEntChi.T, "g"));
*/
void logic2_raw_eqFunction_10393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10393};
  modelica_boolean tmp1163;
  static const MMC_DEFSTRINGLIT(tmp1164,67,"Variable violating min constraint: 0.0 <= TCHWEntChi.T, has value: ");
  modelica_string tmp1165;
  modelica_metatype tmpMeta1166;
  static int tmp1167 = 0;
  if(!tmp1167)
  {
    tmp1163 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* TCHWEntChi.T STATE(1) */),0.0);
    if(!tmp1163)
    {
      tmp1165 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* TCHWEntChi.T STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1166 = stringAppend(MMC_REFSTRINGLIT(tmp1164),tmp1165);
      {
        const char* assert_cond = "(TCHWEntChi.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1166));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1166));
        }
      }
      tmp1167 = 1;
    }
  }
  threadData->lastEquationSolved = 10393;
}

/*
equation index: 10394
type: ALGORITHM

  assert(TCHWEntChi.TMed >= 1.0 and TCHWEntChi.TMed <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWEntChi.TMed <= 1e4, has value: " + String(TCHWEntChi.TMed, "g"));
*/
void logic2_raw_eqFunction_10394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10394};
  modelica_boolean tmp1168;
  modelica_boolean tmp1169;
  static const MMC_DEFSTRINGLIT(tmp1170,81,"Variable violating min/max constraint: 1.0 <= TCHWEntChi.TMed <= 1e4, has value: ");
  modelica_string tmp1171;
  modelica_metatype tmpMeta1172;
  static int tmp1173 = 0;
  if(!tmp1173)
  {
    tmp1168 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* TCHWEntChi.TMed variable */),1.0);
    tmp1169 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* TCHWEntChi.TMed variable */),1e4);
    if(!(tmp1168 && tmp1169))
    {
      tmp1171 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* TCHWEntChi.TMed variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1172 = stringAppend(MMC_REFSTRINGLIT(tmp1170),tmp1171);
      {
        const char* assert_cond = "(TCHWEntChi.TMed >= 1.0 and TCHWEntChi.TMed <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1172));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1172));
        }
      }
      tmp1173 = 1;
    }
  }
  threadData->lastEquationSolved = 10394;
}

/*
equation index: 10395
type: ALGORITHM

  assert(TCHWEntChi.T_a_inflow >= 1.0 and TCHWEntChi.T_a_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWEntChi.T_a_inflow <= 1e4, has value: " + String(TCHWEntChi.T_a_inflow, "g"));
*/
void logic2_raw_eqFunction_10395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10395};
  modelica_boolean tmp1174;
  modelica_boolean tmp1175;
  static const MMC_DEFSTRINGLIT(tmp1176,87,"Variable violating min/max constraint: 1.0 <= TCHWEntChi.T_a_inflow <= 1e4, has value: ");
  modelica_string tmp1177;
  modelica_metatype tmpMeta1178;
  static int tmp1179 = 0;
  if(!tmp1179)
  {
    tmp1174 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* TCHWEntChi.T_a_inflow variable */),1.0);
    tmp1175 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* TCHWEntChi.T_a_inflow variable */),1e4);
    if(!(tmp1174 && tmp1175))
    {
      tmp1177 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* TCHWEntChi.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1178 = stringAppend(MMC_REFSTRINGLIT(tmp1176),tmp1177);
      {
        const char* assert_cond = "(TCHWEntChi.T_a_inflow >= 1.0 and TCHWEntChi.T_a_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1178));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1178));
        }
      }
      tmp1179 = 1;
    }
  }
  threadData->lastEquationSolved = 10395;
}

/*
equation index: 10396
type: ALGORITHM

  assert(TCHWEntChi.T_b_inflow >= 1.0 and TCHWEntChi.T_b_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWEntChi.T_b_inflow <= 1e4, has value: " + String(TCHWEntChi.T_b_inflow, "g"));
*/
void logic2_raw_eqFunction_10396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10396};
  modelica_boolean tmp1180;
  modelica_boolean tmp1181;
  static const MMC_DEFSTRINGLIT(tmp1182,87,"Variable violating min/max constraint: 1.0 <= TCHWEntChi.T_b_inflow <= 1e4, has value: ");
  modelica_string tmp1183;
  modelica_metatype tmpMeta1184;
  static int tmp1185 = 0;
  if(!tmp1185)
  {
    tmp1180 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.T_b_inflow variable */),1.0);
    tmp1181 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.T_b_inflow variable */),1e4);
    if(!(tmp1180 && tmp1181))
    {
      tmp1183 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.T_b_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1184 = stringAppend(MMC_REFSTRINGLIT(tmp1182),tmp1183);
      {
        const char* assert_cond = "(TCHWEntChi.T_b_inflow >= 1.0 and TCHWEntChi.T_b_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1184));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1184));
        }
      }
      tmp1185 = 1;
    }
  }
  threadData->lastEquationSolved = 10396;
}

/*
equation index: 10397
type: ALGORITHM

  assert(TCWLeaTow.port_a.h_outflow >= -1e10 and TCWLeaTow.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= TCWLeaTow.port_a.h_outflow <= 1e10, has value: " + String(TCWLeaTow.port_a.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10397};
  modelica_boolean tmp1186;
  modelica_boolean tmp1187;
  static const MMC_DEFSTRINGLIT(tmp1188,95,"Variable violating min/max constraint: -1e10 <= TCWLeaTow.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp1189;
  modelica_metatype tmpMeta1190;
  static int tmp1191 = 0;
  if(!tmp1191)
  {
    tmp1186 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */),-1e10);
    tmp1187 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */),1e10);
    if(!(tmp1186 && tmp1187))
    {
      tmp1189 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1190 = stringAppend(MMC_REFSTRINGLIT(tmp1188),tmp1189);
      {
        const char* assert_cond = "(TCWLeaTow.port_a.h_outflow >= -1e10 and TCWLeaTow.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1190));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1190));
        }
      }
      tmp1191 = 1;
    }
  }
  threadData->lastEquationSolved = 10397;
}

/*
equation index: 10398
type: ALGORITHM

  assert(TCWLeaTow.port_b.h_outflow >= -1e10 and TCWLeaTow.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= TCWLeaTow.port_b.h_outflow <= 1e10, has value: " + String(TCWLeaTow.port_b.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10398};
  modelica_boolean tmp1192;
  modelica_boolean tmp1193;
  static const MMC_DEFSTRINGLIT(tmp1194,95,"Variable violating min/max constraint: -1e10 <= TCWLeaTow.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp1195;
  modelica_metatype tmpMeta1196;
  static int tmp1197 = 0;
  if(!tmp1197)
  {
    tmp1192 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */),-1e10);
    tmp1193 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */),1e10);
    if(!(tmp1192 && tmp1193))
    {
      tmp1195 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1196 = stringAppend(MMC_REFSTRINGLIT(tmp1194),tmp1195);
      {
        const char* assert_cond = "(TCWLeaTow.port_b.h_outflow >= -1e10 and TCWLeaTow.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1196));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1196));
        }
      }
      tmp1197 = 1;
    }
  }
  threadData->lastEquationSolved = 10398;
}

/*
equation index: 10399
type: ALGORITHM

  assert(TCWLeaTow.T >= 0.0, "Variable violating min constraint: 0.0 <= TCWLeaTow.T, has value: " + String(TCWLeaTow.T, "g"));
*/
void logic2_raw_eqFunction_10399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10399};
  modelica_boolean tmp1198;
  static const MMC_DEFSTRINGLIT(tmp1199,66,"Variable violating min constraint: 0.0 <= TCWLeaTow.T, has value: ");
  modelica_string tmp1200;
  modelica_metatype tmpMeta1201;
  static int tmp1202 = 0;
  if(!tmp1202)
  {
    tmp1198 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* TCWLeaTow.T STATE(1) */),0.0);
    if(!tmp1198)
    {
      tmp1200 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* TCWLeaTow.T STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1201 = stringAppend(MMC_REFSTRINGLIT(tmp1199),tmp1200);
      {
        const char* assert_cond = "(TCWLeaTow.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1201));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1201));
        }
      }
      tmp1202 = 1;
    }
  }
  threadData->lastEquationSolved = 10399;
}

/*
equation index: 10400
type: ALGORITHM

  assert(TCWLeaTow.TMed >= 1.0 and TCWLeaTow.TMed <= 1e4, "Variable violating min/max constraint: 1.0 <= TCWLeaTow.TMed <= 1e4, has value: " + String(TCWLeaTow.TMed, "g"));
*/
void logic2_raw_eqFunction_10400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10400};
  modelica_boolean tmp1203;
  modelica_boolean tmp1204;
  static const MMC_DEFSTRINGLIT(tmp1205,80,"Variable violating min/max constraint: 1.0 <= TCWLeaTow.TMed <= 1e4, has value: ");
  modelica_string tmp1206;
  modelica_metatype tmpMeta1207;
  static int tmp1208 = 0;
  if(!tmp1208)
  {
    tmp1203 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* TCWLeaTow.TMed variable */),1.0);
    tmp1204 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* TCWLeaTow.TMed variable */),1e4);
    if(!(tmp1203 && tmp1204))
    {
      tmp1206 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* TCWLeaTow.TMed variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1207 = stringAppend(MMC_REFSTRINGLIT(tmp1205),tmp1206);
      {
        const char* assert_cond = "(TCWLeaTow.TMed >= 1.0 and TCWLeaTow.TMed <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1207));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1207));
        }
      }
      tmp1208 = 1;
    }
  }
  threadData->lastEquationSolved = 10400;
}

/*
equation index: 10401
type: ALGORITHM

  assert(TCWLeaTow.T_a_inflow >= 1.0 and TCWLeaTow.T_a_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCWLeaTow.T_a_inflow <= 1e4, has value: " + String(TCWLeaTow.T_a_inflow, "g"));
*/
void logic2_raw_eqFunction_10401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10401};
  modelica_boolean tmp1209;
  modelica_boolean tmp1210;
  static const MMC_DEFSTRINGLIT(tmp1211,86,"Variable violating min/max constraint: 1.0 <= TCWLeaTow.T_a_inflow <= 1e4, has value: ");
  modelica_string tmp1212;
  modelica_metatype tmpMeta1213;
  static int tmp1214 = 0;
  if(!tmp1214)
  {
    tmp1209 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWLeaTow.T_a_inflow variable */),1.0);
    tmp1210 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWLeaTow.T_a_inflow variable */),1e4);
    if(!(tmp1209 && tmp1210))
    {
      tmp1212 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWLeaTow.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1213 = stringAppend(MMC_REFSTRINGLIT(tmp1211),tmp1212);
      {
        const char* assert_cond = "(TCWLeaTow.T_a_inflow >= 1.0 and TCWLeaTow.T_a_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1213));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1213));
        }
      }
      tmp1214 = 1;
    }
  }
  threadData->lastEquationSolved = 10401;
}

/*
equation index: 10402
type: ALGORITHM

  assert(TCWLeaTow.T_b_inflow >= 1.0 and TCWLeaTow.T_b_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCWLeaTow.T_b_inflow <= 1e4, has value: " + String(TCWLeaTow.T_b_inflow, "g"));
*/
void logic2_raw_eqFunction_10402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10402};
  modelica_boolean tmp1215;
  modelica_boolean tmp1216;
  static const MMC_DEFSTRINGLIT(tmp1217,86,"Variable violating min/max constraint: 1.0 <= TCWLeaTow.T_b_inflow <= 1e4, has value: ");
  modelica_string tmp1218;
  modelica_metatype tmpMeta1219;
  static int tmp1220 = 0;
  if(!tmp1220)
  {
    tmp1215 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* TCWLeaTow.T_b_inflow variable */),1.0);
    tmp1216 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* TCWLeaTow.T_b_inflow variable */),1e4);
    if(!(tmp1215 && tmp1216))
    {
      tmp1218 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* TCWLeaTow.T_b_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1219 = stringAppend(MMC_REFSTRINGLIT(tmp1217),tmp1218);
      {
        const char* assert_cond = "(TCWLeaTow.T_b_inflow >= 1.0 and TCWLeaTow.T_b_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1219));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1219));
        }
      }
      tmp1220 = 1;
    }
  }
  threadData->lastEquationSolved = 10402;
}

/*
equation index: 10403
type: ALGORITHM

  assert(TCWEntTow.port_a.p >= 0.0 and TCWEntTow.port_a.p <= 1e8, "Variable violating min/max constraint: 0.0 <= TCWEntTow.port_a.p <= 1e8, has value: " + String(TCWEntTow.port_a.p, "g"));
*/
void logic2_raw_eqFunction_10403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10403};
  modelica_boolean tmp1221;
  modelica_boolean tmp1222;
  static const MMC_DEFSTRINGLIT(tmp1223,84,"Variable violating min/max constraint: 0.0 <= TCWEntTow.port_a.p <= 1e8, has value: ");
  modelica_string tmp1224;
  modelica_metatype tmpMeta1225;
  static int tmp1226 = 0;
  if(!tmp1226)
  {
    tmp1221 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* TCWEntTow.port_a.p variable */),0.0);
    tmp1222 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* TCWEntTow.port_a.p variable */),1e8);
    if(!(tmp1221 && tmp1222))
    {
      tmp1224 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* TCWEntTow.port_a.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1225 = stringAppend(MMC_REFSTRINGLIT(tmp1223),tmp1224);
      {
        const char* assert_cond = "(TCWEntTow.port_a.p >= 0.0 and TCWEntTow.port_a.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1225));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1225));
        }
      }
      tmp1226 = 1;
    }
  }
  threadData->lastEquationSolved = 10403;
}

/*
equation index: 10404
type: ALGORITHM

  assert(TCWEntTow.port_a.h_outflow >= -1e10 and TCWEntTow.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= TCWEntTow.port_a.h_outflow <= 1e10, has value: " + String(TCWEntTow.port_a.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10404};
  modelica_boolean tmp1227;
  modelica_boolean tmp1228;
  static const MMC_DEFSTRINGLIT(tmp1229,95,"Variable violating min/max constraint: -1e10 <= TCWEntTow.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp1230;
  modelica_metatype tmpMeta1231;
  static int tmp1232 = 0;
  if(!tmp1232)
  {
    tmp1227 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */),-1e10);
    tmp1228 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */),1e10);
    if(!(tmp1227 && tmp1228))
    {
      tmp1230 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1231 = stringAppend(MMC_REFSTRINGLIT(tmp1229),tmp1230);
      {
        const char* assert_cond = "(TCWEntTow.port_a.h_outflow >= -1e10 and TCWEntTow.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1231));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1231));
        }
      }
      tmp1232 = 1;
    }
  }
  threadData->lastEquationSolved = 10404;
}

/*
equation index: 10405
type: ALGORITHM

  assert(TCWEntTow.port_b.h_outflow >= -1e10 and TCWEntTow.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= TCWEntTow.port_b.h_outflow <= 1e10, has value: " + String(TCWEntTow.port_b.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10405};
  modelica_boolean tmp1233;
  modelica_boolean tmp1234;
  static const MMC_DEFSTRINGLIT(tmp1235,95,"Variable violating min/max constraint: -1e10 <= TCWEntTow.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp1236;
  modelica_metatype tmpMeta1237;
  static int tmp1238 = 0;
  if(!tmp1238)
  {
    tmp1233 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */),-1e10);
    tmp1234 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */),1e10);
    if(!(tmp1233 && tmp1234))
    {
      tmp1236 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1237 = stringAppend(MMC_REFSTRINGLIT(tmp1235),tmp1236);
      {
        const char* assert_cond = "(TCWEntTow.port_b.h_outflow >= -1e10 and TCWEntTow.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1237));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1237));
        }
      }
      tmp1238 = 1;
    }
  }
  threadData->lastEquationSolved = 10405;
}

/*
equation index: 10406
type: ALGORITHM

  assert(TCWEntTow.T >= 0.0, "Variable violating min constraint: 0.0 <= TCWEntTow.T, has value: " + String(TCWEntTow.T, "g"));
*/
void logic2_raw_eqFunction_10406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10406};
  modelica_boolean tmp1239;
  static const MMC_DEFSTRINGLIT(tmp1240,66,"Variable violating min constraint: 0.0 <= TCWEntTow.T, has value: ");
  modelica_string tmp1241;
  modelica_metatype tmpMeta1242;
  static int tmp1243 = 0;
  if(!tmp1243)
  {
    tmp1239 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* TCWEntTow.T STATE(1) */),0.0);
    if(!tmp1239)
    {
      tmp1241 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* TCWEntTow.T STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1242 = stringAppend(MMC_REFSTRINGLIT(tmp1240),tmp1241);
      {
        const char* assert_cond = "(TCWEntTow.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1242));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1242));
        }
      }
      tmp1243 = 1;
    }
  }
  threadData->lastEquationSolved = 10406;
}

/*
equation index: 10407
type: ALGORITHM

  assert(TCWEntTow.TMed >= 1.0 and TCWEntTow.TMed <= 1e4, "Variable violating min/max constraint: 1.0 <= TCWEntTow.TMed <= 1e4, has value: " + String(TCWEntTow.TMed, "g"));
*/
void logic2_raw_eqFunction_10407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10407};
  modelica_boolean tmp1244;
  modelica_boolean tmp1245;
  static const MMC_DEFSTRINGLIT(tmp1246,80,"Variable violating min/max constraint: 1.0 <= TCWEntTow.TMed <= 1e4, has value: ");
  modelica_string tmp1247;
  modelica_metatype tmpMeta1248;
  static int tmp1249 = 0;
  if(!tmp1249)
  {
    tmp1244 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* TCWEntTow.TMed variable */),1.0);
    tmp1245 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* TCWEntTow.TMed variable */),1e4);
    if(!(tmp1244 && tmp1245))
    {
      tmp1247 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* TCWEntTow.TMed variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1248 = stringAppend(MMC_REFSTRINGLIT(tmp1246),tmp1247);
      {
        const char* assert_cond = "(TCWEntTow.TMed >= 1.0 and TCWEntTow.TMed <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1248));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1248));
        }
      }
      tmp1249 = 1;
    }
  }
  threadData->lastEquationSolved = 10407;
}

/*
equation index: 10408
type: ALGORITHM

  assert(TCWEntTow.T_a_inflow >= 1.0 and TCWEntTow.T_a_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCWEntTow.T_a_inflow <= 1e4, has value: " + String(TCWEntTow.T_a_inflow, "g"));
*/
void logic2_raw_eqFunction_10408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10408};
  modelica_boolean tmp1250;
  modelica_boolean tmp1251;
  static const MMC_DEFSTRINGLIT(tmp1252,86,"Variable violating min/max constraint: 1.0 <= TCWEntTow.T_a_inflow <= 1e4, has value: ");
  modelica_string tmp1253;
  modelica_metatype tmpMeta1254;
  static int tmp1255 = 0;
  if(!tmp1255)
  {
    tmp1250 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* TCWEntTow.T_a_inflow variable */),1.0);
    tmp1251 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* TCWEntTow.T_a_inflow variable */),1e4);
    if(!(tmp1250 && tmp1251))
    {
      tmp1253 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* TCWEntTow.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1254 = stringAppend(MMC_REFSTRINGLIT(tmp1252),tmp1253);
      {
        const char* assert_cond = "(TCWEntTow.T_a_inflow >= 1.0 and TCWEntTow.T_a_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1254));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1254));
        }
      }
      tmp1255 = 1;
    }
  }
  threadData->lastEquationSolved = 10408;
}

/*
equation index: 10409
type: ALGORITHM

  assert(TCWEntTow.T_b_inflow >= 1.0 and TCWEntTow.T_b_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCWEntTow.T_b_inflow <= 1e4, has value: " + String(TCWEntTow.T_b_inflow, "g"));
*/
void logic2_raw_eqFunction_10409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10409};
  modelica_boolean tmp1256;
  modelica_boolean tmp1257;
  static const MMC_DEFSTRINGLIT(tmp1258,86,"Variable violating min/max constraint: 1.0 <= TCWEntTow.T_b_inflow <= 1e4, has value: ");
  modelica_string tmp1259;
  modelica_metatype tmpMeta1260;
  static int tmp1261 = 0;
  if(!tmp1261)
  {
    tmp1256 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWEntTow.T_b_inflow variable */),1.0);
    tmp1257 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWEntTow.T_b_inflow variable */),1e4);
    if(!(tmp1256 && tmp1257))
    {
      tmp1259 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWEntTow.T_b_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1260 = stringAppend(MMC_REFSTRINGLIT(tmp1258),tmp1259);
      {
        const char* assert_cond = "(TCWEntTow.T_b_inflow >= 1.0 and TCWEntTow.T_b_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1260));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1260));
        }
      }
      tmp1261 = 1;
    }
  }
  threadData->lastEquationSolved = 10409;
}

/*
equation index: 10410
type: ALGORITHM

  assert(valByp.port_a.h_outflow >= -1e10 and valByp.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= valByp.port_a.h_outflow <= 1e10, has value: " + String(valByp.port_a.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10410};
  modelica_boolean tmp1262;
  modelica_boolean tmp1263;
  static const MMC_DEFSTRINGLIT(tmp1264,92,"Variable violating min/max constraint: -1e10 <= valByp.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp1265;
  modelica_metatype tmpMeta1266;
  static int tmp1267 = 0;
  if(!tmp1267)
  {
    tmp1262 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* valByp.port_a.h_outflow variable */),-1e10);
    tmp1263 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* valByp.port_a.h_outflow variable */),1e10);
    if(!(tmp1262 && tmp1263))
    {
      tmp1265 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* valByp.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1266 = stringAppend(MMC_REFSTRINGLIT(tmp1264),tmp1265);
      {
        const char* assert_cond = "(valByp.port_a.h_outflow >= -1e10 and valByp.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1266));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1266));
        }
      }
      tmp1267 = 1;
    }
  }
  threadData->lastEquationSolved = 10410;
}

/*
equation index: 10411
type: ALGORITHM

  assert(valByp.port_b.h_outflow >= -1e10 and valByp.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= valByp.port_b.h_outflow <= 1e10, has value: " + String(valByp.port_b.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10411};
  modelica_boolean tmp1268;
  modelica_boolean tmp1269;
  static const MMC_DEFSTRINGLIT(tmp1270,92,"Variable violating min/max constraint: -1e10 <= valByp.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp1271;
  modelica_metatype tmpMeta1272;
  static int tmp1273 = 0;
  if(!tmp1273)
  {
    tmp1268 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* valByp.port_b.h_outflow variable */),-1e10);
    tmp1269 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* valByp.port_b.h_outflow variable */),1e10);
    if(!(tmp1268 && tmp1269))
    {
      tmp1271 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* valByp.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1272 = stringAppend(MMC_REFSTRINGLIT(tmp1270),tmp1271);
      {
        const char* assert_cond = "(valByp.port_b.h_outflow >= -1e10 and valByp.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1272));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1272));
        }
      }
      tmp1273 = 1;
    }
  }
  threadData->lastEquationSolved = 10411;
}

/*
equation index: 10412
type: ALGORITHM

  assert(valByp.m_flow >= -1e60 and valByp.m_flow <= 1e5, "Variable violating min/max constraint: -1e60 <= valByp.m_flow <= 1e5, has value: " + String(valByp.m_flow, "g"));
*/
void logic2_raw_eqFunction_10412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10412};
  modelica_boolean tmp1274;
  modelica_boolean tmp1275;
  static const MMC_DEFSTRINGLIT(tmp1276,81,"Variable violating min/max constraint: -1e60 <= valByp.m_flow <= 1e5, has value: ");
  modelica_string tmp1277;
  modelica_metatype tmpMeta1278;
  static int tmp1279 = 0;
  if(!tmp1279)
  {
    tmp1274 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* valByp.m_flow variable */),-1e60);
    tmp1275 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* valByp.m_flow variable */),1e5);
    if(!(tmp1274 && tmp1275))
    {
      tmp1277 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* valByp.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1278 = stringAppend(MMC_REFSTRINGLIT(tmp1276),tmp1277);
      {
        const char* assert_cond = "(valByp.m_flow >= -1e60 and valByp.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1278));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1278));
        }
      }
      tmp1279 = 1;
    }
  }
  threadData->lastEquationSolved = 10412;
}

/*
equation index: 10413
type: ALGORITHM

  assert(valByp.kVal >= 2.2250738585072014e-308, "Variable violating min constraint: 2.2250738585072014e-308 <= valByp.kVal, has value: " + String(valByp.kVal, "g"));
*/
void logic2_raw_eqFunction_10413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10413};
  modelica_boolean tmp1280;
  static const MMC_DEFSTRINGLIT(tmp1281,86,"Variable violating min constraint: 2.2250738585072014e-308 <= valByp.kVal, has value: ");
  modelica_string tmp1282;
  modelica_metatype tmpMeta1283;
  static int tmp1284 = 0;
  if(!tmp1284)
  {
    tmp1280 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1236]] /* valByp.kVal variable */),2.2250738585072014e-308);
    if(!tmp1280)
    {
      tmp1282 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1236]] /* valByp.kVal variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1283 = stringAppend(MMC_REFSTRINGLIT(tmp1281),tmp1282);
      {
        const char* assert_cond = "(valByp.kVal >= 2.2250738585072014e-308)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",24,3,25,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1283));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",24,3,25,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1283));
        }
      }
      tmp1284 = 1;
    }
  }
  threadData->lastEquationSolved = 10413;
}

/*
equation index: 10414
type: ALGORITHM

  assert(valByp.k >= 2.2250738585072014e-308, "Variable violating min constraint: 2.2250738585072014e-308 <= valByp.k, has value: " + String(valByp.k, "g"));
*/
void logic2_raw_eqFunction_10414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10414};
  modelica_boolean tmp1285;
  static const MMC_DEFSTRINGLIT(tmp1286,83,"Variable violating min constraint: 2.2250738585072014e-308 <= valByp.k, has value: ");
  modelica_string tmp1287;
  modelica_metatype tmpMeta1288;
  static int tmp1289 = 0;
  if(!tmp1289)
  {
    tmp1285 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* valByp.k variable */),2.2250738585072014e-308);
    if(!tmp1285)
    {
      tmp1287 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* valByp.k variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1288 = stringAppend(MMC_REFSTRINGLIT(tmp1286),tmp1287);
      {
        const char* assert_cond = "(valByp.k >= 2.2250738585072014e-308)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",26,3,27,95,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1288));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",26,3,27,95,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1288));
        }
      }
      tmp1289 = 1;
    }
  }
  threadData->lastEquationSolved = 10414;
}

/*
equation index: 10415
type: ALGORITHM

  assert(TCHWLeaCoi.port_a.h_outflow >= -1e10 and TCHWLeaCoi.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= TCHWLeaCoi.port_a.h_outflow <= 1e10, has value: " + String(TCHWLeaCoi.port_a.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10415};
  modelica_boolean tmp1290;
  modelica_boolean tmp1291;
  static const MMC_DEFSTRINGLIT(tmp1292,96,"Variable violating min/max constraint: -1e10 <= TCHWLeaCoi.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp1293;
  modelica_metatype tmpMeta1294;
  static int tmp1295 = 0;
  if(!tmp1295)
  {
    tmp1290 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* TCHWLeaCoi.port_a.h_outflow variable */),-1e10);
    tmp1291 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* TCHWLeaCoi.port_a.h_outflow variable */),1e10);
    if(!(tmp1290 && tmp1291))
    {
      tmp1293 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* TCHWLeaCoi.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1294 = stringAppend(MMC_REFSTRINGLIT(tmp1292),tmp1293);
      {
        const char* assert_cond = "(TCHWLeaCoi.port_a.h_outflow >= -1e10 and TCHWLeaCoi.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1294));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1294));
        }
      }
      tmp1295 = 1;
    }
  }
  threadData->lastEquationSolved = 10415;
}

/*
equation index: 10416
type: ALGORITHM

  assert(TCHWLeaCoi.T >= 0.0, "Variable violating min constraint: 0.0 <= TCHWLeaCoi.T, has value: " + String(TCHWLeaCoi.T, "g"));
*/
void logic2_raw_eqFunction_10416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10416};
  modelica_boolean tmp1296;
  static const MMC_DEFSTRINGLIT(tmp1297,67,"Variable violating min constraint: 0.0 <= TCHWLeaCoi.T, has value: ");
  modelica_string tmp1298;
  modelica_metatype tmpMeta1299;
  static int tmp1300 = 0;
  if(!tmp1300)
  {
    tmp1296 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* TCHWLeaCoi.T STATE(1) */),0.0);
    if(!tmp1296)
    {
      tmp1298 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* TCHWLeaCoi.T STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1299 = stringAppend(MMC_REFSTRINGLIT(tmp1297),tmp1298);
      {
        const char* assert_cond = "(TCHWLeaCoi.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1299));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1299));
        }
      }
      tmp1300 = 1;
    }
  }
  threadData->lastEquationSolved = 10416;
}

/*
equation index: 10417
type: ALGORITHM

  assert(TCHWLeaCoi.TMed >= 1.0 and TCHWLeaCoi.TMed <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWLeaCoi.TMed <= 1e4, has value: " + String(TCHWLeaCoi.TMed, "g"));
*/
void logic2_raw_eqFunction_10417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10417};
  modelica_boolean tmp1301;
  modelica_boolean tmp1302;
  static const MMC_DEFSTRINGLIT(tmp1303,81,"Variable violating min/max constraint: 1.0 <= TCHWLeaCoi.TMed <= 1e4, has value: ");
  modelica_string tmp1304;
  modelica_metatype tmpMeta1305;
  static int tmp1306 = 0;
  if(!tmp1306)
  {
    tmp1301 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* TCHWLeaCoi.TMed variable */),1.0);
    tmp1302 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* TCHWLeaCoi.TMed variable */),1e4);
    if(!(tmp1301 && tmp1302))
    {
      tmp1304 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* TCHWLeaCoi.TMed variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1305 = stringAppend(MMC_REFSTRINGLIT(tmp1303),tmp1304);
      {
        const char* assert_cond = "(TCHWLeaCoi.TMed >= 1.0 and TCHWLeaCoi.TMed <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1305));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1305));
        }
      }
      tmp1306 = 1;
    }
  }
  threadData->lastEquationSolved = 10417;
}

/*
equation index: 10418
type: ALGORITHM

  assert(TCHWLeaCoi.T_a_inflow >= 1.0 and TCHWLeaCoi.T_a_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWLeaCoi.T_a_inflow <= 1e4, has value: " + String(TCHWLeaCoi.T_a_inflow, "g"));
*/
void logic2_raw_eqFunction_10418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10418};
  modelica_boolean tmp1307;
  modelica_boolean tmp1308;
  static const MMC_DEFSTRINGLIT(tmp1309,87,"Variable violating min/max constraint: 1.0 <= TCHWLeaCoi.T_a_inflow <= 1e4, has value: ");
  modelica_string tmp1310;
  modelica_metatype tmpMeta1311;
  static int tmp1312 = 0;
  if(!tmp1312)
  {
    tmp1307 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* TCHWLeaCoi.T_a_inflow variable */),1.0);
    tmp1308 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* TCHWLeaCoi.T_a_inflow variable */),1e4);
    if(!(tmp1307 && tmp1308))
    {
      tmp1310 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* TCHWLeaCoi.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1311 = stringAppend(MMC_REFSTRINGLIT(tmp1309),tmp1310);
      {
        const char* assert_cond = "(TCHWLeaCoi.T_a_inflow >= 1.0 and TCHWLeaCoi.T_a_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1311));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1311));
        }
      }
      tmp1312 = 1;
    }
  }
  threadData->lastEquationSolved = 10418;
}

/*
equation index: 10419
type: ALGORITHM

  assert(TCHWLeaCoi.T_b_inflow >= 1.0 and TCHWLeaCoi.T_b_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWLeaCoi.T_b_inflow <= 1e4, has value: " + String(TCHWLeaCoi.T_b_inflow, "g"));
*/
void logic2_raw_eqFunction_10419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10419};
  modelica_boolean tmp1313;
  modelica_boolean tmp1314;
  static const MMC_DEFSTRINGLIT(tmp1315,87,"Variable violating min/max constraint: 1.0 <= TCHWLeaCoi.T_b_inflow <= 1e4, has value: ");
  modelica_string tmp1316;
  modelica_metatype tmpMeta1317;
  static int tmp1318 = 0;
  if(!tmp1318)
  {
    tmp1313 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* TCHWLeaCoi.T_b_inflow variable */),1.0);
    tmp1314 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* TCHWLeaCoi.T_b_inflow variable */),1e4);
    if(!(tmp1313 && tmp1314))
    {
      tmp1316 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* TCHWLeaCoi.T_b_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1317 = stringAppend(MMC_REFSTRINGLIT(tmp1315),tmp1316);
      {
        const char* assert_cond = "(TCHWLeaCoi.T_b_inflow >= 1.0 and TCHWLeaCoi.T_b_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1317));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1317));
        }
      }
      tmp1318 = 1;
    }
  }
  threadData->lastEquationSolved = 10419;
}

/*
equation index: 10420
type: ALGORITHM

  assert(weaData.TBlaSkyCom.TDewPoiK >= 0.0, "Variable violating min constraint: 0.0 <= weaData.TBlaSkyCom.TDewPoiK, has value: " + String(weaData.TBlaSkyCom.TDewPoiK, "g"));
*/
void logic2_raw_eqFunction_10420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10420};
  modelica_boolean tmp1319;
  static const MMC_DEFSTRINGLIT(tmp1320,82,"Variable violating min constraint: 0.0 <= weaData.TBlaSkyCom.TDewPoiK, has value: ");
  modelica_string tmp1321;
  modelica_metatype tmpMeta1322;
  static int tmp1323 = 0;
  if(!tmp1323)
  {
    tmp1319 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1288]] /* weaData.TBlaSkyCom.TDewPoiK variable */),0.0);
    if(!tmp1319)
    {
      tmp1321 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1288]] /* weaData.TBlaSkyCom.TDewPoiK variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1322 = stringAppend(MMC_REFSTRINGLIT(tmp1320),tmp1321);
      {
        const char* assert_cond = "(weaData.TBlaSkyCom.TDewPoiK >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/SkyTemperature/BlackBody.mo",34,3,34,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1322));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/SkyTemperature/BlackBody.mo",34,3,34,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1322));
        }
      }
      tmp1323 = 1;
    }
  }
  threadData->lastEquationSolved = 10420;
}

/*
equation index: 10421
type: ALGORITHM

  assert(weaData.TBlaSkyCom.nOpa10 >= 0.0 and weaData.TBlaSkyCom.nOpa10 <= 10.0, "Variable violating min/max constraint: 0.0 <= weaData.TBlaSkyCom.nOpa10 <= 10.0, has value: " + String(weaData.TBlaSkyCom.nOpa10, "g"));
*/
void logic2_raw_eqFunction_10421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10421};
  modelica_boolean tmp1324;
  modelica_boolean tmp1325;
  static const MMC_DEFSTRINGLIT(tmp1326,92,"Variable violating min/max constraint: 0.0 <= weaData.TBlaSkyCom.nOpa10 <= 10.0, has value: ");
  modelica_string tmp1327;
  modelica_metatype tmpMeta1328;
  static int tmp1329 = 0;
  if(!tmp1329)
  {
    tmp1324 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1290]] /* weaData.TBlaSkyCom.nOpa10 variable */),0.0);
    tmp1325 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1290]] /* weaData.TBlaSkyCom.nOpa10 variable */),10.0);
    if(!(tmp1324 && tmp1325))
    {
      tmp1327 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1290]] /* weaData.TBlaSkyCom.nOpa10 variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1328 = stringAppend(MMC_REFSTRINGLIT(tmp1326),tmp1327);
      {
        const char* assert_cond = "(weaData.TBlaSkyCom.nOpa10 >= 0.0 and weaData.TBlaSkyCom.nOpa10 <= 10.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/SkyTemperature/BlackBody.mo",36,3,36,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1328));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/SkyTemperature/BlackBody.mo",36,3,36,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1328));
        }
      }
      tmp1329 = 1;
    }
  }
  threadData->lastEquationSolved = 10421;
}

/*
equation index: 10422
type: ALGORITHM

  assert(weaData.totSkyCov_in_internal >= 0.0 and weaData.totSkyCov_in_internal <= 1.0, "Variable violating min/max constraint: 0.0 <= weaData.totSkyCov_in_internal <= 1.0, has value: " + String(weaData.totSkyCov_in_internal, "g"));
*/
void logic2_raw_eqFunction_10422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10422};
  modelica_boolean tmp1330;
  modelica_boolean tmp1331;
  static const MMC_DEFSTRINGLIT(tmp1332,95,"Variable violating min/max constraint: 0.0 <= weaData.totSkyCov_in_internal <= 1.0, has value: ");
  modelica_string tmp1333;
  modelica_metatype tmpMeta1334;
  static int tmp1335 = 0;
  if(!tmp1335)
  {
    tmp1330 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.totSkyCov_in_internal variable */),0.0);
    tmp1331 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.totSkyCov_in_internal variable */),1.0);
    if(!(tmp1330 && tmp1331))
    {
      tmp1333 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.totSkyCov_in_internal variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1334 = stringAppend(MMC_REFSTRINGLIT(tmp1332),tmp1333);
      {
        const char* assert_cond = "(weaData.totSkyCov_in_internal >= 0.0 and weaData.totSkyCov_in_internal <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",320,3,323,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1334));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",320,3,323,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1334));
        }
      }
      tmp1335 = 1;
    }
  }
  threadData->lastEquationSolved = 10422;
}

/*
equation index: 10423
type: ALGORITHM

  assert(weaData.opaSkyCov_in_internal >= 0.0 and weaData.opaSkyCov_in_internal <= 1.0, "Variable violating min/max constraint: 0.0 <= weaData.opaSkyCov_in_internal <= 1.0, has value: " + String(weaData.opaSkyCov_in_internal, "g"));
*/
void logic2_raw_eqFunction_10423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10423};
  modelica_boolean tmp1336;
  modelica_boolean tmp1337;
  static const MMC_DEFSTRINGLIT(tmp1338,95,"Variable violating min/max constraint: 0.0 <= weaData.opaSkyCov_in_internal <= 1.0, has value: ");
  modelica_string tmp1339;
  modelica_metatype tmpMeta1340;
  static int tmp1341 = 0;
  if(!tmp1341)
  {
    tmp1336 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1322]] /* weaData.opaSkyCov_in_internal variable */),0.0);
    tmp1337 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1322]] /* weaData.opaSkyCov_in_internal variable */),1.0);
    if(!(tmp1336 && tmp1337))
    {
      tmp1339 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1322]] /* weaData.opaSkyCov_in_internal variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1340 = stringAppend(MMC_REFSTRINGLIT(tmp1338),tmp1339);
      {
        const char* assert_cond = "(weaData.opaSkyCov_in_internal >= 0.0 and weaData.opaSkyCov_in_internal <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",324,3,327,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1340));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",324,3,327,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1340));
        }
      }
      tmp1341 = 1;
    }
  }
  threadData->lastEquationSolved = 10423;
}

/*
equation index: 10424
type: ALGORITHM

  assert(weaData.relHum_in_internal >= 0.0 and weaData.relHum_in_internal <= 1.0, "Variable violating min/max constraint: 0.0 <= weaData.relHum_in_internal <= 1.0, has value: " + String(weaData.relHum_in_internal, "g"));
*/
void logic2_raw_eqFunction_10424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10424};
  modelica_boolean tmp1342;
  modelica_boolean tmp1343;
  static const MMC_DEFSTRINGLIT(tmp1344,92,"Variable violating min/max constraint: 0.0 <= weaData.relHum_in_internal <= 1.0, has value: ");
  modelica_string tmp1345;
  modelica_metatype tmpMeta1346;
  static int tmp1347 = 0;
  if(!tmp1347)
  {
    tmp1342 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1323]] /* weaData.relHum_in_internal variable */),0.0);
    tmp1343 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1323]] /* weaData.relHum_in_internal variable */),1.0);
    if(!(tmp1342 && tmp1343))
    {
      tmp1345 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1323]] /* weaData.relHum_in_internal variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1346 = stringAppend(MMC_REFSTRINGLIT(tmp1344),tmp1345);
      {
        const char* assert_cond = "(weaData.relHum_in_internal >= 0.0 and weaData.relHum_in_internal <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",340,3,343,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1346));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/ReaderTMY3.mo",340,3,343,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1346));
        }
      }
      tmp1347 = 1;
    }
  }
  threadData->lastEquationSolved = 10424;
}

/*
equation index: 10425
type: ALGORITHM

  assert(weaData.tWetBul_TDryBulXi.XiDryBul >= 0.0 and weaData.tWetBul_TDryBulXi.XiDryBul <= 1.0, "Variable violating min/max constraint: 0.0 <= weaData.tWetBul_TDryBulXi.XiDryBul <= 1.0, has value: " + String(weaData.tWetBul_TDryBulXi.XiDryBul, "g"));
*/
void logic2_raw_eqFunction_10425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10425};
  modelica_boolean tmp1348;
  modelica_boolean tmp1349;
  static const MMC_DEFSTRINGLIT(tmp1350,100,"Variable violating min/max constraint: 0.0 <= weaData.tWetBul_TDryBulXi.XiDryBul <= 1.0, has value: ");
  modelica_string tmp1351;
  modelica_metatype tmpMeta1352;
  static int tmp1353 = 0;
  if(!tmp1353)
  {
    tmp1348 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */),0.0);
    tmp1349 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */),1.0);
    if(!(tmp1348 && tmp1349))
    {
      tmp1351 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1352 = stringAppend(MMC_REFSTRINGLIT(tmp1350),tmp1351);
      {
        const char* assert_cond = "(weaData.tWetBul_TDryBulXi.XiDryBul >= 0.0 and weaData.tWetBul_TDryBulXi.XiDryBul <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",38,3,39,50,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1352));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",38,3,39,50,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1352));
        }
      }
      tmp1353 = 1;
    }
  }
  threadData->lastEquationSolved = 10425;
}

/*
equation index: 10426
type: ALGORITHM

  assert(weaData.tWetBul_TDryBulXi.XiSat >= 0.0 and weaData.tWetBul_TDryBulXi.XiSat <= 1.0, "Variable violating min/max constraint: 0.0 <= weaData.tWetBul_TDryBulXi.XiSat <= 1.0, has value: " + String(weaData.tWetBul_TDryBulXi.XiSat, "g"));
*/
void logic2_raw_eqFunction_10426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10426};
  modelica_boolean tmp1354;
  modelica_boolean tmp1355;
  static const MMC_DEFSTRINGLIT(tmp1356,97,"Variable violating min/max constraint: 0.0 <= weaData.tWetBul_TDryBulXi.XiSat <= 1.0, has value: ");
  modelica_string tmp1357;
  modelica_metatype tmpMeta1358;
  static int tmp1359 = 0;
  if(!tmp1359)
  {
    tmp1354 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),0.0);
    tmp1355 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),1.0);
    if(!(tmp1354 && tmp1355))
    {
      tmp1357 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* weaData.tWetBul_TDryBulXi.XiSat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1358 = stringAppend(MMC_REFSTRINGLIT(tmp1356),tmp1357);
      {
        const char* assert_cond = "(weaData.tWetBul_TDryBulXi.XiSat >= 0.0 and weaData.tWetBul_TDryBulXi.XiSat <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",40,3,40,80,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1358));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",40,3,40,80,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1358));
        }
      }
      tmp1359 = 1;
    }
  }
  threadData->lastEquationSolved = 10426;
}

/*
equation index: 10427
type: ALGORITHM

  assert(weaData.tWetBul_TDryBulXi.XiSatRefIn >= 0.0 and weaData.tWetBul_TDryBulXi.XiSatRefIn <= 1.0, "Variable violating min/max constraint: 0.0 <= weaData.tWetBul_TDryBulXi.XiSatRefIn <= 1.0, has value: " + String(weaData.tWetBul_TDryBulXi.XiSatRefIn, "g"));
*/
void logic2_raw_eqFunction_10427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10427};
  modelica_boolean tmp1360;
  modelica_boolean tmp1361;
  static const MMC_DEFSTRINGLIT(tmp1362,102,"Variable violating min/max constraint: 0.0 <= weaData.tWetBul_TDryBulXi.XiSatRefIn <= 1.0, has value: ");
  modelica_string tmp1363;
  modelica_metatype tmpMeta1364;
  static int tmp1365 = 0;
  if(!tmp1365)
  {
    tmp1360 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */),0.0);
    tmp1361 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */),1.0);
    if(!(tmp1360 && tmp1361))
    {
      tmp1363 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1364 = stringAppend(MMC_REFSTRINGLIT(tmp1362),tmp1363);
      {
        const char* assert_cond = "(weaData.tWetBul_TDryBulXi.XiSatRefIn >= 0.0 and weaData.tWetBul_TDryBulXi.XiSatRefIn <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",41,3,42,82,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1364));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Utilities/Psychrometrics/TWetBul_TDryBulPhi.mo",41,3,42,82,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1364));
        }
      }
      tmp1365 = 1;
    }
  }
  threadData->lastEquationSolved = 10427;
}

/*
equation index: 10428
type: ALGORITHM

  assert(vol.ports[2].h_outflow >= -1e10 and vol.ports[2].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= vol.ports[2].h_outflow <= 1e10, has value: " + String(vol.ports[2].h_outflow, "g"));
*/
void logic2_raw_eqFunction_10428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10428};
  modelica_boolean tmp1366;
  modelica_boolean tmp1367;
  static const MMC_DEFSTRINGLIT(tmp1368,91,"Variable violating min/max constraint: -1e10 <= vol.ports[2].h_outflow <= 1e10, has value: ");
  modelica_string tmp1369;
  modelica_metatype tmpMeta1370;
  static int tmp1371 = 0;
  if(!tmp1371)
  {
    tmp1366 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1261]] /* vol.ports[2].h_outflow variable */),-1e10);
    tmp1367 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1261]] /* vol.ports[2].h_outflow variable */),1e10);
    if(!(tmp1366 && tmp1367))
    {
      tmp1369 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1261]] /* vol.ports[2].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1370 = stringAppend(MMC_REFSTRINGLIT(tmp1368),tmp1369);
      {
        const char* assert_cond = "(vol.ports[2].h_outflow >= -1e10 and vol.ports[2].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1370));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1370));
        }
      }
      tmp1371 = 1;
    }
  }
  threadData->lastEquationSolved = 10428;
}

/*
equation index: 10429
type: ALGORITHM

  assert(vol.dynBal.medium.p >= 0.0 and vol.dynBal.medium.p <= 1e8, "Variable violating min/max constraint: 0.0 <= vol.dynBal.medium.p <= 1e8, has value: " + String(vol.dynBal.medium.p, "g"));
*/
void logic2_raw_eqFunction_10429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10429};
  modelica_boolean tmp1372;
  modelica_boolean tmp1373;
  static const MMC_DEFSTRINGLIT(tmp1374,85,"Variable violating min/max constraint: 0.0 <= vol.dynBal.medium.p <= 1e8, has value: ");
  modelica_string tmp1375;
  modelica_metatype tmpMeta1376;
  static int tmp1377 = 0;
  if(!tmp1377)
  {
    tmp1372 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1252]] /* vol.dynBal.medium.p variable */),0.0);
    tmp1373 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1252]] /* vol.dynBal.medium.p variable */),1e8);
    if(!(tmp1372 && tmp1373))
    {
      tmp1375 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1252]] /* vol.dynBal.medium.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1376 = stringAppend(MMC_REFSTRINGLIT(tmp1374),tmp1375);
      {
        const char* assert_cond = "(vol.dynBal.medium.p >= 0.0 and vol.dynBal.medium.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5015,7,5015,60,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1376));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5015,7,5015,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1376));
        }
      }
      tmp1377 = 1;
    }
  }
  threadData->lastEquationSolved = 10429;
}

/*
equation index: 10430
type: ALGORITHM

  assert(vol.dynBal.medium.Xi[1] >= 0.0 and vol.dynBal.medium.Xi[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= vol.dynBal.medium.Xi[1] <= 1.0, has value: " + String(vol.dynBal.medium.Xi[1], "g"));
*/
void logic2_raw_eqFunction_10430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10430};
  modelica_boolean tmp1378;
  modelica_boolean tmp1379;
  static const MMC_DEFSTRINGLIT(tmp1380,89,"Variable violating min/max constraint: 0.0 <= vol.dynBal.medium.Xi[1] <= 1.0, has value: ");
  modelica_string tmp1381;
  modelica_metatype tmpMeta1382;
  static int tmp1383 = 0;
  if(!tmp1383)
  {
    tmp1378 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1250]] /* vol.dynBal.medium.Xi[1] variable */),0.0);
    tmp1379 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1250]] /* vol.dynBal.medium.Xi[1] variable */),1.0);
    if(!(tmp1378 && tmp1379))
    {
      tmp1381 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1250]] /* vol.dynBal.medium.Xi[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1382 = stringAppend(MMC_REFSTRINGLIT(tmp1380),tmp1381);
      {
        const char* assert_cond = "(vol.dynBal.medium.Xi[1] >= 0.0 and vol.dynBal.medium.Xi[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5016,7,5017,50,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1382));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5016,7,5017,50,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1382));
        }
      }
      tmp1383 = 1;
    }
  }
  threadData->lastEquationSolved = 10430;
}

/*
equation index: 10431
type: ALGORITHM

  assert(vol.dynBal.medium.d >= 0.0 and vol.dynBal.medium.d <= 1e5, "Variable violating min/max constraint: 0.0 <= vol.dynBal.medium.d <= 1e5, has value: " + String(vol.dynBal.medium.d, "g"));
*/
void logic2_raw_eqFunction_10431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10431};
  modelica_boolean tmp1384;
  modelica_boolean tmp1385;
  static const MMC_DEFSTRINGLIT(tmp1386,85,"Variable violating min/max constraint: 0.0 <= vol.dynBal.medium.d <= 1e5, has value: ");
  modelica_string tmp1387;
  modelica_metatype tmpMeta1388;
  static int tmp1389 = 0;
  if(!tmp1389)
  {
    tmp1384 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1251]] /* vol.dynBal.medium.d variable */),0.0);
    tmp1385 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1251]] /* vol.dynBal.medium.d variable */),1e5);
    if(!(tmp1384 && tmp1385))
    {
      tmp1387 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1251]] /* vol.dynBal.medium.d variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1388 = stringAppend(MMC_REFSTRINGLIT(tmp1386),tmp1387);
      {
        const char* assert_cond = "(vol.dynBal.medium.d >= 0.0 and vol.dynBal.medium.d <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5019,7,5019,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1388));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5019,7,5019,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1388));
        }
      }
      tmp1389 = 1;
    }
  }
  threadData->lastEquationSolved = 10431;
}

/*
equation index: 10432
type: ALGORITHM

  assert(vol.dynBal.medium.T >= 1.0 and vol.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= vol.dynBal.medium.T <= 1e4, has value: " + String(vol.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10432};
  modelica_boolean tmp1390;
  modelica_boolean tmp1391;
  static const MMC_DEFSTRINGLIT(tmp1392,85,"Variable violating min/max constraint: 1.0 <= vol.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp1393;
  modelica_metatype tmpMeta1394;
  static int tmp1395 = 0;
  if(!tmp1395)
  {
    tmp1390 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* vol.dynBal.medium.T variable */),1.0);
    tmp1391 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* vol.dynBal.medium.T variable */),1e4);
    if(!(tmp1390 && tmp1391))
    {
      tmp1393 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* vol.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1394 = stringAppend(MMC_REFSTRINGLIT(tmp1392),tmp1393);
      {
        const char* assert_cond = "(vol.dynBal.medium.T >= 1.0 and vol.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5020,7,5020,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1394));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5020,7,5020,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1394));
        }
      }
      tmp1395 = 1;
    }
  }
  threadData->lastEquationSolved = 10432;
}

/*
equation index: 10433
type: ALGORITHM

  assert(vol.dynBal.medium.X[2] >= 0.0 and vol.dynBal.medium.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= vol.dynBal.medium.X[2] <= 1.0, has value: " + String(vol.dynBal.medium.X[2], "g"));
*/
void logic2_raw_eqFunction_10433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10433};
  modelica_boolean tmp1396;
  modelica_boolean tmp1397;
  static const MMC_DEFSTRINGLIT(tmp1398,88,"Variable violating min/max constraint: 0.0 <= vol.dynBal.medium.X[2] <= 1.0, has value: ");
  modelica_string tmp1399;
  modelica_metatype tmpMeta1400;
  static int tmp1401 = 0;
  if(!tmp1401)
  {
    tmp1396 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1249]] /* vol.dynBal.medium.X[2] variable */),0.0);
    tmp1397 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1249]] /* vol.dynBal.medium.X[2] variable */),1.0);
    if(!(tmp1396 && tmp1397))
    {
      tmp1399 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1249]] /* vol.dynBal.medium.X[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1400 = stringAppend(MMC_REFSTRINGLIT(tmp1398),tmp1399);
      {
        const char* assert_cond = "(vol.dynBal.medium.X[2] >= 0.0 and vol.dynBal.medium.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5021,7,5022,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1400));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5021,7,5022,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1400));
        }
      }
      tmp1401 = 1;
    }
  }
  threadData->lastEquationSolved = 10433;
}

/*
equation index: 10434
type: ALGORITHM

  assert(vol.dynBal.medium.u >= -1e8 and vol.dynBal.medium.u <= 1e8, "Variable violating min/max constraint: -1e8 <= vol.dynBal.medium.u <= 1e8, has value: " + String(vol.dynBal.medium.u, "g"));
*/
void logic2_raw_eqFunction_10434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10434};
  modelica_boolean tmp1402;
  modelica_boolean tmp1403;
  static const MMC_DEFSTRINGLIT(tmp1404,86,"Variable violating min/max constraint: -1e8 <= vol.dynBal.medium.u <= 1e8, has value: ");
  modelica_string tmp1405;
  modelica_metatype tmpMeta1406;
  static int tmp1407 = 0;
  if(!tmp1407)
  {
    tmp1402 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1254]] /* vol.dynBal.medium.u variable */),-1e8);
    tmp1403 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1254]] /* vol.dynBal.medium.u variable */),1e8);
    if(!(tmp1402 && tmp1403))
    {
      tmp1405 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1254]] /* vol.dynBal.medium.u variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1406 = stringAppend(MMC_REFSTRINGLIT(tmp1404),tmp1405);
      {
        const char* assert_cond = "(vol.dynBal.medium.u >= -1e8 and vol.dynBal.medium.u <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5023,7,5023,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1406));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5023,7,5023,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1406));
        }
      }
      tmp1407 = 1;
    }
  }
  threadData->lastEquationSolved = 10434;
}

/*
equation index: 10435
type: ALGORITHM

  assert(vol.dynBal.medium.R >= 0.0 and vol.dynBal.medium.R <= 1e7, "Variable violating min/max constraint: 0.0 <= vol.dynBal.medium.R <= 1e7, has value: " + String(vol.dynBal.medium.R, "g"));
*/
void logic2_raw_eqFunction_10435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10435};
  modelica_boolean tmp1408;
  modelica_boolean tmp1409;
  static const MMC_DEFSTRINGLIT(tmp1410,85,"Variable violating min/max constraint: 0.0 <= vol.dynBal.medium.R <= 1e7, has value: ");
  modelica_string tmp1411;
  modelica_metatype tmpMeta1412;
  static int tmp1413 = 0;
  if(!tmp1413)
  {
    tmp1408 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* vol.dynBal.medium.R variable */),0.0);
    tmp1409 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* vol.dynBal.medium.R variable */),1e7);
    if(!(tmp1408 && tmp1409))
    {
      tmp1411 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* vol.dynBal.medium.R variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1412 = stringAppend(MMC_REFSTRINGLIT(tmp1410),tmp1411);
      {
        const char* assert_cond = "(vol.dynBal.medium.R >= 0.0 and vol.dynBal.medium.R <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5024,7,5024,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1412));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5024,7,5024,71,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1412));
        }
      }
      tmp1413 = 1;
    }
  }
  threadData->lastEquationSolved = 10435;
}

/*
equation index: 10436
type: ALGORITHM

  assert(vol.dynBal.medium.MM >= 0.001 and vol.dynBal.medium.MM <= 0.25, "Variable violating min/max constraint: 0.001 <= vol.dynBal.medium.MM <= 0.25, has value: " + String(vol.dynBal.medium.MM, "g"));
*/
void logic2_raw_eqFunction_10436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10436};
  modelica_boolean tmp1414;
  modelica_boolean tmp1415;
  static const MMC_DEFSTRINGLIT(tmp1416,89,"Variable violating min/max constraint: 0.001 <= vol.dynBal.medium.MM <= 0.25, has value: ");
  modelica_string tmp1417;
  modelica_metatype tmpMeta1418;
  static int tmp1419 = 0;
  if(!tmp1419)
  {
    tmp1414 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* vol.dynBal.medium.MM variable */),0.001);
    tmp1415 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* vol.dynBal.medium.MM variable */),0.25);
    if(!(tmp1414 && tmp1415))
    {
      tmp1417 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* vol.dynBal.medium.MM variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1418 = stringAppend(MMC_REFSTRINGLIT(tmp1416),tmp1417);
      {
        const char* assert_cond = "(vol.dynBal.medium.MM >= 0.001 and vol.dynBal.medium.MM <= 0.25)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5025,7,5025,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1418));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5025,7,5025,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1418));
        }
      }
      tmp1419 = 1;
    }
  }
  threadData->lastEquationSolved = 10436;
}

/*
equation index: 10437
type: ALGORITHM

  assert(vol.dynBal.m >= 0.0, "Variable violating min constraint: 0.0 <= vol.dynBal.m, has value: " + String(vol.dynBal.m, "g"));
*/
void logic2_raw_eqFunction_10437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10437};
  modelica_boolean tmp1420;
  static const MMC_DEFSTRINGLIT(tmp1421,67,"Variable violating min constraint: 0.0 <= vol.dynBal.m, has value: ");
  modelica_string tmp1422;
  modelica_metatype tmpMeta1423;
  static int tmp1424 = 0;
  if(!tmp1424)
  {
    tmp1420 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* vol.dynBal.m STATE(1) */),0.0);
    if(!tmp1420)
    {
      tmp1422 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* vol.dynBal.m STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1423 = stringAppend(MMC_REFSTRINGLIT(tmp1421),tmp1422);
      {
        const char* assert_cond = "(vol.dynBal.m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",94,3,98,20,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1423));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",94,3,98,20,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1423));
        }
      }
      tmp1424 = 1;
    }
  }
  threadData->lastEquationSolved = 10437;
}

/*
equation index: 10438
type: ALGORITHM

  assert(vol.dynBal.mXi[1] >= 0.0, "Variable violating min constraint: 0.0 <= vol.dynBal.mXi[1], has value: " + String(vol.dynBal.mXi[1], "g"));
*/
void logic2_raw_eqFunction_10438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10438};
  modelica_boolean tmp1425;
  static const MMC_DEFSTRINGLIT(tmp1426,72,"Variable violating min constraint: 0.0 <= vol.dynBal.mXi[1], has value: ");
  modelica_string tmp1427;
  modelica_metatype tmpMeta1428;
  static int tmp1429 = 0;
  if(!tmp1429)
  {
    tmp1425 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* vol.dynBal.mXi[1] STATE(1) */),0.0);
    if(!tmp1425)
    {
      tmp1427 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* vol.dynBal.mXi[1] STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1428 = stringAppend(MMC_REFSTRINGLIT(tmp1426),tmp1427);
      {
        const char* assert_cond = "(vol.dynBal.mXi[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",100,3,102,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1428));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",100,3,102,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1428));
        }
      }
      tmp1429 = 1;
    }
  }
  threadData->lastEquationSolved = 10438;
}

/*
equation index: 10439
type: ALGORITHM

  assert(vol.dynBal.ports_H_flow[1] >= -1e8 and vol.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= vol.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(vol.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10439};
  modelica_boolean tmp1430;
  modelica_boolean tmp1431;
  static const MMC_DEFSTRINGLIT(tmp1432,93,"Variable violating min/max constraint: -1e8 <= vol.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp1433;
  modelica_metatype tmpMeta1434;
  static int tmp1435 = 0;
  if(!tmp1435)
  {
    tmp1430 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1256]] /* vol.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp1431 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1256]] /* vol.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp1430 && tmp1431))
    {
      tmp1433 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1256]] /* vol.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1434 = stringAppend(MMC_REFSTRINGLIT(tmp1432),tmp1433);
      {
        const char* assert_cond = "(vol.dynBal.ports_H_flow[1] >= -1e8 and vol.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1434));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1434));
        }
      }
      tmp1435 = 1;
    }
  }
  threadData->lastEquationSolved = 10439;
}

/*
equation index: 10440
type: ALGORITHM

  assert(vol.dynBal.ports_H_flow[2] >= -1e8 and vol.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= vol.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(vol.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10440};
  modelica_boolean tmp1436;
  modelica_boolean tmp1437;
  static const MMC_DEFSTRINGLIT(tmp1438,93,"Variable violating min/max constraint: -1e8 <= vol.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp1439;
  modelica_metatype tmpMeta1440;
  static int tmp1441 = 0;
  if(!tmp1441)
  {
    tmp1436 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* vol.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp1437 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* vol.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp1436 && tmp1437))
    {
      tmp1439 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* vol.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1440 = stringAppend(MMC_REFSTRINGLIT(tmp1438),tmp1439);
      {
        const char* assert_cond = "(vol.dynBal.ports_H_flow[2] >= -1e8 and vol.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1440));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1440));
        }
      }
      tmp1441 = 1;
    }
  }
  threadData->lastEquationSolved = 10440;
}

/*
equation index: 10441
type: ALGORITHM

  assert(roomTemperature >= 1.0 and roomTemperature <= 1e4, "Variable violating min/max constraint: 1.0 <= roomTemperature <= 1e4, has value: " + String(roomTemperature, "g"));
*/
void logic2_raw_eqFunction_10441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10441};
  modelica_boolean tmp1442;
  modelica_boolean tmp1443;
  static const MMC_DEFSTRINGLIT(tmp1444,81,"Variable violating min/max constraint: 1.0 <= roomTemperature <= 1e4, has value: ");
  modelica_string tmp1445;
  modelica_metatype tmpMeta1446;
  static int tmp1447 = 0;
  if(!tmp1447)
  {
    tmp1442 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* roomTemperature variable */),1.0);
    tmp1443 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* roomTemperature variable */),1e4);
    if(!(tmp1442 && tmp1443))
    {
      tmp1445 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* roomTemperature variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1446 = stringAppend(MMC_REFSTRINGLIT(tmp1444),tmp1445);
      {
        const char* assert_cond = "(roomTemperature >= 1.0 and roomTemperature <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",243,3,243,91,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1446));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",243,3,243,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1446));
        }
      }
      tmp1447 = 1;
    }
  }
  threadData->lastEquationSolved = 10441;
}

/*
equation index: 10442
type: ALGORITHM

  assert(KMinusU.u >= 0.0 and KMinusU.u <= 1.0, "Variable violating min/max constraint: 0.0 <= KMinusU.u <= 1.0, has value: " + String(KMinusU.u, "g"));
*/
void logic2_raw_eqFunction_10442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10442};
  modelica_boolean tmp1448;
  modelica_boolean tmp1449;
  static const MMC_DEFSTRINGLIT(tmp1450,75,"Variable violating min/max constraint: 0.0 <= KMinusU.u <= 1.0, has value: ");
  modelica_string tmp1451;
  modelica_metatype tmpMeta1452;
  static int tmp1453 = 0;
  if(!tmp1453)
  {
    tmp1448 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* KMinusU.u variable */),0.0);
    tmp1449 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* KMinusU.u variable */),1.0);
    if(!(tmp1448 && tmp1449))
    {
      tmp1451 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* KMinusU.u variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1452 = stringAppend(MMC_REFSTRINGLIT(tmp1450),tmp1451);
      {
        const char* assert_cond = "(KMinusU.u >= 0.0 and KMinusU.u <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Examples/ChillerPlant/BaseClasses/Controls/KMinusU.mo",6,3,8,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1452));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Examples/ChillerPlant/BaseClasses/Controls/KMinusU.mo",6,3,8,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1452));
        }
      }
      tmp1453 = 1;
    }
  }
  threadData->lastEquationSolved = 10442;
}

/*
equation index: 10443
type: ALGORITHM

  assert(KMinusU.y >= 0.0 and KMinusU.y <= 1.0, "Variable violating min/max constraint: 0.0 <= KMinusU.y <= 1.0, has value: " + String(KMinusU.y, "g"));
*/
void logic2_raw_eqFunction_10443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10443};
  modelica_boolean tmp1454;
  modelica_boolean tmp1455;
  static const MMC_DEFSTRINGLIT(tmp1456,75,"Variable violating min/max constraint: 0.0 <= KMinusU.y <= 1.0, has value: ");
  modelica_string tmp1457;
  modelica_metatype tmpMeta1458;
  static int tmp1459 = 0;
  if(!tmp1459)
  {
    tmp1454 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* KMinusU.y variable */),0.0);
    tmp1455 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* KMinusU.y variable */),1.0);
    if(!(tmp1454 && tmp1455))
    {
      tmp1457 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* KMinusU.y variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1458 = stringAppend(MMC_REFSTRINGLIT(tmp1456),tmp1457);
      {
        const char* assert_cond = "(KMinusU.y >= 0.0 and KMinusU.y <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Examples/ChillerPlant/BaseClasses/Controls/KMinusU.mo",9,3,11,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1458));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Examples/ChillerPlant/BaseClasses/Controls/KMinusU.mo",9,3,11,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1458));
        }
      }
      tmp1459 = 1;
    }
  }
  threadData->lastEquationSolved = 10443;
}

/*
equation index: 10444
type: ALGORITHM

  assert(fanRet.port_a.h_outflow >= -1e10 and fanRet.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= fanRet.port_a.h_outflow <= 1e10, has value: " + String(fanRet.port_a.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10444};
  modelica_boolean tmp1460;
  modelica_boolean tmp1461;
  static const MMC_DEFSTRINGLIT(tmp1462,92,"Variable violating min/max constraint: -1e10 <= fanRet.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp1463;
  modelica_metatype tmpMeta1464;
  static int tmp1465 = 0;
  if(!tmp1465)
  {
    tmp1460 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* fanRet.port_a.h_outflow variable */),-1e10);
    tmp1461 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* fanRet.port_a.h_outflow variable */),1e10);
    if(!(tmp1460 && tmp1461))
    {
      tmp1463 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* fanRet.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1464 = stringAppend(MMC_REFSTRINGLIT(tmp1462),tmp1463);
      {
        const char* assert_cond = "(fanRet.port_a.h_outflow >= -1e10 and fanRet.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1464));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1464));
        }
      }
      tmp1465 = 1;
    }
  }
  threadData->lastEquationSolved = 10444;
}

/*
equation index: 10445
type: ALGORITHM

  assert(fanRet.heatPort.T >= 1.0 and fanRet.heatPort.T <= 1e4, "Variable violating min/max constraint: 1.0 <= fanRet.heatPort.T <= 1e4, has value: " + String(fanRet.heatPort.T, "g"));
*/
void logic2_raw_eqFunction_10445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10445};
  modelica_boolean tmp1466;
  modelica_boolean tmp1467;
  static const MMC_DEFSTRINGLIT(tmp1468,83,"Variable violating min/max constraint: 1.0 <= fanRet.heatPort.T <= 1e4, has value: ");
  modelica_string tmp1469;
  modelica_metatype tmpMeta1470;
  static int tmp1471 = 0;
  if(!tmp1471)
  {
    tmp1466 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[827]] /* fanRet.heatPort.T variable */),1.0);
    tmp1467 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[827]] /* fanRet.heatPort.T variable */),1e4);
    if(!(tmp1466 && tmp1467))
    {
      tmp1469 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[827]] /* fanRet.heatPort.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1470 = stringAppend(MMC_REFSTRINGLIT(tmp1468),tmp1469);
      {
        const char* assert_cond = "(fanRet.heatPort.T >= 1.0 and fanRet.heatPort.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1470));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1470));
        }
      }
      tmp1471 = 1;
    }
  }
  threadData->lastEquationSolved = 10445;
}

/*
equation index: 10446
type: ALGORITHM

  assert(fanRet.vol.Xi[1] >= 0.0 and fanRet.vol.Xi[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= fanRet.vol.Xi[1] <= 1.0, has value: " + String(fanRet.vol.Xi[1], "g"));
*/
void logic2_raw_eqFunction_10446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10446};
  modelica_boolean tmp1472;
  modelica_boolean tmp1473;
  static const MMC_DEFSTRINGLIT(tmp1474,82,"Variable violating min/max constraint: 0.0 <= fanRet.vol.Xi[1] <= 1.0, has value: ");
  modelica_string tmp1475;
  modelica_metatype tmpMeta1476;
  static int tmp1477 = 0;
  if(!tmp1477)
  {
    tmp1472 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* fanRet.vol.Xi[1] variable */),0.0);
    tmp1473 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* fanRet.vol.Xi[1] variable */),1.0);
    if(!(tmp1472 && tmp1473))
    {
      tmp1475 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* fanRet.vol.Xi[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1476 = stringAppend(MMC_REFSTRINGLIT(tmp1474),tmp1475);
      {
        const char* assert_cond = "(fanRet.vol.Xi[1] >= 0.0 and fanRet.vol.Xi[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",45,3,46,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1476));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",45,3,46,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1476));
        }
      }
      tmp1477 = 1;
    }
  }
  threadData->lastEquationSolved = 10446;
}

/*
equation index: 10447
type: ALGORITHM

  assert(fanRet.rho_inlet.y >= 0.0, "Variable violating min constraint: 0.0 <= fanRet.rho_inlet.y, has value: " + String(fanRet.rho_inlet.y, "g"));
*/
void logic2_raw_eqFunction_10447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10447};
  modelica_boolean tmp1478;
  static const MMC_DEFSTRINGLIT(tmp1479,73,"Variable violating min constraint: 0.0 <= fanRet.rho_inlet.y, has value: ");
  modelica_string tmp1480;
  modelica_metatype tmpMeta1481;
  static int tmp1482 = 0;
  if(!tmp1482)
  {
    tmp1478 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* fanRet.rho_inlet.y variable */),0.0);
    if(!tmp1478)
    {
      tmp1480 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* fanRet.rho_inlet.y variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1481 = stringAppend(MMC_REFSTRINGLIT(tmp1479),tmp1480);
      {
        const char* assert_cond = "(fanRet.rho_inlet.y >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Sources.mo",10,5,12,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1481));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Sources.mo",10,5,12,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1481));
        }
      }
      tmp1482 = 1;
    }
  }
  threadData->lastEquationSolved = 10447;
}

/*
equation index: 10448
type: ALGORITHM

  assert(damRet.m_flow >= -1e5 and damRet.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= damRet.m_flow <= 1e5, has value: " + String(damRet.m_flow, "g"));
*/
void logic2_raw_eqFunction_10448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10448};
  modelica_boolean tmp1483;
  modelica_boolean tmp1484;
  static const MMC_DEFSTRINGLIT(tmp1485,80,"Variable violating min/max constraint: -1e5 <= damRet.m_flow <= 1e5, has value: ");
  modelica_string tmp1486;
  modelica_metatype tmpMeta1487;
  static int tmp1488 = 0;
  if(!tmp1488)
  {
    tmp1483 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */),-1e5);
    tmp1484 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */),1e5);
    if(!(tmp1483 && tmp1484))
    {
      tmp1486 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1487 = stringAppend(MMC_REFSTRINGLIT(tmp1485),tmp1486);
      {
        const char* assert_cond = "(damRet.m_flow >= -1e5 and damRet.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1487));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1487));
        }
      }
      tmp1488 = 1;
    }
  }
  threadData->lastEquationSolved = 10448;
}

/*
equation index: 10449
type: ALGORITHM

  assert(damEA.m_flow >= -1e5 and damEA.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= damEA.m_flow <= 1e5, has value: " + String(damEA.m_flow, "g"));
*/
void logic2_raw_eqFunction_10449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10449};
  modelica_boolean tmp1489;
  modelica_boolean tmp1490;
  static const MMC_DEFSTRINGLIT(tmp1491,79,"Variable violating min/max constraint: -1e5 <= damEA.m_flow <= 1e5, has value: ");
  modelica_string tmp1492;
  modelica_metatype tmpMeta1493;
  static int tmp1494 = 0;
  if(!tmp1494)
  {
    tmp1489 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */),-1e5);
    tmp1490 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */),1e5);
    if(!(tmp1489 && tmp1490))
    {
      tmp1492 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1493 = stringAppend(MMC_REFSTRINGLIT(tmp1491),tmp1492);
      {
        const char* assert_cond = "(damEA.m_flow >= -1e5 and damEA.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1493));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1493));
        }
      }
      tmp1494 = 1;
    }
  }
  threadData->lastEquationSolved = 10449;
}

/*
equation index: 10450
type: ALGORITHM

  assert(damOA.port_b.Xi_outflow[1] >= 0.0 and damOA.port_b.Xi_outflow[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= damOA.port_b.Xi_outflow[1] <= 1.0, has value: " + String(damOA.port_b.Xi_outflow[1], "g"));
*/
void logic2_raw_eqFunction_10450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10450};
  modelica_boolean tmp1495;
  modelica_boolean tmp1496;
  static const MMC_DEFSTRINGLIT(tmp1497,92,"Variable violating min/max constraint: 0.0 <= damOA.port_b.Xi_outflow[1] <= 1.0, has value: ");
  modelica_string tmp1498;
  modelica_metatype tmpMeta1499;
  static int tmp1500 = 0;
  if(!tmp1500)
  {
    tmp1495 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* damOA.port_b.Xi_outflow[1] variable */),0.0);
    tmp1496 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* damOA.port_b.Xi_outflow[1] variable */),1.0);
    if(!(tmp1495 && tmp1496))
    {
      tmp1498 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* damOA.port_b.Xi_outflow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1499 = stringAppend(MMC_REFSTRINGLIT(tmp1497),tmp1498);
      {
        const char* assert_cond = "(damOA.port_b.Xi_outflow[1] >= 0.0 and damOA.port_b.Xi_outflow[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",18,5,19,93,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1499));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",18,5,19,93,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1499));
        }
      }
      tmp1500 = 1;
    }
  }
  threadData->lastEquationSolved = 10450;
}

/*
equation index: 10451
type: ALGORITHM

  assert(damOA.m_flow >= -1e5 and damOA.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= damOA.m_flow <= 1e5, has value: " + String(damOA.m_flow, "g"));
*/
void logic2_raw_eqFunction_10451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10451};
  modelica_boolean tmp1501;
  modelica_boolean tmp1502;
  static const MMC_DEFSTRINGLIT(tmp1503,79,"Variable violating min/max constraint: -1e5 <= damOA.m_flow <= 1e5, has value: ");
  modelica_string tmp1504;
  modelica_metatype tmpMeta1505;
  static int tmp1506 = 0;
  if(!tmp1506)
  {
    tmp1501 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */),-1e5);
    tmp1502 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */),1e5);
    if(!(tmp1501 && tmp1502))
    {
      tmp1504 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1505 = stringAppend(MMC_REFSTRINGLIT(tmp1503),tmp1504);
      {
        const char* assert_cond = "(damOA.m_flow >= -1e5 and damOA.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1505));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1505));
        }
      }
      tmp1506 = 1;
    }
  }
  threadData->lastEquationSolved = 10451;
}

/*
equation index: 10452
type: ALGORITHM

  assert(junRet.vol.T >= 1.0 and junRet.vol.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junRet.vol.T <= 1e4, has value: " + String(junRet.vol.T, "g"));
*/
void logic2_raw_eqFunction_10452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10452};
  modelica_boolean tmp1507;
  modelica_boolean tmp1508;
  static const MMC_DEFSTRINGLIT(tmp1509,78,"Variable violating min/max constraint: 1.0 <= junRet.vol.T <= 1e4, has value: ");
  modelica_string tmp1510;
  modelica_metatype tmpMeta1511;
  static int tmp1512 = 0;
  if(!tmp1512)
  {
    tmp1507 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* junRet.vol.T variable */),1.0);
    tmp1508 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* junRet.vol.T variable */),1e4);
    if(!(tmp1507 && tmp1508))
    {
      tmp1510 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* junRet.vol.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1511 = stringAppend(MMC_REFSTRINGLIT(tmp1509),tmp1510);
      {
        const char* assert_cond = "(junRet.vol.T >= 1.0 and junRet.vol.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",38,3,39,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1511));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",38,3,39,31,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1511));
        }
      }
      tmp1512 = 1;
    }
  }
  threadData->lastEquationSolved = 10452;
}

/*
equation index: 10453
type: ALGORITHM

  assert(junRet.vol.dynBal.medium.p >= 0.0 and junRet.vol.dynBal.medium.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junRet.vol.dynBal.medium.p <= 1e8, has value: " + String(junRet.vol.dynBal.medium.p, "g"));
*/
void logic2_raw_eqFunction_10453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10453};
  modelica_boolean tmp1513;
  modelica_boolean tmp1514;
  static const MMC_DEFSTRINGLIT(tmp1515,92,"Variable violating min/max constraint: 0.0 <= junRet.vol.dynBal.medium.p <= 1e8, has value: ");
  modelica_string tmp1516;
  modelica_metatype tmpMeta1517;
  static int tmp1518 = 0;
  if(!tmp1518)
  {
    tmp1513 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* junRet.vol.dynBal.medium.p variable */),0.0);
    tmp1514 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* junRet.vol.dynBal.medium.p variable */),1e8);
    if(!(tmp1513 && tmp1514))
    {
      tmp1516 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* junRet.vol.dynBal.medium.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1517 = stringAppend(MMC_REFSTRINGLIT(tmp1515),tmp1516);
      {
        const char* assert_cond = "(junRet.vol.dynBal.medium.p >= 0.0 and junRet.vol.dynBal.medium.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5015,7,5015,60,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1517));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5015,7,5015,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1517));
        }
      }
      tmp1518 = 1;
    }
  }
  threadData->lastEquationSolved = 10453;
}

/*
equation index: 10454
type: ALGORITHM

  assert(junRet.vol.dynBal.medium.Xi[1] >= 0.0 and junRet.vol.dynBal.medium.Xi[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junRet.vol.dynBal.medium.Xi[1] <= 1.0, has value: " + String(junRet.vol.dynBal.medium.Xi[1], "g"));
*/
void logic2_raw_eqFunction_10454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10454};
  modelica_boolean tmp1519;
  modelica_boolean tmp1520;
  static const MMC_DEFSTRINGLIT(tmp1521,96,"Variable violating min/max constraint: 0.0 <= junRet.vol.dynBal.medium.Xi[1] <= 1.0, has value: ");
  modelica_string tmp1522;
  modelica_metatype tmpMeta1523;
  static int tmp1524 = 0;
  if(!tmp1524)
  {
    tmp1519 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* junRet.vol.dynBal.medium.Xi[1] variable */),0.0);
    tmp1520 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* junRet.vol.dynBal.medium.Xi[1] variable */),1.0);
    if(!(tmp1519 && tmp1520))
    {
      tmp1522 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* junRet.vol.dynBal.medium.Xi[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1523 = stringAppend(MMC_REFSTRINGLIT(tmp1521),tmp1522);
      {
        const char* assert_cond = "(junRet.vol.dynBal.medium.Xi[1] >= 0.0 and junRet.vol.dynBal.medium.Xi[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5016,7,5017,50,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1523));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5016,7,5017,50,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1523));
        }
      }
      tmp1524 = 1;
    }
  }
  threadData->lastEquationSolved = 10454;
}

/*
equation index: 10455
type: ALGORITHM

  assert(junRet.vol.dynBal.medium.d >= 0.0 and junRet.vol.dynBal.medium.d <= 1e5, "Variable violating min/max constraint: 0.0 <= junRet.vol.dynBal.medium.d <= 1e5, has value: " + String(junRet.vol.dynBal.medium.d, "g"));
*/
void logic2_raw_eqFunction_10455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10455};
  modelica_boolean tmp1525;
  modelica_boolean tmp1526;
  static const MMC_DEFSTRINGLIT(tmp1527,92,"Variable violating min/max constraint: 0.0 <= junRet.vol.dynBal.medium.d <= 1e5, has value: ");
  modelica_string tmp1528;
  modelica_metatype tmpMeta1529;
  static int tmp1530 = 0;
  if(!tmp1530)
  {
    tmp1525 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* junRet.vol.dynBal.medium.d variable */),0.0);
    tmp1526 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* junRet.vol.dynBal.medium.d variable */),1e5);
    if(!(tmp1525 && tmp1526))
    {
      tmp1528 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* junRet.vol.dynBal.medium.d variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1529 = stringAppend(MMC_REFSTRINGLIT(tmp1527),tmp1528);
      {
        const char* assert_cond = "(junRet.vol.dynBal.medium.d >= 0.0 and junRet.vol.dynBal.medium.d <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5019,7,5019,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1529));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5019,7,5019,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1529));
        }
      }
      tmp1530 = 1;
    }
  }
  threadData->lastEquationSolved = 10455;
}

/*
equation index: 10456
type: ALGORITHM

  assert(junRet.vol.dynBal.medium.T >= 1.0 and junRet.vol.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junRet.vol.dynBal.medium.T <= 1e4, has value: " + String(junRet.vol.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10456};
  modelica_boolean tmp1531;
  modelica_boolean tmp1532;
  static const MMC_DEFSTRINGLIT(tmp1533,92,"Variable violating min/max constraint: 1.0 <= junRet.vol.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp1534;
  modelica_metatype tmpMeta1535;
  static int tmp1536 = 0;
  if(!tmp1536)
  {
    tmp1531 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* junRet.vol.dynBal.medium.T variable */),1.0);
    tmp1532 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* junRet.vol.dynBal.medium.T variable */),1e4);
    if(!(tmp1531 && tmp1532))
    {
      tmp1534 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* junRet.vol.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1535 = stringAppend(MMC_REFSTRINGLIT(tmp1533),tmp1534);
      {
        const char* assert_cond = "(junRet.vol.dynBal.medium.T >= 1.0 and junRet.vol.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5020,7,5020,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1535));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5020,7,5020,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1535));
        }
      }
      tmp1536 = 1;
    }
  }
  threadData->lastEquationSolved = 10456;
}

/*
equation index: 10457
type: ALGORITHM

  assert(junRet.vol.dynBal.medium.X[2] >= 0.0 and junRet.vol.dynBal.medium.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= junRet.vol.dynBal.medium.X[2] <= 1.0, has value: " + String(junRet.vol.dynBal.medium.X[2], "g"));
*/
void logic2_raw_eqFunction_10457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10457};
  modelica_boolean tmp1537;
  modelica_boolean tmp1538;
  static const MMC_DEFSTRINGLIT(tmp1539,95,"Variable violating min/max constraint: 0.0 <= junRet.vol.dynBal.medium.X[2] <= 1.0, has value: ");
  modelica_string tmp1540;
  modelica_metatype tmpMeta1541;
  static int tmp1542 = 0;
  if(!tmp1542)
  {
    tmp1537 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* junRet.vol.dynBal.medium.X[2] variable */),0.0);
    tmp1538 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* junRet.vol.dynBal.medium.X[2] variable */),1.0);
    if(!(tmp1537 && tmp1538))
    {
      tmp1540 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* junRet.vol.dynBal.medium.X[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1541 = stringAppend(MMC_REFSTRINGLIT(tmp1539),tmp1540);
      {
        const char* assert_cond = "(junRet.vol.dynBal.medium.X[2] >= 0.0 and junRet.vol.dynBal.medium.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5021,7,5022,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1541));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5021,7,5022,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1541));
        }
      }
      tmp1542 = 1;
    }
  }
  threadData->lastEquationSolved = 10457;
}

/*
equation index: 10458
type: ALGORITHM

  assert(junRet.vol.dynBal.medium.u >= -1e8 and junRet.vol.dynBal.medium.u <= 1e8, "Variable violating min/max constraint: -1e8 <= junRet.vol.dynBal.medium.u <= 1e8, has value: " + String(junRet.vol.dynBal.medium.u, "g"));
*/
void logic2_raw_eqFunction_10458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10458};
  modelica_boolean tmp1543;
  modelica_boolean tmp1544;
  static const MMC_DEFSTRINGLIT(tmp1545,93,"Variable violating min/max constraint: -1e8 <= junRet.vol.dynBal.medium.u <= 1e8, has value: ");
  modelica_string tmp1546;
  modelica_metatype tmpMeta1547;
  static int tmp1548 = 0;
  if(!tmp1548)
  {
    tmp1543 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* junRet.vol.dynBal.medium.u variable */),-1e8);
    tmp1544 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* junRet.vol.dynBal.medium.u variable */),1e8);
    if(!(tmp1543 && tmp1544))
    {
      tmp1546 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* junRet.vol.dynBal.medium.u variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1547 = stringAppend(MMC_REFSTRINGLIT(tmp1545),tmp1546);
      {
        const char* assert_cond = "(junRet.vol.dynBal.medium.u >= -1e8 and junRet.vol.dynBal.medium.u <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5023,7,5023,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1547));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5023,7,5023,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1547));
        }
      }
      tmp1548 = 1;
    }
  }
  threadData->lastEquationSolved = 10458;
}

/*
equation index: 10459
type: ALGORITHM

  assert(junRet.vol.dynBal.medium.R >= 0.0 and junRet.vol.dynBal.medium.R <= 1e7, "Variable violating min/max constraint: 0.0 <= junRet.vol.dynBal.medium.R <= 1e7, has value: " + String(junRet.vol.dynBal.medium.R, "g"));
*/
void logic2_raw_eqFunction_10459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10459};
  modelica_boolean tmp1549;
  modelica_boolean tmp1550;
  static const MMC_DEFSTRINGLIT(tmp1551,92,"Variable violating min/max constraint: 0.0 <= junRet.vol.dynBal.medium.R <= 1e7, has value: ");
  modelica_string tmp1552;
  modelica_metatype tmpMeta1553;
  static int tmp1554 = 0;
  if(!tmp1554)
  {
    tmp1549 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* junRet.vol.dynBal.medium.R variable */),0.0);
    tmp1550 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* junRet.vol.dynBal.medium.R variable */),1e7);
    if(!(tmp1549 && tmp1550))
    {
      tmp1552 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* junRet.vol.dynBal.medium.R variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1553 = stringAppend(MMC_REFSTRINGLIT(tmp1551),tmp1552);
      {
        const char* assert_cond = "(junRet.vol.dynBal.medium.R >= 0.0 and junRet.vol.dynBal.medium.R <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5024,7,5024,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1553));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5024,7,5024,71,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1553));
        }
      }
      tmp1554 = 1;
    }
  }
  threadData->lastEquationSolved = 10459;
}

/*
equation index: 10460
type: ALGORITHM

  assert(junRet.vol.dynBal.medium.MM >= 0.001 and junRet.vol.dynBal.medium.MM <= 0.25, "Variable violating min/max constraint: 0.001 <= junRet.vol.dynBal.medium.MM <= 0.25, has value: " + String(junRet.vol.dynBal.medium.MM, "g"));
*/
void logic2_raw_eqFunction_10460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10460};
  modelica_boolean tmp1555;
  modelica_boolean tmp1556;
  static const MMC_DEFSTRINGLIT(tmp1557,96,"Variable violating min/max constraint: 0.001 <= junRet.vol.dynBal.medium.MM <= 0.25, has value: ");
  modelica_string tmp1558;
  modelica_metatype tmpMeta1559;
  static int tmp1560 = 0;
  if(!tmp1560)
  {
    tmp1555 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* junRet.vol.dynBal.medium.MM variable */),0.001);
    tmp1556 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* junRet.vol.dynBal.medium.MM variable */),0.25);
    if(!(tmp1555 && tmp1556))
    {
      tmp1558 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* junRet.vol.dynBal.medium.MM variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1559 = stringAppend(MMC_REFSTRINGLIT(tmp1557),tmp1558);
      {
        const char* assert_cond = "(junRet.vol.dynBal.medium.MM >= 0.001 and junRet.vol.dynBal.medium.MM <= 0.25)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5025,7,5025,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1559));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5025,7,5025,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1559));
        }
      }
      tmp1560 = 1;
    }
  }
  threadData->lastEquationSolved = 10460;
}

/*
equation index: 10461
type: ALGORITHM

  assert(junRet.vol.dynBal.m >= 0.0, "Variable violating min constraint: 0.0 <= junRet.vol.dynBal.m, has value: " + String(junRet.vol.dynBal.m, "g"));
*/
void logic2_raw_eqFunction_10461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10461};
  modelica_boolean tmp1561;
  static const MMC_DEFSTRINGLIT(tmp1562,74,"Variable violating min constraint: 0.0 <= junRet.vol.dynBal.m, has value: ");
  modelica_string tmp1563;
  modelica_metatype tmpMeta1564;
  static int tmp1565 = 0;
  if(!tmp1565)
  {
    tmp1561 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* junRet.vol.dynBal.m STATE(1,junRet.vol.dynBal.mb_flow) */),0.0);
    if(!tmp1561)
    {
      tmp1563 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* junRet.vol.dynBal.m STATE(1,junRet.vol.dynBal.mb_flow) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1564 = stringAppend(MMC_REFSTRINGLIT(tmp1562),tmp1563);
      {
        const char* assert_cond = "(junRet.vol.dynBal.m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",94,3,98,20,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1564));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",94,3,98,20,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1564));
        }
      }
      tmp1565 = 1;
    }
  }
  threadData->lastEquationSolved = 10461;
}

/*
equation index: 10462
type: ALGORITHM

  assert(junRet.vol.dynBal.mXi[1] >= 0.0, "Variable violating min constraint: 0.0 <= junRet.vol.dynBal.mXi[1], has value: " + String(junRet.vol.dynBal.mXi[1], "g"));
*/
void logic2_raw_eqFunction_10462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10462};
  modelica_boolean tmp1566;
  static const MMC_DEFSTRINGLIT(tmp1567,79,"Variable violating min constraint: 0.0 <= junRet.vol.dynBal.mXi[1], has value: ");
  modelica_string tmp1568;
  modelica_metatype tmpMeta1569;
  static int tmp1570 = 0;
  if(!tmp1570)
  {
    tmp1566 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* junRet.vol.dynBal.mXi[1] STATE(1) */),0.0);
    if(!tmp1566)
    {
      tmp1568 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* junRet.vol.dynBal.mXi[1] STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1569 = stringAppend(MMC_REFSTRINGLIT(tmp1567),tmp1568);
      {
        const char* assert_cond = "(junRet.vol.dynBal.mXi[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",100,3,102,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1569));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",100,3,102,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1569));
        }
      }
      tmp1570 = 1;
    }
  }
  threadData->lastEquationSolved = 10462;
}

/*
equation index: 10463
type: ALGORITHM

  assert(junRet.vol.dynBal.ports_H_flow[1] >= -1e8 and junRet.vol.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= junRet.vol.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(junRet.vol.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10463};
  modelica_boolean tmp1571;
  modelica_boolean tmp1572;
  static const MMC_DEFSTRINGLIT(tmp1573,100,"Variable violating min/max constraint: -1e8 <= junRet.vol.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp1574;
  modelica_metatype tmpMeta1575;
  static int tmp1576 = 0;
  if(!tmp1576)
  {
    tmp1571 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* junRet.vol.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp1572 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* junRet.vol.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp1571 && tmp1572))
    {
      tmp1574 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* junRet.vol.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1575 = stringAppend(MMC_REFSTRINGLIT(tmp1573),tmp1574);
      {
        const char* assert_cond = "(junRet.vol.dynBal.ports_H_flow[1] >= -1e8 and junRet.vol.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1575));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1575));
        }
      }
      tmp1576 = 1;
    }
  }
  threadData->lastEquationSolved = 10463;
}

/*
equation index: 10464
type: ALGORITHM

  assert(junRet.vol.dynBal.ports_H_flow[2] >= -1e8 and junRet.vol.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= junRet.vol.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(junRet.vol.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10464};
  modelica_boolean tmp1577;
  modelica_boolean tmp1578;
  static const MMC_DEFSTRINGLIT(tmp1579,100,"Variable violating min/max constraint: -1e8 <= junRet.vol.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp1580;
  modelica_metatype tmpMeta1581;
  static int tmp1582 = 0;
  if(!tmp1582)
  {
    tmp1577 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* junRet.vol.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp1578 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* junRet.vol.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp1577 && tmp1578))
    {
      tmp1580 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* junRet.vol.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1581 = stringAppend(MMC_REFSTRINGLIT(tmp1579),tmp1580);
      {
        const char* assert_cond = "(junRet.vol.dynBal.ports_H_flow[2] >= -1e8 and junRet.vol.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1581));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1581));
        }
      }
      tmp1582 = 1;
    }
  }
  threadData->lastEquationSolved = 10464;
}

/*
equation index: 10465
type: ALGORITHM

  assert(junRet.vol.dynBal.ports_H_flow[3] >= -1e8 and junRet.vol.dynBal.ports_H_flow[3] <= 1e8, "Variable violating min/max constraint: -1e8 <= junRet.vol.dynBal.ports_H_flow[3] <= 1e8, has value: " + String(junRet.vol.dynBal.ports_H_flow[3], "g"));
*/
void logic2_raw_eqFunction_10465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10465};
  modelica_boolean tmp1583;
  modelica_boolean tmp1584;
  static const MMC_DEFSTRINGLIT(tmp1585,100,"Variable violating min/max constraint: -1e8 <= junRet.vol.dynBal.ports_H_flow[3] <= 1e8, has value: ");
  modelica_string tmp1586;
  modelica_metatype tmpMeta1587;
  static int tmp1588 = 0;
  if(!tmp1588)
  {
    tmp1583 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* junRet.vol.dynBal.ports_H_flow[3] variable */),-1e8);
    tmp1584 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* junRet.vol.dynBal.ports_H_flow[3] variable */),1e8);
    if(!(tmp1583 && tmp1584))
    {
      tmp1586 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* junRet.vol.dynBal.ports_H_flow[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1587 = stringAppend(MMC_REFSTRINGLIT(tmp1585),tmp1586);
      {
        const char* assert_cond = "(junRet.vol.dynBal.ports_H_flow[3] >= -1e8 and junRet.vol.dynBal.ports_H_flow[3] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1587));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1587));
        }
      }
      tmp1588 = 1;
    }
  }
  threadData->lastEquationSolved = 10465;
}

/*
equation index: 10466
type: ALGORITHM

  assert(out.ports[1].h_outflow >= -1e10 and out.ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= out.ports[1].h_outflow <= 1e10, has value: " + String(out.ports[1].h_outflow, "g"));
*/
void logic2_raw_eqFunction_10466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10466};
  modelica_boolean tmp1589;
  modelica_boolean tmp1590;
  static const MMC_DEFSTRINGLIT(tmp1591,91,"Variable violating min/max constraint: -1e10 <= out.ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp1592;
  modelica_metatype tmpMeta1593;
  static int tmp1594 = 0;
  if(!tmp1594)
  {
    tmp1589 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* out.ports[1].h_outflow variable */),-1e10);
    tmp1590 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* out.ports[1].h_outflow variable */),1e10);
    if(!(tmp1589 && tmp1590))
    {
      tmp1592 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* out.ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1593 = stringAppend(MMC_REFSTRINGLIT(tmp1591),tmp1592);
      {
        const char* assert_cond = "(out.ports[1].h_outflow >= -1e10 and out.ports[1].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1593));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1593));
        }
      }
      tmp1594 = 1;
    }
  }
  threadData->lastEquationSolved = 10466;
}

/*
equation index: 10467
type: ALGORITHM

  assert(out.medium.T >= 1.0 and out.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= out.medium.T <= 1e4, has value: " + String(out.medium.T, "g"));
*/
void logic2_raw_eqFunction_10467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10467};
  modelica_boolean tmp1595;
  modelica_boolean tmp1596;
  static const MMC_DEFSTRINGLIT(tmp1597,78,"Variable violating min/max constraint: 1.0 <= out.medium.T <= 1e4, has value: ");
  modelica_string tmp1598;
  modelica_metatype tmpMeta1599;
  static int tmp1600 = 0;
  if(!tmp1600)
  {
    tmp1595 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* out.medium.T variable */),1.0);
    tmp1596 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* out.medium.T variable */),1e4);
    if(!(tmp1595 && tmp1596))
    {
      tmp1598 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* out.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1599 = stringAppend(MMC_REFSTRINGLIT(tmp1597),tmp1598);
      {
        const char* assert_cond = "(out.medium.T >= 1.0 and out.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5020,7,5020,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1599));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5020,7,5020,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1599));
        }
      }
      tmp1600 = 1;
    }
  }
  threadData->lastEquationSolved = 10467;
}

/*
equation index: 10468
type: ALGORITHM

  assert(out.medium.X[2] >= 0.0 and out.medium.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= out.medium.X[2] <= 1.0, has value: " + String(out.medium.X[2], "g"));
*/
void logic2_raw_eqFunction_10468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10468};
  modelica_boolean tmp1601;
  modelica_boolean tmp1602;
  static const MMC_DEFSTRINGLIT(tmp1603,81,"Variable violating min/max constraint: 0.0 <= out.medium.X[2] <= 1.0, has value: ");
  modelica_string tmp1604;
  modelica_metatype tmpMeta1605;
  static int tmp1606 = 0;
  if(!tmp1606)
  {
    tmp1601 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1044]] /* out.medium.X[2] variable */),0.0);
    tmp1602 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1044]] /* out.medium.X[2] variable */),1.0);
    if(!(tmp1601 && tmp1602))
    {
      tmp1604 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1044]] /* out.medium.X[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1605 = stringAppend(MMC_REFSTRINGLIT(tmp1603),tmp1604);
      {
        const char* assert_cond = "(out.medium.X[2] >= 0.0 and out.medium.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5021,7,5022,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1605));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5021,7,5022,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1605));
        }
      }
      tmp1606 = 1;
    }
  }
  threadData->lastEquationSolved = 10468;
}

/*
equation index: 10469
type: ALGORITHM

  assert(out.medium.u >= -1e8 and out.medium.u <= 1e8, "Variable violating min/max constraint: -1e8 <= out.medium.u <= 1e8, has value: " + String(out.medium.u, "g"));
*/
void logic2_raw_eqFunction_10469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10469};
  modelica_boolean tmp1607;
  modelica_boolean tmp1608;
  static const MMC_DEFSTRINGLIT(tmp1609,79,"Variable violating min/max constraint: -1e8 <= out.medium.u <= 1e8, has value: ");
  modelica_string tmp1610;
  modelica_metatype tmpMeta1611;
  static int tmp1612 = 0;
  if(!tmp1612)
  {
    tmp1607 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1047]] /* out.medium.u variable */),-1e8);
    tmp1608 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1047]] /* out.medium.u variable */),1e8);
    if(!(tmp1607 && tmp1608))
    {
      tmp1610 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1047]] /* out.medium.u variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1611 = stringAppend(MMC_REFSTRINGLIT(tmp1609),tmp1610);
      {
        const char* assert_cond = "(out.medium.u >= -1e8 and out.medium.u <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5023,7,5023,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1611));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5023,7,5023,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1611));
        }
      }
      tmp1612 = 1;
    }
  }
  threadData->lastEquationSolved = 10469;
}

/*
equation index: 10470
type: ALGORITHM

  assert(out.medium.R >= 0.0 and out.medium.R <= 1e7, "Variable violating min/max constraint: 0.0 <= out.medium.R <= 1e7, has value: " + String(out.medium.R, "g"));
*/
void logic2_raw_eqFunction_10470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10470};
  modelica_boolean tmp1613;
  modelica_boolean tmp1614;
  static const MMC_DEFSTRINGLIT(tmp1615,78,"Variable violating min/max constraint: 0.0 <= out.medium.R <= 1e7, has value: ");
  modelica_string tmp1616;
  modelica_metatype tmpMeta1617;
  static int tmp1618 = 0;
  if(!tmp1618)
  {
    tmp1613 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* out.medium.R variable */),0.0);
    tmp1614 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* out.medium.R variable */),1e7);
    if(!(tmp1613 && tmp1614))
    {
      tmp1616 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* out.medium.R variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1617 = stringAppend(MMC_REFSTRINGLIT(tmp1615),tmp1616);
      {
        const char* assert_cond = "(out.medium.R >= 0.0 and out.medium.R <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5024,7,5024,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1617));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5024,7,5024,71,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1617));
        }
      }
      tmp1618 = 1;
    }
  }
  threadData->lastEquationSolved = 10470;
}

/*
equation index: 10471
type: ALGORITHM

  assert(out.medium.MM >= 0.001 and out.medium.MM <= 0.25, "Variable violating min/max constraint: 0.001 <= out.medium.MM <= 0.25, has value: " + String(out.medium.MM, "g"));
*/
void logic2_raw_eqFunction_10471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10471};
  modelica_boolean tmp1619;
  modelica_boolean tmp1620;
  static const MMC_DEFSTRINGLIT(tmp1621,82,"Variable violating min/max constraint: 0.001 <= out.medium.MM <= 0.25, has value: ");
  modelica_string tmp1622;
  modelica_metatype tmpMeta1623;
  static int tmp1624 = 0;
  if(!tmp1624)
  {
    tmp1619 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* out.medium.MM variable */),0.001);
    tmp1620 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* out.medium.MM variable */),0.25);
    if(!(tmp1619 && tmp1620))
    {
      tmp1622 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* out.medium.MM variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1623 = stringAppend(MMC_REFSTRINGLIT(tmp1621),tmp1622);
      {
        const char* assert_cond = "(out.medium.MM >= 0.001 and out.medium.MM <= 0.25)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5025,7,5025,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1623));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5025,7,5025,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1623));
        }
      }
      tmp1624 = 1;
    }
  }
  threadData->lastEquationSolved = 10471;
}

/*
equation index: 10472
type: ALGORITHM

  assert(out.X_in_internal[2] >= 0.0 and out.X_in_internal[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= out.X_in_internal[2] <= 1.0, has value: " + String(out.X_in_internal[2], "g"));
*/
void logic2_raw_eqFunction_10472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10472};
  modelica_boolean tmp1625;
  modelica_boolean tmp1626;
  static const MMC_DEFSTRINGLIT(tmp1627,86,"Variable violating min/max constraint: 0.0 <= out.X_in_internal[2] <= 1.0, has value: ");
  modelica_string tmp1628;
  modelica_metatype tmpMeta1629;
  static int tmp1630 = 0;
  if(!tmp1630)
  {
    tmp1625 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* out.X_in_internal[2] variable */),0.0);
    tmp1626 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* out.X_in_internal[2] variable */),1.0);
    if(!(tmp1625 && tmp1626))
    {
      tmp1628 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* out.X_in_internal[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1629 = stringAppend(MMC_REFSTRINGLIT(tmp1627),tmp1628);
      {
        const char* assert_cond = "(out.X_in_internal[2] >= 0.0 and out.X_in_internal[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sources/BaseClasses/PartialSource.mo",38,3,40,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1629));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sources/BaseClasses/PartialSource.mo",38,3,40,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1629));
        }
      }
      tmp1630 = 1;
    }
  }
  threadData->lastEquationSolved = 10472;
}

/*
equation index: 10473
type: ALGORITHM

  assert(out.x_pTphi.pSat >= 0.0, "Variable violating min constraint: 0.0 <= out.x_pTphi.pSat, has value: " + String(out.x_pTphi.pSat, "g"));
*/
void logic2_raw_eqFunction_10473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10473};
  modelica_boolean tmp1631;
  static const MMC_DEFSTRINGLIT(tmp1632,71,"Variable violating min constraint: 0.0 <= out.x_pTphi.pSat, has value: ");
  modelica_string tmp1633;
  modelica_metatype tmpMeta1634;
  static int tmp1635 = 0;
  if(!tmp1635)
  {
    tmp1631 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* out.x_pTphi.pSat variable */),0.0);
    if(!tmp1631)
    {
      tmp1633 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* out.x_pTphi.pSat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1634 = stringAppend(MMC_REFSTRINGLIT(tmp1632),tmp1633);
      {
        const char* assert_cond = "(out.x_pTphi.pSat >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Utilities/Psychrometrics/X_pTphi.mo",19,3,19,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1634));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Utilities/Psychrometrics/X_pTphi.mo",19,3,19,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1634));
        }
      }
      tmp1635 = 1;
    }
  }
  threadData->lastEquationSolved = 10473;
}

/*
equation index: 10474
type: ALGORITHM

  assert(junOut.vol.ports[3].h_outflow >= -1e10 and junOut.vol.ports[3].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= junOut.vol.ports[3].h_outflow <= 1e10, has value: " + String(junOut.vol.ports[3].h_outflow, "g"));
*/
void logic2_raw_eqFunction_10474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10474};
  modelica_boolean tmp1636;
  modelica_boolean tmp1637;
  static const MMC_DEFSTRINGLIT(tmp1638,98,"Variable violating min/max constraint: -1e10 <= junOut.vol.ports[3].h_outflow <= 1e10, has value: ");
  modelica_string tmp1639;
  modelica_metatype tmpMeta1640;
  static int tmp1641 = 0;
  if(!tmp1641)
  {
    tmp1636 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* junOut.vol.ports[3].h_outflow variable */),-1e10);
    tmp1637 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* junOut.vol.ports[3].h_outflow variable */),1e10);
    if(!(tmp1636 && tmp1637))
    {
      tmp1639 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* junOut.vol.ports[3].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1640 = stringAppend(MMC_REFSTRINGLIT(tmp1638),tmp1639);
      {
        const char* assert_cond = "(junOut.vol.ports[3].h_outflow >= -1e10 and junOut.vol.ports[3].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1640));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1640));
        }
      }
      tmp1641 = 1;
    }
  }
  threadData->lastEquationSolved = 10474;
}

/*
equation index: 10475
type: ALGORITHM

  assert(junOut.vol.T >= 1.0 and junOut.vol.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junOut.vol.T <= 1e4, has value: " + String(junOut.vol.T, "g"));
*/
void logic2_raw_eqFunction_10475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10475};
  modelica_boolean tmp1642;
  modelica_boolean tmp1643;
  static const MMC_DEFSTRINGLIT(tmp1644,78,"Variable violating min/max constraint: 1.0 <= junOut.vol.T <= 1e4, has value: ");
  modelica_string tmp1645;
  modelica_metatype tmpMeta1646;
  static int tmp1647 = 0;
  if(!tmp1647)
  {
    tmp1642 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[985]] /* junOut.vol.T variable */),1.0);
    tmp1643 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[985]] /* junOut.vol.T variable */),1e4);
    if(!(tmp1642 && tmp1643))
    {
      tmp1645 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[985]] /* junOut.vol.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1646 = stringAppend(MMC_REFSTRINGLIT(tmp1644),tmp1645);
      {
        const char* assert_cond = "(junOut.vol.T >= 1.0 and junOut.vol.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",38,3,39,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1646));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",38,3,39,31,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1646));
        }
      }
      tmp1647 = 1;
    }
  }
  threadData->lastEquationSolved = 10475;
}

/*
equation index: 10476
type: ALGORITHM

  assert(junOut.vol.dynBal.medium.p >= 0.0 and junOut.vol.dynBal.medium.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junOut.vol.dynBal.medium.p <= 1e8, has value: " + String(junOut.vol.dynBal.medium.p, "g"));
*/
void logic2_raw_eqFunction_10476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10476};
  modelica_boolean tmp1648;
  modelica_boolean tmp1649;
  static const MMC_DEFSTRINGLIT(tmp1650,92,"Variable violating min/max constraint: 0.0 <= junOut.vol.dynBal.medium.p <= 1e8, has value: ");
  modelica_string tmp1651;
  modelica_metatype tmpMeta1652;
  static int tmp1653 = 0;
  if(!tmp1653)
  {
    tmp1648 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* junOut.vol.dynBal.medium.p variable */),0.0);
    tmp1649 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* junOut.vol.dynBal.medium.p variable */),1e8);
    if(!(tmp1648 && tmp1649))
    {
      tmp1651 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* junOut.vol.dynBal.medium.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1652 = stringAppend(MMC_REFSTRINGLIT(tmp1650),tmp1651);
      {
        const char* assert_cond = "(junOut.vol.dynBal.medium.p >= 0.0 and junOut.vol.dynBal.medium.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5015,7,5015,60,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1652));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5015,7,5015,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1652));
        }
      }
      tmp1653 = 1;
    }
  }
  threadData->lastEquationSolved = 10476;
}

/*
equation index: 10477
type: ALGORITHM

  assert(junOut.vol.dynBal.medium.Xi[1] >= 0.0 and junOut.vol.dynBal.medium.Xi[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= junOut.vol.dynBal.medium.Xi[1] <= 1.0, has value: " + String(junOut.vol.dynBal.medium.Xi[1], "g"));
*/
void logic2_raw_eqFunction_10477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10477};
  modelica_boolean tmp1654;
  modelica_boolean tmp1655;
  static const MMC_DEFSTRINGLIT(tmp1656,96,"Variable violating min/max constraint: 0.0 <= junOut.vol.dynBal.medium.Xi[1] <= 1.0, has value: ");
  modelica_string tmp1657;
  modelica_metatype tmpMeta1658;
  static int tmp1659 = 0;
  if(!tmp1659)
  {
    tmp1654 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* junOut.vol.dynBal.medium.Xi[1] variable */),0.0);
    tmp1655 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* junOut.vol.dynBal.medium.Xi[1] variable */),1.0);
    if(!(tmp1654 && tmp1655))
    {
      tmp1657 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* junOut.vol.dynBal.medium.Xi[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1658 = stringAppend(MMC_REFSTRINGLIT(tmp1656),tmp1657);
      {
        const char* assert_cond = "(junOut.vol.dynBal.medium.Xi[1] >= 0.0 and junOut.vol.dynBal.medium.Xi[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5016,7,5017,50,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1658));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5016,7,5017,50,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1658));
        }
      }
      tmp1659 = 1;
    }
  }
  threadData->lastEquationSolved = 10477;
}

/*
equation index: 10478
type: ALGORITHM

  assert(junOut.vol.dynBal.medium.d >= 0.0 and junOut.vol.dynBal.medium.d <= 1e5, "Variable violating min/max constraint: 0.0 <= junOut.vol.dynBal.medium.d <= 1e5, has value: " + String(junOut.vol.dynBal.medium.d, "g"));
*/
void logic2_raw_eqFunction_10478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10478};
  modelica_boolean tmp1660;
  modelica_boolean tmp1661;
  static const MMC_DEFSTRINGLIT(tmp1662,92,"Variable violating min/max constraint: 0.0 <= junOut.vol.dynBal.medium.d <= 1e5, has value: ");
  modelica_string tmp1663;
  modelica_metatype tmpMeta1664;
  static int tmp1665 = 0;
  if(!tmp1665)
  {
    tmp1660 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* junOut.vol.dynBal.medium.d variable */),0.0);
    tmp1661 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* junOut.vol.dynBal.medium.d variable */),1e5);
    if(!(tmp1660 && tmp1661))
    {
      tmp1663 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* junOut.vol.dynBal.medium.d variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1664 = stringAppend(MMC_REFSTRINGLIT(tmp1662),tmp1663);
      {
        const char* assert_cond = "(junOut.vol.dynBal.medium.d >= 0.0 and junOut.vol.dynBal.medium.d <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5019,7,5019,36,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1664));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5019,7,5019,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1664));
        }
      }
      tmp1665 = 1;
    }
  }
  threadData->lastEquationSolved = 10478;
}

/*
equation index: 10479
type: ALGORITHM

  assert(junOut.vol.dynBal.medium.T >= 1.0 and junOut.vol.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junOut.vol.dynBal.medium.T <= 1e4, has value: " + String(junOut.vol.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10479};
  modelica_boolean tmp1666;
  modelica_boolean tmp1667;
  static const MMC_DEFSTRINGLIT(tmp1668,92,"Variable violating min/max constraint: 1.0 <= junOut.vol.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp1669;
  modelica_metatype tmpMeta1670;
  static int tmp1671 = 0;
  if(!tmp1671)
  {
    tmp1666 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* junOut.vol.dynBal.medium.T variable */),1.0);
    tmp1667 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* junOut.vol.dynBal.medium.T variable */),1e4);
    if(!(tmp1666 && tmp1667))
    {
      tmp1669 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* junOut.vol.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1670 = stringAppend(MMC_REFSTRINGLIT(tmp1668),tmp1669);
      {
        const char* assert_cond = "(junOut.vol.dynBal.medium.T >= 1.0 and junOut.vol.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5020,7,5020,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1670));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5020,7,5020,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1670));
        }
      }
      tmp1671 = 1;
    }
  }
  threadData->lastEquationSolved = 10479;
}

/*
equation index: 10480
type: ALGORITHM

  assert(junOut.vol.dynBal.medium.X[2] >= 0.0 and junOut.vol.dynBal.medium.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= junOut.vol.dynBal.medium.X[2] <= 1.0, has value: " + String(junOut.vol.dynBal.medium.X[2], "g"));
*/
void logic2_raw_eqFunction_10480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10480};
  modelica_boolean tmp1672;
  modelica_boolean tmp1673;
  static const MMC_DEFSTRINGLIT(tmp1674,95,"Variable violating min/max constraint: 0.0 <= junOut.vol.dynBal.medium.X[2] <= 1.0, has value: ");
  modelica_string tmp1675;
  modelica_metatype tmpMeta1676;
  static int tmp1677 = 0;
  if(!tmp1677)
  {
    tmp1672 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* junOut.vol.dynBal.medium.X[2] variable */),0.0);
    tmp1673 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* junOut.vol.dynBal.medium.X[2] variable */),1.0);
    if(!(tmp1672 && tmp1673))
    {
      tmp1675 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* junOut.vol.dynBal.medium.X[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1676 = stringAppend(MMC_REFSTRINGLIT(tmp1674),tmp1675);
      {
        const char* assert_cond = "(junOut.vol.dynBal.medium.X[2] >= 0.0 and junOut.vol.dynBal.medium.X[2] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5021,7,5022,64,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1676));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5021,7,5022,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1676));
        }
      }
      tmp1677 = 1;
    }
  }
  threadData->lastEquationSolved = 10480;
}

/*
equation index: 10481
type: ALGORITHM

  assert(junOut.vol.dynBal.medium.u >= -1e8 and junOut.vol.dynBal.medium.u <= 1e8, "Variable violating min/max constraint: -1e8 <= junOut.vol.dynBal.medium.u <= 1e8, has value: " + String(junOut.vol.dynBal.medium.u, "g"));
*/
void logic2_raw_eqFunction_10481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10481};
  modelica_boolean tmp1678;
  modelica_boolean tmp1679;
  static const MMC_DEFSTRINGLIT(tmp1680,93,"Variable violating min/max constraint: -1e8 <= junOut.vol.dynBal.medium.u <= 1e8, has value: ");
  modelica_string tmp1681;
  modelica_metatype tmpMeta1682;
  static int tmp1683 = 0;
  if(!tmp1683)
  {
    tmp1678 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* junOut.vol.dynBal.medium.u variable */),-1e8);
    tmp1679 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* junOut.vol.dynBal.medium.u variable */),1e8);
    if(!(tmp1678 && tmp1679))
    {
      tmp1681 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* junOut.vol.dynBal.medium.u variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1682 = stringAppend(MMC_REFSTRINGLIT(tmp1680),tmp1681);
      {
        const char* assert_cond = "(junOut.vol.dynBal.medium.u >= -1e8 and junOut.vol.dynBal.medium.u <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5023,7,5023,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1682));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5023,7,5023,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1682));
        }
      }
      tmp1683 = 1;
    }
  }
  threadData->lastEquationSolved = 10481;
}

/*
equation index: 10482
type: ALGORITHM

  assert(junOut.vol.dynBal.medium.R >= 0.0 and junOut.vol.dynBal.medium.R <= 1e7, "Variable violating min/max constraint: 0.0 <= junOut.vol.dynBal.medium.R <= 1e7, has value: " + String(junOut.vol.dynBal.medium.R, "g"));
*/
void logic2_raw_eqFunction_10482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10482};
  modelica_boolean tmp1684;
  modelica_boolean tmp1685;
  static const MMC_DEFSTRINGLIT(tmp1686,92,"Variable violating min/max constraint: 0.0 <= junOut.vol.dynBal.medium.R <= 1e7, has value: ");
  modelica_string tmp1687;
  modelica_metatype tmpMeta1688;
  static int tmp1689 = 0;
  if(!tmp1689)
  {
    tmp1684 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* junOut.vol.dynBal.medium.R variable */),0.0);
    tmp1685 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* junOut.vol.dynBal.medium.R variable */),1e7);
    if(!(tmp1684 && tmp1685))
    {
      tmp1687 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* junOut.vol.dynBal.medium.R variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1688 = stringAppend(MMC_REFSTRINGLIT(tmp1686),tmp1687);
      {
        const char* assert_cond = "(junOut.vol.dynBal.medium.R >= 0.0 and junOut.vol.dynBal.medium.R <= 1e7)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5024,7,5024,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1688));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5024,7,5024,71,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1688));
        }
      }
      tmp1689 = 1;
    }
  }
  threadData->lastEquationSolved = 10482;
}

/*
equation index: 10483
type: ALGORITHM

  assert(junOut.vol.dynBal.medium.MM >= 0.001 and junOut.vol.dynBal.medium.MM <= 0.25, "Variable violating min/max constraint: 0.001 <= junOut.vol.dynBal.medium.MM <= 0.25, has value: " + String(junOut.vol.dynBal.medium.MM, "g"));
*/
void logic2_raw_eqFunction_10483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10483};
  modelica_boolean tmp1690;
  modelica_boolean tmp1691;
  static const MMC_DEFSTRINGLIT(tmp1692,96,"Variable violating min/max constraint: 0.001 <= junOut.vol.dynBal.medium.MM <= 0.25, has value: ");
  modelica_string tmp1693;
  modelica_metatype tmpMeta1694;
  static int tmp1695 = 0;
  if(!tmp1695)
  {
    tmp1690 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* junOut.vol.dynBal.medium.MM variable */),0.001);
    tmp1691 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* junOut.vol.dynBal.medium.MM variable */),0.25);
    if(!(tmp1690 && tmp1691))
    {
      tmp1693 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* junOut.vol.dynBal.medium.MM variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1694 = stringAppend(MMC_REFSTRINGLIT(tmp1692),tmp1693);
      {
        const char* assert_cond = "(junOut.vol.dynBal.medium.MM >= 0.001 and junOut.vol.dynBal.medium.MM <= 0.25)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5025,7,5025,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1694));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",5025,7,5025,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1694));
        }
      }
      tmp1695 = 1;
    }
  }
  threadData->lastEquationSolved = 10483;
}

/*
equation index: 10484
type: ALGORITHM

  assert(junOut.vol.dynBal.m >= 0.0, "Variable violating min constraint: 0.0 <= junOut.vol.dynBal.m, has value: " + String(junOut.vol.dynBal.m, "g"));
*/
void logic2_raw_eqFunction_10484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10484};
  modelica_boolean tmp1696;
  static const MMC_DEFSTRINGLIT(tmp1697,74,"Variable violating min constraint: 0.0 <= junOut.vol.dynBal.m, has value: ");
  modelica_string tmp1698;
  modelica_metatype tmpMeta1699;
  static int tmp1700 = 0;
  if(!tmp1700)
  {
    tmp1696 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* junOut.vol.dynBal.m STATE(1,junOut.vol.dynBal.mb_flow) */),0.0);
    if(!tmp1696)
    {
      tmp1698 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* junOut.vol.dynBal.m STATE(1,junOut.vol.dynBal.mb_flow) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1699 = stringAppend(MMC_REFSTRINGLIT(tmp1697),tmp1698);
      {
        const char* assert_cond = "(junOut.vol.dynBal.m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",94,3,98,20,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1699));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",94,3,98,20,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1699));
        }
      }
      tmp1700 = 1;
    }
  }
  threadData->lastEquationSolved = 10484;
}

/*
equation index: 10485
type: ALGORITHM

  assert(junOut.vol.dynBal.mXi[1] >= 0.0, "Variable violating min constraint: 0.0 <= junOut.vol.dynBal.mXi[1], has value: " + String(junOut.vol.dynBal.mXi[1], "g"));
*/
void logic2_raw_eqFunction_10485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10485};
  modelica_boolean tmp1701;
  static const MMC_DEFSTRINGLIT(tmp1702,79,"Variable violating min constraint: 0.0 <= junOut.vol.dynBal.mXi[1], has value: ");
  modelica_string tmp1703;
  modelica_metatype tmpMeta1704;
  static int tmp1705 = 0;
  if(!tmp1705)
  {
    tmp1701 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* junOut.vol.dynBal.mXi[1] STATE(1) */),0.0);
    if(!tmp1701)
    {
      tmp1703 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* junOut.vol.dynBal.mXi[1] STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1704 = stringAppend(MMC_REFSTRINGLIT(tmp1702),tmp1703);
      {
        const char* assert_cond = "(junOut.vol.dynBal.mXi[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",100,3,102,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1704));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",100,3,102,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1704));
        }
      }
      tmp1705 = 1;
    }
  }
  threadData->lastEquationSolved = 10485;
}

/*
equation index: 10486
type: ALGORITHM

  assert(junOut.vol.dynBal.ports_H_flow[1] >= -1e8 and junOut.vol.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= junOut.vol.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(junOut.vol.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10486};
  modelica_boolean tmp1706;
  modelica_boolean tmp1707;
  static const MMC_DEFSTRINGLIT(tmp1708,100,"Variable violating min/max constraint: -1e8 <= junOut.vol.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp1709;
  modelica_metatype tmpMeta1710;
  static int tmp1711 = 0;
  if(!tmp1711)
  {
    tmp1706 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1000]] /* junOut.vol.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp1707 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1000]] /* junOut.vol.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp1706 && tmp1707))
    {
      tmp1709 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1000]] /* junOut.vol.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1710 = stringAppend(MMC_REFSTRINGLIT(tmp1708),tmp1709);
      {
        const char* assert_cond = "(junOut.vol.dynBal.ports_H_flow[1] >= -1e8 and junOut.vol.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1710));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1710));
        }
      }
      tmp1711 = 1;
    }
  }
  threadData->lastEquationSolved = 10486;
}

/*
equation index: 10487
type: ALGORITHM

  assert(junOut.vol.dynBal.ports_H_flow[2] >= -1e8 and junOut.vol.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= junOut.vol.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(junOut.vol.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10487};
  modelica_boolean tmp1712;
  modelica_boolean tmp1713;
  static const MMC_DEFSTRINGLIT(tmp1714,100,"Variable violating min/max constraint: -1e8 <= junOut.vol.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp1715;
  modelica_metatype tmpMeta1716;
  static int tmp1717 = 0;
  if(!tmp1717)
  {
    tmp1712 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* junOut.vol.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp1713 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* junOut.vol.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp1712 && tmp1713))
    {
      tmp1715 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* junOut.vol.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1716 = stringAppend(MMC_REFSTRINGLIT(tmp1714),tmp1715);
      {
        const char* assert_cond = "(junOut.vol.dynBal.ports_H_flow[2] >= -1e8 and junOut.vol.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1716));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1716));
        }
      }
      tmp1717 = 1;
    }
  }
  threadData->lastEquationSolved = 10487;
}

/*
equation index: 10488
type: ALGORITHM

  assert(junOut.vol.dynBal.ports_H_flow[3] >= -1e8 and junOut.vol.dynBal.ports_H_flow[3] <= 1e8, "Variable violating min/max constraint: -1e8 <= junOut.vol.dynBal.ports_H_flow[3] <= 1e8, has value: " + String(junOut.vol.dynBal.ports_H_flow[3], "g"));
*/
void logic2_raw_eqFunction_10488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10488};
  modelica_boolean tmp1718;
  modelica_boolean tmp1719;
  static const MMC_DEFSTRINGLIT(tmp1720,100,"Variable violating min/max constraint: -1e8 <= junOut.vol.dynBal.ports_H_flow[3] <= 1e8, has value: ");
  modelica_string tmp1721;
  modelica_metatype tmpMeta1722;
  static int tmp1723 = 0;
  if(!tmp1723)
  {
    tmp1718 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* junOut.vol.dynBal.ports_H_flow[3] variable */),-1e8);
    tmp1719 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* junOut.vol.dynBal.ports_H_flow[3] variable */),1e8);
    if(!(tmp1718 && tmp1719))
    {
      tmp1721 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* junOut.vol.dynBal.ports_H_flow[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1722 = stringAppend(MMC_REFSTRINGLIT(tmp1720),tmp1721);
      {
        const char* assert_cond = "(junOut.vol.dynBal.ports_H_flow[3] >= -1e8 and junOut.vol.dynBal.ports_H_flow[3] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1722));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1722));
        }
      }
      tmp1723 = 1;
    }
  }
  threadData->lastEquationSolved = 10488;
}

/*
equation index: 10489
type: ALGORITHM

  assert(pumCHW2.port_a.p >= 0.0 and pumCHW2.port_a.p <= 1e8, "Variable violating min/max constraint: 0.0 <= pumCHW2.port_a.p <= 1e8, has value: " + String(pumCHW2.port_a.p, "g"));
*/
void logic2_raw_eqFunction_10489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10489};
  modelica_boolean tmp1724;
  modelica_boolean tmp1725;
  static const MMC_DEFSTRINGLIT(tmp1726,82,"Variable violating min/max constraint: 0.0 <= pumCHW2.port_a.p <= 1e8, has value: ");
  modelica_string tmp1727;
  modelica_metatype tmpMeta1728;
  static int tmp1729 = 0;
  if(!tmp1729)
  {
    tmp1724 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1100]] /* pumCHW2.port_a.p variable */),0.0);
    tmp1725 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1100]] /* pumCHW2.port_a.p variable */),1e8);
    if(!(tmp1724 && tmp1725))
    {
      tmp1727 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1100]] /* pumCHW2.port_a.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1728 = stringAppend(MMC_REFSTRINGLIT(tmp1726),tmp1727);
      {
        const char* assert_cond = "(pumCHW2.port_a.p >= 0.0 and pumCHW2.port_a.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1728));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1728));
        }
      }
      tmp1729 = 1;
    }
  }
  threadData->lastEquationSolved = 10489;
}

/*
equation index: 10490
type: ALGORITHM

  assert(pumCHW2.heatPort.T >= 1.0 and pumCHW2.heatPort.T <= 1e4, "Variable violating min/max constraint: 1.0 <= pumCHW2.heatPort.T <= 1e4, has value: " + String(pumCHW2.heatPort.T, "g"));
*/
void logic2_raw_eqFunction_10490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10490};
  modelica_boolean tmp1730;
  modelica_boolean tmp1731;
  static const MMC_DEFSTRINGLIT(tmp1732,84,"Variable violating min/max constraint: 1.0 <= pumCHW2.heatPort.T <= 1e4, has value: ");
  modelica_string tmp1733;
  modelica_metatype tmpMeta1734;
  static int tmp1735 = 0;
  if(!tmp1735)
  {
    tmp1730 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1099]] /* pumCHW2.heatPort.T variable */),1.0);
    tmp1731 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1099]] /* pumCHW2.heatPort.T variable */),1e4);
    if(!(tmp1730 && tmp1731))
    {
      tmp1733 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1099]] /* pumCHW2.heatPort.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1734 = stringAppend(MMC_REFSTRINGLIT(tmp1732),tmp1733);
      {
        const char* assert_cond = "(pumCHW2.heatPort.T >= 1.0 and pumCHW2.heatPort.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1734));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1734));
        }
      }
      tmp1735 = 1;
    }
  }
  threadData->lastEquationSolved = 10490;
}

/*
equation index: 10491
type: ALGORITHM

  assert(pumCHW2.vol.dynBal.medium.T >= 1.0 and pumCHW2.vol.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= pumCHW2.vol.dynBal.medium.T <= 1e4, has value: " + String(pumCHW2.vol.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10491};
  modelica_boolean tmp1736;
  modelica_boolean tmp1737;
  static const MMC_DEFSTRINGLIT(tmp1738,93,"Variable violating min/max constraint: 1.0 <= pumCHW2.vol.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp1739;
  modelica_metatype tmpMeta1740;
  static int tmp1741 = 0;
  if(!tmp1741)
  {
    tmp1736 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* pumCHW2.vol.dynBal.medium.T variable */),1.0);
    tmp1737 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* pumCHW2.vol.dynBal.medium.T variable */),1e4);
    if(!(tmp1736 && tmp1737))
    {
      tmp1739 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* pumCHW2.vol.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1740 = stringAppend(MMC_REFSTRINGLIT(tmp1738),tmp1739);
      {
        const char* assert_cond = "(pumCHW2.vol.dynBal.medium.T >= 1.0 and pumCHW2.vol.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1740));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1740));
        }
      }
      tmp1741 = 1;
    }
  }
  threadData->lastEquationSolved = 10491;
}

/*
equation index: 10492
type: ALGORITHM

  assert(pumCHW2.vol.dynBal.ports_H_flow[1] >= -1e8 and pumCHW2.vol.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= pumCHW2.vol.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(pumCHW2.vol.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10492};
  modelica_boolean tmp1742;
  modelica_boolean tmp1743;
  static const MMC_DEFSTRINGLIT(tmp1744,101,"Variable violating min/max constraint: -1e8 <= pumCHW2.vol.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp1745;
  modelica_metatype tmpMeta1746;
  static int tmp1747 = 0;
  if(!tmp1747)
  {
    tmp1742 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* pumCHW2.vol.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp1743 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* pumCHW2.vol.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp1742 && tmp1743))
    {
      tmp1745 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* pumCHW2.vol.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1746 = stringAppend(MMC_REFSTRINGLIT(tmp1744),tmp1745);
      {
        const char* assert_cond = "(pumCHW2.vol.dynBal.ports_H_flow[1] >= -1e8 and pumCHW2.vol.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1746));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1746));
        }
      }
      tmp1747 = 1;
    }
  }
  threadData->lastEquationSolved = 10492;
}

/*
equation index: 10493
type: ALGORITHM

  assert(pumCHW2.vol.dynBal.ports_H_flow[2] >= -1e8 and pumCHW2.vol.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= pumCHW2.vol.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(pumCHW2.vol.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10493};
  modelica_boolean tmp1748;
  modelica_boolean tmp1749;
  static const MMC_DEFSTRINGLIT(tmp1750,101,"Variable violating min/max constraint: -1e8 <= pumCHW2.vol.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp1751;
  modelica_metatype tmpMeta1752;
  static int tmp1753 = 0;
  if(!tmp1753)
  {
    tmp1748 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* pumCHW2.vol.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp1749 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* pumCHW2.vol.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp1748 && tmp1749))
    {
      tmp1751 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* pumCHW2.vol.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1752 = stringAppend(MMC_REFSTRINGLIT(tmp1750),tmp1751);
      {
        const char* assert_cond = "(pumCHW2.vol.dynBal.ports_H_flow[2] >= -1e8 and pumCHW2.vol.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1752));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1752));
        }
      }
      tmp1753 = 1;
    }
  }
  threadData->lastEquationSolved = 10493;
}

/*
equation index: 10494
type: ALGORITHM

  assert(val8.port_b.h_outflow >= -1e10 and val8.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= val8.port_b.h_outflow <= 1e10, has value: " + String(val8.port_b.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10494};
  modelica_boolean tmp1754;
  modelica_boolean tmp1755;
  static const MMC_DEFSTRINGLIT(tmp1756,90,"Variable violating min/max constraint: -1e10 <= val8.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp1757;
  modelica_metatype tmpMeta1758;
  static int tmp1759 = 0;
  if(!tmp1759)
  {
    tmp1754 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* val8.port_b.h_outflow variable */),-1e10);
    tmp1755 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* val8.port_b.h_outflow variable */),1e10);
    if(!(tmp1754 && tmp1755))
    {
      tmp1757 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* val8.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1758 = stringAppend(MMC_REFSTRINGLIT(tmp1756),tmp1757);
      {
        const char* assert_cond = "(val8.port_b.h_outflow >= -1e10 and val8.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1758));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1758));
        }
      }
      tmp1759 = 1;
    }
  }
  threadData->lastEquationSolved = 10494;
}

/*
equation index: 10495
type: ALGORITHM

  assert(val8.m_flow >= -1e5 and val8.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= val8.m_flow <= 1e5, has value: " + String(val8.m_flow, "g"));
*/
void logic2_raw_eqFunction_10495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10495};
  modelica_boolean tmp1760;
  modelica_boolean tmp1761;
  static const MMC_DEFSTRINGLIT(tmp1762,78,"Variable violating min/max constraint: -1e5 <= val8.m_flow <= 1e5, has value: ");
  modelica_string tmp1763;
  modelica_metatype tmpMeta1764;
  static int tmp1765 = 0;
  if(!tmp1765)
  {
    tmp1760 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */),-1e5);
    tmp1761 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */),1e5);
    if(!(tmp1760 && tmp1761))
    {
      tmp1763 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1764 = stringAppend(MMC_REFSTRINGLIT(tmp1762),tmp1763);
      {
        const char* assert_cond = "(val8.m_flow >= -1e5 and val8.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1764));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1764));
        }
      }
      tmp1765 = 1;
    }
  }
  threadData->lastEquationSolved = 10495;
}

/*
equation index: 10496
type: ALGORITHM

  assert(val8.kVal >= 2.2250738585072014e-308, "Variable violating min constraint: 2.2250738585072014e-308 <= val8.kVal, has value: " + String(val8.kVal, "g"));
*/
void logic2_raw_eqFunction_10496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10496};
  modelica_boolean tmp1766;
  static const MMC_DEFSTRINGLIT(tmp1767,84,"Variable violating min constraint: 2.2250738585072014e-308 <= val8.kVal, has value: ");
  modelica_string tmp1768;
  modelica_metatype tmpMeta1769;
  static int tmp1770 = 0;
  if(!tmp1770)
  {
    tmp1766 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val8.kVal variable */),2.2250738585072014e-308);
    if(!tmp1766)
    {
      tmp1768 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val8.kVal variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1769 = stringAppend(MMC_REFSTRINGLIT(tmp1767),tmp1768);
      {
        const char* assert_cond = "(val8.kVal >= 2.2250738585072014e-308)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",24,3,25,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1769));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",24,3,25,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1769));
        }
      }
      tmp1770 = 1;
    }
  }
  threadData->lastEquationSolved = 10496;
}

/*
equation index: 10497
type: ALGORITHM

  assert(val8.k >= 2.2250738585072014e-308, "Variable violating min constraint: 2.2250738585072014e-308 <= val8.k, has value: " + String(val8.k, "g"));
*/
void logic2_raw_eqFunction_10497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10497};
  modelica_boolean tmp1771;
  static const MMC_DEFSTRINGLIT(tmp1772,81,"Variable violating min constraint: 2.2250738585072014e-308 <= val8.k, has value: ");
  modelica_string tmp1773;
  modelica_metatype tmpMeta1774;
  static int tmp1775 = 0;
  if(!tmp1775)
  {
    tmp1771 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1223]] /* val8.k variable */),2.2250738585072014e-308);
    if(!tmp1771)
    {
      tmp1773 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1223]] /* val8.k variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1774 = stringAppend(MMC_REFSTRINGLIT(tmp1772),tmp1773);
      {
        const char* assert_cond = "(val8.k >= 2.2250738585072014e-308)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",26,3,27,95,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1774));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",26,3,27,95,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1774));
        }
      }
      tmp1775 = 1;
    }
  }
  threadData->lastEquationSolved = 10497;
}

/*
equation index: 10498
type: ALGORITHM

  assert(TCHWChi2In.T >= 0.0, "Variable violating min constraint: 0.0 <= TCHWChi2In.T, has value: " + String(TCHWChi2In.T, "g"));
*/
void logic2_raw_eqFunction_10498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10498};
  modelica_boolean tmp1776;
  static const MMC_DEFSTRINGLIT(tmp1777,67,"Variable violating min constraint: 0.0 <= TCHWChi2In.T, has value: ");
  modelica_string tmp1778;
  modelica_metatype tmpMeta1779;
  static int tmp1780 = 0;
  if(!tmp1780)
  {
    tmp1776 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* TCHWChi2In.T STATE(1) */),0.0);
    if(!tmp1776)
    {
      tmp1778 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* TCHWChi2In.T STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1779 = stringAppend(MMC_REFSTRINGLIT(tmp1777),tmp1778);
      {
        const char* assert_cond = "(TCHWChi2In.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1779));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1779));
        }
      }
      tmp1780 = 1;
    }
  }
  threadData->lastEquationSolved = 10498;
}

/*
equation index: 10499
type: ALGORITHM

  assert(TCHWChi2In.TMed >= 1.0 and TCHWChi2In.TMed <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWChi2In.TMed <= 1e4, has value: " + String(TCHWChi2In.TMed, "g"));
*/
void logic2_raw_eqFunction_10499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10499};
  modelica_boolean tmp1781;
  modelica_boolean tmp1782;
  static const MMC_DEFSTRINGLIT(tmp1783,81,"Variable violating min/max constraint: 1.0 <= TCHWChi2In.TMed <= 1e4, has value: ");
  modelica_string tmp1784;
  modelica_metatype tmpMeta1785;
  static int tmp1786 = 0;
  if(!tmp1786)
  {
    tmp1781 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* TCHWChi2In.TMed variable */),1.0);
    tmp1782 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* TCHWChi2In.TMed variable */),1e4);
    if(!(tmp1781 && tmp1782))
    {
      tmp1784 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* TCHWChi2In.TMed variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1785 = stringAppend(MMC_REFSTRINGLIT(tmp1783),tmp1784);
      {
        const char* assert_cond = "(TCHWChi2In.TMed >= 1.0 and TCHWChi2In.TMed <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1785));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1785));
        }
      }
      tmp1786 = 1;
    }
  }
  threadData->lastEquationSolved = 10499;
}

/*
equation index: 10500
type: ALGORITHM

  assert(TCHWChi2In.T_a_inflow >= 1.0 and TCHWChi2In.T_a_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWChi2In.T_a_inflow <= 1e4, has value: " + String(TCHWChi2In.T_a_inflow, "g"));
*/
void logic2_raw_eqFunction_10500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10500};
  modelica_boolean tmp1787;
  modelica_boolean tmp1788;
  static const MMC_DEFSTRINGLIT(tmp1789,87,"Variable violating min/max constraint: 1.0 <= TCHWChi2In.T_a_inflow <= 1e4, has value: ");
  modelica_string tmp1790;
  modelica_metatype tmpMeta1791;
  static int tmp1792 = 0;
  if(!tmp1792)
  {
    tmp1787 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* TCHWChi2In.T_a_inflow variable */),1.0);
    tmp1788 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* TCHWChi2In.T_a_inflow variable */),1e4);
    if(!(tmp1787 && tmp1788))
    {
      tmp1790 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* TCHWChi2In.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1791 = stringAppend(MMC_REFSTRINGLIT(tmp1789),tmp1790);
      {
        const char* assert_cond = "(TCHWChi2In.T_a_inflow >= 1.0 and TCHWChi2In.T_a_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1791));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1791));
        }
      }
      tmp1792 = 1;
    }
  }
  threadData->lastEquationSolved = 10500;
}

/*
equation index: 10501
type: ALGORITHM

  assert(TCHWChi2In.T_b_inflow >= 1.0 and TCHWChi2In.T_b_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWChi2In.T_b_inflow <= 1e4, has value: " + String(TCHWChi2In.T_b_inflow, "g"));
*/
void logic2_raw_eqFunction_10501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10501};
  modelica_boolean tmp1793;
  modelica_boolean tmp1794;
  static const MMC_DEFSTRINGLIT(tmp1795,87,"Variable violating min/max constraint: 1.0 <= TCHWChi2In.T_b_inflow <= 1e4, has value: ");
  modelica_string tmp1796;
  modelica_metatype tmpMeta1797;
  static int tmp1798 = 0;
  if(!tmp1798)
  {
    tmp1793 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* TCHWChi2In.T_b_inflow variable */),1.0);
    tmp1794 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* TCHWChi2In.T_b_inflow variable */),1e4);
    if(!(tmp1793 && tmp1794))
    {
      tmp1796 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* TCHWChi2In.T_b_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1797 = stringAppend(MMC_REFSTRINGLIT(tmp1795),tmp1796);
      {
        const char* assert_cond = "(TCHWChi2In.T_b_inflow >= 1.0 and TCHWChi2In.T_b_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1797));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1797));
        }
      }
      tmp1798 = 1;
    }
  }
  threadData->lastEquationSolved = 10501;
}

/*
equation index: 10502
type: ALGORITHM

  assert(TCHWChi2Out.T >= 0.0, "Variable violating min constraint: 0.0 <= TCHWChi2Out.T, has value: " + String(TCHWChi2Out.T, "g"));
*/
void logic2_raw_eqFunction_10502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10502};
  modelica_boolean tmp1799;
  static const MMC_DEFSTRINGLIT(tmp1800,68,"Variable violating min constraint: 0.0 <= TCHWChi2Out.T, has value: ");
  modelica_string tmp1801;
  modelica_metatype tmpMeta1802;
  static int tmp1803 = 0;
  if(!tmp1803)
  {
    tmp1799 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* TCHWChi2Out.T STATE(1) */),0.0);
    if(!tmp1799)
    {
      tmp1801 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* TCHWChi2Out.T STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1802 = stringAppend(MMC_REFSTRINGLIT(tmp1800),tmp1801);
      {
        const char* assert_cond = "(TCHWChi2Out.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1802));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1802));
        }
      }
      tmp1803 = 1;
    }
  }
  threadData->lastEquationSolved = 10502;
}

/*
equation index: 10503
type: ALGORITHM

  assert(TCHWChi2Out.TMed >= 1.0 and TCHWChi2Out.TMed <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWChi2Out.TMed <= 1e4, has value: " + String(TCHWChi2Out.TMed, "g"));
*/
void logic2_raw_eqFunction_10503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10503};
  modelica_boolean tmp1804;
  modelica_boolean tmp1805;
  static const MMC_DEFSTRINGLIT(tmp1806,82,"Variable violating min/max constraint: 1.0 <= TCHWChi2Out.TMed <= 1e4, has value: ");
  modelica_string tmp1807;
  modelica_metatype tmpMeta1808;
  static int tmp1809 = 0;
  if(!tmp1809)
  {
    tmp1804 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* TCHWChi2Out.TMed variable */),1.0);
    tmp1805 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* TCHWChi2Out.TMed variable */),1e4);
    if(!(tmp1804 && tmp1805))
    {
      tmp1807 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* TCHWChi2Out.TMed variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1808 = stringAppend(MMC_REFSTRINGLIT(tmp1806),tmp1807);
      {
        const char* assert_cond = "(TCHWChi2Out.TMed >= 1.0 and TCHWChi2Out.TMed <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1808));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1808));
        }
      }
      tmp1809 = 1;
    }
  }
  threadData->lastEquationSolved = 10503;
}

/*
equation index: 10504
type: ALGORITHM

  assert(TCHWChi2Out.T_a_inflow >= 1.0 and TCHWChi2Out.T_a_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWChi2Out.T_a_inflow <= 1e4, has value: " + String(TCHWChi2Out.T_a_inflow, "g"));
*/
void logic2_raw_eqFunction_10504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10504};
  modelica_boolean tmp1810;
  modelica_boolean tmp1811;
  static const MMC_DEFSTRINGLIT(tmp1812,88,"Variable violating min/max constraint: 1.0 <= TCHWChi2Out.T_a_inflow <= 1e4, has value: ");
  modelica_string tmp1813;
  modelica_metatype tmpMeta1814;
  static int tmp1815 = 0;
  if(!tmp1815)
  {
    tmp1810 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* TCHWChi2Out.T_a_inflow variable */),1.0);
    tmp1811 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* TCHWChi2Out.T_a_inflow variable */),1e4);
    if(!(tmp1810 && tmp1811))
    {
      tmp1813 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* TCHWChi2Out.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1814 = stringAppend(MMC_REFSTRINGLIT(tmp1812),tmp1813);
      {
        const char* assert_cond = "(TCHWChi2Out.T_a_inflow >= 1.0 and TCHWChi2Out.T_a_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1814));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1814));
        }
      }
      tmp1815 = 1;
    }
  }
  threadData->lastEquationSolved = 10504;
}

/*
equation index: 10505
type: ALGORITHM

  assert(TCHWChi2Out.T_b_inflow >= 1.0 and TCHWChi2Out.T_b_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCHWChi2Out.T_b_inflow <= 1e4, has value: " + String(TCHWChi2Out.T_b_inflow, "g"));
*/
void logic2_raw_eqFunction_10505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10505};
  modelica_boolean tmp1816;
  modelica_boolean tmp1817;
  static const MMC_DEFSTRINGLIT(tmp1818,88,"Variable violating min/max constraint: 1.0 <= TCHWChi2Out.T_b_inflow <= 1e4, has value: ");
  modelica_string tmp1819;
  modelica_metatype tmpMeta1820;
  static int tmp1821 = 0;
  if(!tmp1821)
  {
    tmp1816 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* TCHWChi2Out.T_b_inflow variable */),1.0);
    tmp1817 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* TCHWChi2Out.T_b_inflow variable */),1e4);
    if(!(tmp1816 && tmp1817))
    {
      tmp1819 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* TCHWChi2Out.T_b_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1820 = stringAppend(MMC_REFSTRINGLIT(tmp1818),tmp1819);
      {
        const char* assert_cond = "(TCHWChi2Out.T_b_inflow >= 1.0 and TCHWChi2Out.T_b_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1820));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1820));
        }
      }
      tmp1821 = 1;
    }
  }
  threadData->lastEquationSolved = 10505;
}

/*
equation index: 10506
type: ALGORITHM

  assert(cooTow2.vol.p >= 0.0 and cooTow2.vol.p <= 1e8, "Variable violating min/max constraint: 0.0 <= cooTow2.vol.p <= 1e8, has value: " + String(cooTow2.vol.p, "g"));
*/
void logic2_raw_eqFunction_10506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10506};
  modelica_boolean tmp1822;
  modelica_boolean tmp1823;
  static const MMC_DEFSTRINGLIT(tmp1824,79,"Variable violating min/max constraint: 0.0 <= cooTow2.vol.p <= 1e8, has value: ");
  modelica_string tmp1825;
  modelica_metatype tmpMeta1826;
  static int tmp1827 = 0;
  if(!tmp1827)
  {
    tmp1822 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cooTow2.vol.p variable */),0.0);
    tmp1823 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cooTow2.vol.p variable */),1e8);
    if(!(tmp1822 && tmp1823))
    {
      tmp1825 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cooTow2.vol.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1826 = stringAppend(MMC_REFSTRINGLIT(tmp1824),tmp1825);
      {
        const char* assert_cond = "(cooTow2.vol.p >= 0.0 and cooTow2.vol.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",42,3,43,28,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1826));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",42,3,43,28,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1826));
        }
      }
      tmp1827 = 1;
    }
  }
  threadData->lastEquationSolved = 10506;
}

/*
equation index: 10507
type: ALGORITHM

  assert(cooTow2.vol.dynBal.medium.T >= 1.0 and cooTow2.vol.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= cooTow2.vol.dynBal.medium.T <= 1e4, has value: " + String(cooTow2.vol.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10507};
  modelica_boolean tmp1828;
  modelica_boolean tmp1829;
  static const MMC_DEFSTRINGLIT(tmp1830,93,"Variable violating min/max constraint: 1.0 <= cooTow2.vol.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp1831;
  modelica_metatype tmpMeta1832;
  static int tmp1833 = 0;
  if(!tmp1833)
  {
    tmp1828 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* cooTow2.vol.dynBal.medium.T DUMMY_STATE */),1.0);
    tmp1829 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* cooTow2.vol.dynBal.medium.T DUMMY_STATE */),1e4);
    if(!(tmp1828 && tmp1829))
    {
      tmp1831 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* cooTow2.vol.dynBal.medium.T DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1832 = stringAppend(MMC_REFSTRINGLIT(tmp1830),tmp1831);
      {
        const char* assert_cond = "(cooTow2.vol.dynBal.medium.T >= 1.0 and cooTow2.vol.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1832));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1832));
        }
      }
      tmp1833 = 1;
    }
  }
  threadData->lastEquationSolved = 10507;
}

/*
equation index: 10508
type: ALGORITHM

  assert(cooTow2.vol.dynBal.ports_H_flow[1] >= -1e8 and cooTow2.vol.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooTow2.vol.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(cooTow2.vol.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10508};
  modelica_boolean tmp1834;
  modelica_boolean tmp1835;
  static const MMC_DEFSTRINGLIT(tmp1836,101,"Variable violating min/max constraint: -1e8 <= cooTow2.vol.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp1837;
  modelica_metatype tmpMeta1838;
  static int tmp1839 = 0;
  if(!tmp1839)
  {
    tmp1834 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp1835 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp1834 && tmp1835))
    {
      tmp1837 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1838 = stringAppend(MMC_REFSTRINGLIT(tmp1836),tmp1837);
      {
        const char* assert_cond = "(cooTow2.vol.dynBal.ports_H_flow[1] >= -1e8 and cooTow2.vol.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1838));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1838));
        }
      }
      tmp1839 = 1;
    }
  }
  threadData->lastEquationSolved = 10508;
}

/*
equation index: 10509
type: ALGORITHM

  assert(cooTow2.vol.dynBal.ports_H_flow[2] >= -1e8 and cooTow2.vol.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= cooTow2.vol.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(cooTow2.vol.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10509};
  modelica_boolean tmp1840;
  modelica_boolean tmp1841;
  static const MMC_DEFSTRINGLIT(tmp1842,101,"Variable violating min/max constraint: -1e8 <= cooTow2.vol.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp1843;
  modelica_metatype tmpMeta1844;
  static int tmp1845 = 0;
  if(!tmp1845)
  {
    tmp1840 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp1841 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp1840 && tmp1841))
    {
      tmp1843 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1844 = stringAppend(MMC_REFSTRINGLIT(tmp1842),tmp1843);
      {
        const char* assert_cond = "(cooTow2.vol.dynBal.ports_H_flow[2] >= -1e8 and cooTow2.vol.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1844));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1844));
        }
      }
      tmp1845 = 1;
    }
  }
  threadData->lastEquationSolved = 10509;
}

/*
equation index: 10510
type: ALGORITHM

  assert(cooTow2.TLvg >= 1.0 and cooTow2.TLvg <= 1e4, "Variable violating min/max constraint: 1.0 <= cooTow2.TLvg <= 1e4, has value: " + String(cooTow2.TLvg, "g"));
*/
void logic2_raw_eqFunction_10510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10510};
  modelica_boolean tmp1846;
  modelica_boolean tmp1847;
  static const MMC_DEFSTRINGLIT(tmp1848,78,"Variable violating min/max constraint: 1.0 <= cooTow2.TLvg <= 1e4, has value: ");
  modelica_string tmp1849;
  modelica_metatype tmpMeta1850;
  static int tmp1851 = 0;
  if(!tmp1851)
  {
    tmp1846 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.TLvg variable */),1.0);
    tmp1847 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.TLvg variable */),1e4);
    if(!(tmp1846 && tmp1847))
    {
      tmp1849 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.TLvg variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1850 = stringAppend(MMC_REFSTRINGLIT(tmp1848),tmp1849);
      {
        const char* assert_cond = "(cooTow2.TLvg >= 1.0 and cooTow2.TLvg <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/BaseClasses/CoolingTower.mo",6,3,7,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1850));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/BaseClasses/CoolingTower.mo",6,3,7,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1850));
        }
      }
      tmp1851 = 1;
    }
  }
  threadData->lastEquationSolved = 10510;
}

/*
equation index: 10511
type: ALGORITHM

  assert(cooTow2.TAppAct >= 0.0, "Variable violating min constraint: 0.0 <= cooTow2.TAppAct, has value: " + String(cooTow2.TAppAct, "g"));
*/
void logic2_raw_eqFunction_10511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10511};
  modelica_boolean tmp1852;
  static const MMC_DEFSTRINGLIT(tmp1853,70,"Variable violating min constraint: 0.0 <= cooTow2.TAppAct, has value: ");
  modelica_string tmp1854;
  modelica_metatype tmpMeta1855;
  static int tmp1856 = 0;
  if(!tmp1856)
  {
    tmp1852 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cooTow2.TAppAct variable */),0.0);
    if(!tmp1852)
    {
      tmp1854 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cooTow2.TAppAct variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1855 = stringAppend(MMC_REFSTRINGLIT(tmp1853),tmp1854);
      {
        const char* assert_cond = "(cooTow2.TAppAct >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/BaseClasses/CoolingTower.mo",10,3,11,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1855));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/BaseClasses/CoolingTower.mo",10,3,11,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1855));
        }
      }
      tmp1856 = 1;
    }
  }
  threadData->lastEquationSolved = 10511;
}

/*
equation index: 10512
type: ALGORITHM

  assert(cooTow2.FRWat >= 0.0 and cooTow2.FRWat <= 1.0, "Variable violating min/max constraint: 0.0 <= cooTow2.FRWat <= 1.0, has value: " + String(cooTow2.FRWat, "g"));
*/
void logic2_raw_eqFunction_10512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10512};
  modelica_boolean tmp1857;
  modelica_boolean tmp1858;
  static const MMC_DEFSTRINGLIT(tmp1859,79,"Variable violating min/max constraint: 0.0 <= cooTow2.FRWat <= 1.0, has value: ");
  modelica_string tmp1860;
  modelica_metatype tmpMeta1861;
  static int tmp1862 = 0;
  if(!tmp1862)
  {
    tmp1857 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */),0.0);
    tmp1858 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */),1.0);
    if(!(tmp1857 && tmp1858))
    {
      tmp1860 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1861 = stringAppend(MMC_REFSTRINGLIT(tmp1859),tmp1860);
      {
        const char* assert_cond = "(cooTow2.FRWat >= 0.0 and cooTow2.FRWat <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",49,3,50,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1861));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",49,3,50,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1861));
        }
      }
      tmp1862 = 1;
    }
  }
  threadData->lastEquationSolved = 10512;
}

/*
equation index: 10513
type: ALGORITHM

  assert(cooTow2.FRAir >= 0.0 and cooTow2.FRAir <= 1.0, "Variable violating min/max constraint: 0.0 <= cooTow2.FRAir <= 1.0, has value: " + String(cooTow2.FRAir, "g"));
*/
void logic2_raw_eqFunction_10513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10513};
  modelica_boolean tmp1863;
  modelica_boolean tmp1864;
  static const MMC_DEFSTRINGLIT(tmp1865,79,"Variable violating min/max constraint: 0.0 <= cooTow2.FRAir <= 1.0, has value: ");
  modelica_string tmp1866;
  modelica_metatype tmpMeta1867;
  static int tmp1868 = 0;
  if(!tmp1868)
  {
    tmp1863 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */),0.0);
    tmp1864 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */),1.0);
    if(!(tmp1863 && tmp1864))
    {
      tmp1866 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1867 = stringAppend(MMC_REFSTRINGLIT(tmp1865),tmp1866);
      {
        const char* assert_cond = "(cooTow2.FRAir >= 0.0 and cooTow2.FRAir <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",51,3,52,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1867));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",51,3,52,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1867));
        }
      }
      tmp1868 = 1;
    }
  }
  threadData->lastEquationSolved = 10513;
}

/*
equation index: 10514
type: ALGORITHM

  assert(cooTow2.TAppCor >= 0.0, "Variable violating min constraint: 0.0 <= cooTow2.TAppCor, has value: " + String(cooTow2.TAppCor, "g"));
*/
void logic2_raw_eqFunction_10514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10514};
  modelica_boolean tmp1869;
  static const MMC_DEFSTRINGLIT(tmp1870,70,"Variable violating min constraint: 0.0 <= cooTow2.TAppCor, has value: ");
  modelica_string tmp1871;
  modelica_metatype tmpMeta1872;
  static int tmp1873 = 0;
  if(!tmp1873)
  {
    tmp1869 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow2.TAppCor variable */),0.0);
    if(!tmp1869)
    {
      tmp1871 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow2.TAppCor variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1872 = stringAppend(MMC_REFSTRINGLIT(tmp1870),tmp1871);
      {
        const char* assert_cond = "(cooTow2.TAppCor >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",68,3,69,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1872));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",68,3,69,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1872));
        }
      }
      tmp1873 = 1;
    }
  }
  threadData->lastEquationSolved = 10514;
}

/*
equation index: 10515
type: ALGORITHM

  assert(cooTow2.TAppFreCon >= 0.0, "Variable violating min constraint: 0.0 <= cooTow2.TAppFreCon, has value: " + String(cooTow2.TAppFreCon, "g"));
*/
void logic2_raw_eqFunction_10515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10515};
  modelica_boolean tmp1874;
  static const MMC_DEFSTRINGLIT(tmp1875,73,"Variable violating min constraint: 0.0 <= cooTow2.TAppFreCon, has value: ");
  modelica_string tmp1876;
  modelica_metatype tmpMeta1877;
  static int tmp1878 = 0;
  if(!tmp1878)
  {
    tmp1874 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.TAppFreCon variable */),0.0);
    if(!tmp1874)
    {
      tmp1876 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.TAppFreCon variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1877 = stringAppend(MMC_REFSTRINGLIT(tmp1875),tmp1876);
      {
        const char* assert_cond = "(cooTow2.TAppFreCon >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",70,3,71,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1877));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",70,3,71,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1877));
        }
      }
      tmp1878 = 1;
    }
  }
  threadData->lastEquationSolved = 10515;
}

/*
equation index: 10516
type: ALGORITHM

  assert(cooTow2.T_a >= 0.0, "Variable violating min constraint: 0.0 <= cooTow2.T_a, has value: " + String(cooTow2.T_a, "g"));
*/
void logic2_raw_eqFunction_10516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10516};
  modelica_boolean tmp1879;
  static const MMC_DEFSTRINGLIT(tmp1880,66,"Variable violating min constraint: 0.0 <= cooTow2.T_a, has value: ");
  modelica_string tmp1881;
  modelica_metatype tmpMeta1882;
  static int tmp1883 = 0;
  if(!tmp1883)
  {
    tmp1879 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cooTow2.T_a variable */),0.0);
    if(!tmp1879)
    {
      tmp1881 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cooTow2.T_a variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1882 = stringAppend(MMC_REFSTRINGLIT(tmp1880),tmp1881);
      {
        const char* assert_cond = "(cooTow2.T_a >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",76,3,76,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1882));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",76,3,76,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1882));
        }
      }
      tmp1883 = 1;
    }
  }
  threadData->lastEquationSolved = 10516;
}

/*
equation index: 10517
type: ALGORITHM

  assert(cooTow2.T_b >= 0.0, "Variable violating min constraint: 0.0 <= cooTow2.T_b, has value: " + String(cooTow2.T_b, "g"));
*/
void logic2_raw_eqFunction_10517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10517};
  modelica_boolean tmp1884;
  static const MMC_DEFSTRINGLIT(tmp1885,66,"Variable violating min constraint: 0.0 <= cooTow2.T_b, has value: ");
  modelica_string tmp1886;
  modelica_metatype tmpMeta1887;
  static int tmp1888 = 0;
  if(!tmp1888)
  {
    tmp1884 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cooTow2.T_b variable */),0.0);
    if(!tmp1884)
    {
      tmp1886 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cooTow2.T_b variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1887 = stringAppend(MMC_REFSTRINGLIT(tmp1885),tmp1886);
      {
        const char* assert_cond = "(cooTow2.T_b >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",77,3,77,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1887));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",77,3,77,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1887));
        }
      }
      tmp1888 = 1;
    }
  }
  threadData->lastEquationSolved = 10517;
}

/*
equation index: 10518
type: ALGORITHM

  assert(pumCW2.heatPort.T >= 1.0 and pumCW2.heatPort.T <= 1e4, "Variable violating min/max constraint: 1.0 <= pumCW2.heatPort.T <= 1e4, has value: " + String(pumCW2.heatPort.T, "g"));
*/
void logic2_raw_eqFunction_10518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10518};
  modelica_boolean tmp1889;
  modelica_boolean tmp1890;
  static const MMC_DEFSTRINGLIT(tmp1891,83,"Variable violating min/max constraint: 1.0 <= pumCW2.heatPort.T <= 1e4, has value: ");
  modelica_string tmp1892;
  modelica_metatype tmpMeta1893;
  static int tmp1894 = 0;
  if(!tmp1894)
  {
    tmp1889 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* pumCW2.heatPort.T variable */),1.0);
    tmp1890 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* pumCW2.heatPort.T variable */),1e4);
    if(!(tmp1889 && tmp1890))
    {
      tmp1892 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* pumCW2.heatPort.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1893 = stringAppend(MMC_REFSTRINGLIT(tmp1891),tmp1892);
      {
        const char* assert_cond = "(pumCW2.heatPort.T >= 1.0 and pumCW2.heatPort.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1893));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1893));
        }
      }
      tmp1894 = 1;
    }
  }
  threadData->lastEquationSolved = 10518;
}

/*
equation index: 10519
type: ALGORITHM

  assert(pumCW2.vol.dynBal.medium.T >= 1.0 and pumCW2.vol.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= pumCW2.vol.dynBal.medium.T <= 1e4, has value: " + String(pumCW2.vol.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10519};
  modelica_boolean tmp1895;
  modelica_boolean tmp1896;
  static const MMC_DEFSTRINGLIT(tmp1897,92,"Variable violating min/max constraint: 1.0 <= pumCW2.vol.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp1898;
  modelica_metatype tmpMeta1899;
  static int tmp1900 = 0;
  if(!tmp1900)
  {
    tmp1895 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* pumCW2.vol.dynBal.medium.T variable */),1.0);
    tmp1896 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* pumCW2.vol.dynBal.medium.T variable */),1e4);
    if(!(tmp1895 && tmp1896))
    {
      tmp1898 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* pumCW2.vol.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1899 = stringAppend(MMC_REFSTRINGLIT(tmp1897),tmp1898);
      {
        const char* assert_cond = "(pumCW2.vol.dynBal.medium.T >= 1.0 and pumCW2.vol.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1899));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1899));
        }
      }
      tmp1900 = 1;
    }
  }
  threadData->lastEquationSolved = 10519;
}

/*
equation index: 10520
type: ALGORITHM

  assert(pumCW2.vol.dynBal.ports_H_flow[1] >= -1e8 and pumCW2.vol.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= pumCW2.vol.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(pumCW2.vol.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10520};
  modelica_boolean tmp1901;
  modelica_boolean tmp1902;
  static const MMC_DEFSTRINGLIT(tmp1903,100,"Variable violating min/max constraint: -1e8 <= pumCW2.vol.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp1904;
  modelica_metatype tmpMeta1905;
  static int tmp1906 = 0;
  if(!tmp1906)
  {
    tmp1901 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* pumCW2.vol.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp1902 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* pumCW2.vol.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp1901 && tmp1902))
    {
      tmp1904 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* pumCW2.vol.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1905 = stringAppend(MMC_REFSTRINGLIT(tmp1903),tmp1904);
      {
        const char* assert_cond = "(pumCW2.vol.dynBal.ports_H_flow[1] >= -1e8 and pumCW2.vol.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1905));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1905));
        }
      }
      tmp1906 = 1;
    }
  }
  threadData->lastEquationSolved = 10520;
}

/*
equation index: 10521
type: ALGORITHM

  assert(pumCW2.vol.dynBal.ports_H_flow[2] >= -1e8 and pumCW2.vol.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= pumCW2.vol.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(pumCW2.vol.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10521};
  modelica_boolean tmp1907;
  modelica_boolean tmp1908;
  static const MMC_DEFSTRINGLIT(tmp1909,100,"Variable violating min/max constraint: -1e8 <= pumCW2.vol.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp1910;
  modelica_metatype tmpMeta1911;
  static int tmp1912 = 0;
  if(!tmp1912)
  {
    tmp1907 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* pumCW2.vol.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp1908 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* pumCW2.vol.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp1907 && tmp1908))
    {
      tmp1910 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* pumCW2.vol.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1911 = stringAppend(MMC_REFSTRINGLIT(tmp1909),tmp1910);
      {
        const char* assert_cond = "(pumCW2.vol.dynBal.ports_H_flow[2] >= -1e8 and pumCW2.vol.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1911));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1911));
        }
      }
      tmp1912 = 1;
    }
  }
  threadData->lastEquationSolved = 10521;
}

/*
equation index: 10522
type: ALGORITHM

  assert(expVesChi2.port_a.h_outflow >= -1e10 and expVesChi2.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= expVesChi2.port_a.h_outflow <= 1e10, has value: " + String(expVesChi2.port_a.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10522};
  modelica_boolean tmp1913;
  modelica_boolean tmp1914;
  static const MMC_DEFSTRINGLIT(tmp1915,96,"Variable violating min/max constraint: -1e10 <= expVesChi2.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp1916;
  modelica_metatype tmpMeta1917;
  static int tmp1918 = 0;
  if(!tmp1918)
  {
    tmp1913 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* expVesChi2.port_a.h_outflow variable */),-1e10);
    tmp1914 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* expVesChi2.port_a.h_outflow variable */),1e10);
    if(!(tmp1913 && tmp1914))
    {
      tmp1916 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* expVesChi2.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1917 = stringAppend(MMC_REFSTRINGLIT(tmp1915),tmp1916);
      {
        const char* assert_cond = "(expVesChi2.port_a.h_outflow >= -1e10 and expVesChi2.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1917));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1917));
        }
      }
      tmp1918 = 1;
    }
  }
  threadData->lastEquationSolved = 10522;
}

/*
equation index: 10523
type: ALGORITHM

  assert(expVesChi2.m >= 0.0, "Variable violating min constraint: 0.0 <= expVesChi2.m, has value: " + String(expVesChi2.m, "g"));
*/
void logic2_raw_eqFunction_10523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10523};
  modelica_boolean tmp1919;
  static const MMC_DEFSTRINGLIT(tmp1920,67,"Variable violating min constraint: 0.0 <= expVesChi2.m, has value: ");
  modelica_string tmp1921;
  modelica_metatype tmpMeta1922;
  static int tmp1923 = 0;
  if(!tmp1923)
  {
    tmp1919 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* expVesChi2.m STATE(1) */),0.0);
    if(!tmp1919)
    {
      tmp1921 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* expVesChi2.m STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1922 = stringAppend(MMC_REFSTRINGLIT(tmp1920),tmp1921);
      {
        const char* assert_cond = "(expVesChi2.m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Storage/ExpansionVessel.mo",15,3,15,57,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1922));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Storage/ExpansionVessel.mo",15,3,15,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1922));
        }
      }
      tmp1923 = 1;
    }
  }
  threadData->lastEquationSolved = 10523;
}

/*
equation index: 10524
type: ALGORITHM

  assert(val7.m_flow >= -1e5 and val7.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= val7.m_flow <= 1e5, has value: " + String(val7.m_flow, "g"));
*/
void logic2_raw_eqFunction_10524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10524};
  modelica_boolean tmp1924;
  modelica_boolean tmp1925;
  static const MMC_DEFSTRINGLIT(tmp1926,78,"Variable violating min/max constraint: -1e5 <= val7.m_flow <= 1e5, has value: ");
  modelica_string tmp1927;
  modelica_metatype tmpMeta1928;
  static int tmp1929 = 0;
  if(!tmp1929)
  {
    tmp1924 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */),-1e5);
    tmp1925 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */),1e5);
    if(!(tmp1924 && tmp1925))
    {
      tmp1927 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1928 = stringAppend(MMC_REFSTRINGLIT(tmp1926),tmp1927);
      {
        const char* assert_cond = "(val7.m_flow >= -1e5 and val7.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1928));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1928));
        }
      }
      tmp1929 = 1;
    }
  }
  threadData->lastEquationSolved = 10524;
}

/*
equation index: 10525
type: ALGORITHM

  assert(val7.kVal >= 2.2250738585072014e-308, "Variable violating min constraint: 2.2250738585072014e-308 <= val7.kVal, has value: " + String(val7.kVal, "g"));
*/
void logic2_raw_eqFunction_10525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10525};
  modelica_boolean tmp1930;
  static const MMC_DEFSTRINGLIT(tmp1931,84,"Variable violating min constraint: 2.2250738585072014e-308 <= val7.kVal, has value: ");
  modelica_string tmp1932;
  modelica_metatype tmpMeta1933;
  static int tmp1934 = 0;
  if(!tmp1934)
  {
    tmp1930 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1219]] /* val7.kVal variable */),2.2250738585072014e-308);
    if(!tmp1930)
    {
      tmp1932 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1219]] /* val7.kVal variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1933 = stringAppend(MMC_REFSTRINGLIT(tmp1931),tmp1932);
      {
        const char* assert_cond = "(val7.kVal >= 2.2250738585072014e-308)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",24,3,25,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1933));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",24,3,25,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1933));
        }
      }
      tmp1934 = 1;
    }
  }
  threadData->lastEquationSolved = 10525;
}

/*
equation index: 10526
type: ALGORITHM

  assert(val7.k >= 2.2250738585072014e-308, "Variable violating min constraint: 2.2250738585072014e-308 <= val7.k, has value: " + String(val7.k, "g"));
*/
void logic2_raw_eqFunction_10526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10526};
  modelica_boolean tmp1935;
  static const MMC_DEFSTRINGLIT(tmp1936,81,"Variable violating min constraint: 2.2250738585072014e-308 <= val7.k, has value: ");
  modelica_string tmp1937;
  modelica_metatype tmpMeta1938;
  static int tmp1939 = 0;
  if(!tmp1939)
  {
    tmp1935 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1218]] /* val7.k variable */),2.2250738585072014e-308);
    if(!tmp1935)
    {
      tmp1937 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1218]] /* val7.k variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1938 = stringAppend(MMC_REFSTRINGLIT(tmp1936),tmp1937);
      {
        const char* assert_cond = "(val7.k >= 2.2250738585072014e-308)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",26,3,27,95,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1938));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",26,3,27,95,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1938));
        }
      }
      tmp1939 = 1;
    }
  }
  threadData->lastEquationSolved = 10526;
}

/*
equation index: 10527
type: ALGORITHM

  assert(TWCLeaTow2.port_b.h_outflow >= -1e10 and TWCLeaTow2.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= TWCLeaTow2.port_b.h_outflow <= 1e10, has value: " + String(TWCLeaTow2.port_b.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10527};
  modelica_boolean tmp1940;
  modelica_boolean tmp1941;
  static const MMC_DEFSTRINGLIT(tmp1942,96,"Variable violating min/max constraint: -1e10 <= TWCLeaTow2.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp1943;
  modelica_metatype tmpMeta1944;
  static int tmp1945 = 0;
  if(!tmp1945)
  {
    tmp1940 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* TWCLeaTow2.port_b.h_outflow variable */),-1e10);
    tmp1941 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* TWCLeaTow2.port_b.h_outflow variable */),1e10);
    if(!(tmp1940 && tmp1941))
    {
      tmp1943 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* TWCLeaTow2.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1944 = stringAppend(MMC_REFSTRINGLIT(tmp1942),tmp1943);
      {
        const char* assert_cond = "(TWCLeaTow2.port_b.h_outflow >= -1e10 and TWCLeaTow2.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1944));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1944));
        }
      }
      tmp1945 = 1;
    }
  }
  threadData->lastEquationSolved = 10527;
}

/*
equation index: 10528
type: ALGORITHM

  assert(TWCLeaTow2.T >= 0.0, "Variable violating min constraint: 0.0 <= TWCLeaTow2.T, has value: " + String(TWCLeaTow2.T, "g"));
*/
void logic2_raw_eqFunction_10528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10528};
  modelica_boolean tmp1946;
  static const MMC_DEFSTRINGLIT(tmp1947,67,"Variable violating min constraint: 0.0 <= TWCLeaTow2.T, has value: ");
  modelica_string tmp1948;
  modelica_metatype tmpMeta1949;
  static int tmp1950 = 0;
  if(!tmp1950)
  {
    tmp1946 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* TWCLeaTow2.T STATE(1) */),0.0);
    if(!tmp1946)
    {
      tmp1948 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* TWCLeaTow2.T STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1949 = stringAppend(MMC_REFSTRINGLIT(tmp1947),tmp1948);
      {
        const char* assert_cond = "(TWCLeaTow2.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1949));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1949));
        }
      }
      tmp1950 = 1;
    }
  }
  threadData->lastEquationSolved = 10528;
}

/*
equation index: 10529
type: ALGORITHM

  assert(TWCLeaTow2.TMed >= 1.0 and TWCLeaTow2.TMed <= 1e4, "Variable violating min/max constraint: 1.0 <= TWCLeaTow2.TMed <= 1e4, has value: " + String(TWCLeaTow2.TMed, "g"));
*/
void logic2_raw_eqFunction_10529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10529};
  modelica_boolean tmp1951;
  modelica_boolean tmp1952;
  static const MMC_DEFSTRINGLIT(tmp1953,81,"Variable violating min/max constraint: 1.0 <= TWCLeaTow2.TMed <= 1e4, has value: ");
  modelica_string tmp1954;
  modelica_metatype tmpMeta1955;
  static int tmp1956 = 0;
  if(!tmp1956)
  {
    tmp1951 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* TWCLeaTow2.TMed variable */),1.0);
    tmp1952 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* TWCLeaTow2.TMed variable */),1e4);
    if(!(tmp1951 && tmp1952))
    {
      tmp1954 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* TWCLeaTow2.TMed variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1955 = stringAppend(MMC_REFSTRINGLIT(tmp1953),tmp1954);
      {
        const char* assert_cond = "(TWCLeaTow2.TMed >= 1.0 and TWCLeaTow2.TMed <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1955));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1955));
        }
      }
      tmp1956 = 1;
    }
  }
  threadData->lastEquationSolved = 10529;
}

/*
equation index: 10530
type: ALGORITHM

  assert(TWCLeaTow2.T_a_inflow >= 1.0 and TWCLeaTow2.T_a_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TWCLeaTow2.T_a_inflow <= 1e4, has value: " + String(TWCLeaTow2.T_a_inflow, "g"));
*/
void logic2_raw_eqFunction_10530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10530};
  modelica_boolean tmp1957;
  modelica_boolean tmp1958;
  static const MMC_DEFSTRINGLIT(tmp1959,87,"Variable violating min/max constraint: 1.0 <= TWCLeaTow2.T_a_inflow <= 1e4, has value: ");
  modelica_string tmp1960;
  modelica_metatype tmpMeta1961;
  static int tmp1962 = 0;
  if(!tmp1962)
  {
    tmp1957 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* TWCLeaTow2.T_a_inflow variable */),1.0);
    tmp1958 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* TWCLeaTow2.T_a_inflow variable */),1e4);
    if(!(tmp1957 && tmp1958))
    {
      tmp1960 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* TWCLeaTow2.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1961 = stringAppend(MMC_REFSTRINGLIT(tmp1959),tmp1960);
      {
        const char* assert_cond = "(TWCLeaTow2.T_a_inflow >= 1.0 and TWCLeaTow2.T_a_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1961));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1961));
        }
      }
      tmp1962 = 1;
    }
  }
  threadData->lastEquationSolved = 10530;
}

/*
equation index: 10531
type: ALGORITHM

  assert(TWCLeaTow2.T_b_inflow >= 1.0 and TWCLeaTow2.T_b_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TWCLeaTow2.T_b_inflow <= 1e4, has value: " + String(TWCLeaTow2.T_b_inflow, "g"));
*/
void logic2_raw_eqFunction_10531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10531};
  modelica_boolean tmp1963;
  modelica_boolean tmp1964;
  static const MMC_DEFSTRINGLIT(tmp1965,87,"Variable violating min/max constraint: 1.0 <= TWCLeaTow2.T_b_inflow <= 1e4, has value: ");
  modelica_string tmp1966;
  modelica_metatype tmpMeta1967;
  static int tmp1968 = 0;
  if(!tmp1968)
  {
    tmp1963 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* TWCLeaTow2.T_b_inflow variable */),1.0);
    tmp1964 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* TWCLeaTow2.T_b_inflow variable */),1e4);
    if(!(tmp1963 && tmp1964))
    {
      tmp1966 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* TWCLeaTow2.T_b_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1967 = stringAppend(MMC_REFSTRINGLIT(tmp1965),tmp1966);
      {
        const char* assert_cond = "(TWCLeaTow2.T_b_inflow >= 1.0 and TWCLeaTow2.T_b_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1967));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1967));
        }
      }
      tmp1968 = 1;
    }
  }
  threadData->lastEquationSolved = 10531;
}

/*
equation index: 10532
type: ALGORITHM

  assert(TCWEntTow2.port_a.p >= 0.0 and TCWEntTow2.port_a.p <= 1e8, "Variable violating min/max constraint: 0.0 <= TCWEntTow2.port_a.p <= 1e8, has value: " + String(TCWEntTow2.port_a.p, "g"));
*/
void logic2_raw_eqFunction_10532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10532};
  modelica_boolean tmp1969;
  modelica_boolean tmp1970;
  static const MMC_DEFSTRINGLIT(tmp1971,85,"Variable violating min/max constraint: 0.0 <= TCWEntTow2.port_a.p <= 1e8, has value: ");
  modelica_string tmp1972;
  modelica_metatype tmpMeta1973;
  static int tmp1974 = 0;
  if(!tmp1974)
  {
    tmp1969 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* TCWEntTow2.port_a.p variable */),0.0);
    tmp1970 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* TCWEntTow2.port_a.p variable */),1e8);
    if(!(tmp1969 && tmp1970))
    {
      tmp1972 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* TCWEntTow2.port_a.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1973 = stringAppend(MMC_REFSTRINGLIT(tmp1971),tmp1972);
      {
        const char* assert_cond = "(TCWEntTow2.port_a.p >= 0.0 and TCWEntTow2.port_a.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1973));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1973));
        }
      }
      tmp1974 = 1;
    }
  }
  threadData->lastEquationSolved = 10532;
}

/*
equation index: 10533
type: ALGORITHM

  assert(TCWEntTow2.port_a.h_outflow >= -1e10 and TCWEntTow2.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= TCWEntTow2.port_a.h_outflow <= 1e10, has value: " + String(TCWEntTow2.port_a.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10533};
  modelica_boolean tmp1975;
  modelica_boolean tmp1976;
  static const MMC_DEFSTRINGLIT(tmp1977,96,"Variable violating min/max constraint: -1e10 <= TCWEntTow2.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp1978;
  modelica_metatype tmpMeta1979;
  static int tmp1980 = 0;
  if(!tmp1980)
  {
    tmp1975 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */),-1e10);
    tmp1976 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */),1e10);
    if(!(tmp1975 && tmp1976))
    {
      tmp1978 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1979 = stringAppend(MMC_REFSTRINGLIT(tmp1977),tmp1978);
      {
        const char* assert_cond = "(TCWEntTow2.port_a.h_outflow >= -1e10 and TCWEntTow2.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1979));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1979));
        }
      }
      tmp1980 = 1;
    }
  }
  threadData->lastEquationSolved = 10533;
}

/*
equation index: 10534
type: ALGORITHM

  assert(TCWEntTow2.port_b.h_outflow >= -1e10 and TCWEntTow2.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= TCWEntTow2.port_b.h_outflow <= 1e10, has value: " + String(TCWEntTow2.port_b.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10534};
  modelica_boolean tmp1981;
  modelica_boolean tmp1982;
  static const MMC_DEFSTRINGLIT(tmp1983,96,"Variable violating min/max constraint: -1e10 <= TCWEntTow2.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp1984;
  modelica_metatype tmpMeta1985;
  static int tmp1986 = 0;
  if(!tmp1986)
  {
    tmp1981 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */),-1e10);
    tmp1982 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */),1e10);
    if(!(tmp1981 && tmp1982))
    {
      tmp1984 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1985 = stringAppend(MMC_REFSTRINGLIT(tmp1983),tmp1984);
      {
        const char* assert_cond = "(TCWEntTow2.port_b.h_outflow >= -1e10 and TCWEntTow2.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1985));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1985));
        }
      }
      tmp1986 = 1;
    }
  }
  threadData->lastEquationSolved = 10534;
}

/*
equation index: 10535
type: ALGORITHM

  assert(TCWEntTow2.T >= 0.0, "Variable violating min constraint: 0.0 <= TCWEntTow2.T, has value: " + String(TCWEntTow2.T, "g"));
*/
void logic2_raw_eqFunction_10535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10535};
  modelica_boolean tmp1987;
  static const MMC_DEFSTRINGLIT(tmp1988,67,"Variable violating min constraint: 0.0 <= TCWEntTow2.T, has value: ");
  modelica_string tmp1989;
  modelica_metatype tmpMeta1990;
  static int tmp1991 = 0;
  if(!tmp1991)
  {
    tmp1987 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* TCWEntTow2.T STATE(1) */),0.0);
    if(!tmp1987)
    {
      tmp1989 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* TCWEntTow2.T STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1990 = stringAppend(MMC_REFSTRINGLIT(tmp1988),tmp1989);
      {
        const char* assert_cond = "(TCWEntTow2.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1990));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1990));
        }
      }
      tmp1991 = 1;
    }
  }
  threadData->lastEquationSolved = 10535;
}

/*
equation index: 10536
type: ALGORITHM

  assert(TCWEntTow2.TMed >= 1.0 and TCWEntTow2.TMed <= 1e4, "Variable violating min/max constraint: 1.0 <= TCWEntTow2.TMed <= 1e4, has value: " + String(TCWEntTow2.TMed, "g"));
*/
void logic2_raw_eqFunction_10536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10536};
  modelica_boolean tmp1992;
  modelica_boolean tmp1993;
  static const MMC_DEFSTRINGLIT(tmp1994,81,"Variable violating min/max constraint: 1.0 <= TCWEntTow2.TMed <= 1e4, has value: ");
  modelica_string tmp1995;
  modelica_metatype tmpMeta1996;
  static int tmp1997 = 0;
  if(!tmp1997)
  {
    tmp1992 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* TCWEntTow2.TMed variable */),1.0);
    tmp1993 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* TCWEntTow2.TMed variable */),1e4);
    if(!(tmp1992 && tmp1993))
    {
      tmp1995 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* TCWEntTow2.TMed variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1996 = stringAppend(MMC_REFSTRINGLIT(tmp1994),tmp1995);
      {
        const char* assert_cond = "(TCWEntTow2.TMed >= 1.0 and TCWEntTow2.TMed <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1996));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1996));
        }
      }
      tmp1997 = 1;
    }
  }
  threadData->lastEquationSolved = 10536;
}

/*
equation index: 10537
type: ALGORITHM

  assert(TCWEntTow2.T_a_inflow >= 1.0 and TCWEntTow2.T_a_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCWEntTow2.T_a_inflow <= 1e4, has value: " + String(TCWEntTow2.T_a_inflow, "g"));
*/
void logic2_raw_eqFunction_10537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10537};
  modelica_boolean tmp1998;
  modelica_boolean tmp1999;
  static const MMC_DEFSTRINGLIT(tmp2000,87,"Variable violating min/max constraint: 1.0 <= TCWEntTow2.T_a_inflow <= 1e4, has value: ");
  modelica_string tmp2001;
  modelica_metatype tmpMeta2002;
  static int tmp2003 = 0;
  if(!tmp2003)
  {
    tmp1998 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow2.T_a_inflow variable */),1.0);
    tmp1999 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow2.T_a_inflow variable */),1e4);
    if(!(tmp1998 && tmp1999))
    {
      tmp2001 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow2.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2002 = stringAppend(MMC_REFSTRINGLIT(tmp2000),tmp2001);
      {
        const char* assert_cond = "(TCWEntTow2.T_a_inflow >= 1.0 and TCWEntTow2.T_a_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2002));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",36,3,36,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2002));
        }
      }
      tmp2003 = 1;
    }
  }
  threadData->lastEquationSolved = 10537;
}

/*
equation index: 10538
type: ALGORITHM

  assert(TCWEntTow2.T_b_inflow >= 1.0 and TCWEntTow2.T_b_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= TCWEntTow2.T_b_inflow <= 1e4, has value: " + String(TCWEntTow2.T_b_inflow, "g"));
*/
void logic2_raw_eqFunction_10538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10538};
  modelica_boolean tmp2004;
  modelica_boolean tmp2005;
  static const MMC_DEFSTRINGLIT(tmp2006,87,"Variable violating min/max constraint: 1.0 <= TCWEntTow2.T_b_inflow <= 1e4, has value: ");
  modelica_string tmp2007;
  modelica_metatype tmpMeta2008;
  static int tmp2009 = 0;
  if(!tmp2009)
  {
    tmp2004 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TCWEntTow2.T_b_inflow variable */),1.0);
    tmp2005 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TCWEntTow2.T_b_inflow variable */),1e4);
    if(!(tmp2004 && tmp2005))
    {
      tmp2007 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TCWEntTow2.T_b_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2008 = stringAppend(MMC_REFSTRINGLIT(tmp2006),tmp2007);
      {
        const char* assert_cond = "(TCWEntTow2.T_b_inflow >= 1.0 and TCWEntTow2.T_b_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2008));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2008));
        }
      }
      tmp2009 = 1;
    }
  }
  threadData->lastEquationSolved = 10538;
}

/*
equation index: 10539
type: ALGORITHM

  assert(chi2.port_a1.h_outflow >= -1e10 and chi2.port_a1.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= chi2.port_a1.h_outflow <= 1e10, has value: " + String(chi2.port_a1.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10539};
  modelica_boolean tmp2010;
  modelica_boolean tmp2011;
  static const MMC_DEFSTRINGLIT(tmp2012,91,"Variable violating min/max constraint: -1e10 <= chi2.port_a1.h_outflow <= 1e10, has value: ");
  modelica_string tmp2013;
  modelica_metatype tmpMeta2014;
  static int tmp2015 = 0;
  if(!tmp2015)
  {
    tmp2010 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* chi2.port_a1.h_outflow variable */),-1e10);
    tmp2011 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* chi2.port_a1.h_outflow variable */),1e10);
    if(!(tmp2010 && tmp2011))
    {
      tmp2013 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* chi2.port_a1.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2014 = stringAppend(MMC_REFSTRINGLIT(tmp2012),tmp2013);
      {
        const char* assert_cond = "(chi2.port_a1.h_outflow >= -1e10 and chi2.port_a1.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2014));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2014));
        }
      }
      tmp2015 = 1;
    }
  }
  threadData->lastEquationSolved = 10539;
}

/*
equation index: 10540
type: ALGORITHM

  assert(chi2.state_a1_inflow.T >= 1.0 and chi2.state_a1_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= chi2.state_a1_inflow.T <= 1e4, has value: " + String(chi2.state_a1_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10540};
  modelica_boolean tmp2016;
  modelica_boolean tmp2017;
  static const MMC_DEFSTRINGLIT(tmp2018,88,"Variable violating min/max constraint: 1.0 <= chi2.state_a1_inflow.T <= 1e4, has value: ");
  modelica_string tmp2019;
  modelica_metatype tmpMeta2020;
  static int tmp2021 = 0;
  if(!tmp2021)
  {
    tmp2016 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* chi2.state_a1_inflow.T variable */),1.0);
    tmp2017 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* chi2.state_a1_inflow.T variable */),1e4);
    if(!(tmp2016 && tmp2017))
    {
      tmp2019 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* chi2.state_a1_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2020 = stringAppend(MMC_REFSTRINGLIT(tmp2018),tmp2019);
      {
        const char* assert_cond = "(chi2.state_a1_inflow.T >= 1.0 and chi2.state_a1_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2020));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2020));
        }
      }
      tmp2021 = 1;
    }
  }
  threadData->lastEquationSolved = 10540;
}

/*
equation index: 10541
type: ALGORITHM

  assert(chi2.state_b1_inflow.T >= 1.0 and chi2.state_b1_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= chi2.state_b1_inflow.T <= 1e4, has value: " + String(chi2.state_b1_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10541};
  modelica_boolean tmp2022;
  modelica_boolean tmp2023;
  static const MMC_DEFSTRINGLIT(tmp2024,88,"Variable violating min/max constraint: 1.0 <= chi2.state_b1_inflow.T <= 1e4, has value: ");
  modelica_string tmp2025;
  modelica_metatype tmpMeta2026;
  static int tmp2027 = 0;
  if(!tmp2027)
  {
    tmp2022 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[414]] /* chi2.state_b1_inflow.T variable */),1.0);
    tmp2023 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[414]] /* chi2.state_b1_inflow.T variable */),1e4);
    if(!(tmp2022 && tmp2023))
    {
      tmp2025 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[414]] /* chi2.state_b1_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2026 = stringAppend(MMC_REFSTRINGLIT(tmp2024),tmp2025);
      {
        const char* assert_cond = "(chi2.state_b1_inflow.T >= 1.0 and chi2.state_b1_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2026));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2026));
        }
      }
      tmp2027 = 1;
    }
  }
  threadData->lastEquationSolved = 10541;
}

/*
equation index: 10542
type: ALGORITHM

  assert(chi2.state_a2_inflow.T >= 1.0 and chi2.state_a2_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= chi2.state_a2_inflow.T <= 1e4, has value: " + String(chi2.state_a2_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10542};
  modelica_boolean tmp2028;
  modelica_boolean tmp2029;
  static const MMC_DEFSTRINGLIT(tmp2030,88,"Variable violating min/max constraint: 1.0 <= chi2.state_a2_inflow.T <= 1e4, has value: ");
  modelica_string tmp2031;
  modelica_metatype tmpMeta2032;
  static int tmp2033 = 0;
  if(!tmp2033)
  {
    tmp2028 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* chi2.state_a2_inflow.T variable */),1.0);
    tmp2029 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* chi2.state_a2_inflow.T variable */),1e4);
    if(!(tmp2028 && tmp2029))
    {
      tmp2031 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* chi2.state_a2_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2032 = stringAppend(MMC_REFSTRINGLIT(tmp2030),tmp2031);
      {
        const char* assert_cond = "(chi2.state_a2_inflow.T >= 1.0 and chi2.state_a2_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2032));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2032));
        }
      }
      tmp2033 = 1;
    }
  }
  threadData->lastEquationSolved = 10542;
}

/*
equation index: 10543
type: ALGORITHM

  assert(chi2.state_b2_inflow.T >= 1.0 and chi2.state_b2_inflow.T <= 1e4, "Variable violating min/max constraint: 1.0 <= chi2.state_b2_inflow.T <= 1e4, has value: " + String(chi2.state_b2_inflow.T, "g"));
*/
void logic2_raw_eqFunction_10543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10543};
  modelica_boolean tmp2034;
  modelica_boolean tmp2035;
  static const MMC_DEFSTRINGLIT(tmp2036,88,"Variable violating min/max constraint: 1.0 <= chi2.state_b2_inflow.T <= 1e4, has value: ");
  modelica_string tmp2037;
  modelica_metatype tmpMeta2038;
  static int tmp2039 = 0;
  if(!tmp2039)
  {
    tmp2034 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[415]] /* chi2.state_b2_inflow.T variable */),1.0);
    tmp2035 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[415]] /* chi2.state_b2_inflow.T variable */),1e4);
    if(!(tmp2034 && tmp2035))
    {
      tmp2037 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[415]] /* chi2.state_b2_inflow.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2038 = stringAppend(MMC_REFSTRINGLIT(tmp2036),tmp2037);
      {
        const char* assert_cond = "(chi2.state_b2_inflow.T >= 1.0 and chi2.state_b2_inflow.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2038));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2038));
        }
      }
      tmp2039 = 1;
    }
  }
  threadData->lastEquationSolved = 10543;
}

/*
equation index: 10544
type: ALGORITHM

  assert(chi2.vol1.dynBal.medium.T >= 1.0 and chi2.vol1.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= chi2.vol1.dynBal.medium.T <= 1e4, has value: " + String(chi2.vol1.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10544};
  modelica_boolean tmp2040;
  modelica_boolean tmp2041;
  static const MMC_DEFSTRINGLIT(tmp2042,91,"Variable violating min/max constraint: 1.0 <= chi2.vol1.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp2043;
  modelica_metatype tmpMeta2044;
  static int tmp2045 = 0;
  if(!tmp2045)
  {
    tmp2040 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[422]] /* chi2.vol1.dynBal.medium.T variable */),1.0);
    tmp2041 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[422]] /* chi2.vol1.dynBal.medium.T variable */),1e4);
    if(!(tmp2040 && tmp2041))
    {
      tmp2043 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[422]] /* chi2.vol1.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2044 = stringAppend(MMC_REFSTRINGLIT(tmp2042),tmp2043);
      {
        const char* assert_cond = "(chi2.vol1.dynBal.medium.T >= 1.0 and chi2.vol1.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2044));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2044));
        }
      }
      tmp2045 = 1;
    }
  }
  threadData->lastEquationSolved = 10544;
}

/*
equation index: 10545
type: ALGORITHM

  assert(chi2.vol1.dynBal.ports_H_flow[1] >= -1e8 and chi2.vol1.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= chi2.vol1.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(chi2.vol1.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10545};
  modelica_boolean tmp2046;
  modelica_boolean tmp2047;
  static const MMC_DEFSTRINGLIT(tmp2048,99,"Variable violating min/max constraint: -1e8 <= chi2.vol1.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp2049;
  modelica_metatype tmpMeta2050;
  static int tmp2051 = 0;
  if(!tmp2051)
  {
    tmp2046 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* chi2.vol1.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp2047 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* chi2.vol1.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp2046 && tmp2047))
    {
      tmp2049 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* chi2.vol1.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2050 = stringAppend(MMC_REFSTRINGLIT(tmp2048),tmp2049);
      {
        const char* assert_cond = "(chi2.vol1.dynBal.ports_H_flow[1] >= -1e8 and chi2.vol1.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2050));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2050));
        }
      }
      tmp2051 = 1;
    }
  }
  threadData->lastEquationSolved = 10545;
}

/*
equation index: 10546
type: ALGORITHM

  assert(chi2.vol1.dynBal.ports_H_flow[2] >= -1e8 and chi2.vol1.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= chi2.vol1.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(chi2.vol1.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10546};
  modelica_boolean tmp2052;
  modelica_boolean tmp2053;
  static const MMC_DEFSTRINGLIT(tmp2054,99,"Variable violating min/max constraint: -1e8 <= chi2.vol1.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp2055;
  modelica_metatype tmpMeta2056;
  static int tmp2057 = 0;
  if(!tmp2057)
  {
    tmp2052 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* chi2.vol1.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp2053 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* chi2.vol1.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp2052 && tmp2053))
    {
      tmp2055 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* chi2.vol1.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2056 = stringAppend(MMC_REFSTRINGLIT(tmp2054),tmp2055);
      {
        const char* assert_cond = "(chi2.vol1.dynBal.ports_H_flow[2] >= -1e8 and chi2.vol1.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2056));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2056));
        }
      }
      tmp2057 = 1;
    }
  }
  threadData->lastEquationSolved = 10546;
}

/*
equation index: 10547
type: ALGORITHM

  assert(chi2.vol2.p >= 0.0 and chi2.vol2.p <= 1e8, "Variable violating min/max constraint: 0.0 <= chi2.vol2.p <= 1e8, has value: " + String(chi2.vol2.p, "g"));
*/
void logic2_raw_eqFunction_10547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10547};
  modelica_boolean tmp2058;
  modelica_boolean tmp2059;
  static const MMC_DEFSTRINGLIT(tmp2060,77,"Variable violating min/max constraint: 0.0 <= chi2.vol2.p <= 1e8, has value: ");
  modelica_string tmp2061;
  modelica_metatype tmpMeta2062;
  static int tmp2063 = 0;
  if(!tmp2063)
  {
    tmp2058 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* chi2.vol2.p variable */),0.0);
    tmp2059 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* chi2.vol2.p variable */),1e8);
    if(!(tmp2058 && tmp2059))
    {
      tmp2061 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* chi2.vol2.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2062 = stringAppend(MMC_REFSTRINGLIT(tmp2060),tmp2061);
      {
        const char* assert_cond = "(chi2.vol2.p >= 0.0 and chi2.vol2.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",42,3,43,28,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2062));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",42,3,43,28,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2062));
        }
      }
      tmp2063 = 1;
    }
  }
  threadData->lastEquationSolved = 10547;
}

/*
equation index: 10548
type: ALGORITHM

  assert(chi2.vol2.dynBal.medium.T >= 1.0 and chi2.vol2.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= chi2.vol2.dynBal.medium.T <= 1e4, has value: " + String(chi2.vol2.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10548};
  modelica_boolean tmp2064;
  modelica_boolean tmp2065;
  static const MMC_DEFSTRINGLIT(tmp2066,91,"Variable violating min/max constraint: 1.0 <= chi2.vol2.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp2067;
  modelica_metatype tmpMeta2068;
  static int tmp2069 = 0;
  if(!tmp2069)
  {
    tmp2064 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* chi2.vol2.dynBal.medium.T variable */),1.0);
    tmp2065 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* chi2.vol2.dynBal.medium.T variable */),1e4);
    if(!(tmp2064 && tmp2065))
    {
      tmp2067 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* chi2.vol2.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2068 = stringAppend(MMC_REFSTRINGLIT(tmp2066),tmp2067);
      {
        const char* assert_cond = "(chi2.vol2.dynBal.medium.T >= 1.0 and chi2.vol2.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2068));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2068));
        }
      }
      tmp2069 = 1;
    }
  }
  threadData->lastEquationSolved = 10548;
}

/*
equation index: 10549
type: ALGORITHM

  assert(chi2.vol2.dynBal.ports_H_flow[1] >= -1e8 and chi2.vol2.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= chi2.vol2.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(chi2.vol2.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10549};
  modelica_boolean tmp2070;
  modelica_boolean tmp2071;
  static const MMC_DEFSTRINGLIT(tmp2072,99,"Variable violating min/max constraint: -1e8 <= chi2.vol2.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp2073;
  modelica_metatype tmpMeta2074;
  static int tmp2075 = 0;
  if(!tmp2075)
  {
    tmp2070 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* chi2.vol2.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp2071 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* chi2.vol2.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp2070 && tmp2071))
    {
      tmp2073 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* chi2.vol2.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2074 = stringAppend(MMC_REFSTRINGLIT(tmp2072),tmp2073);
      {
        const char* assert_cond = "(chi2.vol2.dynBal.ports_H_flow[1] >= -1e8 and chi2.vol2.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2074));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2074));
        }
      }
      tmp2075 = 1;
    }
  }
  threadData->lastEquationSolved = 10549;
}

/*
equation index: 10550
type: ALGORITHM

  assert(chi2.vol2.dynBal.ports_H_flow[2] >= -1e8 and chi2.vol2.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= chi2.vol2.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(chi2.vol2.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10550};
  modelica_boolean tmp2076;
  modelica_boolean tmp2077;
  static const MMC_DEFSTRINGLIT(tmp2078,99,"Variable violating min/max constraint: -1e8 <= chi2.vol2.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp2079;
  modelica_metatype tmpMeta2080;
  static int tmp2081 = 0;
  if(!tmp2081)
  {
    tmp2076 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* chi2.vol2.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp2077 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* chi2.vol2.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp2076 && tmp2077))
    {
      tmp2079 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* chi2.vol2.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2080 = stringAppend(MMC_REFSTRINGLIT(tmp2078),tmp2079);
      {
        const char* assert_cond = "(chi2.vol2.dynBal.ports_H_flow[2] >= -1e8 and chi2.vol2.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2080));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2080));
        }
      }
      tmp2081 = 1;
    }
  }
  threadData->lastEquationSolved = 10550;
}

/*
equation index: 10551
type: ALGORITHM

  assert(chi2.TEvaEnt >= 0.0, "Variable violating min constraint: 0.0 <= chi2.TEvaEnt, has value: " + String(chi2.TEvaEnt, "g"));
*/
void logic2_raw_eqFunction_10551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10551};
  modelica_boolean tmp2082;
  static const MMC_DEFSTRINGLIT(tmp2083,67,"Variable violating min constraint: 0.0 <= chi2.TEvaEnt, has value: ");
  modelica_string tmp2084;
  modelica_metatype tmpMeta2085;
  static int tmp2086 = 0;
  if(!tmp2086)
  {
    tmp2082 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* chi2.TEvaEnt variable */),0.0);
    if(!tmp2082)
    {
      tmp2084 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* chi2.TEvaEnt variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2085 = stringAppend(MMC_REFSTRINGLIT(tmp2083),tmp2084);
      {
        const char* assert_cond = "(chi2.TEvaEnt >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",25,3,25,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2085));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",25,3,25,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2085));
        }
      }
      tmp2086 = 1;
    }
  }
  threadData->lastEquationSolved = 10551;
}

/*
equation index: 10552
type: ALGORITHM

  assert(chi2.TEvaLvg >= 1.0 and chi2.TEvaLvg <= 1e4, "Variable violating min/max constraint: 1.0 <= chi2.TEvaLvg <= 1e4, has value: " + String(chi2.TEvaLvg, "g"));
*/
void logic2_raw_eqFunction_10552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10552};
  modelica_boolean tmp2087;
  modelica_boolean tmp2088;
  static const MMC_DEFSTRINGLIT(tmp2089,78,"Variable violating min/max constraint: 1.0 <= chi2.TEvaLvg <= 1e4, has value: ");
  modelica_string tmp2090;
  modelica_metatype tmpMeta2091;
  static int tmp2092 = 0;
  if(!tmp2092)
  {
    tmp2087 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* chi2.TEvaLvg variable */),1.0);
    tmp2088 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* chi2.TEvaLvg variable */),1e4);
    if(!(tmp2087 && tmp2088))
    {
      tmp2090 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* chi2.TEvaLvg variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2091 = stringAppend(MMC_REFSTRINGLIT(tmp2089),tmp2090);
      {
        const char* assert_cond = "(chi2.TEvaLvg >= 1.0 and chi2.TEvaLvg <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",26,3,26,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2091));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",26,3,26,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2091));
        }
      }
      tmp2092 = 1;
    }
  }
  threadData->lastEquationSolved = 10552;
}

/*
equation index: 10553
type: ALGORITHM

  assert(chi2.TConEnt >= 0.0, "Variable violating min constraint: 0.0 <= chi2.TConEnt, has value: " + String(chi2.TConEnt, "g"));
*/
void logic2_raw_eqFunction_10553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10553};
  modelica_boolean tmp2093;
  static const MMC_DEFSTRINGLIT(tmp2094,67,"Variable violating min constraint: 0.0 <= chi2.TConEnt, has value: ");
  modelica_string tmp2095;
  modelica_metatype tmpMeta2096;
  static int tmp2097 = 0;
  if(!tmp2097)
  {
    tmp2093 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* chi2.TConEnt variable */),0.0);
    if(!tmp2093)
    {
      tmp2095 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* chi2.TConEnt variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2096 = stringAppend(MMC_REFSTRINGLIT(tmp2094),tmp2095);
      {
        const char* assert_cond = "(chi2.TConEnt >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",27,3,27,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2096));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",27,3,27,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2096));
        }
      }
      tmp2097 = 1;
    }
  }
  threadData->lastEquationSolved = 10553;
}

/*
equation index: 10554
type: ALGORITHM

  assert(chi2.TConLvg >= 1.0 and chi2.TConLvg <= 1e4, "Variable violating min/max constraint: 1.0 <= chi2.TConLvg <= 1e4, has value: " + String(chi2.TConLvg, "g"));
*/
void logic2_raw_eqFunction_10554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10554};
  modelica_boolean tmp2098;
  modelica_boolean tmp2099;
  static const MMC_DEFSTRINGLIT(tmp2100,78,"Variable violating min/max constraint: 1.0 <= chi2.TConLvg <= 1e4, has value: ");
  modelica_string tmp2101;
  modelica_metatype tmpMeta2102;
  static int tmp2103 = 0;
  if(!tmp2103)
  {
    tmp2098 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* chi2.TConLvg variable */),1.0);
    tmp2099 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* chi2.TConLvg variable */),1e4);
    if(!(tmp2098 && tmp2099))
    {
      tmp2101 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* chi2.TConLvg variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2102 = stringAppend(MMC_REFSTRINGLIT(tmp2100),tmp2101);
      {
        const char* assert_cond = "(chi2.TConLvg >= 1.0 and chi2.TConLvg <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",28,3,28,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2102));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",28,3,28,71,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2102));
        }
      }
      tmp2103 = 1;
    }
  }
  threadData->lastEquationSolved = 10554;
}

/*
equation index: 10555
type: ALGORITHM

  assert(chi2.COP >= 0.0, "Variable violating min constraint: 0.0 <= chi2.COP, has value: " + String(chi2.COP, "g"));
*/
void logic2_raw_eqFunction_10555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10555};
  modelica_boolean tmp2104;
  static const MMC_DEFSTRINGLIT(tmp2105,63,"Variable violating min constraint: 0.0 <= chi2.COP, has value: ");
  modelica_string tmp2106;
  modelica_metatype tmpMeta2107;
  static int tmp2108 = 0;
  if(!tmp2108)
  {
    tmp2104 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* chi2.COP variable */),0.0);
    if(!tmp2104)
    {
      tmp2106 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* chi2.COP variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2107 = stringAppend(MMC_REFSTRINGLIT(tmp2105),tmp2106);
      {
        const char* assert_cond = "(chi2.COP >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",30,3,30,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2107));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",30,3,30,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2107));
        }
      }
      tmp2108 = 1;
    }
  }
  threadData->lastEquationSolved = 10555;
}

/*
equation index: 10556
type: ALGORITHM

  assert(chi2.capFunT >= 0.0, "Variable violating min constraint: 0.0 <= chi2.capFunT, has value: " + String(chi2.capFunT, "g"));
*/
void logic2_raw_eqFunction_10556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10556};
  modelica_boolean tmp2109;
  static const MMC_DEFSTRINGLIT(tmp2110,67,"Variable violating min constraint: 0.0 <= chi2.capFunT, has value: ");
  modelica_string tmp2111;
  modelica_metatype tmpMeta2112;
  static int tmp2113 = 0;
  if(!tmp2113)
  {
    tmp2109 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[405]] /* chi2.capFunT variable */),0.0);
    if(!tmp2109)
    {
      tmp2111 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[405]] /* chi2.capFunT variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2112 = stringAppend(MMC_REFSTRINGLIT(tmp2110),tmp2111);
      {
        const char* assert_cond = "(chi2.capFunT >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",38,3,39,60,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2112));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",38,3,39,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2112));
        }
      }
      tmp2113 = 1;
    }
  }
  threadData->lastEquationSolved = 10556;
}

/*
equation index: 10557
type: ALGORITHM

  assert(chi2.EIRFunT >= 0.0, "Variable violating min constraint: 0.0 <= chi2.EIRFunT, has value: " + String(chi2.EIRFunT, "g"));
*/
void logic2_raw_eqFunction_10557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10557};
  modelica_boolean tmp2114;
  static const MMC_DEFSTRINGLIT(tmp2115,67,"Variable violating min constraint: 0.0 <= chi2.EIRFunT, has value: ");
  modelica_string tmp2116;
  modelica_metatype tmpMeta2117;
  static int tmp2118 = 0;
  if(!tmp2118)
  {
    tmp2114 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* chi2.EIRFunT variable */),0.0);
    if(!tmp2114)
    {
      tmp2116 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* chi2.EIRFunT variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2117 = stringAppend(MMC_REFSTRINGLIT(tmp2115),tmp2116);
      {
        const char* assert_cond = "(chi2.EIRFunT >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",40,3,41,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2117));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",40,3,41,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2117));
        }
      }
      tmp2118 = 1;
    }
  }
  threadData->lastEquationSolved = 10557;
}

/*
equation index: 10558
type: ALGORITHM

  assert(chi2.EIRFunPLR >= 0.0, "Variable violating min constraint: 0.0 <= chi2.EIRFunPLR, has value: " + String(chi2.EIRFunPLR, "g"));
*/
void logic2_raw_eqFunction_10558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10558};
  modelica_boolean tmp2119;
  static const MMC_DEFSTRINGLIT(tmp2120,69,"Variable violating min constraint: 0.0 <= chi2.EIRFunPLR, has value: ");
  modelica_string tmp2121;
  modelica_metatype tmpMeta2122;
  static int tmp2123 = 0;
  if(!tmp2123)
  {
    tmp2119 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* chi2.EIRFunPLR variable */),0.0);
    if(!tmp2119)
    {
      tmp2121 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* chi2.EIRFunPLR variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2122 = stringAppend(MMC_REFSTRINGLIT(tmp2120),tmp2121);
      {
        const char* assert_cond = "(chi2.EIRFunPLR >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",42,3,43,72,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2122));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",42,3,43,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2122));
        }
      }
      tmp2123 = 1;
    }
  }
  threadData->lastEquationSolved = 10558;
}

/*
equation index: 10559
type: ALGORITHM

  assert(chi2.PLR1 >= 0.0, "Variable violating min constraint: 0.0 <= chi2.PLR1, has value: " + String(chi2.PLR1, "g"));
*/
void logic2_raw_eqFunction_10559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10559};
  modelica_boolean tmp2124;
  static const MMC_DEFSTRINGLIT(tmp2125,64,"Variable violating min constraint: 0.0 <= chi2.PLR1, has value: ");
  modelica_string tmp2126;
  modelica_metatype tmpMeta2127;
  static int tmp2128 = 0;
  if(!tmp2128)
  {
    tmp2124 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[393]] /* chi2.PLR1 variable */),0.0);
    if(!tmp2124)
    {
      tmp2126 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[393]] /* chi2.PLR1 variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2127 = stringAppend(MMC_REFSTRINGLIT(tmp2125),tmp2126);
      {
        const char* assert_cond = "(chi2.PLR1 >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",44,3,44,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2127));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",44,3,44,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2127));
        }
      }
      tmp2128 = 1;
    }
  }
  threadData->lastEquationSolved = 10559;
}

/*
equation index: 10560
type: ALGORITHM

  assert(chi2.PLR2 >= 0.0, "Variable violating min constraint: 0.0 <= chi2.PLR2, has value: " + String(chi2.PLR2, "g"));
*/
void logic2_raw_eqFunction_10560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10560};
  modelica_boolean tmp2129;
  static const MMC_DEFSTRINGLIT(tmp2130,64,"Variable violating min constraint: 0.0 <= chi2.PLR2, has value: ");
  modelica_string tmp2131;
  modelica_metatype tmpMeta2132;
  static int tmp2133 = 0;
  if(!tmp2133)
  {
    tmp2129 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[394]] /* chi2.PLR2 variable */),0.0);
    if(!tmp2129)
    {
      tmp2131 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[394]] /* chi2.PLR2 variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2132 = stringAppend(MMC_REFSTRINGLIT(tmp2130),tmp2131);
      {
        const char* assert_cond = "(chi2.PLR2 >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",45,3,45,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2132));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",45,3,45,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2132));
        }
      }
      tmp2133 = 1;
    }
  }
  threadData->lastEquationSolved = 10560;
}

/*
equation index: 10561
type: ALGORITHM

  assert(chi2.CR >= 0.0, "Variable violating min constraint: 0.0 <= chi2.CR, has value: " + String(chi2.CR, "g"));
*/
void logic2_raw_eqFunction_10561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10561};
  modelica_boolean tmp2134;
  static const MMC_DEFSTRINGLIT(tmp2135,62,"Variable violating min constraint: 0.0 <= chi2.CR, has value: ");
  modelica_string tmp2136;
  modelica_metatype tmpMeta2137;
  static int tmp2138 = 0;
  if(!tmp2138)
  {
    tmp2134 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* chi2.CR variable */),0.0);
    if(!tmp2134)
    {
      tmp2136 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* chi2.CR variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2137 = stringAppend(MMC_REFSTRINGLIT(tmp2135),tmp2136);
      {
        const char* assert_cond = "(chi2.CR >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",46,3,46,43,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2137));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",46,3,46,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2137));
        }
      }
      tmp2138 = 1;
    }
  }
  threadData->lastEquationSolved = 10561;
}

/*
equation index: 10562
type: ALGORITHM

  assert(junCHWSup.port_3.h_outflow >= -1e10 and junCHWSup.port_3.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= junCHWSup.port_3.h_outflow <= 1e10, has value: " + String(junCHWSup.port_3.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10562};
  modelica_boolean tmp2139;
  modelica_boolean tmp2140;
  static const MMC_DEFSTRINGLIT(tmp2141,95,"Variable violating min/max constraint: -1e10 <= junCHWSup.port_3.h_outflow <= 1e10, has value: ");
  modelica_string tmp2142;
  modelica_metatype tmpMeta2143;
  static int tmp2144 = 0;
  if(!tmp2144)
  {
    tmp2139 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* junCHWSup.port_3.h_outflow variable */),-1e10);
    tmp2140 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* junCHWSup.port_3.h_outflow variable */),1e10);
    if(!(tmp2139 && tmp2140))
    {
      tmp2142 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* junCHWSup.port_3.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2143 = stringAppend(MMC_REFSTRINGLIT(tmp2141),tmp2142);
      {
        const char* assert_cond = "(junCHWSup.port_3.h_outflow >= -1e10 and junCHWSup.port_3.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2143));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2143));
        }
      }
      tmp2144 = 1;
    }
  }
  threadData->lastEquationSolved = 10562;
}

/*
equation index: 10563
type: ALGORITHM

  assert(junCHWSup.res2.port_b.h_outflow >= -1e10 and junCHWSup.res2.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= junCHWSup.res2.port_b.h_outflow <= 1e10, has value: " + String(junCHWSup.res2.port_b.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10563};
  modelica_boolean tmp2145;
  modelica_boolean tmp2146;
  static const MMC_DEFSTRINGLIT(tmp2147,100,"Variable violating min/max constraint: -1e10 <= junCHWSup.res2.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp2148;
  modelica_metatype tmpMeta2149;
  static int tmp2150 = 0;
  if(!tmp2150)
  {
    tmp2145 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[939]] /* junCHWSup.res2.port_b.h_outflow variable */),-1e10);
    tmp2146 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[939]] /* junCHWSup.res2.port_b.h_outflow variable */),1e10);
    if(!(tmp2145 && tmp2146))
    {
      tmp2148 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[939]] /* junCHWSup.res2.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2149 = stringAppend(MMC_REFSTRINGLIT(tmp2147),tmp2148);
      {
        const char* assert_cond = "(junCHWSup.res2.port_b.h_outflow >= -1e10 and junCHWSup.res2.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2149));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2149));
        }
      }
      tmp2150 = 1;
    }
  }
  threadData->lastEquationSolved = 10563;
}

/*
equation index: 10564
type: ALGORITHM

  assert(junCHWSup.res2.m_flow >= -1e5 and junCHWSup.res2.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= junCHWSup.res2.m_flow <= 1e5, has value: " + String(junCHWSup.res2.m_flow, "g"));
*/
void logic2_raw_eqFunction_10564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10564};
  modelica_boolean tmp2151;
  modelica_boolean tmp2152;
  static const MMC_DEFSTRINGLIT(tmp2153,88,"Variable violating min/max constraint: -1e5 <= junCHWSup.res2.m_flow <= 1e5, has value: ");
  modelica_string tmp2154;
  modelica_metatype tmpMeta2155;
  static int tmp2156 = 0;
  if(!tmp2156)
  {
    tmp2151 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */),-1e5);
    tmp2152 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */),1e5);
    if(!(tmp2151 && tmp2152))
    {
      tmp2154 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2155 = stringAppend(MMC_REFSTRINGLIT(tmp2153),tmp2154);
      {
        const char* assert_cond = "(junCHWSup.res2.m_flow >= -1e5 and junCHWSup.res2.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2155));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2155));
        }
      }
      tmp2156 = 1;
    }
  }
  threadData->lastEquationSolved = 10564;
}

/*
equation index: 10565
type: ALGORITHM

  assert(junCHWSup.vol.T >= 1.0 and junCHWSup.vol.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup.vol.T <= 1e4, has value: " + String(junCHWSup.vol.T, "g"));
*/
void logic2_raw_eqFunction_10565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10565};
  modelica_boolean tmp2157;
  modelica_boolean tmp2158;
  static const MMC_DEFSTRINGLIT(tmp2159,81,"Variable violating min/max constraint: 1.0 <= junCHWSup.vol.T <= 1e4, has value: ");
  modelica_string tmp2160;
  modelica_metatype tmpMeta2161;
  static int tmp2162 = 0;
  if(!tmp2162)
  {
    tmp2157 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[941]] /* junCHWSup.vol.T variable */),1.0);
    tmp2158 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[941]] /* junCHWSup.vol.T variable */),1e4);
    if(!(tmp2157 && tmp2158))
    {
      tmp2160 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[941]] /* junCHWSup.vol.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2161 = stringAppend(MMC_REFSTRINGLIT(tmp2159),tmp2160);
      {
        const char* assert_cond = "(junCHWSup.vol.T >= 1.0 and junCHWSup.vol.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",38,3,39,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2161));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",38,3,39,31,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2161));
        }
      }
      tmp2162 = 1;
    }
  }
  threadData->lastEquationSolved = 10565;
}

/*
equation index: 10566
type: ALGORITHM

  assert(junCHWSup.vol.p >= 0.0 and junCHWSup.vol.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWSup.vol.p <= 1e8, has value: " + String(junCHWSup.vol.p, "g"));
*/
void logic2_raw_eqFunction_10566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10566};
  modelica_boolean tmp2163;
  modelica_boolean tmp2164;
  static const MMC_DEFSTRINGLIT(tmp2165,81,"Variable violating min/max constraint: 0.0 <= junCHWSup.vol.p <= 1e8, has value: ");
  modelica_string tmp2166;
  modelica_metatype tmpMeta2167;
  static int tmp2168 = 0;
  if(!tmp2168)
  {
    tmp2163 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */),0.0);
    tmp2164 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */),1e8);
    if(!(tmp2163 && tmp2164))
    {
      tmp2166 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2167 = stringAppend(MMC_REFSTRINGLIT(tmp2165),tmp2166);
      {
        const char* assert_cond = "(junCHWSup.vol.p >= 0.0 and junCHWSup.vol.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",42,3,43,28,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2167));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",42,3,43,28,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2167));
        }
      }
      tmp2168 = 1;
    }
  }
  threadData->lastEquationSolved = 10566;
}

/*
equation index: 10567
type: ALGORITHM

  assert(junCHWSup.vol.dynBal.medium.T >= 1.0 and junCHWSup.vol.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup.vol.dynBal.medium.T <= 1e4, has value: " + String(junCHWSup.vol.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10567};
  modelica_boolean tmp2169;
  modelica_boolean tmp2170;
  static const MMC_DEFSTRINGLIT(tmp2171,95,"Variable violating min/max constraint: 1.0 <= junCHWSup.vol.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp2172;
  modelica_metatype tmpMeta2173;
  static int tmp2174 = 0;
  if(!tmp2174)
  {
    tmp2169 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* junCHWSup.vol.dynBal.medium.T variable */),1.0);
    tmp2170 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* junCHWSup.vol.dynBal.medium.T variable */),1e4);
    if(!(tmp2169 && tmp2170))
    {
      tmp2172 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* junCHWSup.vol.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2173 = stringAppend(MMC_REFSTRINGLIT(tmp2171),tmp2172);
      {
        const char* assert_cond = "(junCHWSup.vol.dynBal.medium.T >= 1.0 and junCHWSup.vol.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2173));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2173));
        }
      }
      tmp2174 = 1;
    }
  }
  threadData->lastEquationSolved = 10567;
}

/*
equation index: 10568
type: ALGORITHM

  assert(junCHWSup.vol.dynBal.ports_H_flow[1] >= -1e8 and junCHWSup.vol.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= junCHWSup.vol.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(junCHWSup.vol.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10568};
  modelica_boolean tmp2175;
  modelica_boolean tmp2176;
  static const MMC_DEFSTRINGLIT(tmp2177,103,"Variable violating min/max constraint: -1e8 <= junCHWSup.vol.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp2178;
  modelica_metatype tmpMeta2179;
  static int tmp2180 = 0;
  if(!tmp2180)
  {
    tmp2175 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[953]] /* junCHWSup.vol.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp2176 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[953]] /* junCHWSup.vol.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp2175 && tmp2176))
    {
      tmp2178 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[953]] /* junCHWSup.vol.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2179 = stringAppend(MMC_REFSTRINGLIT(tmp2177),tmp2178);
      {
        const char* assert_cond = "(junCHWSup.vol.dynBal.ports_H_flow[1] >= -1e8 and junCHWSup.vol.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2179));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2179));
        }
      }
      tmp2180 = 1;
    }
  }
  threadData->lastEquationSolved = 10568;
}

/*
equation index: 10569
type: ALGORITHM

  assert(junCHWSup.vol.dynBal.ports_H_flow[2] >= -1e8 and junCHWSup.vol.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= junCHWSup.vol.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(junCHWSup.vol.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10569};
  modelica_boolean tmp2181;
  modelica_boolean tmp2182;
  static const MMC_DEFSTRINGLIT(tmp2183,103,"Variable violating min/max constraint: -1e8 <= junCHWSup.vol.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp2184;
  modelica_metatype tmpMeta2185;
  static int tmp2186 = 0;
  if(!tmp2186)
  {
    tmp2181 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp2182 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp2181 && tmp2182))
    {
      tmp2184 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2185 = stringAppend(MMC_REFSTRINGLIT(tmp2183),tmp2184);
      {
        const char* assert_cond = "(junCHWSup.vol.dynBal.ports_H_flow[2] >= -1e8 and junCHWSup.vol.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2185));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2185));
        }
      }
      tmp2186 = 1;
    }
  }
  threadData->lastEquationSolved = 10569;
}

/*
equation index: 10570
type: ALGORITHM

  assert(junCHWSup.vol.dynBal.ports_H_flow[3] >= -1e8 and junCHWSup.vol.dynBal.ports_H_flow[3] <= 1e8, "Variable violating min/max constraint: -1e8 <= junCHWSup.vol.dynBal.ports_H_flow[3] <= 1e8, has value: " + String(junCHWSup.vol.dynBal.ports_H_flow[3], "g"));
*/
void logic2_raw_eqFunction_10570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10570};
  modelica_boolean tmp2187;
  modelica_boolean tmp2188;
  static const MMC_DEFSTRINGLIT(tmp2189,103,"Variable violating min/max constraint: -1e8 <= junCHWSup.vol.dynBal.ports_H_flow[3] <= 1e8, has value: ");
  modelica_string tmp2190;
  modelica_metatype tmpMeta2191;
  static int tmp2192 = 0;
  if(!tmp2192)
  {
    tmp2187 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[955]] /* junCHWSup.vol.dynBal.ports_H_flow[3] variable */),-1e8);
    tmp2188 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[955]] /* junCHWSup.vol.dynBal.ports_H_flow[3] variable */),1e8);
    if(!(tmp2187 && tmp2188))
    {
      tmp2190 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[955]] /* junCHWSup.vol.dynBal.ports_H_flow[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2191 = stringAppend(MMC_REFSTRINGLIT(tmp2189),tmp2190);
      {
        const char* assert_cond = "(junCHWSup.vol.dynBal.ports_H_flow[3] >= -1e8 and junCHWSup.vol.dynBal.ports_H_flow[3] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2191));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2191));
        }
      }
      tmp2192 = 1;
    }
  }
  threadData->lastEquationSolved = 10570;
}

/*
equation index: 10571
type: ALGORITHM

  assert(junCHWRet.port_3.h_outflow >= -1e10 and junCHWRet.port_3.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= junCHWRet.port_3.h_outflow <= 1e10, has value: " + String(junCHWRet.port_3.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10571};
  modelica_boolean tmp2193;
  modelica_boolean tmp2194;
  static const MMC_DEFSTRINGLIT(tmp2195,95,"Variable violating min/max constraint: -1e10 <= junCHWRet.port_3.h_outflow <= 1e10, has value: ");
  modelica_string tmp2196;
  modelica_metatype tmpMeta2197;
  static int tmp2198 = 0;
  if(!tmp2198)
  {
    tmp2193 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* junCHWRet.port_3.h_outflow variable */),-1e10);
    tmp2194 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* junCHWRet.port_3.h_outflow variable */),1e10);
    if(!(tmp2193 && tmp2194))
    {
      tmp2196 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* junCHWRet.port_3.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2197 = stringAppend(MMC_REFSTRINGLIT(tmp2195),tmp2196);
      {
        const char* assert_cond = "(junCHWRet.port_3.h_outflow >= -1e10 and junCHWRet.port_3.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2197));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2197));
        }
      }
      tmp2198 = 1;
    }
  }
  threadData->lastEquationSolved = 10571;
}

/*
equation index: 10572
type: ALGORITHM

  assert(junCHWRet.res1.port_b.h_outflow >= -1e10 and junCHWRet.res1.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= junCHWRet.res1.port_b.h_outflow <= 1e10, has value: " + String(junCHWRet.res1.port_b.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10572};
  modelica_boolean tmp2199;
  modelica_boolean tmp2200;
  static const MMC_DEFSTRINGLIT(tmp2201,100,"Variable violating min/max constraint: -1e10 <= junCHWRet.res1.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp2202;
  modelica_metatype tmpMeta2203;
  static int tmp2204 = 0;
  if(!tmp2204)
  {
    tmp2199 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[892]] /* junCHWRet.res1.port_b.h_outflow variable */),-1e10);
    tmp2200 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[892]] /* junCHWRet.res1.port_b.h_outflow variable */),1e10);
    if(!(tmp2199 && tmp2200))
    {
      tmp2202 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[892]] /* junCHWRet.res1.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2203 = stringAppend(MMC_REFSTRINGLIT(tmp2201),tmp2202);
      {
        const char* assert_cond = "(junCHWRet.res1.port_b.h_outflow >= -1e10 and junCHWRet.res1.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2203));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2203));
        }
      }
      tmp2204 = 1;
    }
  }
  threadData->lastEquationSolved = 10572;
}

/*
equation index: 10573
type: ALGORITHM

  assert(junCHWRet.res1.m_flow >= -1e5 and junCHWRet.res1.m_flow <= 1e5, "Variable violating min/max constraint: -1e5 <= junCHWRet.res1.m_flow <= 1e5, has value: " + String(junCHWRet.res1.m_flow, "g"));
*/
void logic2_raw_eqFunction_10573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10573};
  modelica_boolean tmp2205;
  modelica_boolean tmp2206;
  static const MMC_DEFSTRINGLIT(tmp2207,88,"Variable violating min/max constraint: -1e5 <= junCHWRet.res1.m_flow <= 1e5, has value: ");
  modelica_string tmp2208;
  modelica_metatype tmpMeta2209;
  static int tmp2210 = 0;
  if(!tmp2210)
  {
    tmp2205 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */),-1e5);
    tmp2206 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */),1e5);
    if(!(tmp2205 && tmp2206))
    {
      tmp2208 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2209 = stringAppend(MMC_REFSTRINGLIT(tmp2207),tmp2208);
      {
        const char* assert_cond = "(junCHWRet.res1.m_flow >= -1e5 and junCHWRet.res1.m_flow <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2209));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/PartialTwoPortInterface.mo",19,3,20,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2209));
        }
      }
      tmp2210 = 1;
    }
  }
  threadData->lastEquationSolved = 10573;
}

/*
equation index: 10574
type: ALGORITHM

  assert(junCHWRet.vol.T >= 1.0 and junCHWRet.vol.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet.vol.T <= 1e4, has value: " + String(junCHWRet.vol.T, "g"));
*/
void logic2_raw_eqFunction_10574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10574};
  modelica_boolean tmp2211;
  modelica_boolean tmp2212;
  static const MMC_DEFSTRINGLIT(tmp2213,81,"Variable violating min/max constraint: 1.0 <= junCHWRet.vol.T <= 1e4, has value: ");
  modelica_string tmp2214;
  modelica_metatype tmpMeta2215;
  static int tmp2216 = 0;
  if(!tmp2216)
  {
    tmp2211 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* junCHWRet.vol.T variable */),1.0);
    tmp2212 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* junCHWRet.vol.T variable */),1e4);
    if(!(tmp2211 && tmp2212))
    {
      tmp2214 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* junCHWRet.vol.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2215 = stringAppend(MMC_REFSTRINGLIT(tmp2213),tmp2214);
      {
        const char* assert_cond = "(junCHWRet.vol.T >= 1.0 and junCHWRet.vol.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",38,3,39,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2215));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",38,3,39,31,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2215));
        }
      }
      tmp2216 = 1;
    }
  }
  threadData->lastEquationSolved = 10574;
}

/*
equation index: 10575
type: ALGORITHM

  assert(junCHWRet.vol.p >= 0.0 and junCHWRet.vol.p <= 1e8, "Variable violating min/max constraint: 0.0 <= junCHWRet.vol.p <= 1e8, has value: " + String(junCHWRet.vol.p, "g"));
*/
void logic2_raw_eqFunction_10575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10575};
  modelica_boolean tmp2217;
  modelica_boolean tmp2218;
  static const MMC_DEFSTRINGLIT(tmp2219,81,"Variable violating min/max constraint: 0.0 <= junCHWRet.vol.p <= 1e8, has value: ");
  modelica_string tmp2220;
  modelica_metatype tmpMeta2221;
  static int tmp2222 = 0;
  if(!tmp2222)
  {
    tmp2217 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */),0.0);
    tmp2218 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */),1e8);
    if(!(tmp2217 && tmp2218))
    {
      tmp2220 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2221 = stringAppend(MMC_REFSTRINGLIT(tmp2219),tmp2220);
      {
        const char* assert_cond = "(junCHWRet.vol.p >= 0.0 and junCHWRet.vol.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",42,3,43,28,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2221));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",42,3,43,28,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2221));
        }
      }
      tmp2222 = 1;
    }
  }
  threadData->lastEquationSolved = 10575;
}

/*
equation index: 10576
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.medium.T >= 1.0 and junCHWRet.vol.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet.vol.dynBal.medium.T <= 1e4, has value: " + String(junCHWRet.vol.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10576};
  modelica_boolean tmp2223;
  modelica_boolean tmp2224;
  static const MMC_DEFSTRINGLIT(tmp2225,95,"Variable violating min/max constraint: 1.0 <= junCHWRet.vol.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp2226;
  modelica_metatype tmpMeta2227;
  static int tmp2228 = 0;
  if(!tmp2228)
  {
    tmp2223 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* junCHWRet.vol.dynBal.medium.T variable */),1.0);
    tmp2224 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* junCHWRet.vol.dynBal.medium.T variable */),1e4);
    if(!(tmp2223 && tmp2224))
    {
      tmp2226 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* junCHWRet.vol.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2227 = stringAppend(MMC_REFSTRINGLIT(tmp2225),tmp2226);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.medium.T >= 1.0 and junCHWRet.vol.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2227));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2227));
        }
      }
      tmp2228 = 1;
    }
  }
  threadData->lastEquationSolved = 10576;
}

/*
equation index: 10577
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.ports_H_flow[1] >= -1e8 and junCHWRet.vol.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= junCHWRet.vol.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(junCHWRet.vol.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10577};
  modelica_boolean tmp2229;
  modelica_boolean tmp2230;
  static const MMC_DEFSTRINGLIT(tmp2231,103,"Variable violating min/max constraint: -1e8 <= junCHWRet.vol.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp2232;
  modelica_metatype tmpMeta2233;
  static int tmp2234 = 0;
  if(!tmp2234)
  {
    tmp2229 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp2230 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp2229 && tmp2230))
    {
      tmp2232 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2233 = stringAppend(MMC_REFSTRINGLIT(tmp2231),tmp2232);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.ports_H_flow[1] >= -1e8 and junCHWRet.vol.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2233));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2233));
        }
      }
      tmp2234 = 1;
    }
  }
  threadData->lastEquationSolved = 10577;
}

/*
equation index: 10578
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.ports_H_flow[2] >= -1e8 and junCHWRet.vol.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= junCHWRet.vol.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(junCHWRet.vol.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10578};
  modelica_boolean tmp2235;
  modelica_boolean tmp2236;
  static const MMC_DEFSTRINGLIT(tmp2237,103,"Variable violating min/max constraint: -1e8 <= junCHWRet.vol.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp2238;
  modelica_metatype tmpMeta2239;
  static int tmp2240 = 0;
  if(!tmp2240)
  {
    tmp2235 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[908]] /* junCHWRet.vol.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp2236 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[908]] /* junCHWRet.vol.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp2235 && tmp2236))
    {
      tmp2238 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[908]] /* junCHWRet.vol.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2239 = stringAppend(MMC_REFSTRINGLIT(tmp2237),tmp2238);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.ports_H_flow[2] >= -1e8 and junCHWRet.vol.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2239));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2239));
        }
      }
      tmp2240 = 1;
    }
  }
  threadData->lastEquationSolved = 10578;
}

/*
equation index: 10579
type: ALGORITHM

  assert(junCHWRet.vol.dynBal.ports_H_flow[3] >= -1e8 and junCHWRet.vol.dynBal.ports_H_flow[3] <= 1e8, "Variable violating min/max constraint: -1e8 <= junCHWRet.vol.dynBal.ports_H_flow[3] <= 1e8, has value: " + String(junCHWRet.vol.dynBal.ports_H_flow[3], "g"));
*/
void logic2_raw_eqFunction_10579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10579};
  modelica_boolean tmp2241;
  modelica_boolean tmp2242;
  static const MMC_DEFSTRINGLIT(tmp2243,103,"Variable violating min/max constraint: -1e8 <= junCHWRet.vol.dynBal.ports_H_flow[3] <= 1e8, has value: ");
  modelica_string tmp2244;
  modelica_metatype tmpMeta2245;
  static int tmp2246 = 0;
  if(!tmp2246)
  {
    tmp2241 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* junCHWRet.vol.dynBal.ports_H_flow[3] variable */),-1e8);
    tmp2242 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* junCHWRet.vol.dynBal.ports_H_flow[3] variable */),1e8);
    if(!(tmp2241 && tmp2242))
    {
      tmp2244 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* junCHWRet.vol.dynBal.ports_H_flow[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2245 = stringAppend(MMC_REFSTRINGLIT(tmp2243),tmp2244);
      {
        const char* assert_cond = "(junCHWRet.vol.dynBal.ports_H_flow[3] >= -1e8 and junCHWRet.vol.dynBal.ports_H_flow[3] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2245));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2245));
        }
      }
      tmp2246 = 1;
    }
  }
  threadData->lastEquationSolved = 10579;
}

/*
equation index: 10580
type: ALGORITHM

  assert(junCHWRet2.vol.T >= 1.0 and junCHWRet2.vol.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.T <= 1e4, has value: " + String(junCHWRet2.vol.T, "g"));
*/
void logic2_raw_eqFunction_10580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10580};
  modelica_boolean tmp2247;
  modelica_boolean tmp2248;
  static const MMC_DEFSTRINGLIT(tmp2249,82,"Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.T <= 1e4, has value: ");
  modelica_string tmp2250;
  modelica_metatype tmpMeta2251;
  static int tmp2252 = 0;
  if(!tmp2252)
  {
    tmp2247 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* junCHWRet2.vol.T variable */),1.0);
    tmp2248 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* junCHWRet2.vol.T variable */),1e4);
    if(!(tmp2247 && tmp2248))
    {
      tmp2250 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* junCHWRet2.vol.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2251 = stringAppend(MMC_REFSTRINGLIT(tmp2249),tmp2250);
      {
        const char* assert_cond = "(junCHWRet2.vol.T >= 1.0 and junCHWRet2.vol.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",38,3,39,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2251));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",38,3,39,31,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2251));
        }
      }
      tmp2252 = 1;
    }
  }
  threadData->lastEquationSolved = 10580;
}

/*
equation index: 10581
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.medium.T >= 1.0 and junCHWRet2.vol.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.dynBal.medium.T <= 1e4, has value: " + String(junCHWRet2.vol.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10581};
  modelica_boolean tmp2253;
  modelica_boolean tmp2254;
  static const MMC_DEFSTRINGLIT(tmp2255,96,"Variable violating min/max constraint: 1.0 <= junCHWRet2.vol.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp2256;
  modelica_metatype tmpMeta2257;
  static int tmp2258 = 0;
  if(!tmp2258)
  {
    tmp2253 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* junCHWRet2.vol.dynBal.medium.T variable */),1.0);
    tmp2254 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* junCHWRet2.vol.dynBal.medium.T variable */),1e4);
    if(!(tmp2253 && tmp2254))
    {
      tmp2256 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* junCHWRet2.vol.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2257 = stringAppend(MMC_REFSTRINGLIT(tmp2255),tmp2256);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.medium.T >= 1.0 and junCHWRet2.vol.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2257));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2257));
        }
      }
      tmp2258 = 1;
    }
  }
  threadData->lastEquationSolved = 10581;
}

/*
equation index: 10582
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.ports_H_flow[1] >= -1e8 and junCHWRet2.vol.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= junCHWRet2.vol.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(junCHWRet2.vol.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10582};
  modelica_boolean tmp2259;
  modelica_boolean tmp2260;
  static const MMC_DEFSTRINGLIT(tmp2261,104,"Variable violating min/max constraint: -1e8 <= junCHWRet2.vol.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp2262;
  modelica_metatype tmpMeta2263;
  static int tmp2264 = 0;
  if(!tmp2264)
  {
    tmp2259 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* junCHWRet2.vol.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp2260 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* junCHWRet2.vol.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp2259 && tmp2260))
    {
      tmp2262 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* junCHWRet2.vol.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2263 = stringAppend(MMC_REFSTRINGLIT(tmp2261),tmp2262);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.ports_H_flow[1] >= -1e8 and junCHWRet2.vol.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2263));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2263));
        }
      }
      tmp2264 = 1;
    }
  }
  threadData->lastEquationSolved = 10582;
}

/*
equation index: 10583
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.ports_H_flow[2] >= -1e8 and junCHWRet2.vol.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= junCHWRet2.vol.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(junCHWRet2.vol.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10583};
  modelica_boolean tmp2265;
  modelica_boolean tmp2266;
  static const MMC_DEFSTRINGLIT(tmp2267,104,"Variable violating min/max constraint: -1e8 <= junCHWRet2.vol.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp2268;
  modelica_metatype tmpMeta2269;
  static int tmp2270 = 0;
  if(!tmp2270)
  {
    tmp2265 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[931]] /* junCHWRet2.vol.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp2266 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[931]] /* junCHWRet2.vol.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp2265 && tmp2266))
    {
      tmp2268 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[931]] /* junCHWRet2.vol.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2269 = stringAppend(MMC_REFSTRINGLIT(tmp2267),tmp2268);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.ports_H_flow[2] >= -1e8 and junCHWRet2.vol.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2269));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2269));
        }
      }
      tmp2270 = 1;
    }
  }
  threadData->lastEquationSolved = 10583;
}

/*
equation index: 10584
type: ALGORITHM

  assert(junCHWRet2.vol.dynBal.ports_H_flow[3] >= -1e8 and junCHWRet2.vol.dynBal.ports_H_flow[3] <= 1e8, "Variable violating min/max constraint: -1e8 <= junCHWRet2.vol.dynBal.ports_H_flow[3] <= 1e8, has value: " + String(junCHWRet2.vol.dynBal.ports_H_flow[3], "g"));
*/
void logic2_raw_eqFunction_10584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10584};
  modelica_boolean tmp2271;
  modelica_boolean tmp2272;
  static const MMC_DEFSTRINGLIT(tmp2273,104,"Variable violating min/max constraint: -1e8 <= junCHWRet2.vol.dynBal.ports_H_flow[3] <= 1e8, has value: ");
  modelica_string tmp2274;
  modelica_metatype tmpMeta2275;
  static int tmp2276 = 0;
  if(!tmp2276)
  {
    tmp2271 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* junCHWRet2.vol.dynBal.ports_H_flow[3] variable */),-1e8);
    tmp2272 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* junCHWRet2.vol.dynBal.ports_H_flow[3] variable */),1e8);
    if(!(tmp2271 && tmp2272))
    {
      tmp2274 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* junCHWRet2.vol.dynBal.ports_H_flow[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2275 = stringAppend(MMC_REFSTRINGLIT(tmp2273),tmp2274);
      {
        const char* assert_cond = "(junCHWRet2.vol.dynBal.ports_H_flow[3] >= -1e8 and junCHWRet2.vol.dynBal.ports_H_flow[3] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2275));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2275));
        }
      }
      tmp2276 = 1;
    }
  }
  threadData->lastEquationSolved = 10584;
}

/*
equation index: 10585
type: ALGORITHM

  assert(junCHWSup2.vol.ports[3].h_outflow >= -1e10 and junCHWSup2.vol.ports[3].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= junCHWSup2.vol.ports[3].h_outflow <= 1e10, has value: " + String(junCHWSup2.vol.ports[3].h_outflow, "g"));
*/
void logic2_raw_eqFunction_10585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10585};
  modelica_boolean tmp2277;
  modelica_boolean tmp2278;
  static const MMC_DEFSTRINGLIT(tmp2279,102,"Variable violating min/max constraint: -1e10 <= junCHWSup2.vol.ports[3].h_outflow <= 1e10, has value: ");
  modelica_string tmp2280;
  modelica_metatype tmpMeta2281;
  static int tmp2282 = 0;
  if(!tmp2282)
  {
    tmp2277 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* junCHWSup2.vol.ports[3].h_outflow variable */),-1e10);
    tmp2278 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* junCHWSup2.vol.ports[3].h_outflow variable */),1e10);
    if(!(tmp2277 && tmp2278))
    {
      tmp2280 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* junCHWSup2.vol.ports[3].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2281 = stringAppend(MMC_REFSTRINGLIT(tmp2279),tmp2280);
      {
        const char* assert_cond = "(junCHWSup2.vol.ports[3].h_outflow >= -1e10 and junCHWSup2.vol.ports[3].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2281));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2281));
        }
      }
      tmp2282 = 1;
    }
  }
  threadData->lastEquationSolved = 10585;
}

/*
equation index: 10586
type: ALGORITHM

  assert(junCHWSup2.vol.T >= 1.0 and junCHWSup2.vol.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.T <= 1e4, has value: " + String(junCHWSup2.vol.T, "g"));
*/
void logic2_raw_eqFunction_10586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10586};
  modelica_boolean tmp2283;
  modelica_boolean tmp2284;
  static const MMC_DEFSTRINGLIT(tmp2285,82,"Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.T <= 1e4, has value: ");
  modelica_string tmp2286;
  modelica_metatype tmpMeta2287;
  static int tmp2288 = 0;
  if(!tmp2288)
  {
    tmp2283 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* junCHWSup2.vol.T variable */),1.0);
    tmp2284 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* junCHWSup2.vol.T variable */),1e4);
    if(!(tmp2283 && tmp2284))
    {
      tmp2286 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* junCHWSup2.vol.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2287 = stringAppend(MMC_REFSTRINGLIT(tmp2285),tmp2286);
      {
        const char* assert_cond = "(junCHWSup2.vol.T >= 1.0 and junCHWSup2.vol.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",38,3,39,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2287));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",38,3,39,31,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2287));
        }
      }
      tmp2288 = 1;
    }
  }
  threadData->lastEquationSolved = 10586;
}

/*
equation index: 10587
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.medium.T >= 1.0 and junCHWSup2.vol.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.dynBal.medium.T <= 1e4, has value: " + String(junCHWSup2.vol.dynBal.medium.T, "g"));
*/
void logic2_raw_eqFunction_10587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10587};
  modelica_boolean tmp2289;
  modelica_boolean tmp2290;
  static const MMC_DEFSTRINGLIT(tmp2291,96,"Variable violating min/max constraint: 1.0 <= junCHWSup2.vol.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp2292;
  modelica_metatype tmpMeta2293;
  static int tmp2294 = 0;
  if(!tmp2294)
  {
    tmp2289 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* junCHWSup2.vol.dynBal.medium.T variable */),1.0);
    tmp2290 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* junCHWSup2.vol.dynBal.medium.T variable */),1e4);
    if(!(tmp2289 && tmp2290))
    {
      tmp2292 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* junCHWSup2.vol.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2293 = stringAppend(MMC_REFSTRINGLIT(tmp2291),tmp2292);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.medium.T >= 1.0 and junCHWSup2.vol.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2293));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Media/Water.mo",16,5,18,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2293));
        }
      }
      tmp2294 = 1;
    }
  }
  threadData->lastEquationSolved = 10587;
}

/*
equation index: 10588
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.ports_H_flow[1] >= -1e8 and junCHWSup2.vol.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= junCHWSup2.vol.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(junCHWSup2.vol.dynBal.ports_H_flow[1], "g"));
*/
void logic2_raw_eqFunction_10588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10588};
  modelica_boolean tmp2295;
  modelica_boolean tmp2296;
  static const MMC_DEFSTRINGLIT(tmp2297,104,"Variable violating min/max constraint: -1e8 <= junCHWSup2.vol.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp2298;
  modelica_metatype tmpMeta2299;
  static int tmp2300 = 0;
  if(!tmp2300)
  {
    tmp2295 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[976]] /* junCHWSup2.vol.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp2296 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[976]] /* junCHWSup2.vol.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp2295 && tmp2296))
    {
      tmp2298 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[976]] /* junCHWSup2.vol.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2299 = stringAppend(MMC_REFSTRINGLIT(tmp2297),tmp2298);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.ports_H_flow[1] >= -1e8 and junCHWSup2.vol.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2299));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2299));
        }
      }
      tmp2300 = 1;
    }
  }
  threadData->lastEquationSolved = 10588;
}

/*
equation index: 10589
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.ports_H_flow[2] >= -1e8 and junCHWSup2.vol.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= junCHWSup2.vol.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(junCHWSup2.vol.dynBal.ports_H_flow[2], "g"));
*/
void logic2_raw_eqFunction_10589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10589};
  modelica_boolean tmp2301;
  modelica_boolean tmp2302;
  static const MMC_DEFSTRINGLIT(tmp2303,104,"Variable violating min/max constraint: -1e8 <= junCHWSup2.vol.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp2304;
  modelica_metatype tmpMeta2305;
  static int tmp2306 = 0;
  if(!tmp2306)
  {
    tmp2301 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* junCHWSup2.vol.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp2302 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* junCHWSup2.vol.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp2301 && tmp2302))
    {
      tmp2304 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* junCHWSup2.vol.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2305 = stringAppend(MMC_REFSTRINGLIT(tmp2303),tmp2304);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.ports_H_flow[2] >= -1e8 and junCHWSup2.vol.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2305));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2305));
        }
      }
      tmp2306 = 1;
    }
  }
  threadData->lastEquationSolved = 10589;
}

/*
equation index: 10590
type: ALGORITHM

  assert(junCHWSup2.vol.dynBal.ports_H_flow[3] >= -1e8 and junCHWSup2.vol.dynBal.ports_H_flow[3] <= 1e8, "Variable violating min/max constraint: -1e8 <= junCHWSup2.vol.dynBal.ports_H_flow[3] <= 1e8, has value: " + String(junCHWSup2.vol.dynBal.ports_H_flow[3], "g"));
*/
void logic2_raw_eqFunction_10590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10590};
  modelica_boolean tmp2307;
  modelica_boolean tmp2308;
  static const MMC_DEFSTRINGLIT(tmp2309,104,"Variable violating min/max constraint: -1e8 <= junCHWSup2.vol.dynBal.ports_H_flow[3] <= 1e8, has value: ");
  modelica_string tmp2310;
  modelica_metatype tmpMeta2311;
  static int tmp2312 = 0;
  if(!tmp2312)
  {
    tmp2307 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[978]] /* junCHWSup2.vol.dynBal.ports_H_flow[3] variable */),-1e8);
    tmp2308 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[978]] /* junCHWSup2.vol.dynBal.ports_H_flow[3] variable */),1e8);
    if(!(tmp2307 && tmp2308))
    {
      tmp2310 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[978]] /* junCHWSup2.vol.dynBal.ports_H_flow[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2311 = stringAppend(MMC_REFSTRINGLIT(tmp2309),tmp2310);
      {
        const char* assert_cond = "(junCHWSup2.vol.dynBal.ports_H_flow[3] >= -1e8 and junCHWSup2.vol.dynBal.ports_H_flow[3] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2311));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",125,3,125,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2311));
        }
      }
      tmp2312 = 1;
    }
  }
  threadData->lastEquationSolved = 10590;
}

/*
equation index: 10591
type: ALGORITHM

  assert(val8_2.port_a.h_outflow >= -1e10 and val8_2.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= val8_2.port_a.h_outflow <= 1e10, has value: " + String(val8_2.port_a.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10591};
  modelica_boolean tmp2313;
  modelica_boolean tmp2314;
  static const MMC_DEFSTRINGLIT(tmp2315,92,"Variable violating min/max constraint: -1e10 <= val8_2.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp2316;
  modelica_metatype tmpMeta2317;
  static int tmp2318 = 0;
  if(!tmp2318)
  {
    tmp2313 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8_2.port_a.h_outflow variable */),-1e10);
    tmp2314 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8_2.port_a.h_outflow variable */),1e10);
    if(!(tmp2313 && tmp2314))
    {
      tmp2316 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8_2.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2317 = stringAppend(MMC_REFSTRINGLIT(tmp2315),tmp2316);
      {
        const char* assert_cond = "(val8_2.port_a.h_outflow >= -1e10 and val8_2.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2317));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2317));
        }
      }
      tmp2318 = 1;
    }
  }
  threadData->lastEquationSolved = 10591;
}

/*
equation index: 10592
type: ALGORITHM

  assert(val8_2.port_b.h_outflow >= -1e10 and val8_2.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= val8_2.port_b.h_outflow <= 1e10, has value: " + String(val8_2.port_b.h_outflow, "g"));
*/
void logic2_raw_eqFunction_10592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10592};
  modelica_boolean tmp2319;
  modelica_boolean tmp2320;
  static const MMC_DEFSTRINGLIT(tmp2321,92,"Variable violating min/max constraint: -1e10 <= val8_2.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp2322;
  modelica_metatype tmpMeta2323;
  static int tmp2324 = 0;
  if(!tmp2324)
  {
    tmp2319 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* val8_2.port_b.h_outflow variable */),-1e10);
    tmp2320 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* val8_2.port_b.h_outflow variable */),1e10);
    if(!(tmp2319 && tmp2320))
    {
      tmp2322 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* val8_2.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2323 = stringAppend(MMC_REFSTRINGLIT(tmp2321),tmp2322);
      {
        const char* assert_cond = "(val8_2.port_b.h_outflow >= -1e10 and val8_2.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2323));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2323));
        }
      }
      tmp2324 = 1;
    }
  }
  threadData->lastEquationSolved = 10592;
}

/*
equation index: 10593
type: ALGORITHM

  assert(val8_2.kVal >= 2.2250738585072014e-308, "Variable violating min constraint: 2.2250738585072014e-308 <= val8_2.kVal, has value: " + String(val8_2.kVal, "g"));
*/
void logic2_raw_eqFunction_10593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10593};
  modelica_boolean tmp2325;
  static const MMC_DEFSTRINGLIT(tmp2326,86,"Variable violating min constraint: 2.2250738585072014e-308 <= val8_2.kVal, has value: ");
  modelica_string tmp2327;
  modelica_metatype tmpMeta2328;
  static int tmp2329 = 0;
  if(!tmp2329)
  {
    tmp2325 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val8_2.kVal variable */),2.2250738585072014e-308);
    if(!tmp2325)
    {
      tmp2327 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val8_2.kVal variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2328 = stringAppend(MMC_REFSTRINGLIT(tmp2326),tmp2327);
      {
        const char* assert_cond = "(val8_2.kVal >= 2.2250738585072014e-308)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",24,3,25,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2328));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",24,3,25,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2328));
        }
      }
      tmp2329 = 1;
    }
  }
  threadData->lastEquationSolved = 10593;
}

/*
equation index: 10594
type: ALGORITHM

  assert(val8_2.k >= 2.2250738585072014e-308, "Variable violating min constraint: 2.2250738585072014e-308 <= val8_2.k, has value: " + String(val8_2.k, "g"));
*/
void logic2_raw_eqFunction_10594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10594};
  modelica_boolean tmp2330;
  static const MMC_DEFSTRINGLIT(tmp2331,83,"Variable violating min constraint: 2.2250738585072014e-308 <= val8_2.k, has value: ");
  modelica_string tmp2332;
  modelica_metatype tmpMeta2333;
  static int tmp2334 = 0;
  if(!tmp2334)
  {
    tmp2330 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8_2.k variable */),2.2250738585072014e-308);
    if(!tmp2330)
    {
      tmp2332 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8_2.k variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2333 = stringAppend(MMC_REFSTRINGLIT(tmp2331),tmp2332);
      {
        const char* assert_cond = "(val8_2.k >= 2.2250738585072014e-308)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",26,3,27,95,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2333));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",26,3,27,95,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2333));
        }
      }
      tmp2334 = 1;
    }
  }
  threadData->lastEquationSolved = 10594;
}

/*
equation index: 10595
type: ALGORITHM

  assert(chwstCtrl1.TChiSet >= 0.0, "Variable violating min constraint: 0.0 <= chwstCtrl1.TChiSet, has value: " + String(chwstCtrl1.TChiSet, "g"));
*/
void logic2_raw_eqFunction_10595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10595};
  modelica_boolean tmp2335;
  static const MMC_DEFSTRINGLIT(tmp2336,73,"Variable violating min constraint: 0.0 <= chwstCtrl1.TChiSet, has value: ");
  modelica_string tmp2337;
  modelica_metatype tmpMeta2338;
  static int tmp2339 = 0;
  if(!tmp2339)
  {
    tmp2335 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1333]] /* chwstCtrl1.TChiSet DISCRETE */),0.0);
    if(!tmp2335)
    {
      tmp2337 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1333]] /* chwstCtrl1.TChiSet DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2338 = stringAppend(MMC_REFSTRINGLIT(tmp2336),tmp2337);
      {
        const char* assert_cond = "(chwstCtrl1.TChiSet >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",68,5,68,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2338));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",68,5,68,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2338));
        }
      }
      tmp2339 = 1;
    }
  }
  threadData->lastEquationSolved = 10595;
}

/*
equation index: 10596
type: ALGORITHM

  assert(chwstCtrl1.TChiRaw >= 0.0, "Variable violating min constraint: 0.0 <= chwstCtrl1.TChiRaw, has value: " + String(chwstCtrl1.TChiRaw, "g"));
*/
void logic2_raw_eqFunction_10596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10596};
  modelica_boolean tmp2340;
  static const MMC_DEFSTRINGLIT(tmp2341,73,"Variable violating min constraint: 0.0 <= chwstCtrl1.TChiRaw, has value: ");
  modelica_string tmp2342;
  modelica_metatype tmpMeta2343;
  static int tmp2344 = 0;
  if(!tmp2344)
  {
    tmp2340 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* chwstCtrl1.TChiRaw DISCRETE */),0.0);
    if(!tmp2340)
    {
      tmp2342 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* chwstCtrl1.TChiRaw DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2343 = stringAppend(MMC_REFSTRINGLIT(tmp2341),tmp2342);
      {
        const char* assert_cond = "(chwstCtrl1.TChiRaw >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",69,5,69,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2343));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",69,5,69,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2343));
        }
      }
      tmp2344 = 1;
    }
  }
  threadData->lastEquationSolved = 10596;
}

/*
equation index: 10597
type: ALGORITHM

  assert(chwstCtrl1.TChiCmd >= 0.0, "Variable violating min constraint: 0.0 <= chwstCtrl1.TChiCmd, has value: " + String(chwstCtrl1.TChiCmd, "g"));
*/
void logic2_raw_eqFunction_10597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10597};
  modelica_boolean tmp2345;
  static const MMC_DEFSTRINGLIT(tmp2346,73,"Variable violating min constraint: 0.0 <= chwstCtrl1.TChiCmd, has value: ");
  modelica_string tmp2347;
  modelica_metatype tmpMeta2348;
  static int tmp2349 = 0;
  if(!tmp2349)
  {
    tmp2345 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* chwstCtrl1.TChiCmd STATE(1) */),0.0);
    if(!tmp2345)
    {
      tmp2347 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* chwstCtrl1.TChiCmd STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2348 = stringAppend(MMC_REFSTRINGLIT(tmp2346),tmp2347);
      {
        const char* assert_cond = "(chwstCtrl1.TChiCmd >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",70,5,70,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2348));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",70,5,70,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2348));
        }
      }
      tmp2349 = 1;
    }
  }
  threadData->lastEquationSolved = 10597;
}

/*
equation index: 10598
type: ALGORITHM

  assert(chwstCtrl2.TChiSet >= 0.0, "Variable violating min constraint: 0.0 <= chwstCtrl2.TChiSet, has value: " + String(chwstCtrl2.TChiSet, "g"));
*/
void logic2_raw_eqFunction_10598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10598};
  modelica_boolean tmp2350;
  static const MMC_DEFSTRINGLIT(tmp2351,73,"Variable violating min constraint: 0.0 <= chwstCtrl2.TChiSet, has value: ");
  modelica_string tmp2352;
  modelica_metatype tmpMeta2353;
  static int tmp2354 = 0;
  if(!tmp2354)
  {
    tmp2350 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* chwstCtrl2.TChiSet DISCRETE */),0.0);
    if(!tmp2350)
    {
      tmp2352 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* chwstCtrl2.TChiSet DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2353 = stringAppend(MMC_REFSTRINGLIT(tmp2351),tmp2352);
      {
        const char* assert_cond = "(chwstCtrl2.TChiSet >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",68,5,68,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2353));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",68,5,68,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2353));
        }
      }
      tmp2354 = 1;
    }
  }
  threadData->lastEquationSolved = 10598;
}

/*
equation index: 10599
type: ALGORITHM

  assert(chwstCtrl2.TChiRaw >= 0.0, "Variable violating min constraint: 0.0 <= chwstCtrl2.TChiRaw, has value: " + String(chwstCtrl2.TChiRaw, "g"));
*/
void logic2_raw_eqFunction_10599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10599};
  modelica_boolean tmp2355;
  static const MMC_DEFSTRINGLIT(tmp2356,73,"Variable violating min constraint: 0.0 <= chwstCtrl2.TChiRaw, has value: ");
  modelica_string tmp2357;
  modelica_metatype tmpMeta2358;
  static int tmp2359 = 0;
  if(!tmp2359)
  {
    tmp2355 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* chwstCtrl2.TChiRaw DISCRETE */),0.0);
    if(!tmp2355)
    {
      tmp2357 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* chwstCtrl2.TChiRaw DISCRETE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2358 = stringAppend(MMC_REFSTRINGLIT(tmp2356),tmp2357);
      {
        const char* assert_cond = "(chwstCtrl2.TChiRaw >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",69,5,69,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2358));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",69,5,69,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2358));
        }
      }
      tmp2359 = 1;
    }
  }
  threadData->lastEquationSolved = 10599;
}

/*
equation index: 10600
type: ALGORITHM

  assert(chwstCtrl2.TChiCmd >= 0.0, "Variable violating min constraint: 0.0 <= chwstCtrl2.TChiCmd, has value: " + String(chwstCtrl2.TChiCmd, "g"));
*/
void logic2_raw_eqFunction_10600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10600};
  modelica_boolean tmp2360;
  static const MMC_DEFSTRINGLIT(tmp2361,73,"Variable violating min constraint: 0.0 <= chwstCtrl2.TChiCmd, has value: ");
  modelica_string tmp2362;
  modelica_metatype tmpMeta2363;
  static int tmp2364 = 0;
  if(!tmp2364)
  {
    tmp2360 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* chwstCtrl2.TChiCmd STATE(1) */),0.0);
    if(!tmp2360)
    {
      tmp2362 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* chwstCtrl2.TChiCmd STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2363 = stringAppend(MMC_REFSTRINGLIT(tmp2361),tmp2362);
      {
        const char* assert_cond = "(chwstCtrl2.TChiCmd >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",70,5,70,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2363));
        } else {
          FILE_INFO info = {"C:/Users/irfan/OneDrive/Documents/GitHub/PB/WaterCooledChillerExample/Trial_Final/logic2.mo",70,5,70,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2363));
        }
      }
      tmp2364 = 1;
    }
  }
  threadData->lastEquationSolved = 10600;
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int logic2_raw_checkForAsserts(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[410])(DATA*, threadData_t*) = {
    logic2_raw_eqFunction_10191,
    logic2_raw_eqFunction_10192,
    logic2_raw_eqFunction_10193,
    logic2_raw_eqFunction_10194,
    logic2_raw_eqFunction_10195,
    logic2_raw_eqFunction_10196,
    logic2_raw_eqFunction_10197,
    logic2_raw_eqFunction_10198,
    logic2_raw_eqFunction_10199,
    logic2_raw_eqFunction_10200,
    logic2_raw_eqFunction_10201,
    logic2_raw_eqFunction_10202,
    logic2_raw_eqFunction_10203,
    logic2_raw_eqFunction_10204,
    logic2_raw_eqFunction_10205,
    logic2_raw_eqFunction_10206,
    logic2_raw_eqFunction_10207,
    logic2_raw_eqFunction_10208,
    logic2_raw_eqFunction_10209,
    logic2_raw_eqFunction_10210,
    logic2_raw_eqFunction_10211,
    logic2_raw_eqFunction_10212,
    logic2_raw_eqFunction_10213,
    logic2_raw_eqFunction_10214,
    logic2_raw_eqFunction_10215,
    logic2_raw_eqFunction_10216,
    logic2_raw_eqFunction_10217,
    logic2_raw_eqFunction_10218,
    logic2_raw_eqFunction_10219,
    logic2_raw_eqFunction_10220,
    logic2_raw_eqFunction_10221,
    logic2_raw_eqFunction_10222,
    logic2_raw_eqFunction_10223,
    logic2_raw_eqFunction_10224,
    logic2_raw_eqFunction_10225,
    logic2_raw_eqFunction_10226,
    logic2_raw_eqFunction_10227,
    logic2_raw_eqFunction_10228,
    logic2_raw_eqFunction_10229,
    logic2_raw_eqFunction_10230,
    logic2_raw_eqFunction_10231,
    logic2_raw_eqFunction_10232,
    logic2_raw_eqFunction_10233,
    logic2_raw_eqFunction_10234,
    logic2_raw_eqFunction_10235,
    logic2_raw_eqFunction_10236,
    logic2_raw_eqFunction_10237,
    logic2_raw_eqFunction_10238,
    logic2_raw_eqFunction_10239,
    logic2_raw_eqFunction_10240,
    logic2_raw_eqFunction_10241,
    logic2_raw_eqFunction_10242,
    logic2_raw_eqFunction_10243,
    logic2_raw_eqFunction_10244,
    logic2_raw_eqFunction_10245,
    logic2_raw_eqFunction_10246,
    logic2_raw_eqFunction_10247,
    logic2_raw_eqFunction_10248,
    logic2_raw_eqFunction_10249,
    logic2_raw_eqFunction_10250,
    logic2_raw_eqFunction_10251,
    logic2_raw_eqFunction_10252,
    logic2_raw_eqFunction_10253,
    logic2_raw_eqFunction_10254,
    logic2_raw_eqFunction_10255,
    logic2_raw_eqFunction_10256,
    logic2_raw_eqFunction_10257,
    logic2_raw_eqFunction_10258,
    logic2_raw_eqFunction_10259,
    logic2_raw_eqFunction_10260,
    logic2_raw_eqFunction_10261,
    logic2_raw_eqFunction_10262,
    logic2_raw_eqFunction_10263,
    logic2_raw_eqFunction_10264,
    logic2_raw_eqFunction_10265,
    logic2_raw_eqFunction_10266,
    logic2_raw_eqFunction_10267,
    logic2_raw_eqFunction_10268,
    logic2_raw_eqFunction_10269,
    logic2_raw_eqFunction_10270,
    logic2_raw_eqFunction_10271,
    logic2_raw_eqFunction_10272,
    logic2_raw_eqFunction_10273,
    logic2_raw_eqFunction_10274,
    logic2_raw_eqFunction_10275,
    logic2_raw_eqFunction_10276,
    logic2_raw_eqFunction_10277,
    logic2_raw_eqFunction_10278,
    logic2_raw_eqFunction_10279,
    logic2_raw_eqFunction_10280,
    logic2_raw_eqFunction_10281,
    logic2_raw_eqFunction_10282,
    logic2_raw_eqFunction_10283,
    logic2_raw_eqFunction_10284,
    logic2_raw_eqFunction_10285,
    logic2_raw_eqFunction_10286,
    logic2_raw_eqFunction_10287,
    logic2_raw_eqFunction_10288,
    logic2_raw_eqFunction_10289,
    logic2_raw_eqFunction_10290,
    logic2_raw_eqFunction_10291,
    logic2_raw_eqFunction_10292,
    logic2_raw_eqFunction_10293,
    logic2_raw_eqFunction_10294,
    logic2_raw_eqFunction_10295,
    logic2_raw_eqFunction_10296,
    logic2_raw_eqFunction_10297,
    logic2_raw_eqFunction_10298,
    logic2_raw_eqFunction_10299,
    logic2_raw_eqFunction_10300,
    logic2_raw_eqFunction_10301,
    logic2_raw_eqFunction_10302,
    logic2_raw_eqFunction_10303,
    logic2_raw_eqFunction_10304,
    logic2_raw_eqFunction_10305,
    logic2_raw_eqFunction_10306,
    logic2_raw_eqFunction_10307,
    logic2_raw_eqFunction_10308,
    logic2_raw_eqFunction_10309,
    logic2_raw_eqFunction_10310,
    logic2_raw_eqFunction_10311,
    logic2_raw_eqFunction_10312,
    logic2_raw_eqFunction_10313,
    logic2_raw_eqFunction_10314,
    logic2_raw_eqFunction_10315,
    logic2_raw_eqFunction_10316,
    logic2_raw_eqFunction_10317,
    logic2_raw_eqFunction_10318,
    logic2_raw_eqFunction_10319,
    logic2_raw_eqFunction_10320,
    logic2_raw_eqFunction_10321,
    logic2_raw_eqFunction_10322,
    logic2_raw_eqFunction_10323,
    logic2_raw_eqFunction_10324,
    logic2_raw_eqFunction_10325,
    logic2_raw_eqFunction_10326,
    logic2_raw_eqFunction_10327,
    logic2_raw_eqFunction_10328,
    logic2_raw_eqFunction_10329,
    logic2_raw_eqFunction_10330,
    logic2_raw_eqFunction_10331,
    logic2_raw_eqFunction_10332,
    logic2_raw_eqFunction_10333,
    logic2_raw_eqFunction_10334,
    logic2_raw_eqFunction_10335,
    logic2_raw_eqFunction_10336,
    logic2_raw_eqFunction_10337,
    logic2_raw_eqFunction_10338,
    logic2_raw_eqFunction_10339,
    logic2_raw_eqFunction_10340,
    logic2_raw_eqFunction_10341,
    logic2_raw_eqFunction_10342,
    logic2_raw_eqFunction_10343,
    logic2_raw_eqFunction_10344,
    logic2_raw_eqFunction_10345,
    logic2_raw_eqFunction_10346,
    logic2_raw_eqFunction_10347,
    logic2_raw_eqFunction_10348,
    logic2_raw_eqFunction_10349,
    logic2_raw_eqFunction_10350,
    logic2_raw_eqFunction_10351,
    logic2_raw_eqFunction_10352,
    logic2_raw_eqFunction_10353,
    logic2_raw_eqFunction_10354,
    logic2_raw_eqFunction_10355,
    logic2_raw_eqFunction_10356,
    logic2_raw_eqFunction_10357,
    logic2_raw_eqFunction_10358,
    logic2_raw_eqFunction_10359,
    logic2_raw_eqFunction_10360,
    logic2_raw_eqFunction_10361,
    logic2_raw_eqFunction_10362,
    logic2_raw_eqFunction_10363,
    logic2_raw_eqFunction_10364,
    logic2_raw_eqFunction_10365,
    logic2_raw_eqFunction_10366,
    logic2_raw_eqFunction_10367,
    logic2_raw_eqFunction_10368,
    logic2_raw_eqFunction_10369,
    logic2_raw_eqFunction_10370,
    logic2_raw_eqFunction_10371,
    logic2_raw_eqFunction_10372,
    logic2_raw_eqFunction_10373,
    logic2_raw_eqFunction_10374,
    logic2_raw_eqFunction_10375,
    logic2_raw_eqFunction_10376,
    logic2_raw_eqFunction_10377,
    logic2_raw_eqFunction_10378,
    logic2_raw_eqFunction_10379,
    logic2_raw_eqFunction_10380,
    logic2_raw_eqFunction_10381,
    logic2_raw_eqFunction_10382,
    logic2_raw_eqFunction_10383,
    logic2_raw_eqFunction_10384,
    logic2_raw_eqFunction_10385,
    logic2_raw_eqFunction_10386,
    logic2_raw_eqFunction_10387,
    logic2_raw_eqFunction_10388,
    logic2_raw_eqFunction_10389,
    logic2_raw_eqFunction_10390,
    logic2_raw_eqFunction_10391,
    logic2_raw_eqFunction_10392,
    logic2_raw_eqFunction_10393,
    logic2_raw_eqFunction_10394,
    logic2_raw_eqFunction_10395,
    logic2_raw_eqFunction_10396,
    logic2_raw_eqFunction_10397,
    logic2_raw_eqFunction_10398,
    logic2_raw_eqFunction_10399,
    logic2_raw_eqFunction_10400,
    logic2_raw_eqFunction_10401,
    logic2_raw_eqFunction_10402,
    logic2_raw_eqFunction_10403,
    logic2_raw_eqFunction_10404,
    logic2_raw_eqFunction_10405,
    logic2_raw_eqFunction_10406,
    logic2_raw_eqFunction_10407,
    logic2_raw_eqFunction_10408,
    logic2_raw_eqFunction_10409,
    logic2_raw_eqFunction_10410,
    logic2_raw_eqFunction_10411,
    logic2_raw_eqFunction_10412,
    logic2_raw_eqFunction_10413,
    logic2_raw_eqFunction_10414,
    logic2_raw_eqFunction_10415,
    logic2_raw_eqFunction_10416,
    logic2_raw_eqFunction_10417,
    logic2_raw_eqFunction_10418,
    logic2_raw_eqFunction_10419,
    logic2_raw_eqFunction_10420,
    logic2_raw_eqFunction_10421,
    logic2_raw_eqFunction_10422,
    logic2_raw_eqFunction_10423,
    logic2_raw_eqFunction_10424,
    logic2_raw_eqFunction_10425,
    logic2_raw_eqFunction_10426,
    logic2_raw_eqFunction_10427,
    logic2_raw_eqFunction_10428,
    logic2_raw_eqFunction_10429,
    logic2_raw_eqFunction_10430,
    logic2_raw_eqFunction_10431,
    logic2_raw_eqFunction_10432,
    logic2_raw_eqFunction_10433,
    logic2_raw_eqFunction_10434,
    logic2_raw_eqFunction_10435,
    logic2_raw_eqFunction_10436,
    logic2_raw_eqFunction_10437,
    logic2_raw_eqFunction_10438,
    logic2_raw_eqFunction_10439,
    logic2_raw_eqFunction_10440,
    logic2_raw_eqFunction_10441,
    logic2_raw_eqFunction_10442,
    logic2_raw_eqFunction_10443,
    logic2_raw_eqFunction_10444,
    logic2_raw_eqFunction_10445,
    logic2_raw_eqFunction_10446,
    logic2_raw_eqFunction_10447,
    logic2_raw_eqFunction_10448,
    logic2_raw_eqFunction_10449,
    logic2_raw_eqFunction_10450,
    logic2_raw_eqFunction_10451,
    logic2_raw_eqFunction_10452,
    logic2_raw_eqFunction_10453,
    logic2_raw_eqFunction_10454,
    logic2_raw_eqFunction_10455,
    logic2_raw_eqFunction_10456,
    logic2_raw_eqFunction_10457,
    logic2_raw_eqFunction_10458,
    logic2_raw_eqFunction_10459,
    logic2_raw_eqFunction_10460,
    logic2_raw_eqFunction_10461,
    logic2_raw_eqFunction_10462,
    logic2_raw_eqFunction_10463,
    logic2_raw_eqFunction_10464,
    logic2_raw_eqFunction_10465,
    logic2_raw_eqFunction_10466,
    logic2_raw_eqFunction_10467,
    logic2_raw_eqFunction_10468,
    logic2_raw_eqFunction_10469,
    logic2_raw_eqFunction_10470,
    logic2_raw_eqFunction_10471,
    logic2_raw_eqFunction_10472,
    logic2_raw_eqFunction_10473,
    logic2_raw_eqFunction_10474,
    logic2_raw_eqFunction_10475,
    logic2_raw_eqFunction_10476,
    logic2_raw_eqFunction_10477,
    logic2_raw_eqFunction_10478,
    logic2_raw_eqFunction_10479,
    logic2_raw_eqFunction_10480,
    logic2_raw_eqFunction_10481,
    logic2_raw_eqFunction_10482,
    logic2_raw_eqFunction_10483,
    logic2_raw_eqFunction_10484,
    logic2_raw_eqFunction_10485,
    logic2_raw_eqFunction_10486,
    logic2_raw_eqFunction_10487,
    logic2_raw_eqFunction_10488,
    logic2_raw_eqFunction_10489,
    logic2_raw_eqFunction_10490,
    logic2_raw_eqFunction_10491,
    logic2_raw_eqFunction_10492,
    logic2_raw_eqFunction_10493,
    logic2_raw_eqFunction_10494,
    logic2_raw_eqFunction_10495,
    logic2_raw_eqFunction_10496,
    logic2_raw_eqFunction_10497,
    logic2_raw_eqFunction_10498,
    logic2_raw_eqFunction_10499,
    logic2_raw_eqFunction_10500,
    logic2_raw_eqFunction_10501,
    logic2_raw_eqFunction_10502,
    logic2_raw_eqFunction_10503,
    logic2_raw_eqFunction_10504,
    logic2_raw_eqFunction_10505,
    logic2_raw_eqFunction_10506,
    logic2_raw_eqFunction_10507,
    logic2_raw_eqFunction_10508,
    logic2_raw_eqFunction_10509,
    logic2_raw_eqFunction_10510,
    logic2_raw_eqFunction_10511,
    logic2_raw_eqFunction_10512,
    logic2_raw_eqFunction_10513,
    logic2_raw_eqFunction_10514,
    logic2_raw_eqFunction_10515,
    logic2_raw_eqFunction_10516,
    logic2_raw_eqFunction_10517,
    logic2_raw_eqFunction_10518,
    logic2_raw_eqFunction_10519,
    logic2_raw_eqFunction_10520,
    logic2_raw_eqFunction_10521,
    logic2_raw_eqFunction_10522,
    logic2_raw_eqFunction_10523,
    logic2_raw_eqFunction_10524,
    logic2_raw_eqFunction_10525,
    logic2_raw_eqFunction_10526,
    logic2_raw_eqFunction_10527,
    logic2_raw_eqFunction_10528,
    logic2_raw_eqFunction_10529,
    logic2_raw_eqFunction_10530,
    logic2_raw_eqFunction_10531,
    logic2_raw_eqFunction_10532,
    logic2_raw_eqFunction_10533,
    logic2_raw_eqFunction_10534,
    logic2_raw_eqFunction_10535,
    logic2_raw_eqFunction_10536,
    logic2_raw_eqFunction_10537,
    logic2_raw_eqFunction_10538,
    logic2_raw_eqFunction_10539,
    logic2_raw_eqFunction_10540,
    logic2_raw_eqFunction_10541,
    logic2_raw_eqFunction_10542,
    logic2_raw_eqFunction_10543,
    logic2_raw_eqFunction_10544,
    logic2_raw_eqFunction_10545,
    logic2_raw_eqFunction_10546,
    logic2_raw_eqFunction_10547,
    logic2_raw_eqFunction_10548,
    logic2_raw_eqFunction_10549,
    logic2_raw_eqFunction_10550,
    logic2_raw_eqFunction_10551,
    logic2_raw_eqFunction_10552,
    logic2_raw_eqFunction_10553,
    logic2_raw_eqFunction_10554,
    logic2_raw_eqFunction_10555,
    logic2_raw_eqFunction_10556,
    logic2_raw_eqFunction_10557,
    logic2_raw_eqFunction_10558,
    logic2_raw_eqFunction_10559,
    logic2_raw_eqFunction_10560,
    logic2_raw_eqFunction_10561,
    logic2_raw_eqFunction_10562,
    logic2_raw_eqFunction_10563,
    logic2_raw_eqFunction_10564,
    logic2_raw_eqFunction_10565,
    logic2_raw_eqFunction_10566,
    logic2_raw_eqFunction_10567,
    logic2_raw_eqFunction_10568,
    logic2_raw_eqFunction_10569,
    logic2_raw_eqFunction_10570,
    logic2_raw_eqFunction_10571,
    logic2_raw_eqFunction_10572,
    logic2_raw_eqFunction_10573,
    logic2_raw_eqFunction_10574,
    logic2_raw_eqFunction_10575,
    logic2_raw_eqFunction_10576,
    logic2_raw_eqFunction_10577,
    logic2_raw_eqFunction_10578,
    logic2_raw_eqFunction_10579,
    logic2_raw_eqFunction_10580,
    logic2_raw_eqFunction_10581,
    logic2_raw_eqFunction_10582,
    logic2_raw_eqFunction_10583,
    logic2_raw_eqFunction_10584,
    logic2_raw_eqFunction_10585,
    logic2_raw_eqFunction_10586,
    logic2_raw_eqFunction_10587,
    logic2_raw_eqFunction_10588,
    logic2_raw_eqFunction_10589,
    logic2_raw_eqFunction_10590,
    logic2_raw_eqFunction_10591,
    logic2_raw_eqFunction_10592,
    logic2_raw_eqFunction_10593,
    logic2_raw_eqFunction_10594,
    logic2_raw_eqFunction_10595,
    logic2_raw_eqFunction_10596,
    logic2_raw_eqFunction_10597,
    logic2_raw_eqFunction_10598,
    logic2_raw_eqFunction_10599,
    logic2_raw_eqFunction_10600
  };
  
  for (int id = 0; id < 410; id++) {
    eqFunctions[id](data, threadData);
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
