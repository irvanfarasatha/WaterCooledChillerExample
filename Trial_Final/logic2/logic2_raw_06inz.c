/* Initialization */
#include "logic2_raw_model.h"
#include "logic2_raw_11mix.h"
#include "logic2_raw_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void logic2_raw_functionInitialEquations_0(DATA *data, threadData_t *threadData);
void logic2_raw_functionInitialEquations_1(DATA *data, threadData_t *threadData);
void logic2_raw_functionInitialEquations_2(DATA *data, threadData_t *threadData);

int logic2_raw_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->discreteCall = 1;
  logic2_raw_functionInitialEquations_0(data, threadData);
  logic2_raw_functionInitialEquations_1(data, threadData);
  logic2_raw_functionInitialEquations_2(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  return 0;
}
extern void logic2_raw_eqFunction_1(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_4(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_5(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_6(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_7(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_8(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_9(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_10(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_11(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_12(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_13(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_14(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_15(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_16(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_17(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_18(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_19(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_20(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_21(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_22(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_23(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_24(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_25(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_26(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_27(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_28(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_29(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_30(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_31(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_32(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_33(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_34(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_35(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_36(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_37(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_38(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_39(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_40(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_41(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_42(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_43(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_44(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_45(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_46(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_47(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_48(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_49(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_50(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_51(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_52(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_53(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_54(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_55(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_56(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_57(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_58(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_59(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_60(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_61(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_62(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_63(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_64(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_65(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_66(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_67(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_68(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_69(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_70(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_71(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_72(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_73(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_74(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_75(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_76(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_77(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_78(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_79(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_80(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_81(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_82(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_83(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_84(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_85(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_86(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_87(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_88(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_89(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_90(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_91(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_92(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_93(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_94(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_95(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_96(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_97(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_98(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_99(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_100(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_101(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_102(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_103(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_104(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_105(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_106(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_107(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_108(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_109(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_110(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_111(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_112(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_113(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_114(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_115(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_116(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_117(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_118(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_119(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_120(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_121(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_122(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_123(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_124(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_125(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_126(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_127(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_128(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_129(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_130(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_131(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_132(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_133(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_134(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_135(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_136(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_137(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_138(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_139(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_140(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_141(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_142(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_152(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_153(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1183(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1184(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1185(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1186(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1187(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1188(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1189(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1190(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1191(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1192(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1193(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1194(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1195(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1196(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1197(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1198(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1199(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1200(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1201(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1202(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1203(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1204(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1205(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1206(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1207(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1208(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1209(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1210(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_143(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_144(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_145(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_146(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_147(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_148(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_149(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_150(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_151(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_156(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_157(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_158(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_159(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_160(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_161(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_162(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_163(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_164(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_165(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_166(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_167(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_168(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_169(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_170(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_171(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_172(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_173(DATA *data, threadData_t *threadData);


/*
equation index: 1728
type: SIMPLE_ASSIGN
pumCHW.PToMed.u1 = 0.0
*/
void logic2_raw_eqFunction_1728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1728};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* pumCHW.PToMed.u1 variable */) = 0.0;
  threadData->lastEquationSolved = 1728;
}

/*
equation index: 1729
type: SIMPLE_ASSIGN
pumCW.PToMed.u1 = 0.0
*/
void logic2_raw_eqFunction_1729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1729};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* pumCW.PToMed.u1 variable */) = 0.0;
  threadData->lastEquationSolved = 1729;
}
extern void logic2_raw_eqFunction_3006(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3007(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3017(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3018(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_178(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3023(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_180(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3024(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_182(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3100(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3142(DATA *data, threadData_t *threadData);


/*
equation index: 1741
type: SIMPLE_ASSIGN
pumCHW2.PToMed.u1 = 0.0
*/
void logic2_raw_eqFunction_1741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1741};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* pumCHW2.PToMed.u1 variable */) = 0.0;
  threadData->lastEquationSolved = 1741;
}

/*
equation index: 1742
type: SIMPLE_ASSIGN
pumCW2.PToMed.u1 = 0.0
*/
void logic2_raw_eqFunction_1742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1742};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1160]] /* pumCW2.PToMed.u1 variable */) = 0.0;
  threadData->lastEquationSolved = 1742;
}
extern void logic2_raw_eqFunction_185(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3146(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3147(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3156(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3161(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3162(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3163(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3164(DATA *data, threadData_t *threadData);


/*
equation index: 1751
type: SIMPLE_ASSIGN
val5.dp = val5.dp_nominal_pos * val5.m_flow / val5.m_flow_nominal_pos
*/
void logic2_raw_eqFunction_1751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1751};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1207]] /* val5.dp variable */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2713]] /* val5.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2718]] /* val5.m_flow_nominal_pos PARAM */),"val5.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 1751;
}
extern void logic2_raw_eqFunction_3178(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3179(DATA *data, threadData_t *threadData);


/*
equation index: 1754
type: SIMPLE_ASSIGN
cooTow.dp = 104510.0 * val5.m_flow / cooTow.preDro.m_flow_nominal_pos
*/
void logic2_raw_eqFunction_1754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1754};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cooTow.dp variable */) = DIVISION_SIM((104510.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* cooTow.preDro.m_flow_nominal_pos PARAM */),"cooTow.preDro.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 1754;
}
extern void logic2_raw_eqFunction_3143(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3166(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3167(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3170(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3169(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3168(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3171(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3183(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3188(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3172(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3148(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3151(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3196(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3197(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3198(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3199(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3200(DATA *data, threadData_t *threadData);


/*
equation index: 1772
type: SIMPLE_ASSIGN
val6.dp = chi.m2_flow * val6.dp_nominal_pos / val6.m_flow_nominal_pos
*/
void logic2_raw_eqFunction_1772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1772};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* val6.dp variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2736]] /* val6.dp_nominal_pos PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2741]] /* val6.m_flow_nominal_pos PARAM */),"val6.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 1772;
}
extern void logic2_raw_eqFunction_3203(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3204(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_206(DATA *data, threadData_t *threadData);

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

extern void logic2_raw_eqFunction_258(DATA *data, threadData_t *threadData);


void logic2_raw_eqFunction_1828(DATA*, threadData_t*);
void logic2_raw_eqFunction_1829(DATA*, threadData_t*);
void logic2_raw_eqFunction_1830(DATA*, threadData_t*);
/*
equation index: 1835
indexNonlinear: 13
type: NONLINEAR

vars: {weaBus.TWetBul}
eqns: {1828, 1829, 1830}
*/
void logic2_raw_eqFunction_1835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1835};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1835 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[13].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */);
  retValue = solve_nonlinear_system(data, threadData, 13);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1835};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1835 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */) = data->simulationInfo->nonlinearSystemData[13].nlsx[0];
  threadData->lastEquationSolved = 1835;
}
extern void logic2_raw_eqFunction_3077(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_268(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3080(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_270(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3010(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3011(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3012(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3013(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3014(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3015(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3016(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_278(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_279(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_280(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_281(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_282(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_283(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_284(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_285(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_286(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_287(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_288(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_289(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_290(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_291(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_292(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_293(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_294(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_295(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_296(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3594(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_298(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3597(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_300(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_301(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_302(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3579(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_304(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_305(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_306(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_307(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_308(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_309(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_310(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_311(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_312(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3535(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_314(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_315(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_316(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_317(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_318(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_319(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_320(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_321(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_322(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_323(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_324(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_325(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_326(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_327(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_328(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3483(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_330(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_331(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_332(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_333(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_334(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_335(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_336(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_337(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_338(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_339(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3481(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_341(DATA *data, threadData_t *threadData);


/*
equation index: 1911
type: SIMPLE_ASSIGN
pumCW2.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.hydraulicEfficiency, 0.012615873967693397, pumCW2.eff.hydDer, 1.0, 0.05)
*/
void logic2_raw_eqFunction_1911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1911};
  real_array tmp0;
  real_array tmp1;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp2;
  real_array tmp3;
  real_array_create(&tmp0, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2580]] /* pumCW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp1, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2581]] /* pumCW2.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp2, tmp0, tmp1);
  real_array_create(&tmp3, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2557]] /* pumCW2.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1168]] /* pumCW2.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp2, 0.012615873967693397, tmp3, 1.0, 0.05);
  threadData->lastEquationSolved = 1911;
}
extern void logic2_raw_eqFunction_342(DATA *data, threadData_t *threadData);


/*
equation index: 1913
type: SIMPLE_ASSIGN
pumCW2.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.motorEfficiency, 0.012615873967693397, pumCW2.eff.motDer, 1.0, 0.05)
*/
void logic2_raw_eqFunction_1913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1913};
  real_array tmp4;
  real_array tmp5;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp6;
  real_array tmp7;
  real_array_create(&tmp4, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2582]] /* pumCW2.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp5, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2583]] /* pumCW2.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp6, tmp4, tmp5);
  real_array_create(&tmp7, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2559]] /* pumCW2.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* pumCW2.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp6, 0.012615873967693397, tmp7, 1.0, 0.05);
  threadData->lastEquationSolved = 1913;
}
extern void logic2_raw_eqFunction_3365(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_343(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_344(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_345(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_346(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3471(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3468(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_349(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_350(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_351(DATA *data, threadData_t *threadData);


void logic2_raw_eqFunction_1924(DATA*, threadData_t*);
/*
equation index: 1925
indexNonlinear: 14
type: NONLINEAR

vars: {cooTow2.FRWat0}
eqns: {1924}
*/
void logic2_raw_eqFunction_1925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1925};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1925 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[14].nlsxOld[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* cooTow2.FRWat0 PARAM */);
  retValue = solve_nonlinear_system(data, threadData, 14);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1925};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1925 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* cooTow2.FRWat0 PARAM */) = data->simulationInfo->nonlinearSystemData[14].nlsx[0];
  threadData->lastEquationSolved = 1925;
}
extern void logic2_raw_eqFunction_354(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_355(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_356(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_357(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_358(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_359(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_360(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_361(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_362(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_363(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_364(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3617(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_366(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_367(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_368(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_369(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_370(DATA *data, threadData_t *threadData);


/*
equation index: 1943
type: SIMPLE_ASSIGN
pumCHW2.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW2.eff.per.hydraulicEfficiency, 0.025231747935386795, pumCHW2.eff.hydDer, 1.0, 0.05)
*/
void logic2_raw_eqFunction_1943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1943};
  real_array tmp8;
  real_array tmp9;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp10;
  real_array tmp11;
  real_array_create(&tmp8, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2324]] /* pumCHW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp9, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2325]] /* pumCHW2.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp10, tmp8, tmp9);
  real_array_create(&tmp11, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2301]] /* pumCHW2.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* pumCHW2.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp10, 0.025231747935386795, tmp11, 1.0, 0.05);
  threadData->lastEquationSolved = 1943;
}
extern void logic2_raw_eqFunction_371(DATA *data, threadData_t *threadData);


/*
equation index: 1945
type: SIMPLE_ASSIGN
pumCHW2.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW2.eff.per.motorEfficiency, 0.025231747935386795, pumCHW2.eff.motDer, 1.0, 0.05)
*/
void logic2_raw_eqFunction_1945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1945};
  real_array tmp12;
  real_array tmp13;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp14;
  real_array tmp15;
  real_array_create(&tmp12, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2326]] /* pumCHW2.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp13, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2327]] /* pumCHW2.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp14, tmp12, tmp13);
  real_array_create(&tmp15, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2303]] /* pumCHW2.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* pumCHW2.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp14, 0.025231747935386795, tmp15, 1.0, 0.05);
  threadData->lastEquationSolved = 1945;
}
extern void logic2_raw_eqFunction_3326(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_372(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_373(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_374(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3456(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_376(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_377(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3432(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3433(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3434(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3440(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3441(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_383(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3424(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3421(DATA *data, threadData_t *threadData);


/*
equation index: 1961
type: SIMPLE_ASSIGN
damOA.m_flow = damOA.dp * 55.989691542288554 / damOA.dp_nominal_pos
*/
void logic2_raw_eqFunction_1961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1961};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* damOA.dp variable */)) * (55.989691542288554),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* damOA.dp_nominal_pos PARAM */),"damOA.dp_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 1961;
}
extern void logic2_raw_eqFunction_3439(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_389(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_390(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3425(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_392(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_393(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_394(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3444(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3451(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_397(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_398(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3452(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3453(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3454(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_402(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3403(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3404(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3405(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_406(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3394(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3391(DATA *data, threadData_t *threadData);


/*
equation index: 1983
type: SIMPLE_ASSIGN
damEA.m_flow = damEA.dp * 55.989691542288554 / damEA.dp_nominal_pos
*/
void logic2_raw_eqFunction_1983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1983};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damEA.dp variable */)) * (55.989691542288554),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1222]] /* damEA.dp_nominal_pos PARAM */),"damEA.dp_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 1983;
}
extern void logic2_raw_eqFunction_411(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3426(DATA *data, threadData_t *threadData);


/*
equation index: 1986
type: SIMPLE_ASSIGN
damRet.m_flow = damRet.dp * 55.989691542288554 / damRet.dp_nominal_pos
*/
void logic2_raw_eqFunction_1986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1986};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* damRet.dp variable */)) * (55.989691542288554),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* damRet.dp_nominal_pos PARAM */),"damRet.dp_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 1986;
}
extern void logic2_raw_eqFunction_3438(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3429(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3430(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_418(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_419(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_420(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3395(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_422(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_423(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_424(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3412(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3450(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_427(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_428(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_429(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_430(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_431(DATA *data, threadData_t *threadData);


/*
equation index: 2004
type: SIMPLE_ASSIGN
fanRet.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.hydraulicEfficiency, 46.65807628524046, fanRet.eff.hydDer, 1.0, 0.05)
*/
void logic2_raw_eqFunction_2004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2004};
  real_array tmp16;
  real_array tmp17;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp18;
  real_array tmp19;
  real_array_create(&tmp16, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1383]] /* fanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp17, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1384]] /* fanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp18, tmp16, tmp17);
  real_array_create(&tmp19, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1360]] /* fanRet.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[824]] /* fanRet.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp18, 46.65807628524046, tmp19, 1.0, 0.05);
  threadData->lastEquationSolved = 2004;
}
extern void logic2_raw_eqFunction_432(DATA *data, threadData_t *threadData);


/*
equation index: 2006
type: SIMPLE_ASSIGN
fanRet.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.motorEfficiency, 46.65807628524046, fanRet.eff.motDer, 1.0, 0.05)
*/
void logic2_raw_eqFunction_2006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2006};
  real_array tmp20;
  real_array tmp21;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp22;
  real_array tmp23;
  real_array_create(&tmp20, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1385]] /* fanRet.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp21, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1386]] /* fanRet.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp22, tmp20, tmp21);
  real_array_create(&tmp23, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1362]] /* fanRet.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[825]] /* fanRet.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp22, 46.65807628524046, tmp23, 1.0, 0.05);
  threadData->lastEquationSolved = 2006;
}
extern void logic2_raw_eqFunction_3108(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_433(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_434(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3408(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3436(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3437(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3407(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3406(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3111(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3112(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3113(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3114(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_444(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3103(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3104(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3105(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_451(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3399(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3102(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3396(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3397(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3398(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_457(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_458(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3109(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_460(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_461(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_462(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3117(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3134(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3118(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3119(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3120(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3121(DATA *data, threadData_t *threadData);


/*
equation index: 2041
type: SIMPLE_ASSIGN
KMinusU.u = conPIDTAirSup.limiter.simplifiedExpr
*/
void logic2_raw_eqFunction_2041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2041};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* KMinusU.u variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* conPIDTAirSup.limiter.simplifiedExpr variable */);
  threadData->lastEquationSolved = 2041;
}

/*
equation index: 2042
type: SIMPLE_ASSIGN
val1.phi = val1.l + KMinusU.u * (1.0 - val1.l)
*/
void logic2_raw_eqFunction_2042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2042};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* val1.phi variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2693]] /* val1.l PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* KMinusU.u variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2693]] /* val1.l PARAM */));
  threadData->lastEquationSolved = 2042;
}
extern void logic2_raw_eqFunction_3123(DATA *data, threadData_t *threadData);


/*
equation index: 2044
type: SIMPLE_ASSIGN
valByp.phi = valByp.l + KMinusU.y * (1.0 - valByp.l)
*/
void logic2_raw_eqFunction_2044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2044};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* valByp.phi variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2833]] /* valByp.l PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* KMinusU.y variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2833]] /* valByp.l PARAM */));
  threadData->lastEquationSolved = 2044;
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

extern void logic2_raw_eqFunction_487(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_488(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3140(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3139(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_491(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_492(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_493(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_494(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_495(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3125(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3126(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_498(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_499(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_500(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_501(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_502(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_503(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3613(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_505(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_506(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_507(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_508(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3152(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3153(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_513(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_514(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_515(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_516(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_517(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_518(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_519(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_520(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_521(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_522(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_523(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3534(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_525(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_526(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_527(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_528(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_529(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2996(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_531(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_532(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_533(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_534(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2994(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_536(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_558(DATA *data, threadData_t *threadData);


/*
equation index: 2108
type: SIMPLE_ASSIGN
cooTow.T_a = logic2.cooTow.Water.temperature(logic2.cooTow.Water.setState_phX(TCWEntTow.port_a.p, TCWEntTow.port_b.h_outflow, {}))
*/
void logic2_raw_eqFunction_2108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2108};
  base_array_t tmp24;
  simple_alloc_1d_base_array(&tmp24, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.T_a variable */) = omc_logic2_cooTow_Water_temperature(threadData, omc_logic2_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* TCWEntTow.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */), tmp24));
  threadData->lastEquationSolved = 2108;
}
extern void logic2_raw_eqFunction_3671(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_537(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_538(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_539(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_540(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3128(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3129(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_543(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_544(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_545(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_546(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3149(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3150(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_559(DATA *data, threadData_t *threadData);


/*
equation index: 2123
type: SIMPLE_ASSIGN
pumCW.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.hydraulicEfficiency, 0.012615873967693397, pumCW.eff.hydDer, 1.0, 0.05)
*/
void logic2_raw_eqFunction_2123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2123};
  real_array tmp25;
  real_array tmp26;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp27;
  real_array tmp28;
  real_array_create(&tmp25, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2452]] /* pumCW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp26, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2453]] /* pumCW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp27, tmp25, tmp26);
  real_array_create(&tmp28, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2429]] /* pumCW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1131]] /* pumCW.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp27, 0.012615873967693397, tmp28, 1.0, 0.05);
  threadData->lastEquationSolved = 2123;
}
extern void logic2_raw_eqFunction_3185(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_562(DATA *data, threadData_t *threadData);


/*
equation index: 2126
type: SIMPLE_ASSIGN
pumCW.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.motorEfficiency, 0.012615873967693397, pumCW.eff.motDer, 1.0, 0.05)
*/
void logic2_raw_eqFunction_2126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2126};
  real_array tmp29;
  real_array tmp30;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp31;
  real_array tmp32;
  real_array_create(&tmp29, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2454]] /* pumCW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp30, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2455]] /* pumCW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp31, tmp29, tmp30);
  real_array_create(&tmp32, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2431]] /* pumCW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* pumCW.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp31, 0.012615873967693397, tmp32, 1.0, 0.05);
  threadData->lastEquationSolved = 2126;
}
extern void logic2_raw_eqFunction_3182(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3184(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3186(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_569(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_570(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_571(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_572(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3175(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_574(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3193(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3194(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_577(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2989(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3190(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2984(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_581(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_582(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_583(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_584(DATA *data, threadData_t *threadData);


void logic2_raw_eqFunction_2146(DATA*, threadData_t*);
/*
equation index: 2147
indexNonlinear: 15
type: NONLINEAR

vars: {cooTow.FRWat0}
eqns: {2146}
*/
void logic2_raw_eqFunction_2147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2147};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2147 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1039]] /* cooTow.FRWat0 PARAM */);
  retValue = solve_nonlinear_system(data, threadData, 15);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2147};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2147 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1039]] /* cooTow.FRWat0 PARAM */) = data->simulationInfo->nonlinearSystemData[15].nlsx[0];
  threadData->lastEquationSolved = 2147;
}
extern void logic2_raw_eqFunction_587(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3195(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_589(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_590(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_591(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_592(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_593(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_594(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_595(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_596(DATA *data, threadData_t *threadData);


void logic2_raw_eqFunction_2158(DATA*, threadData_t*);
void logic2_raw_eqFunction_2159(DATA*, threadData_t*);
void logic2_raw_eqFunction_2160(DATA*, threadData_t*);
void logic2_raw_eqFunction_2161(DATA*, threadData_t*);
void logic2_raw_eqFunction_2162(DATA*, threadData_t*);
void logic2_raw_eqFunction_2163(DATA*, threadData_t*);
void logic2_raw_eqFunction_2164(DATA*, threadData_t*);
void logic2_raw_eqFunction_2165(DATA*, threadData_t*);
void logic2_raw_eqFunction_2166(DATA*, threadData_t*);
void logic2_raw_eqFunction_2167(DATA*, threadData_t*);
void logic2_raw_eqFunction_2168(DATA*, threadData_t*);
void logic2_raw_eqFunction_2169(DATA*, threadData_t*);
/*
equation index: 2170
indexNonlinear: 16
type: NONLINEAR

vars: {TCWEntTow.port_a.h_outflow}
eqns: {2158, 2159, 2160, 2161, 2162, 2163, 2164, 2165, 2166, 2167, 2168, 2169}
*/
void logic2_raw_eqFunction_2170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2170};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2170 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */);
  retValue = solve_nonlinear_system(data, threadData, 16);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2170};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2170 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[16].nlsx[0];
  threadData->lastEquationSolved = 2170;
}
extern void logic2_raw_eqFunction_3658(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3659(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_614(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_615(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3667(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3668(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_618(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3662(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_620(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3672(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3673(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3674(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_624(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_625(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2982(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_627(DATA *data, threadData_t *threadData);


/*
equation index: 2187
type: SIMPLE_ASSIGN
pumCHW.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.hydraulicEfficiency, 0.025231747935386795, pumCHW.eff.hydDer, 1.0, 0.05)
*/
void logic2_raw_eqFunction_2187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2187};
  real_array tmp33;
  real_array tmp34;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp35;
  real_array tmp36;
  real_array_create(&tmp33, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2196]] /* pumCHW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp34, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2197]] /* pumCHW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp35, tmp33, tmp34);
  real_array_create(&tmp36, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2173]] /* pumCHW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* pumCHW.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp35, 0.025231747935386795, tmp36, 1.0, 0.05);
  threadData->lastEquationSolved = 2187;
}
extern void logic2_raw_eqFunction_629(DATA *data, threadData_t *threadData);


/*
equation index: 2189
type: SIMPLE_ASSIGN
pumCHW.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.motorEfficiency, 0.025231747935386795, pumCHW.eff.motDer, 1.0, 0.05)
*/
void logic2_raw_eqFunction_2189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2189};
  real_array tmp37;
  real_array tmp38;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp39;
  real_array tmp40;
  real_array_create(&tmp37, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2198]] /* pumCHW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp38, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2199]] /* pumCHW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp39, tmp37, tmp38);
  real_array_create(&tmp40, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2175]] /* pumCHW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* pumCHW.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp39, 0.025231747935386795, tmp40, 1.0, 0.05);
  threadData->lastEquationSolved = 2189;
}
extern void logic2_raw_eqFunction_3207(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_632(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_633(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_634(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_635(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3209(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3532(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2979(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_639(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3546(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3547(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_642(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_643(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_644(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_645(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_646(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_647(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_648(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_649(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_650(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_651(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2967(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2968(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2969(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2970(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_656(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_657(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_658(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2973(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2974(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_661(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2977(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_663(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_664(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_665(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2958(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2959(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_668(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2965(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_670(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_671(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_672(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_673(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_674(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_675(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_676(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_677(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_678(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3698(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3704(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3707(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3708(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3709(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_684(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_685(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_686(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3700(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3702(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3703(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3701(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3699(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_692(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3710(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_694(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_695(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_696(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2949(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2960(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2961(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2950(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2948(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_702(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2956(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_704(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_705(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_706(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_707(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_708(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_709(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_710(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_711(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_712(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3715(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3722(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3725(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3726(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3727(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_718(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_719(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_720(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3717(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3719(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3720(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3721(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3718(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3716(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_727(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3728(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_729(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_730(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_731(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2940(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2951(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2952(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2962(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2941(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2939(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_738(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2946(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_740(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_741(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_742(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_743(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_744(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_745(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_746(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_747(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_748(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3740(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3741(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3742(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3739(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3738(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3751(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3754(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3755(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3756(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_758(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3729(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_760(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3711(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_762(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_763(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3694(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_765(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_766(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_767(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_768(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_769(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3768(DATA *data, threadData_t *threadData);


/*
equation index: 2330
type: SIMPLE_ASSIGN
cooCoi.m2_flow = (-cooCoi.dp2) / (-13.34174165677975)
*/
void logic2_raw_eqFunction_2330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2330};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[477]] /* cooCoi.dp2 variable */)),-13.34174165677975,"-13.34174165677975",equationIndexes);
  threadData->lastEquationSolved = 2330;
}
extern void logic2_raw_eqFunction_3771(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3772(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_775(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3775(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3776(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_778(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3779(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3780(DATA *data, threadData_t *threadData);


/*
equation index: 2354
type: LINEAR

<var>$DER.cooCoi.ele[1].vol2.dynBal.medium.p</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void logic2_raw_eqFunction_2354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2354};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 2354 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2354};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 2354 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = aux_x[0];

  threadData->lastEquationSolved = 2354;
}
extern void logic2_raw_eqFunction_801(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_802(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_805(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_808(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_812(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3804(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3805(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3806(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3807(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3797(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3798(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3799(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3810(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3811(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3812(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3808(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3817(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3818(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3819(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3815(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3816(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3773(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3823(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3824(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3777(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3821(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3825(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3826(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_825(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3829(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3848(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3849(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3850(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3842(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3843(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3844(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3836(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3758(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3759(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3760(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3761(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3762(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3763(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3764(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_841(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3855(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3858(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3859(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3860(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3861(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3862(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3863(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_849(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_850(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_851(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3744(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3749(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3750(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3746(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3747(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3748(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3837(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3745(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3830(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3831(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3851(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3733(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3734(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3735(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_866(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3809(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3838(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3743(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3732(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3801(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3802(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3832(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_874(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_875(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3736(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3757(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_878(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_879(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_880(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2934(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2942(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2943(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2953(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2935(DATA *data, threadData_t *threadData);


void logic2_raw_eqFunction_2444(DATA*, threadData_t*);
void logic2_raw_eqFunction_2445(DATA*, threadData_t*);
void logic2_raw_eqFunction_2446(DATA*, threadData_t*);
void logic2_raw_eqFunction_2447(DATA*, threadData_t*);
void logic2_raw_eqFunction_2448(DATA*, threadData_t*);
void logic2_raw_eqFunction_2449(DATA*, threadData_t*);
void logic2_raw_eqFunction_2450(DATA*, threadData_t*);
void logic2_raw_eqFunction_2451(DATA*, threadData_t*);
void logic2_raw_eqFunction_2452(DATA*, threadData_t*);
void logic2_raw_eqFunction_2453(DATA*, threadData_t*);
void logic2_raw_eqFunction_2454(DATA*, threadData_t*);
void logic2_raw_eqFunction_2455(DATA*, threadData_t*);
void logic2_raw_eqFunction_2456(DATA*, threadData_t*);
void logic2_raw_eqFunction_2457(DATA*, threadData_t*);
void logic2_raw_eqFunction_2458(DATA*, threadData_t*);
void logic2_raw_eqFunction_2459(DATA*, threadData_t*);
void logic2_raw_eqFunction_2460(DATA*, threadData_t*);
void logic2_raw_eqFunction_2461(DATA*, threadData_t*);
void logic2_raw_eqFunction_2462(DATA*, threadData_t*);
void logic2_raw_eqFunction_2463(DATA*, threadData_t*);
void logic2_raw_eqFunction_2464(DATA*, threadData_t*);
void logic2_raw_eqFunction_2465(DATA*, threadData_t*);
void logic2_raw_eqFunction_2466(DATA*, threadData_t*);
void logic2_raw_eqFunction_2467(DATA*, threadData_t*);
void logic2_raw_eqFunction_2469(DATA*, threadData_t*);
void logic2_raw_eqFunction_2468(DATA*, threadData_t*);
/*
equation index: 2470
indexNonlinear: 17
type: NONLINEAR

vars: {cooCoi.m1_flow, cooCoi.rep1.y[4]}
eqns: {2444, 2445, 2446, 2447, 2448, 2449, 2450, 2451, 2452, 2453, 2454, 2455, 2456, 2457, 2458, 2459, 2460, 2461, 2462, 2463, 2464, 2465, 2466, 2467, 2469, 2468}
*/
void logic2_raw_eqFunction_2470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2470};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2470 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[17].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */);
  data->simulationInfo->nonlinearSystemData[17].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */);
  retValue = solve_nonlinear_system(data, threadData, 17);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2470};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2470 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */) = data->simulationInfo->nonlinearSystemData[17].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */) = data->simulationInfo->nonlinearSystemData[17].nlsx[1];
  threadData->lastEquationSolved = 2470;
}
extern void logic2_raw_eqFunction_3251(DATA *data, threadData_t *threadData);


/*
equation index: 2472
type: SIMPLE_ASSIGN
val8_2.dp = val8.m_flow * val8_2.dp_nominal_pos / val8_2.m_flow_nominal_pos
*/
void logic2_raw_eqFunction_2472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2472};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1228]] /* val8_2.dp variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2805]] /* val8_2.dp_nominal_pos PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2810]] /* val8_2.m_flow_nominal_pos PARAM */),"val8_2.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2472;
}
extern void logic2_raw_eqFunction_914(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3605(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3607(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3608(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_918(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3589(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3591(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3592(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_922(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3262(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3265(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3261(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_968(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3257(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3259(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_971(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3314(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3604(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3313(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3542(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3274(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3275(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3276(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3277(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3280(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3278(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3279(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_943(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_944(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3540(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3541(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_947(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_948(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3291(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3292(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3293(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3294(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3300(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3303(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3533(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3295(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3298(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3296(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3297(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3299(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3302(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3301(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3663(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_964(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3273(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3272(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3247(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3248(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3348(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3349(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3461(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3243(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3588(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3242(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3550(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_942(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3241(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3246(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3306(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3307(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3309(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3312(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3548(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3308(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3310(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3852(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3853(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3854(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3260(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3845(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3846(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3847(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3839(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3840(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3841(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3266(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_993(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_994(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_995(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_996(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_997(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3565(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_999(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3564(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3267(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3601(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1003(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3503(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3599(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3328(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3329(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3327(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3330(DATA *data, threadData_t *threadData);


/*
equation index: 2571
type: SIMPLE_ASSIGN
val8.dp = val8.m_flow * val8.dp_nominal_pos / val8.m_flow_nominal_pos
*/
void logic2_raw_eqFunction_2571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2571};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val8.dp variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2782]] /* val8.dp_nominal_pos PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2787]] /* val8.m_flow_nominal_pos PARAM */),"val8.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2571;
}
extern void logic2_raw_eqFunction_3337(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3338(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3504(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3505(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1073(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3339(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1075(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1076(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1077(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3611(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3612(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1080(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1081(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3526(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3527(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3350(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3322(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3351(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3353(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3356(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3352(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3354(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3323(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1015(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3582(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3583(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3584(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3359(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3495(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3367(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3369(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3366(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3370(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3490(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3491(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1026(DATA *data, threadData_t *threadData);


/*
equation index: 2608
type: SIMPLE_ASSIGN
val7.dp = val7.dp_nominal_pos * val7.m_flow / val7.m_flow_nominal_pos
*/
void logic2_raw_eqFunction_2608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2608};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* val7.dp variable */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2759]] /* val7.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2764]] /* val7.m_flow_nominal_pos PARAM */),"val7.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2608;
}
extern void logic2_raw_eqFunction_3373(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1063(DATA *data, threadData_t *threadData);


/*
equation index: 2611
type: SIMPLE_ASSIGN
cooTow2.T_a = logic2.cooTow2.Water.temperature(logic2.cooTow2.Water.setState_phX(TCWEntTow2.port_a.p, TCWEntTow2.port_b.h_outflow, {}))
*/
void logic2_raw_eqFunction_2611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2611};
  base_array_t tmp41;
  simple_alloc_1d_base_array(&tmp41, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cooTow2.T_a variable */) = omc_logic2_cooTow2_Water_temperature(threadData, omc_logic2_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* TCWEntTow2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */), tmp41));
  threadData->lastEquationSolved = 2611;
}
extern void logic2_raw_eqFunction_3640(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3361(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3362(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1032(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3360(DATA *data, threadData_t *threadData);


/*
equation index: 2617
type: SIMPLE_ASSIGN
cooTow2.dp = 104510.0 * val7.m_flow / cooTow2.preDro.m_flow_nominal_pos
*/
void logic2_raw_eqFunction_2617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2617};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[784]] /* cooTow2.dp variable */) = DIVISION_SIM((104510.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1166]] /* cooTow2.preDro.m_flow_nominal_pos PARAM */),"cooTow2.preDro.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2617;
}
extern void logic2_raw_eqFunction_3375(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1050(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3386(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3478(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3385(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3384(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3377(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3378(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3380(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3383(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3379(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3381(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3376(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3331(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3343(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3344(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3345(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3340(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3341(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3342(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3332(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3333(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3334(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1092(DATA *data, threadData_t *threadData);


void logic2_raw_eqFunction_2642(DATA*, threadData_t*);
void logic2_raw_eqFunction_2643(DATA*, threadData_t*);
void logic2_raw_eqFunction_2644(DATA*, threadData_t*);
void logic2_raw_eqFunction_2645(DATA*, threadData_t*);
void logic2_raw_eqFunction_2646(DATA*, threadData_t*);
void logic2_raw_eqFunction_2647(DATA*, threadData_t*);
void logic2_raw_eqFunction_2648(DATA*, threadData_t*);
void logic2_raw_eqFunction_2649(DATA*, threadData_t*);
void logic2_raw_eqFunction_2650(DATA*, threadData_t*);
void logic2_raw_eqFunction_2651(DATA*, threadData_t*);
void logic2_raw_eqFunction_2652(DATA*, threadData_t*);
void logic2_raw_eqFunction_2653(DATA*, threadData_t*);
/*
equation index: 2654
indexNonlinear: 18
type: NONLINEAR

vars: {TCWEntTow2.port_a.h_outflow}
eqns: {2642, 2643, 2644, 2645, 2646, 2647, 2648, 2649, 2650, 2651, 2652, 2653}
*/
void logic2_raw_eqFunction_2654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2654};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2654 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */);
  retValue = solve_nonlinear_system(data, threadData, 18);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2654};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2654 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[18].nlsx[0];
  threadData->lastEquationSolved = 2654;
}
extern void logic2_raw_eqFunction_3622(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3623(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1110(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1111(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3630(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1113(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1114(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3636(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3637(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3625(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3626(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3627(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3462(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3514(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3506(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3507(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3512(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3513(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3600(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3508(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3511(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3509(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3510(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3515(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3517(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3516(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3631(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1135(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3618(DATA *data, threadData_t *threadData);


/*
equation index: 2684
type: ALGORITHM

  chwstCtrl2.requestMoreChiller := $START.chwstCtrl2.requestMoreChiller;
  chwstCtrl2.TChiRaw := $START.chwstCtrl2.TChiRaw;
  chwstCtrl2.TChiSet := $START.chwstCtrl2.TChiSet;
  chwstCtrl2.nextControlTime := $START.chwstCtrl2.nextControlTime;
  chwstCtrl2.lastControlTime := $START.chwstCtrl2.lastControlTime;
  chwstCtrl2.dTErrSample := $START.chwstCtrl2.dTErrSample;
  chwstCtrl2.dTErrInt := $START.chwstCtrl2.dTErrInt;
  $whenCondition2 := $START.$whenCondition2;
  $whenCondition2 := time >= $PRE.chwstCtrl2.nextControlTime;
  chwstCtrl2.dTErrInt := 0.0;
  chwstCtrl2.dTErrSample := chwstCtrl2.dTErr;
  chwstCtrl2.lastControlTime := time;
  chwstCtrl2.nextControlTime := time + chwstCtrl2.internalSamplePeriod;
  chwstCtrl2.TChiSet := chwstCtrl2.TChiSetStart;
  chwstCtrl2.TChiRaw := chwstCtrl2.TChiSetStart;
  chwstCtrl2.requestMoreChiller := false;
*/
void logic2_raw_eqFunction_2684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2684};
  modelica_boolean tmp42;
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[9]] /* chwstCtrl2.requestMoreChiller DISCRETE */) = (data->modelData->booleanVarsData[9] /* chwstCtrl2.requestMoreChiller DISCRETE */).attribute .start;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* chwstCtrl2.TChiRaw DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1338] /* chwstCtrl2.TChiRaw DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* chwstCtrl2.TChiSet DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1339] /* chwstCtrl2.TChiSet DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* chwstCtrl2.nextControlTime DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1343] /* chwstCtrl2.nextControlTime DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* chwstCtrl2.lastControlTime DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1342] /* chwstCtrl2.lastControlTime DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* chwstCtrl2.dTErrSample DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1341] /* chwstCtrl2.dTErrSample DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* chwstCtrl2.dTErrInt DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1340] /* chwstCtrl2.dTErrInt DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) = (data->modelData->booleanVarsData[1] /* $whenCondition2 DISCRETE */).attribute .start;

  tmp42 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[1343] /* chwstCtrl2.nextControlTime DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) = tmp42;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* chwstCtrl2.dTErrInt DISCRETE */) = 0.0;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* chwstCtrl2.dTErrSample DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* chwstCtrl2.dTErr variable */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* chwstCtrl2.lastControlTime DISCRETE */) = data->localData[0]->timeValue;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* chwstCtrl2.nextControlTime DISCRETE */) = data->localData[0]->timeValue + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[443]] /* chwstCtrl2.internalSamplePeriod PARAM */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* chwstCtrl2.TChiSet DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[438]] /* chwstCtrl2.TChiSetStart PARAM */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* chwstCtrl2.TChiRaw DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[438]] /* chwstCtrl2.TChiSetStart PARAM */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[9]] /* chwstCtrl2.requestMoreChiller DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 2684;
}
extern void logic2_raw_eqFunction_3620(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3614(DATA *data, threadData_t *threadData);


/*
equation index: 2687
type: ALGORITHM

  chwstCtrl1.requestMoreChiller := $START.chwstCtrl1.requestMoreChiller;
  chwstCtrl1.TChiRaw := $START.chwstCtrl1.TChiRaw;
  chwstCtrl1.TChiSet := $START.chwstCtrl1.TChiSet;
  chwstCtrl1.nextControlTime := $START.chwstCtrl1.nextControlTime;
  chwstCtrl1.lastControlTime := $START.chwstCtrl1.lastControlTime;
  chwstCtrl1.dTErrSample := $START.chwstCtrl1.dTErrSample;
  chwstCtrl1.dTErrInt := $START.chwstCtrl1.dTErrInt;
  $whenCondition1 := $START.$whenCondition1;
  $whenCondition1 := time >= $PRE.chwstCtrl1.nextControlTime;
  chwstCtrl1.dTErrInt := 0.0;
  chwstCtrl1.dTErrSample := chwstCtrl1.dTErr;
  chwstCtrl1.lastControlTime := time;
  chwstCtrl1.nextControlTime := time + chwstCtrl1.internalSamplePeriod;
  chwstCtrl1.TChiSet := chwstCtrl1.TChiSetStart;
  chwstCtrl1.TChiRaw := chwstCtrl1.TChiSetStart;
  chwstCtrl1.requestMoreChiller := false;
*/
void logic2_raw_eqFunction_2687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2687};
  modelica_boolean tmp43;
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* chwstCtrl1.requestMoreChiller DISCRETE */) = (data->modelData->booleanVarsData[8] /* chwstCtrl1.requestMoreChiller DISCRETE */).attribute .start;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* chwstCtrl1.TChiRaw DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1332] /* chwstCtrl1.TChiRaw DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1333]] /* chwstCtrl1.TChiSet DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1333] /* chwstCtrl1.TChiSet DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* chwstCtrl1.nextControlTime DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1337] /* chwstCtrl1.nextControlTime DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* chwstCtrl1.lastControlTime DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1336] /* chwstCtrl1.lastControlTime DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* chwstCtrl1.dTErrSample DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1335] /* chwstCtrl1.dTErrSample DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1334]] /* chwstCtrl1.dTErrInt DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1334] /* chwstCtrl1.dTErrInt DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = (data->modelData->booleanVarsData[0] /* $whenCondition1 DISCRETE */).attribute .start;

  tmp43 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[1337] /* chwstCtrl1.nextControlTime DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = tmp43;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1334]] /* chwstCtrl1.dTErrInt DISCRETE */) = 0.0;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* chwstCtrl1.dTErrSample DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[448]] /* chwstCtrl1.dTErr variable */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* chwstCtrl1.lastControlTime DISCRETE */) = data->localData[0]->timeValue;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* chwstCtrl1.nextControlTime DISCRETE */) = data->localData[0]->timeValue + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[431]] /* chwstCtrl1.internalSamplePeriod PARAM */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1333]] /* chwstCtrl1.TChiSet DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* chwstCtrl1.TChiSetStart PARAM */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* chwstCtrl1.TChiRaw DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* chwstCtrl1.TChiSetStart PARAM */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* chwstCtrl1.requestMoreChiller DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 2687;
}
extern void logic2_raw_eqFunction_3616(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3833(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3834(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3835(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1145(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3577(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3602(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3603(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1149(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1150(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3551(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3586(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3587(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1154(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1155(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3560(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3561(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1158(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1159(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3555(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3556(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1162(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1163(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3571(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3572(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3253(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3255(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3256(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2933(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1170(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3566(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3567(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3568(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1174(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1175(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3575(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1177(DATA *data, threadData_t *threadData);


/*
equation index: 2725
type: SIMPLE_ASSIGN
fanSup.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.hydraulicEfficiency, 46.65807628524046, fanSup.eff.hydDer, 1.0, 0.05)
*/
void logic2_raw_eqFunction_2725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2725};
  real_array tmp44;
  real_array tmp45;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp46;
  real_array tmp47;
  real_array_create(&tmp44, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1520]] /* fanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp45, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1521]] /* fanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp46, tmp44, tmp45);
  real_array_create(&tmp47, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1497]] /* fanSup.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[861]] /* fanSup.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp46, 46.65807628524046, tmp47, 1.0, 0.05);
  threadData->lastEquationSolved = 2725;
}
extern void logic2_raw_eqFunction_1179(DATA *data, threadData_t *threadData);


/*
equation index: 2727
type: SIMPLE_ASSIGN
fanSup.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.motorEfficiency, 46.65807628524046, fanSup.eff.motDer, 1.0, 0.05)
*/
void logic2_raw_eqFunction_2727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2727};
  real_array tmp48;
  real_array tmp49;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp50;
  real_array tmp51;
  real_array_create(&tmp48, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1522]] /* fanSup.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp49, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1523]] /* fanSup.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp50, tmp48, tmp49);
  real_array_create(&tmp51, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1499]] /* fanSup.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* fanSup.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp50, 46.65807628524046, tmp51, 1.0, 0.05);
  threadData->lastEquationSolved = 2727;
}
extern void logic2_raw_eqFunction_3767(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3864(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1211(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_154(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_155(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1212(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1213(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1214(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1215(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1216(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1217(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1218(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1219(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1220(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1221(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1222(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1223(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1224(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1225(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1226(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1227(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1228(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1229(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1230(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1231(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1232(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1233(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1234(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1235(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1236(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1237(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1238(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1239(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1240(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1241(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1242(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1243(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1244(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1245(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1246(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1247(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1248(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1249(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1250(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1251(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1252(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1253(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1254(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1255(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1256(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1257(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1258(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1259(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1260(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1261(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1262(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1263(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1264(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1265(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1266(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1267(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1268(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1269(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1270(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1271(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1272(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1273(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1274(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1275(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1276(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1277(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1278(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1279(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1280(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1281(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1282(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1283(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1284(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1285(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1286(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1287(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1288(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1289(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1290(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1291(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1292(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1293(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1294(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1295(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1296(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1297(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1298(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1299(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1300(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1301(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1302(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1303(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1304(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1305(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1306(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1307(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1308(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1309(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1310(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1311(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1312(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1313(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1314(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1315(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1316(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1317(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1318(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1319(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1320(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1321(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1322(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1323(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1324(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1325(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1326(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1327(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1328(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1329(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1330(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1331(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1332(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1333(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1334(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1335(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1336(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1337(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1338(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1339(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1340(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1341(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1342(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1343(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1344(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1345(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1346(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1347(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1348(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2992(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2993(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3141(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3479(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3480(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1354(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1355(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1356(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1357(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1358(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1359(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1360(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1361(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1362(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1363(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1364(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1365(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1366(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1367(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1368(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1369(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1370(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1371(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1372(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1373(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1374(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1375(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1376(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1377(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1378(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1379(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1380(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1381(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1382(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1383(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1384(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1385(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1386(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1387(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1388(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1389(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1390(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1391(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1392(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1393(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1394(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1395(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1396(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1397(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1398(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1399(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1400(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1401(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1402(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1403(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1404(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1405(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1406(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1407(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1408(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1409(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1410(DATA *data, threadData_t *threadData);

int logic2_raw_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->discreteCall = 1;
  static void (*const eqFunctions[1329])(DATA*, threadData_t*) = {
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
    logic2_raw_eqFunction_152,
    logic2_raw_eqFunction_153,
    logic2_raw_eqFunction_1183,
    logic2_raw_eqFunction_1184,
    logic2_raw_eqFunction_1185,
    logic2_raw_eqFunction_1186,
    logic2_raw_eqFunction_1187,
    logic2_raw_eqFunction_1188,
    logic2_raw_eqFunction_1189,
    logic2_raw_eqFunction_1190,
    logic2_raw_eqFunction_1191,
    logic2_raw_eqFunction_1192,
    logic2_raw_eqFunction_1193,
    logic2_raw_eqFunction_1194,
    logic2_raw_eqFunction_1195,
    logic2_raw_eqFunction_1196,
    logic2_raw_eqFunction_1197,
    logic2_raw_eqFunction_1198,
    logic2_raw_eqFunction_1199,
    logic2_raw_eqFunction_1200,
    logic2_raw_eqFunction_1201,
    logic2_raw_eqFunction_1202,
    logic2_raw_eqFunction_1203,
    logic2_raw_eqFunction_1204,
    logic2_raw_eqFunction_1205,
    logic2_raw_eqFunction_1206,
    logic2_raw_eqFunction_1207,
    logic2_raw_eqFunction_1208,
    logic2_raw_eqFunction_1209,
    logic2_raw_eqFunction_1210,
    logic2_raw_eqFunction_143,
    logic2_raw_eqFunction_144,
    logic2_raw_eqFunction_145,
    logic2_raw_eqFunction_146,
    logic2_raw_eqFunction_147,
    logic2_raw_eqFunction_148,
    logic2_raw_eqFunction_149,
    logic2_raw_eqFunction_150,
    logic2_raw_eqFunction_151,
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
    logic2_raw_eqFunction_1728,
    logic2_raw_eqFunction_1729,
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
    logic2_raw_eqFunction_1741,
    logic2_raw_eqFunction_1742,
    logic2_raw_eqFunction_185,
    logic2_raw_eqFunction_3146,
    logic2_raw_eqFunction_3147,
    logic2_raw_eqFunction_3156,
    logic2_raw_eqFunction_3161,
    logic2_raw_eqFunction_3162,
    logic2_raw_eqFunction_3163,
    logic2_raw_eqFunction_3164,
    logic2_raw_eqFunction_1751,
    logic2_raw_eqFunction_3178,
    logic2_raw_eqFunction_3179,
    logic2_raw_eqFunction_1754,
    logic2_raw_eqFunction_3143,
    logic2_raw_eqFunction_3166,
    logic2_raw_eqFunction_3167,
    logic2_raw_eqFunction_3170,
    logic2_raw_eqFunction_3169,
    logic2_raw_eqFunction_3168,
    logic2_raw_eqFunction_3171,
    logic2_raw_eqFunction_3183,
    logic2_raw_eqFunction_3188,
    logic2_raw_eqFunction_3172,
    logic2_raw_eqFunction_3148,
    logic2_raw_eqFunction_3151,
    logic2_raw_eqFunction_3196,
    logic2_raw_eqFunction_3197,
    logic2_raw_eqFunction_3198,
    logic2_raw_eqFunction_3199,
    logic2_raw_eqFunction_3200,
    logic2_raw_eqFunction_1772,
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
    logic2_raw_eqFunction_1835,
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
    logic2_raw_eqFunction_1911,
    logic2_raw_eqFunction_342,
    logic2_raw_eqFunction_1913,
    logic2_raw_eqFunction_3365,
    logic2_raw_eqFunction_343,
    logic2_raw_eqFunction_344,
    logic2_raw_eqFunction_345,
    logic2_raw_eqFunction_346,
    logic2_raw_eqFunction_3471,
    logic2_raw_eqFunction_3468,
    logic2_raw_eqFunction_349,
    logic2_raw_eqFunction_350,
    logic2_raw_eqFunction_351,
    logic2_raw_eqFunction_1925,
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
    logic2_raw_eqFunction_1943,
    logic2_raw_eqFunction_371,
    logic2_raw_eqFunction_1945,
    logic2_raw_eqFunction_3326,
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
    logic2_raw_eqFunction_1961,
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
    logic2_raw_eqFunction_1983,
    logic2_raw_eqFunction_411,
    logic2_raw_eqFunction_3426,
    logic2_raw_eqFunction_1986,
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
    logic2_raw_eqFunction_2004,
    logic2_raw_eqFunction_432,
    logic2_raw_eqFunction_2006,
    logic2_raw_eqFunction_3108,
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
    logic2_raw_eqFunction_2041,
    logic2_raw_eqFunction_2042,
    logic2_raw_eqFunction_3123,
    logic2_raw_eqFunction_2044,
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
    logic2_raw_eqFunction_492,
    logic2_raw_eqFunction_493,
    logic2_raw_eqFunction_494,
    logic2_raw_eqFunction_495,
    logic2_raw_eqFunction_3125,
    logic2_raw_eqFunction_3126,
    logic2_raw_eqFunction_498,
    logic2_raw_eqFunction_499,
    logic2_raw_eqFunction_500,
    logic2_raw_eqFunction_501,
    logic2_raw_eqFunction_502,
    logic2_raw_eqFunction_503,
    logic2_raw_eqFunction_3613,
    logic2_raw_eqFunction_505,
    logic2_raw_eqFunction_506,
    logic2_raw_eqFunction_507,
    logic2_raw_eqFunction_508,
    logic2_raw_eqFunction_3152,
    logic2_raw_eqFunction_3153,
    logic2_raw_eqFunction_513,
    logic2_raw_eqFunction_514,
    logic2_raw_eqFunction_515,
    logic2_raw_eqFunction_516,
    logic2_raw_eqFunction_517,
    logic2_raw_eqFunction_518,
    logic2_raw_eqFunction_519,
    logic2_raw_eqFunction_520,
    logic2_raw_eqFunction_521,
    logic2_raw_eqFunction_522,
    logic2_raw_eqFunction_523,
    logic2_raw_eqFunction_3534,
    logic2_raw_eqFunction_525,
    logic2_raw_eqFunction_526,
    logic2_raw_eqFunction_527,
    logic2_raw_eqFunction_528,
    logic2_raw_eqFunction_529,
    logic2_raw_eqFunction_2996,
    logic2_raw_eqFunction_531,
    logic2_raw_eqFunction_532,
    logic2_raw_eqFunction_533,
    logic2_raw_eqFunction_534,
    logic2_raw_eqFunction_2994,
    logic2_raw_eqFunction_536,
    logic2_raw_eqFunction_558,
    logic2_raw_eqFunction_2108,
    logic2_raw_eqFunction_3671,
    logic2_raw_eqFunction_537,
    logic2_raw_eqFunction_538,
    logic2_raw_eqFunction_539,
    logic2_raw_eqFunction_540,
    logic2_raw_eqFunction_3128,
    logic2_raw_eqFunction_3129,
    logic2_raw_eqFunction_543,
    logic2_raw_eqFunction_544,
    logic2_raw_eqFunction_545,
    logic2_raw_eqFunction_546,
    logic2_raw_eqFunction_3149,
    logic2_raw_eqFunction_3150,
    logic2_raw_eqFunction_559,
    logic2_raw_eqFunction_2123,
    logic2_raw_eqFunction_3185,
    logic2_raw_eqFunction_562,
    logic2_raw_eqFunction_2126,
    logic2_raw_eqFunction_3182,
    logic2_raw_eqFunction_3184,
    logic2_raw_eqFunction_3186,
    logic2_raw_eqFunction_569,
    logic2_raw_eqFunction_570,
    logic2_raw_eqFunction_571,
    logic2_raw_eqFunction_572,
    logic2_raw_eqFunction_3175,
    logic2_raw_eqFunction_574,
    logic2_raw_eqFunction_3193,
    logic2_raw_eqFunction_3194,
    logic2_raw_eqFunction_577,
    logic2_raw_eqFunction_2989,
    logic2_raw_eqFunction_3190,
    logic2_raw_eqFunction_2984,
    logic2_raw_eqFunction_581,
    logic2_raw_eqFunction_582,
    logic2_raw_eqFunction_583,
    logic2_raw_eqFunction_584,
    logic2_raw_eqFunction_2147,
    logic2_raw_eqFunction_587,
    logic2_raw_eqFunction_3195,
    logic2_raw_eqFunction_589,
    logic2_raw_eqFunction_590,
    logic2_raw_eqFunction_591,
    logic2_raw_eqFunction_592,
    logic2_raw_eqFunction_593,
    logic2_raw_eqFunction_594,
    logic2_raw_eqFunction_595,
    logic2_raw_eqFunction_596,
    logic2_raw_eqFunction_2170,
    logic2_raw_eqFunction_3658,
    logic2_raw_eqFunction_3659,
    logic2_raw_eqFunction_614,
    logic2_raw_eqFunction_615,
    logic2_raw_eqFunction_3667,
    logic2_raw_eqFunction_3668,
    logic2_raw_eqFunction_618,
    logic2_raw_eqFunction_3662,
    logic2_raw_eqFunction_620,
    logic2_raw_eqFunction_3672,
    logic2_raw_eqFunction_3673,
    logic2_raw_eqFunction_3674,
    logic2_raw_eqFunction_624,
    logic2_raw_eqFunction_625,
    logic2_raw_eqFunction_2982,
    logic2_raw_eqFunction_627,
    logic2_raw_eqFunction_2187,
    logic2_raw_eqFunction_629,
    logic2_raw_eqFunction_2189,
    logic2_raw_eqFunction_3207,
    logic2_raw_eqFunction_632,
    logic2_raw_eqFunction_633,
    logic2_raw_eqFunction_634,
    logic2_raw_eqFunction_635,
    logic2_raw_eqFunction_3209,
    logic2_raw_eqFunction_3532,
    logic2_raw_eqFunction_2979,
    logic2_raw_eqFunction_639,
    logic2_raw_eqFunction_3546,
    logic2_raw_eqFunction_3547,
    logic2_raw_eqFunction_642,
    logic2_raw_eqFunction_643,
    logic2_raw_eqFunction_644,
    logic2_raw_eqFunction_645,
    logic2_raw_eqFunction_646,
    logic2_raw_eqFunction_647,
    logic2_raw_eqFunction_648,
    logic2_raw_eqFunction_649,
    logic2_raw_eqFunction_650,
    logic2_raw_eqFunction_651,
    logic2_raw_eqFunction_2967,
    logic2_raw_eqFunction_2968,
    logic2_raw_eqFunction_2969,
    logic2_raw_eqFunction_2970,
    logic2_raw_eqFunction_656,
    logic2_raw_eqFunction_657,
    logic2_raw_eqFunction_658,
    logic2_raw_eqFunction_2973,
    logic2_raw_eqFunction_2974,
    logic2_raw_eqFunction_661,
    logic2_raw_eqFunction_2977,
    logic2_raw_eqFunction_663,
    logic2_raw_eqFunction_664,
    logic2_raw_eqFunction_665,
    logic2_raw_eqFunction_2958,
    logic2_raw_eqFunction_2959,
    logic2_raw_eqFunction_668,
    logic2_raw_eqFunction_2965,
    logic2_raw_eqFunction_670,
    logic2_raw_eqFunction_671,
    logic2_raw_eqFunction_672,
    logic2_raw_eqFunction_673,
    logic2_raw_eqFunction_674,
    logic2_raw_eqFunction_675,
    logic2_raw_eqFunction_676,
    logic2_raw_eqFunction_677,
    logic2_raw_eqFunction_678,
    logic2_raw_eqFunction_3698,
    logic2_raw_eqFunction_3704,
    logic2_raw_eqFunction_3707,
    logic2_raw_eqFunction_3708,
    logic2_raw_eqFunction_3709,
    logic2_raw_eqFunction_684,
    logic2_raw_eqFunction_685,
    logic2_raw_eqFunction_686,
    logic2_raw_eqFunction_3700,
    logic2_raw_eqFunction_3702,
    logic2_raw_eqFunction_3703,
    logic2_raw_eqFunction_3701,
    logic2_raw_eqFunction_3699,
    logic2_raw_eqFunction_692,
    logic2_raw_eqFunction_3710,
    logic2_raw_eqFunction_694,
    logic2_raw_eqFunction_695,
    logic2_raw_eqFunction_696,
    logic2_raw_eqFunction_2949,
    logic2_raw_eqFunction_2960,
    logic2_raw_eqFunction_2961,
    logic2_raw_eqFunction_2950,
    logic2_raw_eqFunction_2948,
    logic2_raw_eqFunction_702,
    logic2_raw_eqFunction_2956,
    logic2_raw_eqFunction_704,
    logic2_raw_eqFunction_705,
    logic2_raw_eqFunction_706,
    logic2_raw_eqFunction_707,
    logic2_raw_eqFunction_708,
    logic2_raw_eqFunction_709,
    logic2_raw_eqFunction_710,
    logic2_raw_eqFunction_711,
    logic2_raw_eqFunction_712,
    logic2_raw_eqFunction_3715,
    logic2_raw_eqFunction_3722,
    logic2_raw_eqFunction_3725,
    logic2_raw_eqFunction_3726,
    logic2_raw_eqFunction_3727,
    logic2_raw_eqFunction_718,
    logic2_raw_eqFunction_719,
    logic2_raw_eqFunction_720,
    logic2_raw_eqFunction_3717,
    logic2_raw_eqFunction_3719,
    logic2_raw_eqFunction_3720,
    logic2_raw_eqFunction_3721,
    logic2_raw_eqFunction_3718,
    logic2_raw_eqFunction_3716,
    logic2_raw_eqFunction_727,
    logic2_raw_eqFunction_3728,
    logic2_raw_eqFunction_729,
    logic2_raw_eqFunction_730,
    logic2_raw_eqFunction_731,
    logic2_raw_eqFunction_2940,
    logic2_raw_eqFunction_2951,
    logic2_raw_eqFunction_2952,
    logic2_raw_eqFunction_2962,
    logic2_raw_eqFunction_2941,
    logic2_raw_eqFunction_2939,
    logic2_raw_eqFunction_738,
    logic2_raw_eqFunction_2946,
    logic2_raw_eqFunction_740,
    logic2_raw_eqFunction_741,
    logic2_raw_eqFunction_742,
    logic2_raw_eqFunction_743,
    logic2_raw_eqFunction_744,
    logic2_raw_eqFunction_745,
    logic2_raw_eqFunction_746,
    logic2_raw_eqFunction_747,
    logic2_raw_eqFunction_748,
    logic2_raw_eqFunction_3740,
    logic2_raw_eqFunction_3741,
    logic2_raw_eqFunction_3742,
    logic2_raw_eqFunction_3739,
    logic2_raw_eqFunction_3738,
    logic2_raw_eqFunction_3751,
    logic2_raw_eqFunction_3754,
    logic2_raw_eqFunction_3755,
    logic2_raw_eqFunction_3756,
    logic2_raw_eqFunction_758,
    logic2_raw_eqFunction_3729,
    logic2_raw_eqFunction_760,
    logic2_raw_eqFunction_3711,
    logic2_raw_eqFunction_762,
    logic2_raw_eqFunction_763,
    logic2_raw_eqFunction_3694,
    logic2_raw_eqFunction_765,
    logic2_raw_eqFunction_766,
    logic2_raw_eqFunction_767,
    logic2_raw_eqFunction_768,
    logic2_raw_eqFunction_769,
    logic2_raw_eqFunction_3768,
    logic2_raw_eqFunction_2330,
    logic2_raw_eqFunction_3771,
    logic2_raw_eqFunction_3772,
    logic2_raw_eqFunction_775,
    logic2_raw_eqFunction_3775,
    logic2_raw_eqFunction_3776,
    logic2_raw_eqFunction_778,
    logic2_raw_eqFunction_3779,
    logic2_raw_eqFunction_3780,
    logic2_raw_eqFunction_2354,
    logic2_raw_eqFunction_801,
    logic2_raw_eqFunction_802,
    logic2_raw_eqFunction_805,
    logic2_raw_eqFunction_808,
    logic2_raw_eqFunction_812,
    logic2_raw_eqFunction_3804,
    logic2_raw_eqFunction_3805,
    logic2_raw_eqFunction_3806,
    logic2_raw_eqFunction_3807,
    logic2_raw_eqFunction_3797,
    logic2_raw_eqFunction_3798,
    logic2_raw_eqFunction_3799,
    logic2_raw_eqFunction_3810,
    logic2_raw_eqFunction_3811,
    logic2_raw_eqFunction_3812,
    logic2_raw_eqFunction_3808,
    logic2_raw_eqFunction_3817,
    logic2_raw_eqFunction_3818,
    logic2_raw_eqFunction_3819,
    logic2_raw_eqFunction_3815,
    logic2_raw_eqFunction_3816,
    logic2_raw_eqFunction_3773,
    logic2_raw_eqFunction_3823,
    logic2_raw_eqFunction_3824,
    logic2_raw_eqFunction_3777,
    logic2_raw_eqFunction_3821,
    logic2_raw_eqFunction_3825,
    logic2_raw_eqFunction_3826,
    logic2_raw_eqFunction_825,
    logic2_raw_eqFunction_3829,
    logic2_raw_eqFunction_3848,
    logic2_raw_eqFunction_3849,
    logic2_raw_eqFunction_3850,
    logic2_raw_eqFunction_3842,
    logic2_raw_eqFunction_3843,
    logic2_raw_eqFunction_3844,
    logic2_raw_eqFunction_3836,
    logic2_raw_eqFunction_3758,
    logic2_raw_eqFunction_3759,
    logic2_raw_eqFunction_3760,
    logic2_raw_eqFunction_3761,
    logic2_raw_eqFunction_3762,
    logic2_raw_eqFunction_3763,
    logic2_raw_eqFunction_3764,
    logic2_raw_eqFunction_841,
    logic2_raw_eqFunction_3855,
    logic2_raw_eqFunction_3858,
    logic2_raw_eqFunction_3859,
    logic2_raw_eqFunction_3860,
    logic2_raw_eqFunction_3861,
    logic2_raw_eqFunction_3862,
    logic2_raw_eqFunction_3863,
    logic2_raw_eqFunction_849,
    logic2_raw_eqFunction_850,
    logic2_raw_eqFunction_851,
    logic2_raw_eqFunction_3744,
    logic2_raw_eqFunction_3749,
    logic2_raw_eqFunction_3750,
    logic2_raw_eqFunction_3746,
    logic2_raw_eqFunction_3747,
    logic2_raw_eqFunction_3748,
    logic2_raw_eqFunction_3837,
    logic2_raw_eqFunction_3745,
    logic2_raw_eqFunction_3830,
    logic2_raw_eqFunction_3831,
    logic2_raw_eqFunction_3851,
    logic2_raw_eqFunction_3733,
    logic2_raw_eqFunction_3734,
    logic2_raw_eqFunction_3735,
    logic2_raw_eqFunction_866,
    logic2_raw_eqFunction_3809,
    logic2_raw_eqFunction_3838,
    logic2_raw_eqFunction_3743,
    logic2_raw_eqFunction_3732,
    logic2_raw_eqFunction_3801,
    logic2_raw_eqFunction_3802,
    logic2_raw_eqFunction_3832,
    logic2_raw_eqFunction_874,
    logic2_raw_eqFunction_875,
    logic2_raw_eqFunction_3736,
    logic2_raw_eqFunction_3757,
    logic2_raw_eqFunction_878,
    logic2_raw_eqFunction_879,
    logic2_raw_eqFunction_880,
    logic2_raw_eqFunction_2934,
    logic2_raw_eqFunction_2942,
    logic2_raw_eqFunction_2943,
    logic2_raw_eqFunction_2953,
    logic2_raw_eqFunction_2935,
    logic2_raw_eqFunction_2470,
    logic2_raw_eqFunction_3251,
    logic2_raw_eqFunction_2472,
    logic2_raw_eqFunction_914,
    logic2_raw_eqFunction_3605,
    logic2_raw_eqFunction_3607,
    logic2_raw_eqFunction_3608,
    logic2_raw_eqFunction_918,
    logic2_raw_eqFunction_3589,
    logic2_raw_eqFunction_3591,
    logic2_raw_eqFunction_3592,
    logic2_raw_eqFunction_922,
    logic2_raw_eqFunction_3262,
    logic2_raw_eqFunction_3265,
    logic2_raw_eqFunction_3261,
    logic2_raw_eqFunction_968,
    logic2_raw_eqFunction_3257,
    logic2_raw_eqFunction_3259,
    logic2_raw_eqFunction_971,
    logic2_raw_eqFunction_3314,
    logic2_raw_eqFunction_3604,
    logic2_raw_eqFunction_3313,
    logic2_raw_eqFunction_3542,
    logic2_raw_eqFunction_3274,
    logic2_raw_eqFunction_3275,
    logic2_raw_eqFunction_3276,
    logic2_raw_eqFunction_3277,
    logic2_raw_eqFunction_3280,
    logic2_raw_eqFunction_3278,
    logic2_raw_eqFunction_3279,
    logic2_raw_eqFunction_943,
    logic2_raw_eqFunction_944,
    logic2_raw_eqFunction_3540,
    logic2_raw_eqFunction_3541,
    logic2_raw_eqFunction_947,
    logic2_raw_eqFunction_948,
    logic2_raw_eqFunction_3291,
    logic2_raw_eqFunction_3292,
    logic2_raw_eqFunction_3293,
    logic2_raw_eqFunction_3294,
    logic2_raw_eqFunction_3300,
    logic2_raw_eqFunction_3303,
    logic2_raw_eqFunction_3533,
    logic2_raw_eqFunction_3295,
    logic2_raw_eqFunction_3298,
    logic2_raw_eqFunction_3296,
    logic2_raw_eqFunction_3297,
    logic2_raw_eqFunction_3299,
    logic2_raw_eqFunction_3302,
    logic2_raw_eqFunction_3301,
    logic2_raw_eqFunction_3663,
    logic2_raw_eqFunction_964,
    logic2_raw_eqFunction_3273,
    logic2_raw_eqFunction_3272,
    logic2_raw_eqFunction_3247,
    logic2_raw_eqFunction_3248,
    logic2_raw_eqFunction_3348,
    logic2_raw_eqFunction_3349,
    logic2_raw_eqFunction_3461,
    logic2_raw_eqFunction_3243,
    logic2_raw_eqFunction_3588,
    logic2_raw_eqFunction_3242,
    logic2_raw_eqFunction_3550,
    logic2_raw_eqFunction_942,
    logic2_raw_eqFunction_3241,
    logic2_raw_eqFunction_3246,
    logic2_raw_eqFunction_3306,
    logic2_raw_eqFunction_3307,
    logic2_raw_eqFunction_3309,
    logic2_raw_eqFunction_3312,
    logic2_raw_eqFunction_3548,
    logic2_raw_eqFunction_3308,
    logic2_raw_eqFunction_3310,
    logic2_raw_eqFunction_3852,
    logic2_raw_eqFunction_3853,
    logic2_raw_eqFunction_3854,
    logic2_raw_eqFunction_3260,
    logic2_raw_eqFunction_3845,
    logic2_raw_eqFunction_3846,
    logic2_raw_eqFunction_3847,
    logic2_raw_eqFunction_3839,
    logic2_raw_eqFunction_3840,
    logic2_raw_eqFunction_3841,
    logic2_raw_eqFunction_3266,
    logic2_raw_eqFunction_993,
    logic2_raw_eqFunction_994,
    logic2_raw_eqFunction_995,
    logic2_raw_eqFunction_996,
    logic2_raw_eqFunction_997,
    logic2_raw_eqFunction_3565,
    logic2_raw_eqFunction_999,
    logic2_raw_eqFunction_3564,
    logic2_raw_eqFunction_3267,
    logic2_raw_eqFunction_3601,
    logic2_raw_eqFunction_1003,
    logic2_raw_eqFunction_3503,
    logic2_raw_eqFunction_3599,
    logic2_raw_eqFunction_3328,
    logic2_raw_eqFunction_3329,
    logic2_raw_eqFunction_3327,
    logic2_raw_eqFunction_3330,
    logic2_raw_eqFunction_2571,
    logic2_raw_eqFunction_3337,
    logic2_raw_eqFunction_3338,
    logic2_raw_eqFunction_3504,
    logic2_raw_eqFunction_3505,
    logic2_raw_eqFunction_1073,
    logic2_raw_eqFunction_3339,
    logic2_raw_eqFunction_1075,
    logic2_raw_eqFunction_1076,
    logic2_raw_eqFunction_1077,
    logic2_raw_eqFunction_3611,
    logic2_raw_eqFunction_3612,
    logic2_raw_eqFunction_1080,
    logic2_raw_eqFunction_1081,
    logic2_raw_eqFunction_3526,
    logic2_raw_eqFunction_3527,
    logic2_raw_eqFunction_3350,
    logic2_raw_eqFunction_3322,
    logic2_raw_eqFunction_3351,
    logic2_raw_eqFunction_3353,
    logic2_raw_eqFunction_3356,
    logic2_raw_eqFunction_3352,
    logic2_raw_eqFunction_3354,
    logic2_raw_eqFunction_3323,
    logic2_raw_eqFunction_1015,
    logic2_raw_eqFunction_3582,
    logic2_raw_eqFunction_3583,
    logic2_raw_eqFunction_3584,
    logic2_raw_eqFunction_3359,
    logic2_raw_eqFunction_3495,
    logic2_raw_eqFunction_3367,
    logic2_raw_eqFunction_3369,
    logic2_raw_eqFunction_3366,
    logic2_raw_eqFunction_3370,
    logic2_raw_eqFunction_3490,
    logic2_raw_eqFunction_3491,
    logic2_raw_eqFunction_1026,
    logic2_raw_eqFunction_2608,
    logic2_raw_eqFunction_3373,
    logic2_raw_eqFunction_1063,
    logic2_raw_eqFunction_2611,
    logic2_raw_eqFunction_3640,
    logic2_raw_eqFunction_3361,
    logic2_raw_eqFunction_3362,
    logic2_raw_eqFunction_1032,
    logic2_raw_eqFunction_3360,
    logic2_raw_eqFunction_2617,
    logic2_raw_eqFunction_3375,
    logic2_raw_eqFunction_1050,
    logic2_raw_eqFunction_3386,
    logic2_raw_eqFunction_3478,
    logic2_raw_eqFunction_3385,
    logic2_raw_eqFunction_3384,
    logic2_raw_eqFunction_3377,
    logic2_raw_eqFunction_3378,
    logic2_raw_eqFunction_3380,
    logic2_raw_eqFunction_3383,
    logic2_raw_eqFunction_3379,
    logic2_raw_eqFunction_3381,
    logic2_raw_eqFunction_3376,
    logic2_raw_eqFunction_3331,
    logic2_raw_eqFunction_3343,
    logic2_raw_eqFunction_3344,
    logic2_raw_eqFunction_3345,
    logic2_raw_eqFunction_3340,
    logic2_raw_eqFunction_3341,
    logic2_raw_eqFunction_3342,
    logic2_raw_eqFunction_3332,
    logic2_raw_eqFunction_3333,
    logic2_raw_eqFunction_3334,
    logic2_raw_eqFunction_1092,
    logic2_raw_eqFunction_2654,
    logic2_raw_eqFunction_3622,
    logic2_raw_eqFunction_3623,
    logic2_raw_eqFunction_1110,
    logic2_raw_eqFunction_1111,
    logic2_raw_eqFunction_3630,
    logic2_raw_eqFunction_1113,
    logic2_raw_eqFunction_1114,
    logic2_raw_eqFunction_3636,
    logic2_raw_eqFunction_3637,
    logic2_raw_eqFunction_3625,
    logic2_raw_eqFunction_3626,
    logic2_raw_eqFunction_3627,
    logic2_raw_eqFunction_3462,
    logic2_raw_eqFunction_3514,
    logic2_raw_eqFunction_3506,
    logic2_raw_eqFunction_3507,
    logic2_raw_eqFunction_3512,
    logic2_raw_eqFunction_3513,
    logic2_raw_eqFunction_3600,
    logic2_raw_eqFunction_3508,
    logic2_raw_eqFunction_3511,
    logic2_raw_eqFunction_3509,
    logic2_raw_eqFunction_3510,
    logic2_raw_eqFunction_3515,
    logic2_raw_eqFunction_3517,
    logic2_raw_eqFunction_3516,
    logic2_raw_eqFunction_3631,
    logic2_raw_eqFunction_1135,
    logic2_raw_eqFunction_3618,
    logic2_raw_eqFunction_2684,
    logic2_raw_eqFunction_3620,
    logic2_raw_eqFunction_3614,
    logic2_raw_eqFunction_2687,
    logic2_raw_eqFunction_3616,
    logic2_raw_eqFunction_3833,
    logic2_raw_eqFunction_3834,
    logic2_raw_eqFunction_3835,
    logic2_raw_eqFunction_1145,
    logic2_raw_eqFunction_3577,
    logic2_raw_eqFunction_3602,
    logic2_raw_eqFunction_3603,
    logic2_raw_eqFunction_1149,
    logic2_raw_eqFunction_1150,
    logic2_raw_eqFunction_3551,
    logic2_raw_eqFunction_3586,
    logic2_raw_eqFunction_3587,
    logic2_raw_eqFunction_1154,
    logic2_raw_eqFunction_1155,
    logic2_raw_eqFunction_3560,
    logic2_raw_eqFunction_3561,
    logic2_raw_eqFunction_1158,
    logic2_raw_eqFunction_1159,
    logic2_raw_eqFunction_3555,
    logic2_raw_eqFunction_3556,
    logic2_raw_eqFunction_1162,
    logic2_raw_eqFunction_1163,
    logic2_raw_eqFunction_3571,
    logic2_raw_eqFunction_3572,
    logic2_raw_eqFunction_3253,
    logic2_raw_eqFunction_3255,
    logic2_raw_eqFunction_3256,
    logic2_raw_eqFunction_2933,
    logic2_raw_eqFunction_1170,
    logic2_raw_eqFunction_3566,
    logic2_raw_eqFunction_3567,
    logic2_raw_eqFunction_3568,
    logic2_raw_eqFunction_1174,
    logic2_raw_eqFunction_1175,
    logic2_raw_eqFunction_3575,
    logic2_raw_eqFunction_1177,
    logic2_raw_eqFunction_2725,
    logic2_raw_eqFunction_1179,
    logic2_raw_eqFunction_2727,
    logic2_raw_eqFunction_3767,
    logic2_raw_eqFunction_3864,
    logic2_raw_eqFunction_1211,
    logic2_raw_eqFunction_154,
    logic2_raw_eqFunction_155,
    logic2_raw_eqFunction_1212,
    logic2_raw_eqFunction_1213,
    logic2_raw_eqFunction_1214,
    logic2_raw_eqFunction_1215,
    logic2_raw_eqFunction_1216,
    logic2_raw_eqFunction_1217,
    logic2_raw_eqFunction_1218,
    logic2_raw_eqFunction_1219,
    logic2_raw_eqFunction_1220,
    logic2_raw_eqFunction_1221,
    logic2_raw_eqFunction_1222,
    logic2_raw_eqFunction_1223,
    logic2_raw_eqFunction_1224,
    logic2_raw_eqFunction_1225,
    logic2_raw_eqFunction_1226,
    logic2_raw_eqFunction_1227,
    logic2_raw_eqFunction_1228,
    logic2_raw_eqFunction_1229,
    logic2_raw_eqFunction_1230,
    logic2_raw_eqFunction_1231,
    logic2_raw_eqFunction_1232,
    logic2_raw_eqFunction_1233,
    logic2_raw_eqFunction_1234,
    logic2_raw_eqFunction_1235,
    logic2_raw_eqFunction_1236,
    logic2_raw_eqFunction_1237,
    logic2_raw_eqFunction_1238,
    logic2_raw_eqFunction_1239,
    logic2_raw_eqFunction_1240,
    logic2_raw_eqFunction_1241,
    logic2_raw_eqFunction_1242,
    logic2_raw_eqFunction_1243,
    logic2_raw_eqFunction_1244,
    logic2_raw_eqFunction_1245,
    logic2_raw_eqFunction_1246,
    logic2_raw_eqFunction_1247,
    logic2_raw_eqFunction_1248,
    logic2_raw_eqFunction_1249,
    logic2_raw_eqFunction_1250,
    logic2_raw_eqFunction_1251,
    logic2_raw_eqFunction_1252,
    logic2_raw_eqFunction_1253,
    logic2_raw_eqFunction_1254,
    logic2_raw_eqFunction_1255,
    logic2_raw_eqFunction_1256,
    logic2_raw_eqFunction_1257,
    logic2_raw_eqFunction_1258,
    logic2_raw_eqFunction_1259,
    logic2_raw_eqFunction_1260,
    logic2_raw_eqFunction_1261,
    logic2_raw_eqFunction_1262,
    logic2_raw_eqFunction_1263,
    logic2_raw_eqFunction_1264,
    logic2_raw_eqFunction_1265,
    logic2_raw_eqFunction_1266,
    logic2_raw_eqFunction_1267,
    logic2_raw_eqFunction_1268,
    logic2_raw_eqFunction_1269,
    logic2_raw_eqFunction_1270,
    logic2_raw_eqFunction_1271,
    logic2_raw_eqFunction_1272,
    logic2_raw_eqFunction_1273,
    logic2_raw_eqFunction_1274,
    logic2_raw_eqFunction_1275,
    logic2_raw_eqFunction_1276,
    logic2_raw_eqFunction_1277,
    logic2_raw_eqFunction_1278,
    logic2_raw_eqFunction_1279,
    logic2_raw_eqFunction_1280,
    logic2_raw_eqFunction_1281,
    logic2_raw_eqFunction_1282,
    logic2_raw_eqFunction_1283,
    logic2_raw_eqFunction_1284,
    logic2_raw_eqFunction_1285,
    logic2_raw_eqFunction_1286,
    logic2_raw_eqFunction_1287,
    logic2_raw_eqFunction_1288,
    logic2_raw_eqFunction_1289,
    logic2_raw_eqFunction_1290,
    logic2_raw_eqFunction_1291,
    logic2_raw_eqFunction_1292,
    logic2_raw_eqFunction_1293,
    logic2_raw_eqFunction_1294,
    logic2_raw_eqFunction_1295,
    logic2_raw_eqFunction_1296,
    logic2_raw_eqFunction_1297,
    logic2_raw_eqFunction_1298,
    logic2_raw_eqFunction_1299,
    logic2_raw_eqFunction_1300,
    logic2_raw_eqFunction_1301,
    logic2_raw_eqFunction_1302,
    logic2_raw_eqFunction_1303,
    logic2_raw_eqFunction_1304,
    logic2_raw_eqFunction_1305,
    logic2_raw_eqFunction_1306,
    logic2_raw_eqFunction_1307,
    logic2_raw_eqFunction_1308,
    logic2_raw_eqFunction_1309,
    logic2_raw_eqFunction_1310,
    logic2_raw_eqFunction_1311,
    logic2_raw_eqFunction_1312,
    logic2_raw_eqFunction_1313,
    logic2_raw_eqFunction_1314,
    logic2_raw_eqFunction_1315,
    logic2_raw_eqFunction_1316,
    logic2_raw_eqFunction_1317,
    logic2_raw_eqFunction_1318,
    logic2_raw_eqFunction_1319,
    logic2_raw_eqFunction_1320,
    logic2_raw_eqFunction_1321,
    logic2_raw_eqFunction_1322,
    logic2_raw_eqFunction_1323,
    logic2_raw_eqFunction_1324,
    logic2_raw_eqFunction_1325,
    logic2_raw_eqFunction_1326,
    logic2_raw_eqFunction_1327,
    logic2_raw_eqFunction_1328,
    logic2_raw_eqFunction_1329,
    logic2_raw_eqFunction_1330,
    logic2_raw_eqFunction_1331,
    logic2_raw_eqFunction_1332,
    logic2_raw_eqFunction_1333,
    logic2_raw_eqFunction_1334,
    logic2_raw_eqFunction_1335,
    logic2_raw_eqFunction_1336,
    logic2_raw_eqFunction_1337,
    logic2_raw_eqFunction_1338,
    logic2_raw_eqFunction_1339,
    logic2_raw_eqFunction_1340,
    logic2_raw_eqFunction_1341,
    logic2_raw_eqFunction_1342,
    logic2_raw_eqFunction_1343,
    logic2_raw_eqFunction_1344,
    logic2_raw_eqFunction_1345,
    logic2_raw_eqFunction_1346,
    logic2_raw_eqFunction_1347,
    logic2_raw_eqFunction_1348,
    logic2_raw_eqFunction_2992,
    logic2_raw_eqFunction_2993,
    logic2_raw_eqFunction_3141,
    logic2_raw_eqFunction_3479,
    logic2_raw_eqFunction_3480,
    logic2_raw_eqFunction_1354,
    logic2_raw_eqFunction_1355,
    logic2_raw_eqFunction_1356,
    logic2_raw_eqFunction_1357,
    logic2_raw_eqFunction_1358,
    logic2_raw_eqFunction_1359,
    logic2_raw_eqFunction_1360,
    logic2_raw_eqFunction_1361,
    logic2_raw_eqFunction_1362,
    logic2_raw_eqFunction_1363,
    logic2_raw_eqFunction_1364,
    logic2_raw_eqFunction_1365,
    logic2_raw_eqFunction_1366,
    logic2_raw_eqFunction_1367,
    logic2_raw_eqFunction_1368,
    logic2_raw_eqFunction_1369,
    logic2_raw_eqFunction_1370,
    logic2_raw_eqFunction_1371,
    logic2_raw_eqFunction_1372,
    logic2_raw_eqFunction_1373,
    logic2_raw_eqFunction_1374,
    logic2_raw_eqFunction_1375,
    logic2_raw_eqFunction_1376,
    logic2_raw_eqFunction_1377,
    logic2_raw_eqFunction_1378,
    logic2_raw_eqFunction_1379,
    logic2_raw_eqFunction_1380,
    logic2_raw_eqFunction_1381,
    logic2_raw_eqFunction_1382,
    logic2_raw_eqFunction_1383,
    logic2_raw_eqFunction_1384,
    logic2_raw_eqFunction_1385,
    logic2_raw_eqFunction_1386,
    logic2_raw_eqFunction_1387,
    logic2_raw_eqFunction_1388,
    logic2_raw_eqFunction_1389,
    logic2_raw_eqFunction_1390,
    logic2_raw_eqFunction_1391,
    logic2_raw_eqFunction_1392,
    logic2_raw_eqFunction_1393,
    logic2_raw_eqFunction_1394,
    logic2_raw_eqFunction_1395,
    logic2_raw_eqFunction_1396,
    logic2_raw_eqFunction_1397,
    logic2_raw_eqFunction_1398,
    logic2_raw_eqFunction_1399,
    logic2_raw_eqFunction_1400,
    logic2_raw_eqFunction_1401,
    logic2_raw_eqFunction_1402,
    logic2_raw_eqFunction_1403,
    logic2_raw_eqFunction_1404,
    logic2_raw_eqFunction_1405,
    logic2_raw_eqFunction_1406,
    logic2_raw_eqFunction_1407,
    logic2_raw_eqFunction_1408,
    logic2_raw_eqFunction_1409,
    logic2_raw_eqFunction_1410
  };
  
  for (int id = 0; id < 1329; id++) {
    eqFunctions[id](data, threadData);
  }
  data->simulationInfo->discreteCall = 0;
  
  return 0;
}
int logic2_raw_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  return 0;
}


#if defined(__cplusplus)
}
#endif
