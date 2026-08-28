/* Initialization */
#include "logic3_raw_model.h"
#include "logic3_raw_11mix.h"
#include "logic3_raw_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void logic3_raw_functionInitialEquations_0(DATA *data, threadData_t *threadData);
void logic3_raw_functionInitialEquations_1(DATA *data, threadData_t *threadData);
void logic3_raw_functionInitialEquations_2(DATA *data, threadData_t *threadData);

int logic3_raw_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->discreteCall = 1;
  logic3_raw_functionInitialEquations_0(data, threadData);
  logic3_raw_functionInitialEquations_1(data, threadData);
  logic3_raw_functionInitialEquations_2(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  return 0;
}
extern void logic3_raw_eqFunction_1(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_4(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_5(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_6(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_7(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_8(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_9(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_10(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_11(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_12(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_13(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_14(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_15(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_16(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_17(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_18(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_19(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_20(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_21(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_22(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_23(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_24(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_25(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_26(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_27(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_28(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_29(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_30(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_31(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_32(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_33(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_34(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_35(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_36(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_37(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_38(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_39(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_40(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_41(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_42(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_43(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_44(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_45(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_46(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_47(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_48(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_49(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_50(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_51(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_52(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_53(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_54(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_55(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_56(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_57(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_58(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_59(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_60(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_61(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_62(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_63(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_64(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_65(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_66(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_67(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_68(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_69(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_70(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_71(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_72(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_73(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_74(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_75(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_76(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_77(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_78(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_79(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_80(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_81(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_82(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_83(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_84(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_85(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_86(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_87(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_88(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_89(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_90(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_91(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_92(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_93(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_94(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_95(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_96(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_97(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_98(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_99(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_100(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_101(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_102(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_103(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_104(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_105(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_106(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_107(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_108(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_109(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_110(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_111(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_112(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_113(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_114(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_115(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_116(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_117(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_118(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_119(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_120(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_121(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_122(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_123(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_124(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_125(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_126(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_127(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_128(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_129(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_130(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_131(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_132(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_133(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_134(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_135(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_136(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_137(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_138(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_139(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_140(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_141(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_142(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_152(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_153(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1193(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1194(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1195(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1196(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1197(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1198(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1199(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1200(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1201(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1202(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1203(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1204(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1205(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1206(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1207(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1208(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1209(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1210(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1211(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1212(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1213(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1214(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1215(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1216(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1217(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1218(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1219(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1220(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_143(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_144(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_145(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_146(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_147(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_148(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_149(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_150(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_151(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_156(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_157(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_158(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_159(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_160(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_161(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_162(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_163(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_164(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_165(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_166(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_167(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_168(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_169(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_170(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_171(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_172(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_173(DATA *data, threadData_t *threadData);


/*
equation index: 1738
type: SIMPLE_ASSIGN
pumCHW.PToMed.u1 = 0.0
*/
void logic3_raw_eqFunction_1738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1738};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* pumCHW.PToMed.u1 variable */) = 0.0;
  threadData->lastEquationSolved = 1738;
}

/*
equation index: 1739
type: SIMPLE_ASSIGN
pumCW.PToMed.u1 = 0.0
*/
void logic3_raw_eqFunction_1739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1739};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* pumCW.PToMed.u1 variable */) = 0.0;
  threadData->lastEquationSolved = 1739;
}
extern void logic3_raw_eqFunction_3026(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3027(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3037(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3038(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_178(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3043(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_180(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3044(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_182(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3120(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3162(DATA *data, threadData_t *threadData);


/*
equation index: 1751
type: SIMPLE_ASSIGN
pumCHW2.PToMed.u1 = 0.0
*/
void logic3_raw_eqFunction_1751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1751};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* pumCHW2.PToMed.u1 variable */) = 0.0;
  threadData->lastEquationSolved = 1751;
}

/*
equation index: 1752
type: SIMPLE_ASSIGN
pumCW2.PToMed.u1 = 0.0
*/
void logic3_raw_eqFunction_1752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1752};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* pumCW2.PToMed.u1 variable */) = 0.0;
  threadData->lastEquationSolved = 1752;
}
extern void logic3_raw_eqFunction_185(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3166(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3179(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3190(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3195(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3196(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3197(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3198(DATA *data, threadData_t *threadData);


/*
equation index: 1761
type: SIMPLE_ASSIGN
val5.dp = val5.dp_nominal_pos * val5.m_flow / val5.m_flow_nominal_pos
*/
void logic3_raw_eqFunction_1761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1761};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* val5.dp variable */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2723]] /* val5.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2728]] /* val5.m_flow_nominal_pos PARAM */),"val5.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 1761;
}
extern void logic3_raw_eqFunction_3212(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3213(DATA *data, threadData_t *threadData);


/*
equation index: 1764
type: SIMPLE_ASSIGN
cooTow.dp = 104510.0 * val5.m_flow / cooTow.preDro.m_flow_nominal_pos
*/
void logic3_raw_eqFunction_1764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1764};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* cooTow.dp variable */) = DIVISION_SIM((104510.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* cooTow.preDro.m_flow_nominal_pos PARAM */),"cooTow.preDro.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 1764;
}
extern void logic3_raw_eqFunction_3163(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3200(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3201(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3204(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3203(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3202(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3205(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3217(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3222(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3206(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3180(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3183(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_199(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3048(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3049(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3050(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3051(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3052(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3053(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3054(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3055(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3056(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3057(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3058(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3059(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3060(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3061(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3062(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3063(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3064(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3065(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3066(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3067(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3068(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3069(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3070(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3071(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3072(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3073(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3074(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3075(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3076(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3077(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3078(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3079(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3080(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3081(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3082(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3083(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3084(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3085(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3086(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3087(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3088(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3089(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3090(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3111(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3114(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3094(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3092(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3093(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3112(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3113(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3091(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_251(DATA *data, threadData_t *threadData);


void logic3_raw_eqFunction_1830(DATA*, threadData_t*);
void logic3_raw_eqFunction_1831(DATA*, threadData_t*);
void logic3_raw_eqFunction_1832(DATA*, threadData_t*);
/*
equation index: 1837
indexNonlinear: 13
type: NONLINEAR

vars: {weaBus.TWetBul}
eqns: {1830, 1831, 1832}
*/
void logic3_raw_eqFunction_1837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1837};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1837 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[13].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */);
  retValue = solve_nonlinear_system(data, threadData, 13);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1837};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1837 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */) = data->simulationInfo->nonlinearSystemData[13].nlsx[0];
  threadData->lastEquationSolved = 1837;
}
extern void logic3_raw_eqFunction_3097(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_261(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3100(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_263(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3030(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3031(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3032(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3033(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3034(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3035(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3036(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_271(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_272(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_273(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_274(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_275(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_276(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_277(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_278(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_279(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3167(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3168(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3169(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3170(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3171(DATA *data, threadData_t *threadData);


/*
equation index: 1863
type: SIMPLE_ASSIGN
val6.dp = chi.m2_flow * val6.dp_nominal_pos / val6.m_flow_nominal_pos
*/
void logic3_raw_eqFunction_1863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1863};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val6.dp variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* chi.m2_flow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2746]] /* val6.dp_nominal_pos PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2751]] /* val6.m_flow_nominal_pos PARAM */),"val6.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 1863;
}
extern void logic3_raw_eqFunction_3172(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3173(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_287(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_288(DATA *data, threadData_t *threadData);


/*
equation index: 1868
type: ALGORITHM

  combinedCtrl1.nextControlTime := $START.combinedCtrl1.nextControlTime;
  combinedCtrl1.requestMoreChiller := $START.combinedCtrl1.requestMoreChiller;
  combinedCtrl1.tempSet := $START.combinedCtrl1.tempSet;
  combinedCtrl1.flowSet := $START.combinedCtrl1.flowSet;
  combinedCtrl1.resetMode := $START.combinedCtrl1.resetMode;
  $whenCondition1 := $START.$whenCondition1;
  $whenCondition1 := time >= $PRE.combinedCtrl1.nextControlTime;
  combinedCtrl1.resetMode := false;
  combinedCtrl1.flowSet := combinedCtrl1.mCHWStart;
  combinedCtrl1.tempSet := combinedCtrl1.TChiSetStart;
  combinedCtrl1.requestMoreChiller := false;
  combinedCtrl1.nextControlTime := time + combinedCtrl1.samplePeriod;
*/
void logic3_raw_eqFunction_1868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1868};
  modelica_boolean tmp0;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* combinedCtrl1.nextControlTime DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1343] /* combinedCtrl1.nextControlTime DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* combinedCtrl1.requestMoreChiller DISCRETE */) = (data->modelData->booleanVarsData[8] /* combinedCtrl1.requestMoreChiller DISCRETE */).attribute .start;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* combinedCtrl1.tempSet DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1344] /* combinedCtrl1.tempSet DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* combinedCtrl1.flowSet DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1342] /* combinedCtrl1.flowSet DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[9]] /* combinedCtrl1.resetMode DISCRETE */) = (data->modelData->booleanVarsData[9] /* combinedCtrl1.resetMode DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = (data->modelData->booleanVarsData[0] /* $whenCondition1 DISCRETE */).attribute .start;

  tmp0 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[1343] /* combinedCtrl1.nextControlTime DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = tmp0;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[9]] /* combinedCtrl1.resetMode DISCRETE */) = 0 /* false */;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* combinedCtrl1.flowSet DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[434]] /* combinedCtrl1.mCHWStart PARAM */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* combinedCtrl1.tempSet DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* combinedCtrl1.TChiSetStart PARAM */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* combinedCtrl1.requestMoreChiller DISCRETE */) = 0 /* false */;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* combinedCtrl1.nextControlTime DISCRETE */) = data->localData[0]->timeValue + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[436]] /* combinedCtrl1.samplePeriod PARAM */);
  threadData->lastEquationSolved = 1868;
}
extern void logic3_raw_eqFunction_3642(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3641(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_292(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_293(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_294(DATA *data, threadData_t *threadData);


/*
equation index: 1874
type: ALGORITHM

  combinedCtrl2.nextControlTime := $START.combinedCtrl2.nextControlTime;
  combinedCtrl2.requestMoreChiller := $START.combinedCtrl2.requestMoreChiller;
  combinedCtrl2.tempSet := $START.combinedCtrl2.tempSet;
  combinedCtrl2.flowSet := $START.combinedCtrl2.flowSet;
  combinedCtrl2.resetMode := $START.combinedCtrl2.resetMode;
  $whenCondition2 := $START.$whenCondition2;
  $whenCondition2 := time >= $PRE.combinedCtrl2.nextControlTime;
  combinedCtrl2.resetMode := false;
  combinedCtrl2.flowSet := combinedCtrl2.mCHWStart;
  combinedCtrl2.tempSet := combinedCtrl2.TChiSetStart;
  combinedCtrl2.requestMoreChiller := false;
  combinedCtrl2.nextControlTime := time + combinedCtrl2.samplePeriod;
*/
void logic3_raw_eqFunction_1874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1874};
  modelica_boolean tmp1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1346]] /* combinedCtrl2.nextControlTime DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1346] /* combinedCtrl2.nextControlTime DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[10]] /* combinedCtrl2.requestMoreChiller DISCRETE */) = (data->modelData->booleanVarsData[10] /* combinedCtrl2.requestMoreChiller DISCRETE */).attribute .start;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1347]] /* combinedCtrl2.tempSet DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1347] /* combinedCtrl2.tempSet DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* combinedCtrl2.flowSet DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1345] /* combinedCtrl2.flowSet DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[11]] /* combinedCtrl2.resetMode DISCRETE */) = (data->modelData->booleanVarsData[11] /* combinedCtrl2.resetMode DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) = (data->modelData->booleanVarsData[1] /* $whenCondition2 DISCRETE */).attribute .start;

  tmp1 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[1346] /* combinedCtrl2.nextControlTime DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) = tmp1;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[11]] /* combinedCtrl2.resetMode DISCRETE */) = 0 /* false */;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* combinedCtrl2.flowSet DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[451]] /* combinedCtrl2.mCHWStart PARAM */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1347]] /* combinedCtrl2.tempSet DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[443]] /* combinedCtrl2.TChiSetStart PARAM */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[10]] /* combinedCtrl2.requestMoreChiller DISCRETE */) = 0 /* false */;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1346]] /* combinedCtrl2.nextControlTime DISCRETE */) = data->localData[0]->timeValue + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[453]] /* combinedCtrl2.samplePeriod PARAM */);
  threadData->lastEquationSolved = 1874;
}
extern void logic3_raw_eqFunction_3648(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3647(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_298(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_299(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_300(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_301(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_302(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_303(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_304(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3618(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_306(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3621(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_308(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_309(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_310(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3603(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_312(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_313(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_314(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_315(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_316(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_317(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_318(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_319(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_320(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3559(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_322(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_323(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_324(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_325(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_326(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_327(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_328(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_329(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_330(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_331(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_332(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_333(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_334(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_335(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_336(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3507(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_338(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_339(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_340(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_341(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_342(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_343(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_344(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_345(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_346(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_347(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3505(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_349(DATA *data, threadData_t *threadData);


/*
equation index: 1929
type: SIMPLE_ASSIGN
pumCW2.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.hydraulicEfficiency, 0.012615873967693397, pumCW2.eff.hydDer, 1.0, 0.05)
*/
void logic3_raw_eqFunction_1929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1929};
  real_array tmp2;
  real_array tmp3;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp4;
  real_array tmp5;
  real_array_create(&tmp2, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2590]] /* pumCW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp3, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2591]] /* pumCW2.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp4, tmp2, tmp3);
  real_array_create(&tmp5, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* pumCW2.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* pumCW2.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp4, 0.012615873967693397, tmp5, 1.0, 0.05);
  threadData->lastEquationSolved = 1929;
}
extern void logic3_raw_eqFunction_350(DATA *data, threadData_t *threadData);


/*
equation index: 1931
type: SIMPLE_ASSIGN
pumCW2.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.motorEfficiency, 0.012615873967693397, pumCW2.eff.motDer, 1.0, 0.05)
*/
void logic3_raw_eqFunction_1931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1931};
  real_array tmp6;
  real_array tmp7;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp8;
  real_array tmp9;
  real_array_create(&tmp6, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2592]] /* pumCW2.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp7, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2593]] /* pumCW2.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp8, tmp6, tmp7);
  real_array_create(&tmp9, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2569]] /* pumCW2.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* pumCW2.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp8, 0.012615873967693397, tmp9, 1.0, 0.05);
  threadData->lastEquationSolved = 1931;
}
extern void logic3_raw_eqFunction_3389(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_351(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_352(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_353(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_354(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3495(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3492(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_357(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_358(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_359(DATA *data, threadData_t *threadData);


void logic3_raw_eqFunction_1942(DATA*, threadData_t*);
/*
equation index: 1943
indexNonlinear: 14
type: NONLINEAR

vars: {cooTow2.FRWat0}
eqns: {1942}
*/
void logic3_raw_eqFunction_1943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1943};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1943 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[14].nlsxOld[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1132]] /* cooTow2.FRWat0 PARAM */);
  retValue = solve_nonlinear_system(data, threadData, 14);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1943};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1943 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1132]] /* cooTow2.FRWat0 PARAM */) = data->simulationInfo->nonlinearSystemData[14].nlsx[0];
  threadData->lastEquationSolved = 1943;
}
extern void logic3_raw_eqFunction_362(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_363(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_364(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_365(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_366(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_367(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_368(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_369(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_370(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_371(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_372(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3645(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3643(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3644(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_376(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_377(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_378(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_379(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_380(DATA *data, threadData_t *threadData);


/*
equation index: 1963
type: SIMPLE_ASSIGN
pumCHW2.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW2.eff.per.hydraulicEfficiency, 0.025231747935386795, pumCHW2.eff.hydDer, 1.0, 0.05)
*/
void logic3_raw_eqFunction_1963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1963};
  real_array tmp10;
  real_array tmp11;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp12;
  real_array tmp13;
  real_array_create(&tmp10, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2334]] /* pumCHW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp11, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2335]] /* pumCHW2.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp12, tmp10, tmp11);
  real_array_create(&tmp13, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2311]] /* pumCHW2.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* pumCHW2.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp12, 0.025231747935386795, tmp13, 1.0, 0.05);
  threadData->lastEquationSolved = 1963;
}
extern void logic3_raw_eqFunction_381(DATA *data, threadData_t *threadData);


/*
equation index: 1965
type: SIMPLE_ASSIGN
pumCHW2.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW2.eff.per.motorEfficiency, 0.025231747935386795, pumCHW2.eff.motDer, 1.0, 0.05)
*/
void logic3_raw_eqFunction_1965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1965};
  real_array tmp14;
  real_array tmp15;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp16;
  real_array tmp17;
  real_array_create(&tmp14, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2336]] /* pumCHW2.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp15, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2337]] /* pumCHW2.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp16, tmp14, tmp15);
  real_array_create(&tmp17, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2313]] /* pumCHW2.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp16, 0.025231747935386795, tmp17, 1.0, 0.05);
  threadData->lastEquationSolved = 1965;
}
extern void logic3_raw_eqFunction_3348(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_382(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_383(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_384(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3480(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_386(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_387(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3456(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3457(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3458(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3464(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3465(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_393(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3448(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3445(DATA *data, threadData_t *threadData);


/*
equation index: 1981
type: SIMPLE_ASSIGN
damOA.m_flow = damOA.dp * 55.989691542288554 / damOA.dp_nominal_pos
*/
void logic3_raw_eqFunction_1981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1981};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* damOA.m_flow variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damOA.dp variable */)) * (55.989691542288554),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1268]] /* damOA.dp_nominal_pos PARAM */),"damOA.dp_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 1981;
}
extern void logic3_raw_eqFunction_3463(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_399(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_400(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3449(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_402(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_403(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_404(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3468(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3475(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_407(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_408(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3476(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3477(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3478(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_412(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3427(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3428(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3429(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_416(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3418(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3415(DATA *data, threadData_t *threadData);


/*
equation index: 2003
type: SIMPLE_ASSIGN
damEA.m_flow = damEA.dp * 55.989691542288554 / damEA.dp_nominal_pos
*/
void logic3_raw_eqFunction_2003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2003};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* damEA.m_flow variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* damEA.dp variable */)) * (55.989691542288554),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1232]] /* damEA.dp_nominal_pos PARAM */),"damEA.dp_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2003;
}
extern void logic3_raw_eqFunction_421(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3450(DATA *data, threadData_t *threadData);


/*
equation index: 2006
type: SIMPLE_ASSIGN
damRet.m_flow = damRet.dp * 55.989691542288554 / damRet.dp_nominal_pos
*/
void logic3_raw_eqFunction_2006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2006};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* damRet.m_flow variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[813]] /* damRet.dp variable */)) * (55.989691542288554),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1304]] /* damRet.dp_nominal_pos PARAM */),"damRet.dp_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2006;
}
extern void logic3_raw_eqFunction_3462(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3453(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3454(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_428(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_429(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_430(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3419(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_432(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_433(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_434(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3436(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3474(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_437(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_438(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_439(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_440(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_441(DATA *data, threadData_t *threadData);


/*
equation index: 2024
type: SIMPLE_ASSIGN
fanRet.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.hydraulicEfficiency, 46.65807628524046, fanRet.eff.hydDer, 1.0, 0.05)
*/
void logic3_raw_eqFunction_2024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2024};
  real_array tmp18;
  real_array tmp19;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp20;
  real_array tmp21;
  real_array_create(&tmp18, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1393]] /* fanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp19, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1394]] /* fanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp20, tmp18, tmp19);
  real_array_create(&tmp21, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1370]] /* fanRet.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[830]] /* fanRet.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp20, 46.65807628524046, tmp21, 1.0, 0.05);
  threadData->lastEquationSolved = 2024;
}
extern void logic3_raw_eqFunction_442(DATA *data, threadData_t *threadData);


/*
equation index: 2026
type: SIMPLE_ASSIGN
fanRet.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.motorEfficiency, 46.65807628524046, fanRet.eff.motDer, 1.0, 0.05)
*/
void logic3_raw_eqFunction_2026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2026};
  real_array tmp22;
  real_array tmp23;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp24;
  real_array tmp25;
  real_array_create(&tmp22, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1395]] /* fanRet.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp23, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1396]] /* fanRet.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp24, tmp22, tmp23);
  real_array_create(&tmp25, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1372]] /* fanRet.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[831]] /* fanRet.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp24, 46.65807628524046, tmp25, 1.0, 0.05);
  threadData->lastEquationSolved = 2026;
}
extern void logic3_raw_eqFunction_3128(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_443(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_444(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3432(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3460(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3461(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3431(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3430(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3131(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3132(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3133(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3134(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_454(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3123(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3124(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3125(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_461(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3423(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3122(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3420(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3421(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3422(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_467(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_468(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3129(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_470(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_471(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_472(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3137(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3154(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3138(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3139(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3140(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3141(DATA *data, threadData_t *threadData);


/*
equation index: 2061
type: SIMPLE_ASSIGN
KMinusU.u = conPIDTAirSup.limiter.simplifiedExpr
*/
void logic3_raw_eqFunction_2061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2061};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* KMinusU.u variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[468]] /* conPIDTAirSup.limiter.simplifiedExpr variable */);
  threadData->lastEquationSolved = 2061;
}

/*
equation index: 2062
type: SIMPLE_ASSIGN
val1.phi = val1.l + KMinusU.u * (1.0 - val1.l)
*/
void logic3_raw_eqFunction_2062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2062};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1215]] /* val1.phi variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2703]] /* val1.l PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* KMinusU.u variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2703]] /* val1.l PARAM */));
  threadData->lastEquationSolved = 2062;
}
extern void logic3_raw_eqFunction_3143(DATA *data, threadData_t *threadData);


/*
equation index: 2064
type: SIMPLE_ASSIGN
valByp.phi = valByp.l + KMinusU.y * (1.0 - valByp.l)
*/
void logic3_raw_eqFunction_2064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2064};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1248]] /* valByp.phi variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2843]] /* valByp.l PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* KMinusU.y variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2843]] /* valByp.l PARAM */));
  threadData->lastEquationSolved = 2064;
}
extern void logic3_raw_eqFunction_3150(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3151(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3152(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3153(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3155(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3156(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3411(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3412(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3442(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3472(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3473(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3440(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3441(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3439(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_497(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_498(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3160(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3159(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_501(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_502(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_503(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_504(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_505(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3145(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3146(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_508(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_509(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_510(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_511(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_512(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_513(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3639(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3637(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3638(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_517(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_518(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_519(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_520(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3184(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3185(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_525(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_526(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_527(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_528(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_529(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_530(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_531(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_532(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_533(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_534(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_535(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3558(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_537(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_538(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_539(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_540(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_541(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3016(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_543(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_544(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_545(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_546(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3014(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_548(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_570(DATA *data, threadData_t *threadData);


/*
equation index: 2130
type: SIMPLE_ASSIGN
cooTow.T_a = logic3.cooTow.Water.temperature(logic3.cooTow.Water.setState_phX(TCWEntTow.port_a.p, TCWEntTow.port_b.h_outflow, {}))
*/
void logic3_raw_eqFunction_2130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2130};
  base_array_t tmp26;
  simple_alloc_1d_base_array(&tmp26, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cooTow.T_a variable */) = omc_logic3_cooTow_Water_temperature(threadData, omc_logic3_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TCWEntTow.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* TCWEntTow.port_b.h_outflow variable */), tmp26));
  threadData->lastEquationSolved = 2130;
}
extern void logic3_raw_eqFunction_3699(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_549(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_550(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_551(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_552(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3148(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3149(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_555(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_556(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_557(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_558(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3181(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3182(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_571(DATA *data, threadData_t *threadData);


/*
equation index: 2145
type: SIMPLE_ASSIGN
pumCW.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.hydraulicEfficiency, 0.012615873967693397, pumCW.eff.hydDer, 1.0, 0.05)
*/
void logic3_raw_eqFunction_2145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2145};
  real_array tmp27;
  real_array tmp28;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp29;
  real_array tmp30;
  real_array_create(&tmp27, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2462]] /* pumCW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp28, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2463]] /* pumCW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp29, tmp27, tmp28);
  real_array_create(&tmp30, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2439]] /* pumCW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* pumCW.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp29, 0.012615873967693397, tmp30, 1.0, 0.05);
  threadData->lastEquationSolved = 2145;
}
extern void logic3_raw_eqFunction_3219(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_574(DATA *data, threadData_t *threadData);


/*
equation index: 2148
type: SIMPLE_ASSIGN
pumCW.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.motorEfficiency, 0.012615873967693397, pumCW.eff.motDer, 1.0, 0.05)
*/
void logic3_raw_eqFunction_2148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2148};
  real_array tmp31;
  real_array tmp32;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp33;
  real_array tmp34;
  real_array_create(&tmp31, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2464]] /* pumCW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp32, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2465]] /* pumCW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp33, tmp31, tmp32);
  real_array_create(&tmp34, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2441]] /* pumCW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* pumCW.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp33, 0.012615873967693397, tmp34, 1.0, 0.05);
  threadData->lastEquationSolved = 2148;
}
extern void logic3_raw_eqFunction_3216(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3218(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3220(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_581(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_582(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_583(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_584(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3209(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_586(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3227(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3228(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_589(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3009(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3224(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3004(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_593(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_594(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_595(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_596(DATA *data, threadData_t *threadData);


void logic3_raw_eqFunction_2168(DATA*, threadData_t*);
/*
equation index: 2169
indexNonlinear: 15
type: NONLINEAR

vars: {cooTow.FRWat0}
eqns: {2168}
*/
void logic3_raw_eqFunction_2169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2169};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2169 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* cooTow.FRWat0 PARAM */);
  retValue = solve_nonlinear_system(data, threadData, 15);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2169};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2169 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* cooTow.FRWat0 PARAM */) = data->simulationInfo->nonlinearSystemData[15].nlsx[0];
  threadData->lastEquationSolved = 2169;
}
extern void logic3_raw_eqFunction_599(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3229(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_601(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_602(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_603(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_604(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_605(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_606(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_607(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_608(DATA *data, threadData_t *threadData);


void logic3_raw_eqFunction_2180(DATA*, threadData_t*);
void logic3_raw_eqFunction_2181(DATA*, threadData_t*);
void logic3_raw_eqFunction_2182(DATA*, threadData_t*);
void logic3_raw_eqFunction_2183(DATA*, threadData_t*);
void logic3_raw_eqFunction_2184(DATA*, threadData_t*);
void logic3_raw_eqFunction_2185(DATA*, threadData_t*);
void logic3_raw_eqFunction_2186(DATA*, threadData_t*);
void logic3_raw_eqFunction_2187(DATA*, threadData_t*);
void logic3_raw_eqFunction_2188(DATA*, threadData_t*);
void logic3_raw_eqFunction_2189(DATA*, threadData_t*);
void logic3_raw_eqFunction_2190(DATA*, threadData_t*);
void logic3_raw_eqFunction_2191(DATA*, threadData_t*);
/*
equation index: 2192
indexNonlinear: 16
type: NONLINEAR

vars: {TCWEntTow.port_a.h_outflow}
eqns: {2180, 2181, 2182, 2183, 2184, 2185, 2186, 2187, 2188, 2189, 2190, 2191}
*/
void logic3_raw_eqFunction_2192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2192};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2192 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */);
  retValue = solve_nonlinear_system(data, threadData, 16);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2192};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2192 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[16].nlsx[0];
  threadData->lastEquationSolved = 2192;
}
extern void logic3_raw_eqFunction_3686(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3687(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_626(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_627(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3695(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3696(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_630(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3690(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_632(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3700(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3701(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3702(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_636(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_637(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3002(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_639(DATA *data, threadData_t *threadData);


/*
equation index: 2209
type: SIMPLE_ASSIGN
pumCHW.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.hydraulicEfficiency, 0.025231747935386795, pumCHW.eff.hydDer, 1.0, 0.05)
*/
void logic3_raw_eqFunction_2209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2209};
  real_array tmp35;
  real_array tmp36;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp37;
  real_array tmp38;
  real_array_create(&tmp35, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2206]] /* pumCHW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp36, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* pumCHW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp37, tmp35, tmp36);
  real_array_create(&tmp38, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2183]] /* pumCHW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* pumCHW.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp37, 0.025231747935386795, tmp38, 1.0, 0.05);
  threadData->lastEquationSolved = 2209;
}
extern void logic3_raw_eqFunction_641(DATA *data, threadData_t *threadData);


/*
equation index: 2211
type: SIMPLE_ASSIGN
pumCHW.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.motorEfficiency, 0.025231747935386795, pumCHW.eff.motDer, 1.0, 0.05)
*/
void logic3_raw_eqFunction_2211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2211};
  real_array tmp39;
  real_array tmp40;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp41;
  real_array tmp42;
  real_array_create(&tmp39, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2208]] /* pumCHW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp40, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2209]] /* pumCHW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp41, tmp39, tmp40);
  real_array_create(&tmp42, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2185]] /* pumCHW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1066]] /* pumCHW.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp41, 0.025231747935386795, tmp42, 1.0, 0.05);
  threadData->lastEquationSolved = 2211;
}
extern void logic3_raw_eqFunction_3176(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_644(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_645(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_646(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_647(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3178(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3556(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2999(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_651(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3570(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3571(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_654(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_655(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_656(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_657(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_658(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_659(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_660(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_661(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_662(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_663(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2987(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2988(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2989(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2990(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_668(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_669(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_670(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2993(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2994(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_673(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2997(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_675(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_676(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_677(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2978(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2979(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_680(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2985(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_682(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_683(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_684(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_685(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_686(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_687(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_688(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_689(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_690(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3726(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3732(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3735(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3736(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3737(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_696(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_697(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_698(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3728(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3730(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3731(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3729(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3727(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_704(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3738(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_706(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_707(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_708(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2969(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2980(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2981(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2970(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2968(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_714(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2976(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_716(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_717(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_718(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_719(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_720(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_721(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_722(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_723(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_724(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3743(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3750(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3753(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3754(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3755(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_730(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_731(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_732(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3745(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3747(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3748(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3749(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3746(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3744(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_739(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3756(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_741(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_742(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_743(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2960(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2971(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2972(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2982(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2961(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2959(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_750(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2966(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_752(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_753(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_754(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_755(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_756(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_757(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_758(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_759(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_760(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3768(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3769(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3770(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3767(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3766(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3779(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3782(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3783(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3784(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_770(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3757(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_772(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3739(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_774(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_775(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3722(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_777(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_778(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_779(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_780(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_781(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3796(DATA *data, threadData_t *threadData);


/*
equation index: 2352
type: SIMPLE_ASSIGN
cooCoi.m2_flow = (-cooCoi.dp2) / (-13.34174165677975)
*/
void logic3_raw_eqFunction_2352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2352};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.m2_flow variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* cooCoi.dp2 variable */)),-13.34174165677975,"-13.34174165677975",equationIndexes);
  threadData->lastEquationSolved = 2352;
}
extern void logic3_raw_eqFunction_3799(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3800(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_787(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3803(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3804(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_790(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3807(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3808(DATA *data, threadData_t *threadData);


/*
equation index: 2376
type: LINEAR

<var>$DER.cooCoi.ele[1].vol2.dynBal.medium.p</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void logic3_raw_eqFunction_2376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2376};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 2376 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2376};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 2376 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = aux_x[0];

  threadData->lastEquationSolved = 2376;
}
extern void logic3_raw_eqFunction_809(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_810(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_811(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_812(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3835(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3833(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3834(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3832(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_817(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3825(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3826(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3827(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3838(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3839(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3840(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3836(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3845(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3846(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3847(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3843(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3844(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3801(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3851(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3852(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3805(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3849(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3853(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3854(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_837(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3857(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3876(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3877(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3878(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3870(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3871(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3872(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3864(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3786(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3787(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3788(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3789(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3790(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3791(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3792(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_853(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3883(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3886(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3887(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3888(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3889(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3890(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3891(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_861(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_862(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_863(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3772(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3777(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3778(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3774(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3775(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3776(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3865(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3773(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3858(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3859(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3879(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3761(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3762(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3763(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_878(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3837(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3866(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3771(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3760(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3829(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3830(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3860(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_886(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_887(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3764(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3785(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_890(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_891(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_892(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2954(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2962(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2963(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2973(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2955(DATA *data, threadData_t *threadData);


void logic3_raw_eqFunction_2466(DATA*, threadData_t*);
void logic3_raw_eqFunction_2467(DATA*, threadData_t*);
void logic3_raw_eqFunction_2468(DATA*, threadData_t*);
void logic3_raw_eqFunction_2469(DATA*, threadData_t*);
void logic3_raw_eqFunction_2470(DATA*, threadData_t*);
void logic3_raw_eqFunction_2471(DATA*, threadData_t*);
void logic3_raw_eqFunction_2472(DATA*, threadData_t*);
void logic3_raw_eqFunction_2473(DATA*, threadData_t*);
void logic3_raw_eqFunction_2474(DATA*, threadData_t*);
void logic3_raw_eqFunction_2475(DATA*, threadData_t*);
void logic3_raw_eqFunction_2476(DATA*, threadData_t*);
void logic3_raw_eqFunction_2477(DATA*, threadData_t*);
void logic3_raw_eqFunction_2478(DATA*, threadData_t*);
void logic3_raw_eqFunction_2479(DATA*, threadData_t*);
void logic3_raw_eqFunction_2480(DATA*, threadData_t*);
void logic3_raw_eqFunction_2481(DATA*, threadData_t*);
void logic3_raw_eqFunction_2482(DATA*, threadData_t*);
void logic3_raw_eqFunction_2483(DATA*, threadData_t*);
void logic3_raw_eqFunction_2484(DATA*, threadData_t*);
void logic3_raw_eqFunction_2485(DATA*, threadData_t*);
void logic3_raw_eqFunction_2486(DATA*, threadData_t*);
void logic3_raw_eqFunction_2487(DATA*, threadData_t*);
void logic3_raw_eqFunction_2488(DATA*, threadData_t*);
void logic3_raw_eqFunction_2489(DATA*, threadData_t*);
void logic3_raw_eqFunction_2491(DATA*, threadData_t*);
void logic3_raw_eqFunction_2490(DATA*, threadData_t*);
/*
equation index: 2492
indexNonlinear: 17
type: NONLINEAR

vars: {valByp.m_flow, cooCoi.rep1.y[4]}
eqns: {2466, 2467, 2468, 2469, 2470, 2471, 2472, 2473, 2474, 2475, 2476, 2477, 2478, 2479, 2480, 2481, 2482, 2483, 2484, 2485, 2486, 2487, 2488, 2489, 2491, 2490}
*/
void logic3_raw_eqFunction_2492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2492};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2492 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[17].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* valByp.m_flow variable */);
  data->simulationInfo->nonlinearSystemData[17].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */);
  retValue = solve_nonlinear_system(data, threadData, 17);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2492};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2492 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* valByp.m_flow variable */) = data->simulationInfo->nonlinearSystemData[17].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */) = data->simulationInfo->nonlinearSystemData[17].nlsx[1];
  threadData->lastEquationSolved = 2492;
}
extern void logic3_raw_eqFunction_3322(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3383(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3519(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3391(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3393(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3390(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3394(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3514(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3515(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_934(DATA *data, threadData_t *threadData);


/*
equation index: 2503
type: SIMPLE_ASSIGN
val7.dp = val7.dp_nominal_pos * val7.m_flow / val7.m_flow_nominal_pos
*/
void logic3_raw_eqFunction_2503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2503};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* val7.dp variable */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2769]] /* val7.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2774]] /* val7.m_flow_nominal_pos PARAM */),"val7.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2503;
}
extern void logic3_raw_eqFunction_3397(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_966(DATA *data, threadData_t *threadData);


/*
equation index: 2506
type: SIMPLE_ASSIGN
cooTow2.T_a = logic3.cooTow2.Water.temperature(logic3.cooTow2.Water.setState_phX(TCWEntTow2.port_a.p, TCWEntTow2.port_b.h_outflow, {}))
*/
void logic3_raw_eqFunction_2506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2506};
  base_array_t tmp43;
  simple_alloc_1d_base_array(&tmp43, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[778]] /* cooTow2.T_a variable */) = omc_logic3_cooTow2_Water_temperature(threadData, omc_logic3_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* TCWEntTow2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* TCWEntTow2.port_b.h_outflow variable */), tmp43));
  threadData->lastEquationSolved = 2506;
}
extern void logic3_raw_eqFunction_3668(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3385(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3386(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_940(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3384(DATA *data, threadData_t *threadData);


/*
equation index: 2512
type: SIMPLE_ASSIGN
cooTow2.dp = 104510.0 * val7.m_flow / cooTow2.preDro.m_flow_nominal_pos
*/
void logic3_raw_eqFunction_2512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2512};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[790]] /* cooTow2.dp variable */) = DIVISION_SIM((104510.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1176]] /* cooTow2.preDro.m_flow_nominal_pos PARAM */),"cooTow2.preDro.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2512;
}
extern void logic3_raw_eqFunction_3399(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_953(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3410(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3502(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3409(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3408(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3401(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3402(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3404(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3407(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3403(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3405(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3400(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3353(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3365(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3366(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3367(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3362(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3363(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3364(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3354(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3355(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3356(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_970(DATA *data, threadData_t *threadData);


void logic3_raw_eqFunction_2537(DATA*, threadData_t*);
void logic3_raw_eqFunction_2538(DATA*, threadData_t*);
void logic3_raw_eqFunction_2539(DATA*, threadData_t*);
void logic3_raw_eqFunction_2540(DATA*, threadData_t*);
void logic3_raw_eqFunction_2541(DATA*, threadData_t*);
void logic3_raw_eqFunction_2542(DATA*, threadData_t*);
void logic3_raw_eqFunction_2543(DATA*, threadData_t*);
void logic3_raw_eqFunction_2544(DATA*, threadData_t*);
void logic3_raw_eqFunction_2545(DATA*, threadData_t*);
void logic3_raw_eqFunction_2546(DATA*, threadData_t*);
void logic3_raw_eqFunction_2547(DATA*, threadData_t*);
void logic3_raw_eqFunction_2548(DATA*, threadData_t*);
/*
equation index: 2549
indexNonlinear: 18
type: NONLINEAR

vars: {TCWEntTow2.port_a.h_outflow}
eqns: {2537, 2538, 2539, 2540, 2541, 2542, 2543, 2544, 2545, 2546, 2547, 2548}
*/
void logic3_raw_eqFunction_2549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2549};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2549 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */);
  retValue = solve_nonlinear_system(data, threadData, 18);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2549};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2549 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[18].nlsx[0];
  threadData->lastEquationSolved = 2549;
}
extern void logic3_raw_eqFunction_3650(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3651(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_988(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_989(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3658(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_991(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_992(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3664(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3665(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3653(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3654(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3655(DATA *data, threadData_t *threadData);


/*
equation index: 2562
type: SIMPLE_ASSIGN
val8_2.dp = val8.m_flow * val8_2.dp_nominal_pos / val8_2.m_flow_nominal_pos
*/
void logic3_raw_eqFunction_2562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2562};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* val8_2.dp variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2815]] /* val8_2.dp_nominal_pos PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2820]] /* val8_2.m_flow_nominal_pos PARAM */),"val8_2.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2562;
}
extern void logic3_raw_eqFunction_1000(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3629(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3631(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3632(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1004(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3613(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3615(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3616(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1008(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3263(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3264(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3370(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3380(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3490(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3269(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3612(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3268(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3574(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3267(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3272(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3317(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3628(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3316(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3566(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3275(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3284(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3285(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3286(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3289(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3287(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3288(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1060(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1027(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1028(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3564(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3565(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1031(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1032(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3300(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3301(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3302(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3303(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3309(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3312(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3557(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3304(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3307(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3305(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3306(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3308(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3311(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3310(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3691(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1048(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3336(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3342(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3335(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1012(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3331(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3333(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1015(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3880(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3881(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3882(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3334(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3873(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3874(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3875(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3867(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3868(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3869(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3274(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3273(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3277(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3278(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3280(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3283(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3572(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3279(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3281(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3276(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3315(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3323(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1084(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1085(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1086(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1087(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1088(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3589(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1090(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3588(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3324(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3625(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1094(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3527(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3623(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3350(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3351(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3349(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3352(DATA *data, threadData_t *threadData);


/*
equation index: 2663
type: SIMPLE_ASSIGN
val8.dp = val8.m_flow * val8.dp_nominal_pos / val8.m_flow_nominal_pos
*/
void logic3_raw_eqFunction_2663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2663};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8.dp variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2792]] /* val8.dp_nominal_pos PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2797]] /* val8.m_flow_nominal_pos PARAM */),"val8.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2663;
}
extern void logic3_raw_eqFunction_3359(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3360(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3528(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3529(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1107(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3361(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1109(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1110(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1111(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3635(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3636(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1114(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1115(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3550(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3551(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3372(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3371(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3379(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3344(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3373(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3375(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3378(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3374(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3376(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3345(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1132(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3606(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3607(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3608(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3483(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3538(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3530(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3531(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3536(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3537(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3624(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3532(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3535(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3533(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3534(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3539(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3541(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3540(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3659(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1151(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3861(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3862(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3863(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1155(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3601(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3626(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3627(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1159(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1160(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3575(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3610(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3611(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1164(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1165(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3584(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3585(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1168(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1169(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3579(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3580(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1172(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1173(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3595(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3596(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3327(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3329(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3330(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2953(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1180(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3590(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3591(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3592(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1184(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1185(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3599(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1187(DATA *data, threadData_t *threadData);


/*
equation index: 2745
type: SIMPLE_ASSIGN
fanSup.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.hydraulicEfficiency, 46.65807628524046, fanSup.eff.hydDer, 1.0, 0.05)
*/
void logic3_raw_eqFunction_2745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2745};
  real_array tmp44;
  real_array tmp45;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp46;
  real_array tmp47;
  real_array_create(&tmp44, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1530]] /* fanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp45, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1531]] /* fanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp46, tmp44, tmp45);
  real_array_create(&tmp47, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1507]] /* fanSup.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[867]] /* fanSup.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp46, 46.65807628524046, tmp47, 1.0, 0.05);
  threadData->lastEquationSolved = 2745;
}
extern void logic3_raw_eqFunction_1189(DATA *data, threadData_t *threadData);


/*
equation index: 2747
type: SIMPLE_ASSIGN
fanSup.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.motorEfficiency, 46.65807628524046, fanSup.eff.motDer, 1.0, 0.05)
*/
void logic3_raw_eqFunction_2747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2747};
  real_array tmp48;
  real_array tmp49;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp50;
  real_array tmp51;
  real_array_create(&tmp48, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1532]] /* fanSup.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp49, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1533]] /* fanSup.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp50, tmp48, tmp49);
  real_array_create(&tmp51, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1509]] /* fanSup.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[868]] /* fanSup.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp50, 46.65807628524046, tmp51, 1.0, 0.05);
  threadData->lastEquationSolved = 2747;
}
extern void logic3_raw_eqFunction_3795(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3892(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1221(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_154(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_155(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1222(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1223(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1224(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1225(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1226(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1227(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1228(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1229(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1230(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1231(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1232(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1233(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1234(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1235(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1236(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1237(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1238(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1239(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1240(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1241(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1242(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1243(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1244(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1245(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1246(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1247(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1248(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1249(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1250(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1251(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1252(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1253(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1254(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1255(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1256(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1257(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1258(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1259(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1260(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1261(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1262(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1263(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1264(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1265(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1266(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1267(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1268(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1269(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1270(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1271(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1272(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1273(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1274(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1275(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1276(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1277(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1278(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1279(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1280(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1281(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1282(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1283(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1284(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1285(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1286(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1287(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1288(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1289(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1290(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1291(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1292(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1293(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1294(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1295(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1296(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1297(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1298(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1299(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1300(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1301(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1302(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1303(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1304(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1305(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1306(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1307(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1308(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1309(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1310(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1311(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1312(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1313(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1314(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1315(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1316(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1317(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1318(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1319(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1320(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1321(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1322(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1323(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1324(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1325(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1326(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1327(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1328(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1329(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1330(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1331(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1332(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1333(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1334(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1335(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1336(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1337(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1338(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1339(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1340(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1341(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1342(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1343(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1344(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1345(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1346(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1347(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1348(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1349(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1350(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1351(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1352(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1353(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1354(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1355(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1356(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1357(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1358(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3012(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3013(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3161(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3503(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3504(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1364(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1365(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1366(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1367(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1368(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1369(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1370(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1371(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1372(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1373(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1374(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1375(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1376(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1377(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1378(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1379(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1380(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1381(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1382(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1383(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1384(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1385(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1386(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1387(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1388(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1389(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1390(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1391(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1392(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1393(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1394(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1395(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1396(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1397(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1398(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1399(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1400(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1401(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1402(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1403(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1404(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1405(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1406(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1407(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1408(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1409(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1410(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1411(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1412(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1413(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1414(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1415(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1416(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1417(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1418(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1419(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1420(DATA *data, threadData_t *threadData);

int logic3_raw_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->discreteCall = 1;
  static void (*const eqFunctions[1339])(DATA*, threadData_t*) = {
    logic3_raw_eqFunction_1,
    logic3_raw_eqFunction_2,
    logic3_raw_eqFunction_3,
    logic3_raw_eqFunction_4,
    logic3_raw_eqFunction_5,
    logic3_raw_eqFunction_6,
    logic3_raw_eqFunction_7,
    logic3_raw_eqFunction_8,
    logic3_raw_eqFunction_9,
    logic3_raw_eqFunction_10,
    logic3_raw_eqFunction_11,
    logic3_raw_eqFunction_12,
    logic3_raw_eqFunction_13,
    logic3_raw_eqFunction_14,
    logic3_raw_eqFunction_15,
    logic3_raw_eqFunction_16,
    logic3_raw_eqFunction_17,
    logic3_raw_eqFunction_18,
    logic3_raw_eqFunction_19,
    logic3_raw_eqFunction_20,
    logic3_raw_eqFunction_21,
    logic3_raw_eqFunction_22,
    logic3_raw_eqFunction_23,
    logic3_raw_eqFunction_24,
    logic3_raw_eqFunction_25,
    logic3_raw_eqFunction_26,
    logic3_raw_eqFunction_27,
    logic3_raw_eqFunction_28,
    logic3_raw_eqFunction_29,
    logic3_raw_eqFunction_30,
    logic3_raw_eqFunction_31,
    logic3_raw_eqFunction_32,
    logic3_raw_eqFunction_33,
    logic3_raw_eqFunction_34,
    logic3_raw_eqFunction_35,
    logic3_raw_eqFunction_36,
    logic3_raw_eqFunction_37,
    logic3_raw_eqFunction_38,
    logic3_raw_eqFunction_39,
    logic3_raw_eqFunction_40,
    logic3_raw_eqFunction_41,
    logic3_raw_eqFunction_42,
    logic3_raw_eqFunction_43,
    logic3_raw_eqFunction_44,
    logic3_raw_eqFunction_45,
    logic3_raw_eqFunction_46,
    logic3_raw_eqFunction_47,
    logic3_raw_eqFunction_48,
    logic3_raw_eqFunction_49,
    logic3_raw_eqFunction_50,
    logic3_raw_eqFunction_51,
    logic3_raw_eqFunction_52,
    logic3_raw_eqFunction_53,
    logic3_raw_eqFunction_54,
    logic3_raw_eqFunction_55,
    logic3_raw_eqFunction_56,
    logic3_raw_eqFunction_57,
    logic3_raw_eqFunction_58,
    logic3_raw_eqFunction_59,
    logic3_raw_eqFunction_60,
    logic3_raw_eqFunction_61,
    logic3_raw_eqFunction_62,
    logic3_raw_eqFunction_63,
    logic3_raw_eqFunction_64,
    logic3_raw_eqFunction_65,
    logic3_raw_eqFunction_66,
    logic3_raw_eqFunction_67,
    logic3_raw_eqFunction_68,
    logic3_raw_eqFunction_69,
    logic3_raw_eqFunction_70,
    logic3_raw_eqFunction_71,
    logic3_raw_eqFunction_72,
    logic3_raw_eqFunction_73,
    logic3_raw_eqFunction_74,
    logic3_raw_eqFunction_75,
    logic3_raw_eqFunction_76,
    logic3_raw_eqFunction_77,
    logic3_raw_eqFunction_78,
    logic3_raw_eqFunction_79,
    logic3_raw_eqFunction_80,
    logic3_raw_eqFunction_81,
    logic3_raw_eqFunction_82,
    logic3_raw_eqFunction_83,
    logic3_raw_eqFunction_84,
    logic3_raw_eqFunction_85,
    logic3_raw_eqFunction_86,
    logic3_raw_eqFunction_87,
    logic3_raw_eqFunction_88,
    logic3_raw_eqFunction_89,
    logic3_raw_eqFunction_90,
    logic3_raw_eqFunction_91,
    logic3_raw_eqFunction_92,
    logic3_raw_eqFunction_93,
    logic3_raw_eqFunction_94,
    logic3_raw_eqFunction_95,
    logic3_raw_eqFunction_96,
    logic3_raw_eqFunction_97,
    logic3_raw_eqFunction_98,
    logic3_raw_eqFunction_99,
    logic3_raw_eqFunction_100,
    logic3_raw_eqFunction_101,
    logic3_raw_eqFunction_102,
    logic3_raw_eqFunction_103,
    logic3_raw_eqFunction_104,
    logic3_raw_eqFunction_105,
    logic3_raw_eqFunction_106,
    logic3_raw_eqFunction_107,
    logic3_raw_eqFunction_108,
    logic3_raw_eqFunction_109,
    logic3_raw_eqFunction_110,
    logic3_raw_eqFunction_111,
    logic3_raw_eqFunction_112,
    logic3_raw_eqFunction_113,
    logic3_raw_eqFunction_114,
    logic3_raw_eqFunction_115,
    logic3_raw_eqFunction_116,
    logic3_raw_eqFunction_117,
    logic3_raw_eqFunction_118,
    logic3_raw_eqFunction_119,
    logic3_raw_eqFunction_120,
    logic3_raw_eqFunction_121,
    logic3_raw_eqFunction_122,
    logic3_raw_eqFunction_123,
    logic3_raw_eqFunction_124,
    logic3_raw_eqFunction_125,
    logic3_raw_eqFunction_126,
    logic3_raw_eqFunction_127,
    logic3_raw_eqFunction_128,
    logic3_raw_eqFunction_129,
    logic3_raw_eqFunction_130,
    logic3_raw_eqFunction_131,
    logic3_raw_eqFunction_132,
    logic3_raw_eqFunction_133,
    logic3_raw_eqFunction_134,
    logic3_raw_eqFunction_135,
    logic3_raw_eqFunction_136,
    logic3_raw_eqFunction_137,
    logic3_raw_eqFunction_138,
    logic3_raw_eqFunction_139,
    logic3_raw_eqFunction_140,
    logic3_raw_eqFunction_141,
    logic3_raw_eqFunction_142,
    logic3_raw_eqFunction_152,
    logic3_raw_eqFunction_153,
    logic3_raw_eqFunction_1193,
    logic3_raw_eqFunction_1194,
    logic3_raw_eqFunction_1195,
    logic3_raw_eqFunction_1196,
    logic3_raw_eqFunction_1197,
    logic3_raw_eqFunction_1198,
    logic3_raw_eqFunction_1199,
    logic3_raw_eqFunction_1200,
    logic3_raw_eqFunction_1201,
    logic3_raw_eqFunction_1202,
    logic3_raw_eqFunction_1203,
    logic3_raw_eqFunction_1204,
    logic3_raw_eqFunction_1205,
    logic3_raw_eqFunction_1206,
    logic3_raw_eqFunction_1207,
    logic3_raw_eqFunction_1208,
    logic3_raw_eqFunction_1209,
    logic3_raw_eqFunction_1210,
    logic3_raw_eqFunction_1211,
    logic3_raw_eqFunction_1212,
    logic3_raw_eqFunction_1213,
    logic3_raw_eqFunction_1214,
    logic3_raw_eqFunction_1215,
    logic3_raw_eqFunction_1216,
    logic3_raw_eqFunction_1217,
    logic3_raw_eqFunction_1218,
    logic3_raw_eqFunction_1219,
    logic3_raw_eqFunction_1220,
    logic3_raw_eqFunction_143,
    logic3_raw_eqFunction_144,
    logic3_raw_eqFunction_145,
    logic3_raw_eqFunction_146,
    logic3_raw_eqFunction_147,
    logic3_raw_eqFunction_148,
    logic3_raw_eqFunction_149,
    logic3_raw_eqFunction_150,
    logic3_raw_eqFunction_151,
    logic3_raw_eqFunction_156,
    logic3_raw_eqFunction_157,
    logic3_raw_eqFunction_158,
    logic3_raw_eqFunction_159,
    logic3_raw_eqFunction_160,
    logic3_raw_eqFunction_161,
    logic3_raw_eqFunction_162,
    logic3_raw_eqFunction_163,
    logic3_raw_eqFunction_164,
    logic3_raw_eqFunction_165,
    logic3_raw_eqFunction_166,
    logic3_raw_eqFunction_167,
    logic3_raw_eqFunction_168,
    logic3_raw_eqFunction_169,
    logic3_raw_eqFunction_170,
    logic3_raw_eqFunction_171,
    logic3_raw_eqFunction_172,
    logic3_raw_eqFunction_173,
    logic3_raw_eqFunction_1738,
    logic3_raw_eqFunction_1739,
    logic3_raw_eqFunction_3026,
    logic3_raw_eqFunction_3027,
    logic3_raw_eqFunction_3037,
    logic3_raw_eqFunction_3038,
    logic3_raw_eqFunction_178,
    logic3_raw_eqFunction_3043,
    logic3_raw_eqFunction_180,
    logic3_raw_eqFunction_3044,
    logic3_raw_eqFunction_182,
    logic3_raw_eqFunction_3120,
    logic3_raw_eqFunction_3162,
    logic3_raw_eqFunction_1751,
    logic3_raw_eqFunction_1752,
    logic3_raw_eqFunction_185,
    logic3_raw_eqFunction_3166,
    logic3_raw_eqFunction_3179,
    logic3_raw_eqFunction_3190,
    logic3_raw_eqFunction_3195,
    logic3_raw_eqFunction_3196,
    logic3_raw_eqFunction_3197,
    logic3_raw_eqFunction_3198,
    logic3_raw_eqFunction_1761,
    logic3_raw_eqFunction_3212,
    logic3_raw_eqFunction_3213,
    logic3_raw_eqFunction_1764,
    logic3_raw_eqFunction_3163,
    logic3_raw_eqFunction_3200,
    logic3_raw_eqFunction_3201,
    logic3_raw_eqFunction_3204,
    logic3_raw_eqFunction_3203,
    logic3_raw_eqFunction_3202,
    logic3_raw_eqFunction_3205,
    logic3_raw_eqFunction_3217,
    logic3_raw_eqFunction_3222,
    logic3_raw_eqFunction_3206,
    logic3_raw_eqFunction_3180,
    logic3_raw_eqFunction_3183,
    logic3_raw_eqFunction_199,
    logic3_raw_eqFunction_3048,
    logic3_raw_eqFunction_3049,
    logic3_raw_eqFunction_3050,
    logic3_raw_eqFunction_3051,
    logic3_raw_eqFunction_3052,
    logic3_raw_eqFunction_3053,
    logic3_raw_eqFunction_3054,
    logic3_raw_eqFunction_3055,
    logic3_raw_eqFunction_3056,
    logic3_raw_eqFunction_3057,
    logic3_raw_eqFunction_3058,
    logic3_raw_eqFunction_3059,
    logic3_raw_eqFunction_3060,
    logic3_raw_eqFunction_3061,
    logic3_raw_eqFunction_3062,
    logic3_raw_eqFunction_3063,
    logic3_raw_eqFunction_3064,
    logic3_raw_eqFunction_3065,
    logic3_raw_eqFunction_3066,
    logic3_raw_eqFunction_3067,
    logic3_raw_eqFunction_3068,
    logic3_raw_eqFunction_3069,
    logic3_raw_eqFunction_3070,
    logic3_raw_eqFunction_3071,
    logic3_raw_eqFunction_3072,
    logic3_raw_eqFunction_3073,
    logic3_raw_eqFunction_3074,
    logic3_raw_eqFunction_3075,
    logic3_raw_eqFunction_3076,
    logic3_raw_eqFunction_3077,
    logic3_raw_eqFunction_3078,
    logic3_raw_eqFunction_3079,
    logic3_raw_eqFunction_3080,
    logic3_raw_eqFunction_3081,
    logic3_raw_eqFunction_3082,
    logic3_raw_eqFunction_3083,
    logic3_raw_eqFunction_3084,
    logic3_raw_eqFunction_3085,
    logic3_raw_eqFunction_3086,
    logic3_raw_eqFunction_3087,
    logic3_raw_eqFunction_3088,
    logic3_raw_eqFunction_3089,
    logic3_raw_eqFunction_3090,
    logic3_raw_eqFunction_3111,
    logic3_raw_eqFunction_3114,
    logic3_raw_eqFunction_3094,
    logic3_raw_eqFunction_3092,
    logic3_raw_eqFunction_3093,
    logic3_raw_eqFunction_3112,
    logic3_raw_eqFunction_3113,
    logic3_raw_eqFunction_3091,
    logic3_raw_eqFunction_251,
    logic3_raw_eqFunction_1837,
    logic3_raw_eqFunction_3097,
    logic3_raw_eqFunction_261,
    logic3_raw_eqFunction_3100,
    logic3_raw_eqFunction_263,
    logic3_raw_eqFunction_3030,
    logic3_raw_eqFunction_3031,
    logic3_raw_eqFunction_3032,
    logic3_raw_eqFunction_3033,
    logic3_raw_eqFunction_3034,
    logic3_raw_eqFunction_3035,
    logic3_raw_eqFunction_3036,
    logic3_raw_eqFunction_271,
    logic3_raw_eqFunction_272,
    logic3_raw_eqFunction_273,
    logic3_raw_eqFunction_274,
    logic3_raw_eqFunction_275,
    logic3_raw_eqFunction_276,
    logic3_raw_eqFunction_277,
    logic3_raw_eqFunction_278,
    logic3_raw_eqFunction_279,
    logic3_raw_eqFunction_3167,
    logic3_raw_eqFunction_3168,
    logic3_raw_eqFunction_3169,
    logic3_raw_eqFunction_3170,
    logic3_raw_eqFunction_3171,
    logic3_raw_eqFunction_1863,
    logic3_raw_eqFunction_3172,
    logic3_raw_eqFunction_3173,
    logic3_raw_eqFunction_287,
    logic3_raw_eqFunction_288,
    logic3_raw_eqFunction_1868,
    logic3_raw_eqFunction_3642,
    logic3_raw_eqFunction_3641,
    logic3_raw_eqFunction_292,
    logic3_raw_eqFunction_293,
    logic3_raw_eqFunction_294,
    logic3_raw_eqFunction_1874,
    logic3_raw_eqFunction_3648,
    logic3_raw_eqFunction_3647,
    logic3_raw_eqFunction_298,
    logic3_raw_eqFunction_299,
    logic3_raw_eqFunction_300,
    logic3_raw_eqFunction_301,
    logic3_raw_eqFunction_302,
    logic3_raw_eqFunction_303,
    logic3_raw_eqFunction_304,
    logic3_raw_eqFunction_3618,
    logic3_raw_eqFunction_306,
    logic3_raw_eqFunction_3621,
    logic3_raw_eqFunction_308,
    logic3_raw_eqFunction_309,
    logic3_raw_eqFunction_310,
    logic3_raw_eqFunction_3603,
    logic3_raw_eqFunction_312,
    logic3_raw_eqFunction_313,
    logic3_raw_eqFunction_314,
    logic3_raw_eqFunction_315,
    logic3_raw_eqFunction_316,
    logic3_raw_eqFunction_317,
    logic3_raw_eqFunction_318,
    logic3_raw_eqFunction_319,
    logic3_raw_eqFunction_320,
    logic3_raw_eqFunction_3559,
    logic3_raw_eqFunction_322,
    logic3_raw_eqFunction_323,
    logic3_raw_eqFunction_324,
    logic3_raw_eqFunction_325,
    logic3_raw_eqFunction_326,
    logic3_raw_eqFunction_327,
    logic3_raw_eqFunction_328,
    logic3_raw_eqFunction_329,
    logic3_raw_eqFunction_330,
    logic3_raw_eqFunction_331,
    logic3_raw_eqFunction_332,
    logic3_raw_eqFunction_333,
    logic3_raw_eqFunction_334,
    logic3_raw_eqFunction_335,
    logic3_raw_eqFunction_336,
    logic3_raw_eqFunction_3507,
    logic3_raw_eqFunction_338,
    logic3_raw_eqFunction_339,
    logic3_raw_eqFunction_340,
    logic3_raw_eqFunction_341,
    logic3_raw_eqFunction_342,
    logic3_raw_eqFunction_343,
    logic3_raw_eqFunction_344,
    logic3_raw_eqFunction_345,
    logic3_raw_eqFunction_346,
    logic3_raw_eqFunction_347,
    logic3_raw_eqFunction_3505,
    logic3_raw_eqFunction_349,
    logic3_raw_eqFunction_1929,
    logic3_raw_eqFunction_350,
    logic3_raw_eqFunction_1931,
    logic3_raw_eqFunction_3389,
    logic3_raw_eqFunction_351,
    logic3_raw_eqFunction_352,
    logic3_raw_eqFunction_353,
    logic3_raw_eqFunction_354,
    logic3_raw_eqFunction_3495,
    logic3_raw_eqFunction_3492,
    logic3_raw_eqFunction_357,
    logic3_raw_eqFunction_358,
    logic3_raw_eqFunction_359,
    logic3_raw_eqFunction_1943,
    logic3_raw_eqFunction_362,
    logic3_raw_eqFunction_363,
    logic3_raw_eqFunction_364,
    logic3_raw_eqFunction_365,
    logic3_raw_eqFunction_366,
    logic3_raw_eqFunction_367,
    logic3_raw_eqFunction_368,
    logic3_raw_eqFunction_369,
    logic3_raw_eqFunction_370,
    logic3_raw_eqFunction_371,
    logic3_raw_eqFunction_372,
    logic3_raw_eqFunction_3645,
    logic3_raw_eqFunction_3643,
    logic3_raw_eqFunction_3644,
    logic3_raw_eqFunction_376,
    logic3_raw_eqFunction_377,
    logic3_raw_eqFunction_378,
    logic3_raw_eqFunction_379,
    logic3_raw_eqFunction_380,
    logic3_raw_eqFunction_1963,
    logic3_raw_eqFunction_381,
    logic3_raw_eqFunction_1965,
    logic3_raw_eqFunction_3348,
    logic3_raw_eqFunction_382,
    logic3_raw_eqFunction_383,
    logic3_raw_eqFunction_384,
    logic3_raw_eqFunction_3480,
    logic3_raw_eqFunction_386,
    logic3_raw_eqFunction_387,
    logic3_raw_eqFunction_3456,
    logic3_raw_eqFunction_3457,
    logic3_raw_eqFunction_3458,
    logic3_raw_eqFunction_3464,
    logic3_raw_eqFunction_3465,
    logic3_raw_eqFunction_393,
    logic3_raw_eqFunction_3448,
    logic3_raw_eqFunction_3445,
    logic3_raw_eqFunction_1981,
    logic3_raw_eqFunction_3463,
    logic3_raw_eqFunction_399,
    logic3_raw_eqFunction_400,
    logic3_raw_eqFunction_3449,
    logic3_raw_eqFunction_402,
    logic3_raw_eqFunction_403,
    logic3_raw_eqFunction_404,
    logic3_raw_eqFunction_3468,
    logic3_raw_eqFunction_3475,
    logic3_raw_eqFunction_407,
    logic3_raw_eqFunction_408,
    logic3_raw_eqFunction_3476,
    logic3_raw_eqFunction_3477,
    logic3_raw_eqFunction_3478,
    logic3_raw_eqFunction_412,
    logic3_raw_eqFunction_3427,
    logic3_raw_eqFunction_3428,
    logic3_raw_eqFunction_3429,
    logic3_raw_eqFunction_416,
    logic3_raw_eqFunction_3418,
    logic3_raw_eqFunction_3415,
    logic3_raw_eqFunction_2003,
    logic3_raw_eqFunction_421,
    logic3_raw_eqFunction_3450,
    logic3_raw_eqFunction_2006,
    logic3_raw_eqFunction_3462,
    logic3_raw_eqFunction_3453,
    logic3_raw_eqFunction_3454,
    logic3_raw_eqFunction_428,
    logic3_raw_eqFunction_429,
    logic3_raw_eqFunction_430,
    logic3_raw_eqFunction_3419,
    logic3_raw_eqFunction_432,
    logic3_raw_eqFunction_433,
    logic3_raw_eqFunction_434,
    logic3_raw_eqFunction_3436,
    logic3_raw_eqFunction_3474,
    logic3_raw_eqFunction_437,
    logic3_raw_eqFunction_438,
    logic3_raw_eqFunction_439,
    logic3_raw_eqFunction_440,
    logic3_raw_eqFunction_441,
    logic3_raw_eqFunction_2024,
    logic3_raw_eqFunction_442,
    logic3_raw_eqFunction_2026,
    logic3_raw_eqFunction_3128,
    logic3_raw_eqFunction_443,
    logic3_raw_eqFunction_444,
    logic3_raw_eqFunction_3432,
    logic3_raw_eqFunction_3460,
    logic3_raw_eqFunction_3461,
    logic3_raw_eqFunction_3431,
    logic3_raw_eqFunction_3430,
    logic3_raw_eqFunction_3131,
    logic3_raw_eqFunction_3132,
    logic3_raw_eqFunction_3133,
    logic3_raw_eqFunction_3134,
    logic3_raw_eqFunction_454,
    logic3_raw_eqFunction_3123,
    logic3_raw_eqFunction_3124,
    logic3_raw_eqFunction_3125,
    logic3_raw_eqFunction_461,
    logic3_raw_eqFunction_3423,
    logic3_raw_eqFunction_3122,
    logic3_raw_eqFunction_3420,
    logic3_raw_eqFunction_3421,
    logic3_raw_eqFunction_3422,
    logic3_raw_eqFunction_467,
    logic3_raw_eqFunction_468,
    logic3_raw_eqFunction_3129,
    logic3_raw_eqFunction_470,
    logic3_raw_eqFunction_471,
    logic3_raw_eqFunction_472,
    logic3_raw_eqFunction_3137,
    logic3_raw_eqFunction_3154,
    logic3_raw_eqFunction_3138,
    logic3_raw_eqFunction_3139,
    logic3_raw_eqFunction_3140,
    logic3_raw_eqFunction_3141,
    logic3_raw_eqFunction_2061,
    logic3_raw_eqFunction_2062,
    logic3_raw_eqFunction_3143,
    logic3_raw_eqFunction_2064,
    logic3_raw_eqFunction_3150,
    logic3_raw_eqFunction_3151,
    logic3_raw_eqFunction_3152,
    logic3_raw_eqFunction_3153,
    logic3_raw_eqFunction_3155,
    logic3_raw_eqFunction_3156,
    logic3_raw_eqFunction_3411,
    logic3_raw_eqFunction_3412,
    logic3_raw_eqFunction_3442,
    logic3_raw_eqFunction_3472,
    logic3_raw_eqFunction_3473,
    logic3_raw_eqFunction_3440,
    logic3_raw_eqFunction_3441,
    logic3_raw_eqFunction_3439,
    logic3_raw_eqFunction_497,
    logic3_raw_eqFunction_498,
    logic3_raw_eqFunction_3160,
    logic3_raw_eqFunction_3159,
    logic3_raw_eqFunction_501,
    logic3_raw_eqFunction_502,
    logic3_raw_eqFunction_503,
    logic3_raw_eqFunction_504,
    logic3_raw_eqFunction_505,
    logic3_raw_eqFunction_3145,
    logic3_raw_eqFunction_3146,
    logic3_raw_eqFunction_508,
    logic3_raw_eqFunction_509,
    logic3_raw_eqFunction_510,
    logic3_raw_eqFunction_511,
    logic3_raw_eqFunction_512,
    logic3_raw_eqFunction_513,
    logic3_raw_eqFunction_3639,
    logic3_raw_eqFunction_3637,
    logic3_raw_eqFunction_3638,
    logic3_raw_eqFunction_517,
    logic3_raw_eqFunction_518,
    logic3_raw_eqFunction_519,
    logic3_raw_eqFunction_520,
    logic3_raw_eqFunction_3184,
    logic3_raw_eqFunction_3185,
    logic3_raw_eqFunction_525,
    logic3_raw_eqFunction_526,
    logic3_raw_eqFunction_527,
    logic3_raw_eqFunction_528,
    logic3_raw_eqFunction_529,
    logic3_raw_eqFunction_530,
    logic3_raw_eqFunction_531,
    logic3_raw_eqFunction_532,
    logic3_raw_eqFunction_533,
    logic3_raw_eqFunction_534,
    logic3_raw_eqFunction_535,
    logic3_raw_eqFunction_3558,
    logic3_raw_eqFunction_537,
    logic3_raw_eqFunction_538,
    logic3_raw_eqFunction_539,
    logic3_raw_eqFunction_540,
    logic3_raw_eqFunction_541,
    logic3_raw_eqFunction_3016,
    logic3_raw_eqFunction_543,
    logic3_raw_eqFunction_544,
    logic3_raw_eqFunction_545,
    logic3_raw_eqFunction_546,
    logic3_raw_eqFunction_3014,
    logic3_raw_eqFunction_548,
    logic3_raw_eqFunction_570,
    logic3_raw_eqFunction_2130,
    logic3_raw_eqFunction_3699,
    logic3_raw_eqFunction_549,
    logic3_raw_eqFunction_550,
    logic3_raw_eqFunction_551,
    logic3_raw_eqFunction_552,
    logic3_raw_eqFunction_3148,
    logic3_raw_eqFunction_3149,
    logic3_raw_eqFunction_555,
    logic3_raw_eqFunction_556,
    logic3_raw_eqFunction_557,
    logic3_raw_eqFunction_558,
    logic3_raw_eqFunction_3181,
    logic3_raw_eqFunction_3182,
    logic3_raw_eqFunction_571,
    logic3_raw_eqFunction_2145,
    logic3_raw_eqFunction_3219,
    logic3_raw_eqFunction_574,
    logic3_raw_eqFunction_2148,
    logic3_raw_eqFunction_3216,
    logic3_raw_eqFunction_3218,
    logic3_raw_eqFunction_3220,
    logic3_raw_eqFunction_581,
    logic3_raw_eqFunction_582,
    logic3_raw_eqFunction_583,
    logic3_raw_eqFunction_584,
    logic3_raw_eqFunction_3209,
    logic3_raw_eqFunction_586,
    logic3_raw_eqFunction_3227,
    logic3_raw_eqFunction_3228,
    logic3_raw_eqFunction_589,
    logic3_raw_eqFunction_3009,
    logic3_raw_eqFunction_3224,
    logic3_raw_eqFunction_3004,
    logic3_raw_eqFunction_593,
    logic3_raw_eqFunction_594,
    logic3_raw_eqFunction_595,
    logic3_raw_eqFunction_596,
    logic3_raw_eqFunction_2169,
    logic3_raw_eqFunction_599,
    logic3_raw_eqFunction_3229,
    logic3_raw_eqFunction_601,
    logic3_raw_eqFunction_602,
    logic3_raw_eqFunction_603,
    logic3_raw_eqFunction_604,
    logic3_raw_eqFunction_605,
    logic3_raw_eqFunction_606,
    logic3_raw_eqFunction_607,
    logic3_raw_eqFunction_608,
    logic3_raw_eqFunction_2192,
    logic3_raw_eqFunction_3686,
    logic3_raw_eqFunction_3687,
    logic3_raw_eqFunction_626,
    logic3_raw_eqFunction_627,
    logic3_raw_eqFunction_3695,
    logic3_raw_eqFunction_3696,
    logic3_raw_eqFunction_630,
    logic3_raw_eqFunction_3690,
    logic3_raw_eqFunction_632,
    logic3_raw_eqFunction_3700,
    logic3_raw_eqFunction_3701,
    logic3_raw_eqFunction_3702,
    logic3_raw_eqFunction_636,
    logic3_raw_eqFunction_637,
    logic3_raw_eqFunction_3002,
    logic3_raw_eqFunction_639,
    logic3_raw_eqFunction_2209,
    logic3_raw_eqFunction_641,
    logic3_raw_eqFunction_2211,
    logic3_raw_eqFunction_3176,
    logic3_raw_eqFunction_644,
    logic3_raw_eqFunction_645,
    logic3_raw_eqFunction_646,
    logic3_raw_eqFunction_647,
    logic3_raw_eqFunction_3178,
    logic3_raw_eqFunction_3556,
    logic3_raw_eqFunction_2999,
    logic3_raw_eqFunction_651,
    logic3_raw_eqFunction_3570,
    logic3_raw_eqFunction_3571,
    logic3_raw_eqFunction_654,
    logic3_raw_eqFunction_655,
    logic3_raw_eqFunction_656,
    logic3_raw_eqFunction_657,
    logic3_raw_eqFunction_658,
    logic3_raw_eqFunction_659,
    logic3_raw_eqFunction_660,
    logic3_raw_eqFunction_661,
    logic3_raw_eqFunction_662,
    logic3_raw_eqFunction_663,
    logic3_raw_eqFunction_2987,
    logic3_raw_eqFunction_2988,
    logic3_raw_eqFunction_2989,
    logic3_raw_eqFunction_2990,
    logic3_raw_eqFunction_668,
    logic3_raw_eqFunction_669,
    logic3_raw_eqFunction_670,
    logic3_raw_eqFunction_2993,
    logic3_raw_eqFunction_2994,
    logic3_raw_eqFunction_673,
    logic3_raw_eqFunction_2997,
    logic3_raw_eqFunction_675,
    logic3_raw_eqFunction_676,
    logic3_raw_eqFunction_677,
    logic3_raw_eqFunction_2978,
    logic3_raw_eqFunction_2979,
    logic3_raw_eqFunction_680,
    logic3_raw_eqFunction_2985,
    logic3_raw_eqFunction_682,
    logic3_raw_eqFunction_683,
    logic3_raw_eqFunction_684,
    logic3_raw_eqFunction_685,
    logic3_raw_eqFunction_686,
    logic3_raw_eqFunction_687,
    logic3_raw_eqFunction_688,
    logic3_raw_eqFunction_689,
    logic3_raw_eqFunction_690,
    logic3_raw_eqFunction_3726,
    logic3_raw_eqFunction_3732,
    logic3_raw_eqFunction_3735,
    logic3_raw_eqFunction_3736,
    logic3_raw_eqFunction_3737,
    logic3_raw_eqFunction_696,
    logic3_raw_eqFunction_697,
    logic3_raw_eqFunction_698,
    logic3_raw_eqFunction_3728,
    logic3_raw_eqFunction_3730,
    logic3_raw_eqFunction_3731,
    logic3_raw_eqFunction_3729,
    logic3_raw_eqFunction_3727,
    logic3_raw_eqFunction_704,
    logic3_raw_eqFunction_3738,
    logic3_raw_eqFunction_706,
    logic3_raw_eqFunction_707,
    logic3_raw_eqFunction_708,
    logic3_raw_eqFunction_2969,
    logic3_raw_eqFunction_2980,
    logic3_raw_eqFunction_2981,
    logic3_raw_eqFunction_2970,
    logic3_raw_eqFunction_2968,
    logic3_raw_eqFunction_714,
    logic3_raw_eqFunction_2976,
    logic3_raw_eqFunction_716,
    logic3_raw_eqFunction_717,
    logic3_raw_eqFunction_718,
    logic3_raw_eqFunction_719,
    logic3_raw_eqFunction_720,
    logic3_raw_eqFunction_721,
    logic3_raw_eqFunction_722,
    logic3_raw_eqFunction_723,
    logic3_raw_eqFunction_724,
    logic3_raw_eqFunction_3743,
    logic3_raw_eqFunction_3750,
    logic3_raw_eqFunction_3753,
    logic3_raw_eqFunction_3754,
    logic3_raw_eqFunction_3755,
    logic3_raw_eqFunction_730,
    logic3_raw_eqFunction_731,
    logic3_raw_eqFunction_732,
    logic3_raw_eqFunction_3745,
    logic3_raw_eqFunction_3747,
    logic3_raw_eqFunction_3748,
    logic3_raw_eqFunction_3749,
    logic3_raw_eqFunction_3746,
    logic3_raw_eqFunction_3744,
    logic3_raw_eqFunction_739,
    logic3_raw_eqFunction_3756,
    logic3_raw_eqFunction_741,
    logic3_raw_eqFunction_742,
    logic3_raw_eqFunction_743,
    logic3_raw_eqFunction_2960,
    logic3_raw_eqFunction_2971,
    logic3_raw_eqFunction_2972,
    logic3_raw_eqFunction_2982,
    logic3_raw_eqFunction_2961,
    logic3_raw_eqFunction_2959,
    logic3_raw_eqFunction_750,
    logic3_raw_eqFunction_2966,
    logic3_raw_eqFunction_752,
    logic3_raw_eqFunction_753,
    logic3_raw_eqFunction_754,
    logic3_raw_eqFunction_755,
    logic3_raw_eqFunction_756,
    logic3_raw_eqFunction_757,
    logic3_raw_eqFunction_758,
    logic3_raw_eqFunction_759,
    logic3_raw_eqFunction_760,
    logic3_raw_eqFunction_3768,
    logic3_raw_eqFunction_3769,
    logic3_raw_eqFunction_3770,
    logic3_raw_eqFunction_3767,
    logic3_raw_eqFunction_3766,
    logic3_raw_eqFunction_3779,
    logic3_raw_eqFunction_3782,
    logic3_raw_eqFunction_3783,
    logic3_raw_eqFunction_3784,
    logic3_raw_eqFunction_770,
    logic3_raw_eqFunction_3757,
    logic3_raw_eqFunction_772,
    logic3_raw_eqFunction_3739,
    logic3_raw_eqFunction_774,
    logic3_raw_eqFunction_775,
    logic3_raw_eqFunction_3722,
    logic3_raw_eqFunction_777,
    logic3_raw_eqFunction_778,
    logic3_raw_eqFunction_779,
    logic3_raw_eqFunction_780,
    logic3_raw_eqFunction_781,
    logic3_raw_eqFunction_3796,
    logic3_raw_eqFunction_2352,
    logic3_raw_eqFunction_3799,
    logic3_raw_eqFunction_3800,
    logic3_raw_eqFunction_787,
    logic3_raw_eqFunction_3803,
    logic3_raw_eqFunction_3804,
    logic3_raw_eqFunction_790,
    logic3_raw_eqFunction_3807,
    logic3_raw_eqFunction_3808,
    logic3_raw_eqFunction_2376,
    logic3_raw_eqFunction_809,
    logic3_raw_eqFunction_810,
    logic3_raw_eqFunction_811,
    logic3_raw_eqFunction_812,
    logic3_raw_eqFunction_3835,
    logic3_raw_eqFunction_3833,
    logic3_raw_eqFunction_3834,
    logic3_raw_eqFunction_3832,
    logic3_raw_eqFunction_817,
    logic3_raw_eqFunction_3825,
    logic3_raw_eqFunction_3826,
    logic3_raw_eqFunction_3827,
    logic3_raw_eqFunction_3838,
    logic3_raw_eqFunction_3839,
    logic3_raw_eqFunction_3840,
    logic3_raw_eqFunction_3836,
    logic3_raw_eqFunction_3845,
    logic3_raw_eqFunction_3846,
    logic3_raw_eqFunction_3847,
    logic3_raw_eqFunction_3843,
    logic3_raw_eqFunction_3844,
    logic3_raw_eqFunction_3801,
    logic3_raw_eqFunction_3851,
    logic3_raw_eqFunction_3852,
    logic3_raw_eqFunction_3805,
    logic3_raw_eqFunction_3849,
    logic3_raw_eqFunction_3853,
    logic3_raw_eqFunction_3854,
    logic3_raw_eqFunction_837,
    logic3_raw_eqFunction_3857,
    logic3_raw_eqFunction_3876,
    logic3_raw_eqFunction_3877,
    logic3_raw_eqFunction_3878,
    logic3_raw_eqFunction_3870,
    logic3_raw_eqFunction_3871,
    logic3_raw_eqFunction_3872,
    logic3_raw_eqFunction_3864,
    logic3_raw_eqFunction_3786,
    logic3_raw_eqFunction_3787,
    logic3_raw_eqFunction_3788,
    logic3_raw_eqFunction_3789,
    logic3_raw_eqFunction_3790,
    logic3_raw_eqFunction_3791,
    logic3_raw_eqFunction_3792,
    logic3_raw_eqFunction_853,
    logic3_raw_eqFunction_3883,
    logic3_raw_eqFunction_3886,
    logic3_raw_eqFunction_3887,
    logic3_raw_eqFunction_3888,
    logic3_raw_eqFunction_3889,
    logic3_raw_eqFunction_3890,
    logic3_raw_eqFunction_3891,
    logic3_raw_eqFunction_861,
    logic3_raw_eqFunction_862,
    logic3_raw_eqFunction_863,
    logic3_raw_eqFunction_3772,
    logic3_raw_eqFunction_3777,
    logic3_raw_eqFunction_3778,
    logic3_raw_eqFunction_3774,
    logic3_raw_eqFunction_3775,
    logic3_raw_eqFunction_3776,
    logic3_raw_eqFunction_3865,
    logic3_raw_eqFunction_3773,
    logic3_raw_eqFunction_3858,
    logic3_raw_eqFunction_3859,
    logic3_raw_eqFunction_3879,
    logic3_raw_eqFunction_3761,
    logic3_raw_eqFunction_3762,
    logic3_raw_eqFunction_3763,
    logic3_raw_eqFunction_878,
    logic3_raw_eqFunction_3837,
    logic3_raw_eqFunction_3866,
    logic3_raw_eqFunction_3771,
    logic3_raw_eqFunction_3760,
    logic3_raw_eqFunction_3829,
    logic3_raw_eqFunction_3830,
    logic3_raw_eqFunction_3860,
    logic3_raw_eqFunction_886,
    logic3_raw_eqFunction_887,
    logic3_raw_eqFunction_3764,
    logic3_raw_eqFunction_3785,
    logic3_raw_eqFunction_890,
    logic3_raw_eqFunction_891,
    logic3_raw_eqFunction_892,
    logic3_raw_eqFunction_2954,
    logic3_raw_eqFunction_2962,
    logic3_raw_eqFunction_2963,
    logic3_raw_eqFunction_2973,
    logic3_raw_eqFunction_2955,
    logic3_raw_eqFunction_2492,
    logic3_raw_eqFunction_3322,
    logic3_raw_eqFunction_3383,
    logic3_raw_eqFunction_3519,
    logic3_raw_eqFunction_3391,
    logic3_raw_eqFunction_3393,
    logic3_raw_eqFunction_3390,
    logic3_raw_eqFunction_3394,
    logic3_raw_eqFunction_3514,
    logic3_raw_eqFunction_3515,
    logic3_raw_eqFunction_934,
    logic3_raw_eqFunction_2503,
    logic3_raw_eqFunction_3397,
    logic3_raw_eqFunction_966,
    logic3_raw_eqFunction_2506,
    logic3_raw_eqFunction_3668,
    logic3_raw_eqFunction_3385,
    logic3_raw_eqFunction_3386,
    logic3_raw_eqFunction_940,
    logic3_raw_eqFunction_3384,
    logic3_raw_eqFunction_2512,
    logic3_raw_eqFunction_3399,
    logic3_raw_eqFunction_953,
    logic3_raw_eqFunction_3410,
    logic3_raw_eqFunction_3502,
    logic3_raw_eqFunction_3409,
    logic3_raw_eqFunction_3408,
    logic3_raw_eqFunction_3401,
    logic3_raw_eqFunction_3402,
    logic3_raw_eqFunction_3404,
    logic3_raw_eqFunction_3407,
    logic3_raw_eqFunction_3403,
    logic3_raw_eqFunction_3405,
    logic3_raw_eqFunction_3400,
    logic3_raw_eqFunction_3353,
    logic3_raw_eqFunction_3365,
    logic3_raw_eqFunction_3366,
    logic3_raw_eqFunction_3367,
    logic3_raw_eqFunction_3362,
    logic3_raw_eqFunction_3363,
    logic3_raw_eqFunction_3364,
    logic3_raw_eqFunction_3354,
    logic3_raw_eqFunction_3355,
    logic3_raw_eqFunction_3356,
    logic3_raw_eqFunction_970,
    logic3_raw_eqFunction_2549,
    logic3_raw_eqFunction_3650,
    logic3_raw_eqFunction_3651,
    logic3_raw_eqFunction_988,
    logic3_raw_eqFunction_989,
    logic3_raw_eqFunction_3658,
    logic3_raw_eqFunction_991,
    logic3_raw_eqFunction_992,
    logic3_raw_eqFunction_3664,
    logic3_raw_eqFunction_3665,
    logic3_raw_eqFunction_3653,
    logic3_raw_eqFunction_3654,
    logic3_raw_eqFunction_3655,
    logic3_raw_eqFunction_2562,
    logic3_raw_eqFunction_1000,
    logic3_raw_eqFunction_3629,
    logic3_raw_eqFunction_3631,
    logic3_raw_eqFunction_3632,
    logic3_raw_eqFunction_1004,
    logic3_raw_eqFunction_3613,
    logic3_raw_eqFunction_3615,
    logic3_raw_eqFunction_3616,
    logic3_raw_eqFunction_1008,
    logic3_raw_eqFunction_3263,
    logic3_raw_eqFunction_3264,
    logic3_raw_eqFunction_3370,
    logic3_raw_eqFunction_3380,
    logic3_raw_eqFunction_3490,
    logic3_raw_eqFunction_3269,
    logic3_raw_eqFunction_3612,
    logic3_raw_eqFunction_3268,
    logic3_raw_eqFunction_3574,
    logic3_raw_eqFunction_3267,
    logic3_raw_eqFunction_3272,
    logic3_raw_eqFunction_3317,
    logic3_raw_eqFunction_3628,
    logic3_raw_eqFunction_3316,
    logic3_raw_eqFunction_3566,
    logic3_raw_eqFunction_3275,
    logic3_raw_eqFunction_3284,
    logic3_raw_eqFunction_3285,
    logic3_raw_eqFunction_3286,
    logic3_raw_eqFunction_3289,
    logic3_raw_eqFunction_3287,
    logic3_raw_eqFunction_3288,
    logic3_raw_eqFunction_1060,
    logic3_raw_eqFunction_1027,
    logic3_raw_eqFunction_1028,
    logic3_raw_eqFunction_3564,
    logic3_raw_eqFunction_3565,
    logic3_raw_eqFunction_1031,
    logic3_raw_eqFunction_1032,
    logic3_raw_eqFunction_3300,
    logic3_raw_eqFunction_3301,
    logic3_raw_eqFunction_3302,
    logic3_raw_eqFunction_3303,
    logic3_raw_eqFunction_3309,
    logic3_raw_eqFunction_3312,
    logic3_raw_eqFunction_3557,
    logic3_raw_eqFunction_3304,
    logic3_raw_eqFunction_3307,
    logic3_raw_eqFunction_3305,
    logic3_raw_eqFunction_3306,
    logic3_raw_eqFunction_3308,
    logic3_raw_eqFunction_3311,
    logic3_raw_eqFunction_3310,
    logic3_raw_eqFunction_3691,
    logic3_raw_eqFunction_1048,
    logic3_raw_eqFunction_3336,
    logic3_raw_eqFunction_3342,
    logic3_raw_eqFunction_3335,
    logic3_raw_eqFunction_1012,
    logic3_raw_eqFunction_3331,
    logic3_raw_eqFunction_3333,
    logic3_raw_eqFunction_1015,
    logic3_raw_eqFunction_3880,
    logic3_raw_eqFunction_3881,
    logic3_raw_eqFunction_3882,
    logic3_raw_eqFunction_3334,
    logic3_raw_eqFunction_3873,
    logic3_raw_eqFunction_3874,
    logic3_raw_eqFunction_3875,
    logic3_raw_eqFunction_3867,
    logic3_raw_eqFunction_3868,
    logic3_raw_eqFunction_3869,
    logic3_raw_eqFunction_3274,
    logic3_raw_eqFunction_3273,
    logic3_raw_eqFunction_3277,
    logic3_raw_eqFunction_3278,
    logic3_raw_eqFunction_3280,
    logic3_raw_eqFunction_3283,
    logic3_raw_eqFunction_3572,
    logic3_raw_eqFunction_3279,
    logic3_raw_eqFunction_3281,
    logic3_raw_eqFunction_3276,
    logic3_raw_eqFunction_3315,
    logic3_raw_eqFunction_3323,
    logic3_raw_eqFunction_1084,
    logic3_raw_eqFunction_1085,
    logic3_raw_eqFunction_1086,
    logic3_raw_eqFunction_1087,
    logic3_raw_eqFunction_1088,
    logic3_raw_eqFunction_3589,
    logic3_raw_eqFunction_1090,
    logic3_raw_eqFunction_3588,
    logic3_raw_eqFunction_3324,
    logic3_raw_eqFunction_3625,
    logic3_raw_eqFunction_1094,
    logic3_raw_eqFunction_3527,
    logic3_raw_eqFunction_3623,
    logic3_raw_eqFunction_3350,
    logic3_raw_eqFunction_3351,
    logic3_raw_eqFunction_3349,
    logic3_raw_eqFunction_3352,
    logic3_raw_eqFunction_2663,
    logic3_raw_eqFunction_3359,
    logic3_raw_eqFunction_3360,
    logic3_raw_eqFunction_3528,
    logic3_raw_eqFunction_3529,
    logic3_raw_eqFunction_1107,
    logic3_raw_eqFunction_3361,
    logic3_raw_eqFunction_1109,
    logic3_raw_eqFunction_1110,
    logic3_raw_eqFunction_1111,
    logic3_raw_eqFunction_3635,
    logic3_raw_eqFunction_3636,
    logic3_raw_eqFunction_1114,
    logic3_raw_eqFunction_1115,
    logic3_raw_eqFunction_3550,
    logic3_raw_eqFunction_3551,
    logic3_raw_eqFunction_3372,
    logic3_raw_eqFunction_3371,
    logic3_raw_eqFunction_3379,
    logic3_raw_eqFunction_3344,
    logic3_raw_eqFunction_3373,
    logic3_raw_eqFunction_3375,
    logic3_raw_eqFunction_3378,
    logic3_raw_eqFunction_3374,
    logic3_raw_eqFunction_3376,
    logic3_raw_eqFunction_3345,
    logic3_raw_eqFunction_1132,
    logic3_raw_eqFunction_3606,
    logic3_raw_eqFunction_3607,
    logic3_raw_eqFunction_3608,
    logic3_raw_eqFunction_3483,
    logic3_raw_eqFunction_3538,
    logic3_raw_eqFunction_3530,
    logic3_raw_eqFunction_3531,
    logic3_raw_eqFunction_3536,
    logic3_raw_eqFunction_3537,
    logic3_raw_eqFunction_3624,
    logic3_raw_eqFunction_3532,
    logic3_raw_eqFunction_3535,
    logic3_raw_eqFunction_3533,
    logic3_raw_eqFunction_3534,
    logic3_raw_eqFunction_3539,
    logic3_raw_eqFunction_3541,
    logic3_raw_eqFunction_3540,
    logic3_raw_eqFunction_3659,
    logic3_raw_eqFunction_1151,
    logic3_raw_eqFunction_3861,
    logic3_raw_eqFunction_3862,
    logic3_raw_eqFunction_3863,
    logic3_raw_eqFunction_1155,
    logic3_raw_eqFunction_3601,
    logic3_raw_eqFunction_3626,
    logic3_raw_eqFunction_3627,
    logic3_raw_eqFunction_1159,
    logic3_raw_eqFunction_1160,
    logic3_raw_eqFunction_3575,
    logic3_raw_eqFunction_3610,
    logic3_raw_eqFunction_3611,
    logic3_raw_eqFunction_1164,
    logic3_raw_eqFunction_1165,
    logic3_raw_eqFunction_3584,
    logic3_raw_eqFunction_3585,
    logic3_raw_eqFunction_1168,
    logic3_raw_eqFunction_1169,
    logic3_raw_eqFunction_3579,
    logic3_raw_eqFunction_3580,
    logic3_raw_eqFunction_1172,
    logic3_raw_eqFunction_1173,
    logic3_raw_eqFunction_3595,
    logic3_raw_eqFunction_3596,
    logic3_raw_eqFunction_3327,
    logic3_raw_eqFunction_3329,
    logic3_raw_eqFunction_3330,
    logic3_raw_eqFunction_2953,
    logic3_raw_eqFunction_1180,
    logic3_raw_eqFunction_3590,
    logic3_raw_eqFunction_3591,
    logic3_raw_eqFunction_3592,
    logic3_raw_eqFunction_1184,
    logic3_raw_eqFunction_1185,
    logic3_raw_eqFunction_3599,
    logic3_raw_eqFunction_1187,
    logic3_raw_eqFunction_2745,
    logic3_raw_eqFunction_1189,
    logic3_raw_eqFunction_2747,
    logic3_raw_eqFunction_3795,
    logic3_raw_eqFunction_3892,
    logic3_raw_eqFunction_1221,
    logic3_raw_eqFunction_154,
    logic3_raw_eqFunction_155,
    logic3_raw_eqFunction_1222,
    logic3_raw_eqFunction_1223,
    logic3_raw_eqFunction_1224,
    logic3_raw_eqFunction_1225,
    logic3_raw_eqFunction_1226,
    logic3_raw_eqFunction_1227,
    logic3_raw_eqFunction_1228,
    logic3_raw_eqFunction_1229,
    logic3_raw_eqFunction_1230,
    logic3_raw_eqFunction_1231,
    logic3_raw_eqFunction_1232,
    logic3_raw_eqFunction_1233,
    logic3_raw_eqFunction_1234,
    logic3_raw_eqFunction_1235,
    logic3_raw_eqFunction_1236,
    logic3_raw_eqFunction_1237,
    logic3_raw_eqFunction_1238,
    logic3_raw_eqFunction_1239,
    logic3_raw_eqFunction_1240,
    logic3_raw_eqFunction_1241,
    logic3_raw_eqFunction_1242,
    logic3_raw_eqFunction_1243,
    logic3_raw_eqFunction_1244,
    logic3_raw_eqFunction_1245,
    logic3_raw_eqFunction_1246,
    logic3_raw_eqFunction_1247,
    logic3_raw_eqFunction_1248,
    logic3_raw_eqFunction_1249,
    logic3_raw_eqFunction_1250,
    logic3_raw_eqFunction_1251,
    logic3_raw_eqFunction_1252,
    logic3_raw_eqFunction_1253,
    logic3_raw_eqFunction_1254,
    logic3_raw_eqFunction_1255,
    logic3_raw_eqFunction_1256,
    logic3_raw_eqFunction_1257,
    logic3_raw_eqFunction_1258,
    logic3_raw_eqFunction_1259,
    logic3_raw_eqFunction_1260,
    logic3_raw_eqFunction_1261,
    logic3_raw_eqFunction_1262,
    logic3_raw_eqFunction_1263,
    logic3_raw_eqFunction_1264,
    logic3_raw_eqFunction_1265,
    logic3_raw_eqFunction_1266,
    logic3_raw_eqFunction_1267,
    logic3_raw_eqFunction_1268,
    logic3_raw_eqFunction_1269,
    logic3_raw_eqFunction_1270,
    logic3_raw_eqFunction_1271,
    logic3_raw_eqFunction_1272,
    logic3_raw_eqFunction_1273,
    logic3_raw_eqFunction_1274,
    logic3_raw_eqFunction_1275,
    logic3_raw_eqFunction_1276,
    logic3_raw_eqFunction_1277,
    logic3_raw_eqFunction_1278,
    logic3_raw_eqFunction_1279,
    logic3_raw_eqFunction_1280,
    logic3_raw_eqFunction_1281,
    logic3_raw_eqFunction_1282,
    logic3_raw_eqFunction_1283,
    logic3_raw_eqFunction_1284,
    logic3_raw_eqFunction_1285,
    logic3_raw_eqFunction_1286,
    logic3_raw_eqFunction_1287,
    logic3_raw_eqFunction_1288,
    logic3_raw_eqFunction_1289,
    logic3_raw_eqFunction_1290,
    logic3_raw_eqFunction_1291,
    logic3_raw_eqFunction_1292,
    logic3_raw_eqFunction_1293,
    logic3_raw_eqFunction_1294,
    logic3_raw_eqFunction_1295,
    logic3_raw_eqFunction_1296,
    logic3_raw_eqFunction_1297,
    logic3_raw_eqFunction_1298,
    logic3_raw_eqFunction_1299,
    logic3_raw_eqFunction_1300,
    logic3_raw_eqFunction_1301,
    logic3_raw_eqFunction_1302,
    logic3_raw_eqFunction_1303,
    logic3_raw_eqFunction_1304,
    logic3_raw_eqFunction_1305,
    logic3_raw_eqFunction_1306,
    logic3_raw_eqFunction_1307,
    logic3_raw_eqFunction_1308,
    logic3_raw_eqFunction_1309,
    logic3_raw_eqFunction_1310,
    logic3_raw_eqFunction_1311,
    logic3_raw_eqFunction_1312,
    logic3_raw_eqFunction_1313,
    logic3_raw_eqFunction_1314,
    logic3_raw_eqFunction_1315,
    logic3_raw_eqFunction_1316,
    logic3_raw_eqFunction_1317,
    logic3_raw_eqFunction_1318,
    logic3_raw_eqFunction_1319,
    logic3_raw_eqFunction_1320,
    logic3_raw_eqFunction_1321,
    logic3_raw_eqFunction_1322,
    logic3_raw_eqFunction_1323,
    logic3_raw_eqFunction_1324,
    logic3_raw_eqFunction_1325,
    logic3_raw_eqFunction_1326,
    logic3_raw_eqFunction_1327,
    logic3_raw_eqFunction_1328,
    logic3_raw_eqFunction_1329,
    logic3_raw_eqFunction_1330,
    logic3_raw_eqFunction_1331,
    logic3_raw_eqFunction_1332,
    logic3_raw_eqFunction_1333,
    logic3_raw_eqFunction_1334,
    logic3_raw_eqFunction_1335,
    logic3_raw_eqFunction_1336,
    logic3_raw_eqFunction_1337,
    logic3_raw_eqFunction_1338,
    logic3_raw_eqFunction_1339,
    logic3_raw_eqFunction_1340,
    logic3_raw_eqFunction_1341,
    logic3_raw_eqFunction_1342,
    logic3_raw_eqFunction_1343,
    logic3_raw_eqFunction_1344,
    logic3_raw_eqFunction_1345,
    logic3_raw_eqFunction_1346,
    logic3_raw_eqFunction_1347,
    logic3_raw_eqFunction_1348,
    logic3_raw_eqFunction_1349,
    logic3_raw_eqFunction_1350,
    logic3_raw_eqFunction_1351,
    logic3_raw_eqFunction_1352,
    logic3_raw_eqFunction_1353,
    logic3_raw_eqFunction_1354,
    logic3_raw_eqFunction_1355,
    logic3_raw_eqFunction_1356,
    logic3_raw_eqFunction_1357,
    logic3_raw_eqFunction_1358,
    logic3_raw_eqFunction_3012,
    logic3_raw_eqFunction_3013,
    logic3_raw_eqFunction_3161,
    logic3_raw_eqFunction_3503,
    logic3_raw_eqFunction_3504,
    logic3_raw_eqFunction_1364,
    logic3_raw_eqFunction_1365,
    logic3_raw_eqFunction_1366,
    logic3_raw_eqFunction_1367,
    logic3_raw_eqFunction_1368,
    logic3_raw_eqFunction_1369,
    logic3_raw_eqFunction_1370,
    logic3_raw_eqFunction_1371,
    logic3_raw_eqFunction_1372,
    logic3_raw_eqFunction_1373,
    logic3_raw_eqFunction_1374,
    logic3_raw_eqFunction_1375,
    logic3_raw_eqFunction_1376,
    logic3_raw_eqFunction_1377,
    logic3_raw_eqFunction_1378,
    logic3_raw_eqFunction_1379,
    logic3_raw_eqFunction_1380,
    logic3_raw_eqFunction_1381,
    logic3_raw_eqFunction_1382,
    logic3_raw_eqFunction_1383,
    logic3_raw_eqFunction_1384,
    logic3_raw_eqFunction_1385,
    logic3_raw_eqFunction_1386,
    logic3_raw_eqFunction_1387,
    logic3_raw_eqFunction_1388,
    logic3_raw_eqFunction_1389,
    logic3_raw_eqFunction_1390,
    logic3_raw_eqFunction_1391,
    logic3_raw_eqFunction_1392,
    logic3_raw_eqFunction_1393,
    logic3_raw_eqFunction_1394,
    logic3_raw_eqFunction_1395,
    logic3_raw_eqFunction_1396,
    logic3_raw_eqFunction_1397,
    logic3_raw_eqFunction_1398,
    logic3_raw_eqFunction_1399,
    logic3_raw_eqFunction_1400,
    logic3_raw_eqFunction_1401,
    logic3_raw_eqFunction_1402,
    logic3_raw_eqFunction_1403,
    logic3_raw_eqFunction_1404,
    logic3_raw_eqFunction_1405,
    logic3_raw_eqFunction_1406,
    logic3_raw_eqFunction_1407,
    logic3_raw_eqFunction_1408,
    logic3_raw_eqFunction_1409,
    logic3_raw_eqFunction_1410,
    logic3_raw_eqFunction_1411,
    logic3_raw_eqFunction_1412,
    logic3_raw_eqFunction_1413,
    logic3_raw_eqFunction_1414,
    logic3_raw_eqFunction_1415,
    logic3_raw_eqFunction_1416,
    logic3_raw_eqFunction_1417,
    logic3_raw_eqFunction_1418,
    logic3_raw_eqFunction_1419,
    logic3_raw_eqFunction_1420
  };
  
  for (int id = 0; id < 1339; id++) {
    eqFunctions[id](data, threadData);
  }
  data->simulationInfo->discreteCall = 0;
  
  return 0;
}
int logic3_raw_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  return 0;
}


#if defined(__cplusplus)
}
#endif
