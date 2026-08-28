/* Initialization */
#include "logic1_raw_model.h"
#include "logic1_raw_11mix.h"
#include "logic1_raw_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void logic1_raw_functionInitialEquations_0(DATA *data, threadData_t *threadData);
void logic1_raw_functionInitialEquations_1(DATA *data, threadData_t *threadData);
void logic1_raw_functionInitialEquations_2(DATA *data, threadData_t *threadData);

int logic1_raw_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->discreteCall = 1;
  logic1_raw_functionInitialEquations_0(data, threadData);
  logic1_raw_functionInitialEquations_1(data, threadData);
  logic1_raw_functionInitialEquations_2(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  return 0;
}
extern void logic1_raw_eqFunction_1(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_4(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_5(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_6(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_7(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_8(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_9(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_10(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_11(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_12(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_13(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_14(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_15(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_16(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_17(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_18(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_19(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_20(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_21(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_22(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_23(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_24(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_25(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_26(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_27(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_28(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_29(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_30(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_31(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_32(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_33(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_34(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_35(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_36(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_37(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_38(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_39(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_40(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_41(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_42(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_43(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_44(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_45(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_46(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_47(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_48(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_49(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_50(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_51(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_52(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_53(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_54(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_55(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_56(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_57(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_58(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_59(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_60(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_61(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_62(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_63(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_64(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_65(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_66(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_67(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_68(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_69(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_70(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_71(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_72(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_73(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_74(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_75(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_76(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_77(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_78(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_79(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_80(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_81(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_82(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_83(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_84(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_85(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_86(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_87(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_88(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_89(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_90(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_91(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_92(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_93(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_94(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_95(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_96(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_97(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_98(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_99(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_100(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_101(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_102(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_103(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_104(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_105(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_106(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_107(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_108(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_109(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_110(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_111(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_112(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_113(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_114(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_115(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_116(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_117(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_118(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_119(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_120(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_121(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_122(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_123(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_124(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_125(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_126(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_127(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_128(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_129(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_130(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_131(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_132(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_133(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_134(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_135(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_136(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_137(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_138(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_139(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_140(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_141(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_142(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_152(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_153(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1187(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1188(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1189(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1190(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1191(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1192(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1193(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1194(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1195(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1196(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1197(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1198(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1199(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1200(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1201(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1202(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1203(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1204(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1205(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1206(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1207(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1208(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1209(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1210(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1211(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1212(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1213(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1214(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_143(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_144(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_145(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_146(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_147(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_148(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_149(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_150(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_151(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_156(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_157(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_158(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_159(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_160(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_161(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_162(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_163(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_164(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_165(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_166(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_167(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_168(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_169(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_170(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_171(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_172(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_173(DATA *data, threadData_t *threadData);


/*
equation index: 1732
type: SIMPLE_ASSIGN
pumCHW.PToMed.u1 = 0.0
*/
void logic1_raw_eqFunction_1732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1732};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* pumCHW.PToMed.u1 variable */) = 0.0;
  threadData->lastEquationSolved = 1732;
}

/*
equation index: 1733
type: SIMPLE_ASSIGN
pumCW.PToMed.u1 = 0.0
*/
void logic1_raw_eqFunction_1733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1733};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* pumCW.PToMed.u1 variable */) = 0.0;
  threadData->lastEquationSolved = 1733;
}
extern void logic1_raw_eqFunction_3014(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3015(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3025(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3026(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_178(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3031(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_180(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3032(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_182(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3108(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3150(DATA *data, threadData_t *threadData);


/*
equation index: 1745
type: SIMPLE_ASSIGN
pumCHW2.PToMed.u1 = 0.0
*/
void logic1_raw_eqFunction_1745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1745};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* pumCHW2.PToMed.u1 variable */) = 0.0;
  threadData->lastEquationSolved = 1745;
}

/*
equation index: 1746
type: SIMPLE_ASSIGN
pumCW2.PToMed.u1 = 0.0
*/
void logic1_raw_eqFunction_1746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1746};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1164]] /* pumCW2.PToMed.u1 variable */) = 0.0;
  threadData->lastEquationSolved = 1746;
}
extern void logic1_raw_eqFunction_185(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3154(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3167(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3178(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3183(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3184(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3185(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3186(DATA *data, threadData_t *threadData);


/*
equation index: 1755
type: SIMPLE_ASSIGN
val5.dp = val5.dp_nominal_pos * val5.m_flow / val5.m_flow_nominal_pos
*/
void logic1_raw_eqFunction_1755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1755};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* val5.dp variable */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2715]] /* val5.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2720]] /* val5.m_flow_nominal_pos PARAM */),"val5.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 1755;
}
extern void logic1_raw_eqFunction_3200(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3201(DATA *data, threadData_t *threadData);


/*
equation index: 1758
type: SIMPLE_ASSIGN
cooTow.dp = 104510.0 * val5.m_flow / cooTow.preDro.m_flow_nominal_pos
*/
void logic1_raw_eqFunction_1758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1758};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cooTow.dp variable */) = DIVISION_SIM((104510.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* cooTow.preDro.m_flow_nominal_pos PARAM */),"cooTow.preDro.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 1758;
}
extern void logic1_raw_eqFunction_3151(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3188(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3189(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3192(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3191(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3190(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3193(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3205(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3210(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3194(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3168(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3171(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_199(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3036(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3037(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3038(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3039(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3040(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3041(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3042(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3043(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3044(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3045(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3046(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3047(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3048(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3049(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3050(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3051(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3052(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3053(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3054(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3055(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3056(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3057(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3058(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3059(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3060(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3061(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3062(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3063(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3064(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3065(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3066(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3067(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3068(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3069(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3070(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3071(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3072(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3073(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3074(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3075(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3076(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3077(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3078(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3099(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3102(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3082(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3080(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3081(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3100(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3101(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3079(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_251(DATA *data, threadData_t *threadData);


void logic1_raw_eqFunction_1824(DATA*, threadData_t*);
void logic1_raw_eqFunction_1825(DATA*, threadData_t*);
void logic1_raw_eqFunction_1826(DATA*, threadData_t*);
/*
equation index: 1831
indexNonlinear: 13
type: NONLINEAR

vars: {weaBus.TWetBul}
eqns: {1824, 1825, 1826}
*/
void logic1_raw_eqFunction_1831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1831};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1831 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[13].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */);
  retValue = solve_nonlinear_system(data, threadData, 13);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1831};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1831 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */) = data->simulationInfo->nonlinearSystemData[13].nlsx[0];
  threadData->lastEquationSolved = 1831;
}
extern void logic1_raw_eqFunction_3085(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_261(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3088(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_263(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3018(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3019(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3020(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3021(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3022(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3023(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3024(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_271(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_272(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_273(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_274(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_275(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_276(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_277(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_278(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_279(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_280(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3155(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3156(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3157(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3158(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3159(DATA *data, threadData_t *threadData);


/*
equation index: 1858
type: SIMPLE_ASSIGN
val6.dp = chi.m2_flow * val6.dp_nominal_pos / val6.m_flow_nominal_pos
*/
void logic1_raw_eqFunction_1858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1858};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.dp variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2738]] /* val6.dp_nominal_pos PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2743]] /* val6.m_flow_nominal_pos PARAM */),"val6.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 1858;
}
extern void logic1_raw_eqFunction_3160(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3161(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_288(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_289(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_290(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_291(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_292(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_293(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_294(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_295(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_296(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3606(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_298(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3609(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_300(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_301(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_302(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3591(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_304(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_305(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_306(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_307(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_308(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_309(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_310(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_311(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_312(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3547(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_314(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_315(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_316(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_317(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_318(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_319(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_320(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_321(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_322(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_323(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_324(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_325(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_326(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_327(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_328(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3495(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_330(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_331(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_332(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_333(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_334(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_335(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_336(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_337(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_338(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_339(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3493(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_341(DATA *data, threadData_t *threadData);


/*
equation index: 1915
type: SIMPLE_ASSIGN
pumCW2.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.hydraulicEfficiency, 0.012615873967693397, pumCW2.eff.hydDer, 1.0, 0.05)
*/
void logic1_raw_eqFunction_1915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1915};
  real_array tmp0;
  real_array tmp1;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp2;
  real_array tmp3;
  real_array_create(&tmp0, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2582]] /* pumCW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp1, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2583]] /* pumCW2.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp2, tmp0, tmp1);
  real_array_create(&tmp3, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2559]] /* pumCW2.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* pumCW2.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp2, 0.012615873967693397, tmp3, 1.0, 0.05);
  threadData->lastEquationSolved = 1915;
}
extern void logic1_raw_eqFunction_342(DATA *data, threadData_t *threadData);


/*
equation index: 1917
type: SIMPLE_ASSIGN
pumCW2.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.motorEfficiency, 0.012615873967693397, pumCW2.eff.motDer, 1.0, 0.05)
*/
void logic1_raw_eqFunction_1917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1917};
  real_array tmp4;
  real_array tmp5;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp6;
  real_array tmp7;
  real_array_create(&tmp4, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2584]] /* pumCW2.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp5, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2585]] /* pumCW2.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp6, tmp4, tmp5);
  real_array_create(&tmp7, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2561]] /* pumCW2.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* pumCW2.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp6, 0.012615873967693397, tmp7, 1.0, 0.05);
  threadData->lastEquationSolved = 1917;
}
extern void logic1_raw_eqFunction_3377(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_343(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_344(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_345(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_346(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3483(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3480(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_349(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_350(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_351(DATA *data, threadData_t *threadData);


void logic1_raw_eqFunction_1928(DATA*, threadData_t*);
/*
equation index: 1929
indexNonlinear: 14
type: NONLINEAR

vars: {cooTow2.FRWat0}
eqns: {1928}
*/
void logic1_raw_eqFunction_1929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1929};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1929 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[14].nlsxOld[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1125]] /* cooTow2.FRWat0 PARAM */);
  retValue = solve_nonlinear_system(data, threadData, 14);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1929};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1929 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1125]] /* cooTow2.FRWat0 PARAM */) = data->simulationInfo->nonlinearSystemData[14].nlsx[0];
  threadData->lastEquationSolved = 1929;
}
extern void logic1_raw_eqFunction_354(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_355(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_356(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_357(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_358(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_359(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_360(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_361(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_362(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_363(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_364(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3629(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3630(DATA *data, threadData_t *threadData);


/*
equation index: 1943
type: ALGORITHM

  chwPump2PID.requestMoreChiller := $START.chwPump2PID.requestMoreChiller;
  chwPump2PID.mCHWRaw := $START.chwPump2PID.mCHWRaw;
  chwPump2PID.mCHWSet := $START.chwPump2PID.mCHWSet;
  chwPump2PID.nextControlTime := $START.chwPump2PID.nextControlTime;
  chwPump2PID.lastControlTime := $START.chwPump2PID.lastControlTime;
  chwPump2PID.dTErrSample := $START.chwPump2PID.dTErrSample;
  chwPump2PID.dTErrInt := $START.chwPump2PID.dTErrInt;
  $whenCondition2 := $START.$whenCondition2;
  $whenCondition2 := time >= $PRE.chwPump2PID.nextControlTime;
  chwPump2PID.dTErrInt := 0.0;
  chwPump2PID.dTErrSample := chwPump2PID.dTErr;
  chwPump2PID.lastControlTime := time;
  chwPump2PID.nextControlTime := time + chwPump2PID.internalSamplePeriod;
  chwPump2PID.mCHWSet := chwPump2PID.mCHWStart;
  chwPump2PID.mCHWRaw := chwPump2PID.mCHWStart;
  chwPump2PID.requestMoreChiller := false;
*/
void logic1_raw_eqFunction_1943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1943};
  modelica_boolean tmp8;
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[9]] /* chwPump2PID.requestMoreChiller DISCRETE */) = (data->modelData->booleanVarsData[9] /* chwPump2PID.requestMoreChiller DISCRETE */).attribute .start;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* chwPump2PID.mCHWRaw DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1345] /* chwPump2PID.mCHWRaw DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1346]] /* chwPump2PID.mCHWSet DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1346] /* chwPump2PID.mCHWSet DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1347]] /* chwPump2PID.nextControlTime DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1347] /* chwPump2PID.nextControlTime DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* chwPump2PID.lastControlTime DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1344] /* chwPump2PID.lastControlTime DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* chwPump2PID.dTErrSample DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1343] /* chwPump2PID.dTErrSample DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* chwPump2PID.dTErrInt DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1342] /* chwPump2PID.dTErrInt DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) = (data->modelData->booleanVarsData[1] /* $whenCondition2 DISCRETE */).attribute .start;

  tmp8 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[1347] /* chwPump2PID.nextControlTime DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) = tmp8;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* chwPump2PID.dTErrInt DISCRETE */) = 0.0;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* chwPump2PID.dTErrSample DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* chwPump2PID.dTErr variable */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* chwPump2PID.lastControlTime DISCRETE */) = data->localData[0]->timeValue;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1347]] /* chwPump2PID.nextControlTime DISCRETE */) = data->localData[0]->timeValue + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[442]] /* chwPump2PID.internalSamplePeriod PARAM */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1346]] /* chwPump2PID.mCHWSet DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[447]] /* chwPump2PID.mCHWStart PARAM */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* chwPump2PID.mCHWRaw DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[447]] /* chwPump2PID.mCHWStart PARAM */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[9]] /* chwPump2PID.requestMoreChiller DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 1943;
}
extern void logic1_raw_eqFunction_3632(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_369(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_370(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_371(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_372(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_373(DATA *data, threadData_t *threadData);


/*
equation index: 1950
type: SIMPLE_ASSIGN
pumCHW2.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW2.eff.per.hydraulicEfficiency, 0.025231747935386795, pumCHW2.eff.hydDer, 1.0, 0.05)
*/
void logic1_raw_eqFunction_1950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1950};
  real_array tmp9;
  real_array tmp10;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp11;
  real_array tmp12;
  real_array_create(&tmp9, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2326]] /* pumCHW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp10, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2327]] /* pumCHW2.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp11, tmp9, tmp10);
  real_array_create(&tmp12, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2303]] /* pumCHW2.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* pumCHW2.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp11, 0.025231747935386795, tmp12, 1.0, 0.05);
  threadData->lastEquationSolved = 1950;
}
extern void logic1_raw_eqFunction_374(DATA *data, threadData_t *threadData);


/*
equation index: 1952
type: SIMPLE_ASSIGN
pumCHW2.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW2.eff.per.motorEfficiency, 0.025231747935386795, pumCHW2.eff.motDer, 1.0, 0.05)
*/
void logic1_raw_eqFunction_1952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1952};
  real_array tmp13;
  real_array tmp14;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp15;
  real_array tmp16;
  real_array_create(&tmp13, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2328]] /* pumCHW2.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp14, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2329]] /* pumCHW2.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp15, tmp13, tmp14);
  real_array_create(&tmp16, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2305]] /* pumCHW2.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1098]] /* pumCHW2.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp15, 0.025231747935386795, tmp16, 1.0, 0.05);
  threadData->lastEquationSolved = 1952;
}
extern void logic1_raw_eqFunction_3336(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_375(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_376(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_377(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3468(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_379(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_380(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3444(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3445(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3446(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3452(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3453(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_386(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3436(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3433(DATA *data, threadData_t *threadData);


/*
equation index: 1968
type: SIMPLE_ASSIGN
damOA.m_flow = damOA.dp * 55.989691542288554 / damOA.dp_nominal_pos
*/
void logic1_raw_eqFunction_1968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1968};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* damOA.dp variable */)) * (55.989691542288554),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1261]] /* damOA.dp_nominal_pos PARAM */),"damOA.dp_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 1968;
}
extern void logic1_raw_eqFunction_3451(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_392(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_393(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3437(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_395(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_396(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_397(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3456(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3463(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_400(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_401(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3464(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3465(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3466(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_405(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3415(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3416(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3417(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_409(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3406(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3403(DATA *data, threadData_t *threadData);


/*
equation index: 1990
type: SIMPLE_ASSIGN
damEA.m_flow = damEA.dp * 55.989691542288554 / damEA.dp_nominal_pos
*/
void logic1_raw_eqFunction_1990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1990};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damEA.dp variable */)) * (55.989691542288554),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1225]] /* damEA.dp_nominal_pos PARAM */),"damEA.dp_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 1990;
}
extern void logic1_raw_eqFunction_414(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3438(DATA *data, threadData_t *threadData);


/*
equation index: 1993
type: SIMPLE_ASSIGN
damRet.m_flow = damRet.dp * 55.989691542288554 / damRet.dp_nominal_pos
*/
void logic1_raw_eqFunction_1993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1993};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* damRet.dp variable */)) * (55.989691542288554),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* damRet.dp_nominal_pos PARAM */),"damRet.dp_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 1993;
}
extern void logic1_raw_eqFunction_3450(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3441(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3442(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_421(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_422(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_423(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3407(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_425(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_426(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_427(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3424(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3462(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_430(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_431(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_432(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_433(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_434(DATA *data, threadData_t *threadData);


/*
equation index: 2011
type: SIMPLE_ASSIGN
fanRet.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.hydraulicEfficiency, 46.65807628524046, fanRet.eff.hydDer, 1.0, 0.05)
*/
void logic1_raw_eqFunction_2011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2011};
  real_array tmp17;
  real_array tmp18;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp19;
  real_array tmp20;
  real_array_create(&tmp17, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1386]] /* fanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp18, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1387]] /* fanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp19, tmp17, tmp18);
  real_array_create(&tmp20, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1363]] /* fanRet.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[824]] /* fanRet.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp19, 46.65807628524046, tmp20, 1.0, 0.05);
  threadData->lastEquationSolved = 2011;
}
extern void logic1_raw_eqFunction_435(DATA *data, threadData_t *threadData);


/*
equation index: 2013
type: SIMPLE_ASSIGN
fanRet.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.motorEfficiency, 46.65807628524046, fanRet.eff.motDer, 1.0, 0.05)
*/
void logic1_raw_eqFunction_2013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2013};
  real_array tmp21;
  real_array tmp22;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp23;
  real_array tmp24;
  real_array_create(&tmp21, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1388]] /* fanRet.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp22, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* fanRet.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp23, tmp21, tmp22);
  real_array_create(&tmp24, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1365]] /* fanRet.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[825]] /* fanRet.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp23, 46.65807628524046, tmp24, 1.0, 0.05);
  threadData->lastEquationSolved = 2013;
}
extern void logic1_raw_eqFunction_3116(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_436(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_437(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3420(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3448(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3449(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3419(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3418(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3119(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3120(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3121(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3122(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_447(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3111(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3112(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3113(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_454(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3411(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3110(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3408(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3409(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3410(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_460(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_461(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3117(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_463(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_464(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_465(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3125(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3142(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3126(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3127(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3128(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3129(DATA *data, threadData_t *threadData);


/*
equation index: 2048
type: SIMPLE_ASSIGN
KMinusU.u = conPIDTAirSup.limiter.simplifiedExpr
*/
void logic1_raw_eqFunction_2048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2048};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* KMinusU.u variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* conPIDTAirSup.limiter.simplifiedExpr variable */);
  threadData->lastEquationSolved = 2048;
}

/*
equation index: 2049
type: SIMPLE_ASSIGN
val1.phi = val1.l + KMinusU.u * (1.0 - val1.l)
*/
void logic1_raw_eqFunction_2049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2049};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1209]] /* val1.phi variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2695]] /* val1.l PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* KMinusU.u variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2695]] /* val1.l PARAM */));
  threadData->lastEquationSolved = 2049;
}
extern void logic1_raw_eqFunction_3131(DATA *data, threadData_t *threadData);


/*
equation index: 2051
type: SIMPLE_ASSIGN
valByp.phi = valByp.l + KMinusU.y * (1.0 - valByp.l)
*/
void logic1_raw_eqFunction_2051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2051};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1242]] /* valByp.phi variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2835]] /* valByp.l PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* KMinusU.y variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2835]] /* valByp.l PARAM */));
  threadData->lastEquationSolved = 2051;
}
extern void logic1_raw_eqFunction_3138(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3139(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3140(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3141(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3143(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3144(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3399(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3400(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3430(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3460(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3461(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3428(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3429(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3427(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_490(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_491(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3148(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3147(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_494(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_495(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_496(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_497(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_498(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3133(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3134(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_501(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_502(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_503(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_504(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_505(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_506(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3625(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3626(DATA *data, threadData_t *threadData);


/*
equation index: 2085
type: ALGORITHM

  chwPump1PID.requestMoreChiller := $START.chwPump1PID.requestMoreChiller;
  chwPump1PID.mCHWRaw := $START.chwPump1PID.mCHWRaw;
  chwPump1PID.mCHWSet := $START.chwPump1PID.mCHWSet;
  chwPump1PID.nextControlTime := $START.chwPump1PID.nextControlTime;
  chwPump1PID.lastControlTime := $START.chwPump1PID.lastControlTime;
  chwPump1PID.dTErrSample := $START.chwPump1PID.dTErrSample;
  chwPump1PID.dTErrInt := $START.chwPump1PID.dTErrInt;
  $whenCondition1 := $START.$whenCondition1;
  $whenCondition1 := time >= $PRE.chwPump1PID.nextControlTime;
  chwPump1PID.dTErrInt := 0.0;
  chwPump1PID.dTErrSample := chwPump1PID.dTErr;
  chwPump1PID.lastControlTime := time;
  chwPump1PID.nextControlTime := time + chwPump1PID.internalSamplePeriod;
  chwPump1PID.mCHWSet := chwPump1PID.mCHWStart;
  chwPump1PID.mCHWRaw := chwPump1PID.mCHWStart;
  chwPump1PID.requestMoreChiller := false;
*/
void logic1_raw_eqFunction_2085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2085};
  modelica_boolean tmp25;
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* chwPump1PID.requestMoreChiller DISCRETE */) = (data->modelData->booleanVarsData[8] /* chwPump1PID.requestMoreChiller DISCRETE */).attribute .start;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* chwPump1PID.mCHWRaw DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1339] /* chwPump1PID.mCHWRaw DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* chwPump1PID.mCHWSet DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1340] /* chwPump1PID.mCHWSet DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* chwPump1PID.nextControlTime DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1341] /* chwPump1PID.nextControlTime DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* chwPump1PID.lastControlTime DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1338] /* chwPump1PID.lastControlTime DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* chwPump1PID.dTErrSample DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1337] /* chwPump1PID.dTErrSample DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* chwPump1PID.dTErrInt DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1336] /* chwPump1PID.dTErrInt DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = (data->modelData->booleanVarsData[0] /* $whenCondition1 DISCRETE */).attribute .start;

  tmp25 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[1341] /* chwPump1PID.nextControlTime DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = tmp25;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* chwPump1PID.dTErrInt DISCRETE */) = 0.0;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* chwPump1PID.dTErrSample DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[448]] /* chwPump1PID.dTErr variable */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* chwPump1PID.lastControlTime DISCRETE */) = data->localData[0]->timeValue;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* chwPump1PID.nextControlTime DISCRETE */) = data->localData[0]->timeValue + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[428]] /* chwPump1PID.internalSamplePeriod PARAM */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* chwPump1PID.mCHWSet DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[433]] /* chwPump1PID.mCHWStart PARAM */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* chwPump1PID.mCHWRaw DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[433]] /* chwPump1PID.mCHWStart PARAM */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* chwPump1PID.requestMoreChiller DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 2085;
}
extern void logic1_raw_eqFunction_3628(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_511(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_512(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_513(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_514(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3172(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3173(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_519(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_520(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_521(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_522(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_523(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_524(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_525(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_526(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_527(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_528(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_529(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3546(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_531(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_532(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_533(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_534(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_535(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3004(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_537(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_538(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_539(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_540(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3002(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_542(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_564(DATA *data, threadData_t *threadData);


/*
equation index: 2118
type: SIMPLE_ASSIGN
cooTow.T_a = logic1.cooTow.Water.temperature(logic1.cooTow.Water.setState_phX(TCWEntTow.port_a.p, TCWEntTow.port_b.h_outflow, {}))
*/
void logic1_raw_eqFunction_2118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2118};
  base_array_t tmp26;
  simple_alloc_1d_base_array(&tmp26, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.T_a variable */) = omc_logic1_cooTow_Water_temperature(threadData, omc_logic1_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* TCWEntTow.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */), tmp26));
  threadData->lastEquationSolved = 2118;
}
extern void logic1_raw_eqFunction_3683(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_543(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_544(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_545(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_546(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3136(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3137(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_549(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_550(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_551(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_552(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3169(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3170(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_565(DATA *data, threadData_t *threadData);


/*
equation index: 2133
type: SIMPLE_ASSIGN
pumCW.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.hydraulicEfficiency, 0.012615873967693397, pumCW.eff.hydDer, 1.0, 0.05)
*/
void logic1_raw_eqFunction_2133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2133};
  real_array tmp27;
  real_array tmp28;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp29;
  real_array tmp30;
  real_array_create(&tmp27, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2454]] /* pumCW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp28, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2455]] /* pumCW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp29, tmp27, tmp28);
  real_array_create(&tmp30, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2431]] /* pumCW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1135]] /* pumCW.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp29, 0.012615873967693397, tmp30, 1.0, 0.05);
  threadData->lastEquationSolved = 2133;
}
extern void logic1_raw_eqFunction_3207(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_568(DATA *data, threadData_t *threadData);


/*
equation index: 2136
type: SIMPLE_ASSIGN
pumCW.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.motorEfficiency, 0.012615873967693397, pumCW.eff.motDer, 1.0, 0.05)
*/
void logic1_raw_eqFunction_2136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2136};
  real_array tmp31;
  real_array tmp32;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp33;
  real_array tmp34;
  real_array_create(&tmp31, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2456]] /* pumCW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp32, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2457]] /* pumCW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp33, tmp31, tmp32);
  real_array_create(&tmp34, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2433]] /* pumCW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1136]] /* pumCW.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp33, 0.012615873967693397, tmp34, 1.0, 0.05);
  threadData->lastEquationSolved = 2136;
}
extern void logic1_raw_eqFunction_3204(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3206(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3208(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_575(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_576(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_577(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_578(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3197(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_580(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3215(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3216(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_583(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2997(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3212(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2992(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_587(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_588(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_589(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_590(DATA *data, threadData_t *threadData);


void logic1_raw_eqFunction_2156(DATA*, threadData_t*);
/*
equation index: 2157
indexNonlinear: 15
type: NONLINEAR

vars: {cooTow.FRWat0}
eqns: {2156}
*/
void logic1_raw_eqFunction_2157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2157};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2157 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* cooTow.FRWat0 PARAM */);
  retValue = solve_nonlinear_system(data, threadData, 15);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2157};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2157 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* cooTow.FRWat0 PARAM */) = data->simulationInfo->nonlinearSystemData[15].nlsx[0];
  threadData->lastEquationSolved = 2157;
}
extern void logic1_raw_eqFunction_593(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3217(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_595(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_596(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_597(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_598(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_599(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_600(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_601(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_602(DATA *data, threadData_t *threadData);


void logic1_raw_eqFunction_2168(DATA*, threadData_t*);
void logic1_raw_eqFunction_2169(DATA*, threadData_t*);
void logic1_raw_eqFunction_2170(DATA*, threadData_t*);
void logic1_raw_eqFunction_2171(DATA*, threadData_t*);
void logic1_raw_eqFunction_2172(DATA*, threadData_t*);
void logic1_raw_eqFunction_2173(DATA*, threadData_t*);
void logic1_raw_eqFunction_2174(DATA*, threadData_t*);
void logic1_raw_eqFunction_2175(DATA*, threadData_t*);
void logic1_raw_eqFunction_2176(DATA*, threadData_t*);
void logic1_raw_eqFunction_2177(DATA*, threadData_t*);
void logic1_raw_eqFunction_2178(DATA*, threadData_t*);
void logic1_raw_eqFunction_2179(DATA*, threadData_t*);
/*
equation index: 2180
indexNonlinear: 16
type: NONLINEAR

vars: {TCWEntTow.port_a.h_outflow}
eqns: {2168, 2169, 2170, 2171, 2172, 2173, 2174, 2175, 2176, 2177, 2178, 2179}
*/
void logic1_raw_eqFunction_2180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2180};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2180 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */);
  retValue = solve_nonlinear_system(data, threadData, 16);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2180};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2180 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[16].nlsx[0];
  threadData->lastEquationSolved = 2180;
}
extern void logic1_raw_eqFunction_3670(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3671(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_620(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_621(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3679(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3680(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_624(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3674(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_626(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3684(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3685(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3686(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_630(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_631(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2990(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_633(DATA *data, threadData_t *threadData);


/*
equation index: 2197
type: SIMPLE_ASSIGN
pumCHW.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.hydraulicEfficiency, 0.025231747935386795, pumCHW.eff.hydDer, 1.0, 0.05)
*/
void logic1_raw_eqFunction_2197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2197};
  real_array tmp35;
  real_array tmp36;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp37;
  real_array tmp38;
  real_array_create(&tmp35, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2198]] /* pumCHW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp36, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2199]] /* pumCHW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp37, tmp35, tmp36);
  real_array_create(&tmp38, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2175]] /* pumCHW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* pumCHW.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp37, 0.025231747935386795, tmp38, 1.0, 0.05);
  threadData->lastEquationSolved = 2197;
}
extern void logic1_raw_eqFunction_635(DATA *data, threadData_t *threadData);


/*
equation index: 2199
type: SIMPLE_ASSIGN
pumCHW.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.motorEfficiency, 0.025231747935386795, pumCHW.eff.motDer, 1.0, 0.05)
*/
void logic1_raw_eqFunction_2199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2199};
  real_array tmp39;
  real_array tmp40;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp41;
  real_array tmp42;
  real_array_create(&tmp39, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2200]] /* pumCHW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp40, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2201]] /* pumCHW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp41, tmp39, tmp40);
  real_array_create(&tmp42, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2177]] /* pumCHW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* pumCHW.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp41, 0.025231747935386795, tmp42, 1.0, 0.05);
  threadData->lastEquationSolved = 2199;
}
extern void logic1_raw_eqFunction_3164(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_638(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_639(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_640(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_641(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3166(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3544(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2987(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_645(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3558(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3559(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_648(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_649(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_650(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_651(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_652(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_653(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_654(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_655(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_656(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_657(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2975(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2976(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2977(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2978(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_662(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_663(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_664(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2981(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2982(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_667(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2985(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_669(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_670(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_671(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2966(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2967(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_674(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2973(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_676(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_677(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_678(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_679(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_680(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_681(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_682(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_683(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_684(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3710(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3716(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3719(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3720(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3721(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_690(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_691(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_692(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3712(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3714(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3715(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3713(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3711(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_698(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3722(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_700(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_701(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_702(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2957(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2968(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2969(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2958(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2956(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_708(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2964(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_710(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_711(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_712(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_713(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_714(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_715(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_716(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_717(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_718(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3727(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3734(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3737(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3738(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3739(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_724(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_725(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_726(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3729(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3731(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3732(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3733(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3730(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3728(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_733(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3740(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_735(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_736(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_737(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2948(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2959(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2960(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2970(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2949(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2947(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_744(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2954(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_746(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_747(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_748(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_749(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_750(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_751(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_752(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_753(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_754(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3752(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3753(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3754(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3751(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3750(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3763(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3766(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3767(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3768(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_764(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3741(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_766(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3723(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_768(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_769(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3706(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_771(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_772(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_773(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_774(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_775(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3780(DATA *data, threadData_t *threadData);


/*
equation index: 2340
type: SIMPLE_ASSIGN
cooCoi.m2_flow = (-cooCoi.dp2) / (-13.34174165677975)
*/
void logic1_raw_eqFunction_2340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2340};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[477]] /* cooCoi.dp2 variable */)),-13.34174165677975,"-13.34174165677975",equationIndexes);
  threadData->lastEquationSolved = 2340;
}
extern void logic1_raw_eqFunction_3783(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3784(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_781(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3787(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3788(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_784(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3791(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3792(DATA *data, threadData_t *threadData);


/*
equation index: 2364
type: LINEAR

<var>$DER.cooCoi.ele[1].vol2.dynBal.medium.p</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void logic1_raw_eqFunction_2364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2364};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 2364 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2364};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 2364 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = aux_x[0];

  threadData->lastEquationSolved = 2364;
}
extern void logic1_raw_eqFunction_807(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_808(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_811(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_814(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3811(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3809(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3810(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3812(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_818(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3813(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3814(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3815(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3822(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3823(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3824(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3820(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3829(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3830(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3831(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3827(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3828(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3785(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3835(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3836(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3789(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3833(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3837(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3838(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_831(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3841(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3860(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3861(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3862(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3854(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3855(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3856(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3848(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3770(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3771(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3772(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3773(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3774(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3775(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3776(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_847(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3867(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3870(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3871(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3872(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3873(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3874(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3875(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_855(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_856(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_857(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3756(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3761(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3762(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3758(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3759(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3760(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3849(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3757(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3842(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3843(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3863(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3745(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3746(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3747(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_872(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3821(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3850(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3755(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3744(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3817(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3818(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3844(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_880(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_881(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3748(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3769(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_884(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_885(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_886(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2942(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2950(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2951(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2961(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2943(DATA *data, threadData_t *threadData);


void logic1_raw_eqFunction_2454(DATA*, threadData_t*);
void logic1_raw_eqFunction_2455(DATA*, threadData_t*);
void logic1_raw_eqFunction_2456(DATA*, threadData_t*);
void logic1_raw_eqFunction_2457(DATA*, threadData_t*);
void logic1_raw_eqFunction_2458(DATA*, threadData_t*);
void logic1_raw_eqFunction_2459(DATA*, threadData_t*);
void logic1_raw_eqFunction_2460(DATA*, threadData_t*);
void logic1_raw_eqFunction_2461(DATA*, threadData_t*);
void logic1_raw_eqFunction_2462(DATA*, threadData_t*);
void logic1_raw_eqFunction_2463(DATA*, threadData_t*);
void logic1_raw_eqFunction_2464(DATA*, threadData_t*);
void logic1_raw_eqFunction_2465(DATA*, threadData_t*);
void logic1_raw_eqFunction_2466(DATA*, threadData_t*);
void logic1_raw_eqFunction_2467(DATA*, threadData_t*);
void logic1_raw_eqFunction_2468(DATA*, threadData_t*);
void logic1_raw_eqFunction_2469(DATA*, threadData_t*);
void logic1_raw_eqFunction_2470(DATA*, threadData_t*);
void logic1_raw_eqFunction_2471(DATA*, threadData_t*);
void logic1_raw_eqFunction_2472(DATA*, threadData_t*);
void logic1_raw_eqFunction_2473(DATA*, threadData_t*);
void logic1_raw_eqFunction_2474(DATA*, threadData_t*);
void logic1_raw_eqFunction_2475(DATA*, threadData_t*);
void logic1_raw_eqFunction_2476(DATA*, threadData_t*);
void logic1_raw_eqFunction_2477(DATA*, threadData_t*);
void logic1_raw_eqFunction_2479(DATA*, threadData_t*);
void logic1_raw_eqFunction_2478(DATA*, threadData_t*);
/*
equation index: 2480
indexNonlinear: 17
type: NONLINEAR

vars: {valByp.m_flow, cooCoi.rep1.y[4]}
eqns: {2454, 2455, 2456, 2457, 2458, 2459, 2460, 2461, 2462, 2463, 2464, 2465, 2466, 2467, 2468, 2469, 2470, 2471, 2472, 2473, 2474, 2475, 2476, 2477, 2479, 2478}
*/
void logic1_raw_eqFunction_2480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2480};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2480 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[17].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */);
  data->simulationInfo->nonlinearSystemData[17].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */);
  retValue = solve_nonlinear_system(data, threadData, 17);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2480};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2480 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */) = data->simulationInfo->nonlinearSystemData[17].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */) = data->simulationInfo->nonlinearSystemData[17].nlsx[1];
  threadData->lastEquationSolved = 2480;
}
extern void logic1_raw_eqFunction_3310(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3371(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3507(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3379(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3381(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3378(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3382(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3502(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3503(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_928(DATA *data, threadData_t *threadData);


/*
equation index: 2491
type: SIMPLE_ASSIGN
val7.dp = val7.dp_nominal_pos * val7.m_flow / val7.m_flow_nominal_pos
*/
void logic1_raw_eqFunction_2491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2491};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1221]] /* val7.dp variable */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2761]] /* val7.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2766]] /* val7.m_flow_nominal_pos PARAM */),"val7.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2491;
}
extern void logic1_raw_eqFunction_3385(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_960(DATA *data, threadData_t *threadData);


/*
equation index: 2494
type: SIMPLE_ASSIGN
cooTow2.T_a = logic1.cooTow2.Water.temperature(logic1.cooTow2.Water.setState_phX(TCWEntTow2.port_a.p, TCWEntTow2.port_b.h_outflow, {}))
*/
void logic1_raw_eqFunction_2494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2494};
  base_array_t tmp43;
  simple_alloc_1d_base_array(&tmp43, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cooTow2.T_a variable */) = omc_logic1_cooTow2_Water_temperature(threadData, omc_logic1_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* TCWEntTow2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */), tmp43));
  threadData->lastEquationSolved = 2494;
}
extern void logic1_raw_eqFunction_3652(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3373(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3374(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_934(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3372(DATA *data, threadData_t *threadData);


/*
equation index: 2500
type: SIMPLE_ASSIGN
cooTow2.dp = 104510.0 * val7.m_flow / cooTow2.preDro.m_flow_nominal_pos
*/
void logic1_raw_eqFunction_2500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2500};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[784]] /* cooTow2.dp variable */) = DIVISION_SIM((104510.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1169]] /* cooTow2.preDro.m_flow_nominal_pos PARAM */),"cooTow2.preDro.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2500;
}
extern void logic1_raw_eqFunction_3387(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_947(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3398(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3490(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3397(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3396(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3389(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3390(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3392(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3395(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3391(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3393(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3388(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3341(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3353(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3354(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3355(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3350(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3351(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3352(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3342(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3343(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3344(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_964(DATA *data, threadData_t *threadData);


void logic1_raw_eqFunction_2525(DATA*, threadData_t*);
void logic1_raw_eqFunction_2526(DATA*, threadData_t*);
void logic1_raw_eqFunction_2527(DATA*, threadData_t*);
void logic1_raw_eqFunction_2528(DATA*, threadData_t*);
void logic1_raw_eqFunction_2529(DATA*, threadData_t*);
void logic1_raw_eqFunction_2530(DATA*, threadData_t*);
void logic1_raw_eqFunction_2531(DATA*, threadData_t*);
void logic1_raw_eqFunction_2532(DATA*, threadData_t*);
void logic1_raw_eqFunction_2533(DATA*, threadData_t*);
void logic1_raw_eqFunction_2534(DATA*, threadData_t*);
void logic1_raw_eqFunction_2535(DATA*, threadData_t*);
void logic1_raw_eqFunction_2536(DATA*, threadData_t*);
/*
equation index: 2537
indexNonlinear: 18
type: NONLINEAR

vars: {TCWEntTow2.port_a.h_outflow}
eqns: {2525, 2526, 2527, 2528, 2529, 2530, 2531, 2532, 2533, 2534, 2535, 2536}
*/
void logic1_raw_eqFunction_2537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2537};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 2537 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */);
  retValue = solve_nonlinear_system(data, threadData, 18);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2537};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 2537 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[18].nlsx[0];
  threadData->lastEquationSolved = 2537;
}
extern void logic1_raw_eqFunction_3634(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3635(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_982(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_983(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3642(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_985(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_986(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3648(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3649(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3637(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3638(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3639(DATA *data, threadData_t *threadData);


/*
equation index: 2550
type: SIMPLE_ASSIGN
val8_2.dp = val8.m_flow * val8_2.dp_nominal_pos / val8_2.m_flow_nominal_pos
*/
void logic1_raw_eqFunction_2550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2550};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8_2.dp variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2807]] /* val8_2.dp_nominal_pos PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2812]] /* val8_2.m_flow_nominal_pos PARAM */),"val8_2.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2550;
}
extern void logic1_raw_eqFunction_994(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3617(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3619(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3620(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_998(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3601(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3603(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3604(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1002(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3251(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3252(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3358(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3368(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3478(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3257(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3600(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3256(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3562(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3255(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3260(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3305(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3616(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3304(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3554(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3263(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3272(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3273(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3274(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3277(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3275(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3276(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1025(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1026(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1027(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3552(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3553(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1030(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1031(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3288(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3289(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3290(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3291(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3297(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3300(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3545(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3292(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3295(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3293(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3294(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3296(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3299(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3298(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3675(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1047(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3324(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3330(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3323(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1051(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3319(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3321(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1054(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3864(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3865(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3866(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3322(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3857(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3858(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3859(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3851(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3852(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3853(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3262(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3261(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3265(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3266(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3268(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3271(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3560(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3267(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3269(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3264(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3303(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3311(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1078(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1079(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1080(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1081(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1082(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3577(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1084(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3576(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3312(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3613(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1088(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3515(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3611(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3338(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3339(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3337(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3340(DATA *data, threadData_t *threadData);


/*
equation index: 2651
type: SIMPLE_ASSIGN
val8.dp = val8.m_flow * val8.dp_nominal_pos / val8.m_flow_nominal_pos
*/
void logic1_raw_eqFunction_2651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2651};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val8.dp variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2784]] /* val8.dp_nominal_pos PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2789]] /* val8.m_flow_nominal_pos PARAM */),"val8.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2651;
}
extern void logic1_raw_eqFunction_3347(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3348(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3516(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3517(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1101(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3349(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1103(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1104(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1105(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3623(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3624(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1108(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1109(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3538(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3539(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3360(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3359(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3367(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3332(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3361(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3363(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3366(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3362(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3364(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3333(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1126(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3594(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3595(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3596(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3471(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3526(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3518(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3519(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3524(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3525(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3612(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3520(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3523(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3521(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3522(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3527(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3529(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3528(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3643(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1145(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3845(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3846(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3847(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1149(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3589(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3614(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3615(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1153(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1154(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3563(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3598(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3599(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1158(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1159(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3572(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3573(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1162(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1163(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3567(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3568(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1166(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1167(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3583(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3584(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3315(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3317(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3318(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2941(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1174(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3578(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3579(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3580(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1178(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1179(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3587(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1181(DATA *data, threadData_t *threadData);


/*
equation index: 2733
type: SIMPLE_ASSIGN
fanSup.etaHyd = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.hydraulicEfficiency, 46.65807628524046, fanSup.eff.hydDer, 1.0, 0.05)
*/
void logic1_raw_eqFunction_2733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2733};
  real_array tmp44;
  real_array tmp45;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp46;
  real_array tmp47;
  real_array_create(&tmp44, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1523]] /* fanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp45, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1524]] /* fanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp46, tmp44, tmp45);
  real_array_create(&tmp47, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1500]] /* fanSup.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[861]] /* fanSup.etaHyd variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp46, 46.65807628524046, tmp47, 1.0, 0.05);
  threadData->lastEquationSolved = 2733;
}
extern void logic1_raw_eqFunction_1183(DATA *data, threadData_t *threadData);


/*
equation index: 2735
type: SIMPLE_ASSIGN
fanSup.etaMot = Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.motorEfficiency, 46.65807628524046, fanSup.eff.motDer, 1.0, 0.05)
*/
void logic1_raw_eqFunction_2735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2735};
  real_array tmp48;
  real_array tmp49;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp50;
  real_array tmp51;
  real_array_create(&tmp48, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1525]] /* fanSup.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp49, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1526]] /* fanSup.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp50, tmp48, tmp49);
  real_array_create(&tmp51, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1502]] /* fanSup.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* fanSup.etaMot variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp50, 46.65807628524046, tmp51, 1.0, 0.05);
  threadData->lastEquationSolved = 2735;
}
extern void logic1_raw_eqFunction_3779(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3876(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1215(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_154(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_155(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1216(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1217(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1218(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1219(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1220(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1221(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1222(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1223(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1224(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1225(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1226(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1227(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1228(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1229(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1230(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1231(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1232(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1233(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1234(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1235(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1236(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1237(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1238(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1239(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1240(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1241(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1242(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1243(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1244(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1245(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1246(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1247(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1248(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1249(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1250(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1251(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1252(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1253(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1254(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1255(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1256(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1257(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1258(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1259(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1260(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1261(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1262(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1263(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1264(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1265(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1266(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1267(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1268(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1269(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1270(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1271(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1272(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1273(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1274(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1275(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1276(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1277(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1278(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1279(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1280(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1281(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1282(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1283(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1284(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1285(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1286(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1287(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1288(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1289(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1290(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1291(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1292(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1293(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1294(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1295(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1296(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1297(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1298(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1299(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1300(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1301(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1302(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1303(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1304(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1305(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1306(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1307(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1308(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1309(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1310(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1311(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1312(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1313(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1314(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1315(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1316(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1317(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1318(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1319(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1320(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1321(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1322(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1323(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1324(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1325(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1326(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1327(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1328(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1329(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1330(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1331(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1332(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1333(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1334(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1335(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1336(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1337(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1338(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1339(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1340(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1341(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1342(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1343(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1344(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1345(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1346(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1347(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1348(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1349(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1350(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1351(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1352(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3000(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3001(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3149(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3491(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3492(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1358(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1359(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1360(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1361(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1362(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1363(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1364(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1365(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1366(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1367(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1368(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1369(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1370(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1371(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1372(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1373(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1374(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1375(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1376(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1377(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1378(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1379(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1380(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1381(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1382(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1383(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1384(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1385(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1386(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1387(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1388(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1389(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1390(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1391(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1392(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1393(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1394(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1395(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1396(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1397(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1398(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1399(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1400(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1401(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1402(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1403(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1404(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1405(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1406(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1407(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1408(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1409(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1410(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1411(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1412(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1413(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1414(DATA *data, threadData_t *threadData);

int logic1_raw_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->discreteCall = 1;
  static void (*const eqFunctions[1333])(DATA*, threadData_t*) = {
    logic1_raw_eqFunction_1,
    logic1_raw_eqFunction_2,
    logic1_raw_eqFunction_3,
    logic1_raw_eqFunction_4,
    logic1_raw_eqFunction_5,
    logic1_raw_eqFunction_6,
    logic1_raw_eqFunction_7,
    logic1_raw_eqFunction_8,
    logic1_raw_eqFunction_9,
    logic1_raw_eqFunction_10,
    logic1_raw_eqFunction_11,
    logic1_raw_eqFunction_12,
    logic1_raw_eqFunction_13,
    logic1_raw_eqFunction_14,
    logic1_raw_eqFunction_15,
    logic1_raw_eqFunction_16,
    logic1_raw_eqFunction_17,
    logic1_raw_eqFunction_18,
    logic1_raw_eqFunction_19,
    logic1_raw_eqFunction_20,
    logic1_raw_eqFunction_21,
    logic1_raw_eqFunction_22,
    logic1_raw_eqFunction_23,
    logic1_raw_eqFunction_24,
    logic1_raw_eqFunction_25,
    logic1_raw_eqFunction_26,
    logic1_raw_eqFunction_27,
    logic1_raw_eqFunction_28,
    logic1_raw_eqFunction_29,
    logic1_raw_eqFunction_30,
    logic1_raw_eqFunction_31,
    logic1_raw_eqFunction_32,
    logic1_raw_eqFunction_33,
    logic1_raw_eqFunction_34,
    logic1_raw_eqFunction_35,
    logic1_raw_eqFunction_36,
    logic1_raw_eqFunction_37,
    logic1_raw_eqFunction_38,
    logic1_raw_eqFunction_39,
    logic1_raw_eqFunction_40,
    logic1_raw_eqFunction_41,
    logic1_raw_eqFunction_42,
    logic1_raw_eqFunction_43,
    logic1_raw_eqFunction_44,
    logic1_raw_eqFunction_45,
    logic1_raw_eqFunction_46,
    logic1_raw_eqFunction_47,
    logic1_raw_eqFunction_48,
    logic1_raw_eqFunction_49,
    logic1_raw_eqFunction_50,
    logic1_raw_eqFunction_51,
    logic1_raw_eqFunction_52,
    logic1_raw_eqFunction_53,
    logic1_raw_eqFunction_54,
    logic1_raw_eqFunction_55,
    logic1_raw_eqFunction_56,
    logic1_raw_eqFunction_57,
    logic1_raw_eqFunction_58,
    logic1_raw_eqFunction_59,
    logic1_raw_eqFunction_60,
    logic1_raw_eqFunction_61,
    logic1_raw_eqFunction_62,
    logic1_raw_eqFunction_63,
    logic1_raw_eqFunction_64,
    logic1_raw_eqFunction_65,
    logic1_raw_eqFunction_66,
    logic1_raw_eqFunction_67,
    logic1_raw_eqFunction_68,
    logic1_raw_eqFunction_69,
    logic1_raw_eqFunction_70,
    logic1_raw_eqFunction_71,
    logic1_raw_eqFunction_72,
    logic1_raw_eqFunction_73,
    logic1_raw_eqFunction_74,
    logic1_raw_eqFunction_75,
    logic1_raw_eqFunction_76,
    logic1_raw_eqFunction_77,
    logic1_raw_eqFunction_78,
    logic1_raw_eqFunction_79,
    logic1_raw_eqFunction_80,
    logic1_raw_eqFunction_81,
    logic1_raw_eqFunction_82,
    logic1_raw_eqFunction_83,
    logic1_raw_eqFunction_84,
    logic1_raw_eqFunction_85,
    logic1_raw_eqFunction_86,
    logic1_raw_eqFunction_87,
    logic1_raw_eqFunction_88,
    logic1_raw_eqFunction_89,
    logic1_raw_eqFunction_90,
    logic1_raw_eqFunction_91,
    logic1_raw_eqFunction_92,
    logic1_raw_eqFunction_93,
    logic1_raw_eqFunction_94,
    logic1_raw_eqFunction_95,
    logic1_raw_eqFunction_96,
    logic1_raw_eqFunction_97,
    logic1_raw_eqFunction_98,
    logic1_raw_eqFunction_99,
    logic1_raw_eqFunction_100,
    logic1_raw_eqFunction_101,
    logic1_raw_eqFunction_102,
    logic1_raw_eqFunction_103,
    logic1_raw_eqFunction_104,
    logic1_raw_eqFunction_105,
    logic1_raw_eqFunction_106,
    logic1_raw_eqFunction_107,
    logic1_raw_eqFunction_108,
    logic1_raw_eqFunction_109,
    logic1_raw_eqFunction_110,
    logic1_raw_eqFunction_111,
    logic1_raw_eqFunction_112,
    logic1_raw_eqFunction_113,
    logic1_raw_eqFunction_114,
    logic1_raw_eqFunction_115,
    logic1_raw_eqFunction_116,
    logic1_raw_eqFunction_117,
    logic1_raw_eqFunction_118,
    logic1_raw_eqFunction_119,
    logic1_raw_eqFunction_120,
    logic1_raw_eqFunction_121,
    logic1_raw_eqFunction_122,
    logic1_raw_eqFunction_123,
    logic1_raw_eqFunction_124,
    logic1_raw_eqFunction_125,
    logic1_raw_eqFunction_126,
    logic1_raw_eqFunction_127,
    logic1_raw_eqFunction_128,
    logic1_raw_eqFunction_129,
    logic1_raw_eqFunction_130,
    logic1_raw_eqFunction_131,
    logic1_raw_eqFunction_132,
    logic1_raw_eqFunction_133,
    logic1_raw_eqFunction_134,
    logic1_raw_eqFunction_135,
    logic1_raw_eqFunction_136,
    logic1_raw_eqFunction_137,
    logic1_raw_eqFunction_138,
    logic1_raw_eqFunction_139,
    logic1_raw_eqFunction_140,
    logic1_raw_eqFunction_141,
    logic1_raw_eqFunction_142,
    logic1_raw_eqFunction_152,
    logic1_raw_eqFunction_153,
    logic1_raw_eqFunction_1187,
    logic1_raw_eqFunction_1188,
    logic1_raw_eqFunction_1189,
    logic1_raw_eqFunction_1190,
    logic1_raw_eqFunction_1191,
    logic1_raw_eqFunction_1192,
    logic1_raw_eqFunction_1193,
    logic1_raw_eqFunction_1194,
    logic1_raw_eqFunction_1195,
    logic1_raw_eqFunction_1196,
    logic1_raw_eqFunction_1197,
    logic1_raw_eqFunction_1198,
    logic1_raw_eqFunction_1199,
    logic1_raw_eqFunction_1200,
    logic1_raw_eqFunction_1201,
    logic1_raw_eqFunction_1202,
    logic1_raw_eqFunction_1203,
    logic1_raw_eqFunction_1204,
    logic1_raw_eqFunction_1205,
    logic1_raw_eqFunction_1206,
    logic1_raw_eqFunction_1207,
    logic1_raw_eqFunction_1208,
    logic1_raw_eqFunction_1209,
    logic1_raw_eqFunction_1210,
    logic1_raw_eqFunction_1211,
    logic1_raw_eqFunction_1212,
    logic1_raw_eqFunction_1213,
    logic1_raw_eqFunction_1214,
    logic1_raw_eqFunction_143,
    logic1_raw_eqFunction_144,
    logic1_raw_eqFunction_145,
    logic1_raw_eqFunction_146,
    logic1_raw_eqFunction_147,
    logic1_raw_eqFunction_148,
    logic1_raw_eqFunction_149,
    logic1_raw_eqFunction_150,
    logic1_raw_eqFunction_151,
    logic1_raw_eqFunction_156,
    logic1_raw_eqFunction_157,
    logic1_raw_eqFunction_158,
    logic1_raw_eqFunction_159,
    logic1_raw_eqFunction_160,
    logic1_raw_eqFunction_161,
    logic1_raw_eqFunction_162,
    logic1_raw_eqFunction_163,
    logic1_raw_eqFunction_164,
    logic1_raw_eqFunction_165,
    logic1_raw_eqFunction_166,
    logic1_raw_eqFunction_167,
    logic1_raw_eqFunction_168,
    logic1_raw_eqFunction_169,
    logic1_raw_eqFunction_170,
    logic1_raw_eqFunction_171,
    logic1_raw_eqFunction_172,
    logic1_raw_eqFunction_173,
    logic1_raw_eqFunction_1732,
    logic1_raw_eqFunction_1733,
    logic1_raw_eqFunction_3014,
    logic1_raw_eqFunction_3015,
    logic1_raw_eqFunction_3025,
    logic1_raw_eqFunction_3026,
    logic1_raw_eqFunction_178,
    logic1_raw_eqFunction_3031,
    logic1_raw_eqFunction_180,
    logic1_raw_eqFunction_3032,
    logic1_raw_eqFunction_182,
    logic1_raw_eqFunction_3108,
    logic1_raw_eqFunction_3150,
    logic1_raw_eqFunction_1745,
    logic1_raw_eqFunction_1746,
    logic1_raw_eqFunction_185,
    logic1_raw_eqFunction_3154,
    logic1_raw_eqFunction_3167,
    logic1_raw_eqFunction_3178,
    logic1_raw_eqFunction_3183,
    logic1_raw_eqFunction_3184,
    logic1_raw_eqFunction_3185,
    logic1_raw_eqFunction_3186,
    logic1_raw_eqFunction_1755,
    logic1_raw_eqFunction_3200,
    logic1_raw_eqFunction_3201,
    logic1_raw_eqFunction_1758,
    logic1_raw_eqFunction_3151,
    logic1_raw_eqFunction_3188,
    logic1_raw_eqFunction_3189,
    logic1_raw_eqFunction_3192,
    logic1_raw_eqFunction_3191,
    logic1_raw_eqFunction_3190,
    logic1_raw_eqFunction_3193,
    logic1_raw_eqFunction_3205,
    logic1_raw_eqFunction_3210,
    logic1_raw_eqFunction_3194,
    logic1_raw_eqFunction_3168,
    logic1_raw_eqFunction_3171,
    logic1_raw_eqFunction_199,
    logic1_raw_eqFunction_3036,
    logic1_raw_eqFunction_3037,
    logic1_raw_eqFunction_3038,
    logic1_raw_eqFunction_3039,
    logic1_raw_eqFunction_3040,
    logic1_raw_eqFunction_3041,
    logic1_raw_eqFunction_3042,
    logic1_raw_eqFunction_3043,
    logic1_raw_eqFunction_3044,
    logic1_raw_eqFunction_3045,
    logic1_raw_eqFunction_3046,
    logic1_raw_eqFunction_3047,
    logic1_raw_eqFunction_3048,
    logic1_raw_eqFunction_3049,
    logic1_raw_eqFunction_3050,
    logic1_raw_eqFunction_3051,
    logic1_raw_eqFunction_3052,
    logic1_raw_eqFunction_3053,
    logic1_raw_eqFunction_3054,
    logic1_raw_eqFunction_3055,
    logic1_raw_eqFunction_3056,
    logic1_raw_eqFunction_3057,
    logic1_raw_eqFunction_3058,
    logic1_raw_eqFunction_3059,
    logic1_raw_eqFunction_3060,
    logic1_raw_eqFunction_3061,
    logic1_raw_eqFunction_3062,
    logic1_raw_eqFunction_3063,
    logic1_raw_eqFunction_3064,
    logic1_raw_eqFunction_3065,
    logic1_raw_eqFunction_3066,
    logic1_raw_eqFunction_3067,
    logic1_raw_eqFunction_3068,
    logic1_raw_eqFunction_3069,
    logic1_raw_eqFunction_3070,
    logic1_raw_eqFunction_3071,
    logic1_raw_eqFunction_3072,
    logic1_raw_eqFunction_3073,
    logic1_raw_eqFunction_3074,
    logic1_raw_eqFunction_3075,
    logic1_raw_eqFunction_3076,
    logic1_raw_eqFunction_3077,
    logic1_raw_eqFunction_3078,
    logic1_raw_eqFunction_3099,
    logic1_raw_eqFunction_3102,
    logic1_raw_eqFunction_3082,
    logic1_raw_eqFunction_3080,
    logic1_raw_eqFunction_3081,
    logic1_raw_eqFunction_3100,
    logic1_raw_eqFunction_3101,
    logic1_raw_eqFunction_3079,
    logic1_raw_eqFunction_251,
    logic1_raw_eqFunction_1831,
    logic1_raw_eqFunction_3085,
    logic1_raw_eqFunction_261,
    logic1_raw_eqFunction_3088,
    logic1_raw_eqFunction_263,
    logic1_raw_eqFunction_3018,
    logic1_raw_eqFunction_3019,
    logic1_raw_eqFunction_3020,
    logic1_raw_eqFunction_3021,
    logic1_raw_eqFunction_3022,
    logic1_raw_eqFunction_3023,
    logic1_raw_eqFunction_3024,
    logic1_raw_eqFunction_271,
    logic1_raw_eqFunction_272,
    logic1_raw_eqFunction_273,
    logic1_raw_eqFunction_274,
    logic1_raw_eqFunction_275,
    logic1_raw_eqFunction_276,
    logic1_raw_eqFunction_277,
    logic1_raw_eqFunction_278,
    logic1_raw_eqFunction_279,
    logic1_raw_eqFunction_280,
    logic1_raw_eqFunction_3155,
    logic1_raw_eqFunction_3156,
    logic1_raw_eqFunction_3157,
    logic1_raw_eqFunction_3158,
    logic1_raw_eqFunction_3159,
    logic1_raw_eqFunction_1858,
    logic1_raw_eqFunction_3160,
    logic1_raw_eqFunction_3161,
    logic1_raw_eqFunction_288,
    logic1_raw_eqFunction_289,
    logic1_raw_eqFunction_290,
    logic1_raw_eqFunction_291,
    logic1_raw_eqFunction_292,
    logic1_raw_eqFunction_293,
    logic1_raw_eqFunction_294,
    logic1_raw_eqFunction_295,
    logic1_raw_eqFunction_296,
    logic1_raw_eqFunction_3606,
    logic1_raw_eqFunction_298,
    logic1_raw_eqFunction_3609,
    logic1_raw_eqFunction_300,
    logic1_raw_eqFunction_301,
    logic1_raw_eqFunction_302,
    logic1_raw_eqFunction_3591,
    logic1_raw_eqFunction_304,
    logic1_raw_eqFunction_305,
    logic1_raw_eqFunction_306,
    logic1_raw_eqFunction_307,
    logic1_raw_eqFunction_308,
    logic1_raw_eqFunction_309,
    logic1_raw_eqFunction_310,
    logic1_raw_eqFunction_311,
    logic1_raw_eqFunction_312,
    logic1_raw_eqFunction_3547,
    logic1_raw_eqFunction_314,
    logic1_raw_eqFunction_315,
    logic1_raw_eqFunction_316,
    logic1_raw_eqFunction_317,
    logic1_raw_eqFunction_318,
    logic1_raw_eqFunction_319,
    logic1_raw_eqFunction_320,
    logic1_raw_eqFunction_321,
    logic1_raw_eqFunction_322,
    logic1_raw_eqFunction_323,
    logic1_raw_eqFunction_324,
    logic1_raw_eqFunction_325,
    logic1_raw_eqFunction_326,
    logic1_raw_eqFunction_327,
    logic1_raw_eqFunction_328,
    logic1_raw_eqFunction_3495,
    logic1_raw_eqFunction_330,
    logic1_raw_eqFunction_331,
    logic1_raw_eqFunction_332,
    logic1_raw_eqFunction_333,
    logic1_raw_eqFunction_334,
    logic1_raw_eqFunction_335,
    logic1_raw_eqFunction_336,
    logic1_raw_eqFunction_337,
    logic1_raw_eqFunction_338,
    logic1_raw_eqFunction_339,
    logic1_raw_eqFunction_3493,
    logic1_raw_eqFunction_341,
    logic1_raw_eqFunction_1915,
    logic1_raw_eqFunction_342,
    logic1_raw_eqFunction_1917,
    logic1_raw_eqFunction_3377,
    logic1_raw_eqFunction_343,
    logic1_raw_eqFunction_344,
    logic1_raw_eqFunction_345,
    logic1_raw_eqFunction_346,
    logic1_raw_eqFunction_3483,
    logic1_raw_eqFunction_3480,
    logic1_raw_eqFunction_349,
    logic1_raw_eqFunction_350,
    logic1_raw_eqFunction_351,
    logic1_raw_eqFunction_1929,
    logic1_raw_eqFunction_354,
    logic1_raw_eqFunction_355,
    logic1_raw_eqFunction_356,
    logic1_raw_eqFunction_357,
    logic1_raw_eqFunction_358,
    logic1_raw_eqFunction_359,
    logic1_raw_eqFunction_360,
    logic1_raw_eqFunction_361,
    logic1_raw_eqFunction_362,
    logic1_raw_eqFunction_363,
    logic1_raw_eqFunction_364,
    logic1_raw_eqFunction_3629,
    logic1_raw_eqFunction_3630,
    logic1_raw_eqFunction_1943,
    logic1_raw_eqFunction_3632,
    logic1_raw_eqFunction_369,
    logic1_raw_eqFunction_370,
    logic1_raw_eqFunction_371,
    logic1_raw_eqFunction_372,
    logic1_raw_eqFunction_373,
    logic1_raw_eqFunction_1950,
    logic1_raw_eqFunction_374,
    logic1_raw_eqFunction_1952,
    logic1_raw_eqFunction_3336,
    logic1_raw_eqFunction_375,
    logic1_raw_eqFunction_376,
    logic1_raw_eqFunction_377,
    logic1_raw_eqFunction_3468,
    logic1_raw_eqFunction_379,
    logic1_raw_eqFunction_380,
    logic1_raw_eqFunction_3444,
    logic1_raw_eqFunction_3445,
    logic1_raw_eqFunction_3446,
    logic1_raw_eqFunction_3452,
    logic1_raw_eqFunction_3453,
    logic1_raw_eqFunction_386,
    logic1_raw_eqFunction_3436,
    logic1_raw_eqFunction_3433,
    logic1_raw_eqFunction_1968,
    logic1_raw_eqFunction_3451,
    logic1_raw_eqFunction_392,
    logic1_raw_eqFunction_393,
    logic1_raw_eqFunction_3437,
    logic1_raw_eqFunction_395,
    logic1_raw_eqFunction_396,
    logic1_raw_eqFunction_397,
    logic1_raw_eqFunction_3456,
    logic1_raw_eqFunction_3463,
    logic1_raw_eqFunction_400,
    logic1_raw_eqFunction_401,
    logic1_raw_eqFunction_3464,
    logic1_raw_eqFunction_3465,
    logic1_raw_eqFunction_3466,
    logic1_raw_eqFunction_405,
    logic1_raw_eqFunction_3415,
    logic1_raw_eqFunction_3416,
    logic1_raw_eqFunction_3417,
    logic1_raw_eqFunction_409,
    logic1_raw_eqFunction_3406,
    logic1_raw_eqFunction_3403,
    logic1_raw_eqFunction_1990,
    logic1_raw_eqFunction_414,
    logic1_raw_eqFunction_3438,
    logic1_raw_eqFunction_1993,
    logic1_raw_eqFunction_3450,
    logic1_raw_eqFunction_3441,
    logic1_raw_eqFunction_3442,
    logic1_raw_eqFunction_421,
    logic1_raw_eqFunction_422,
    logic1_raw_eqFunction_423,
    logic1_raw_eqFunction_3407,
    logic1_raw_eqFunction_425,
    logic1_raw_eqFunction_426,
    logic1_raw_eqFunction_427,
    logic1_raw_eqFunction_3424,
    logic1_raw_eqFunction_3462,
    logic1_raw_eqFunction_430,
    logic1_raw_eqFunction_431,
    logic1_raw_eqFunction_432,
    logic1_raw_eqFunction_433,
    logic1_raw_eqFunction_434,
    logic1_raw_eqFunction_2011,
    logic1_raw_eqFunction_435,
    logic1_raw_eqFunction_2013,
    logic1_raw_eqFunction_3116,
    logic1_raw_eqFunction_436,
    logic1_raw_eqFunction_437,
    logic1_raw_eqFunction_3420,
    logic1_raw_eqFunction_3448,
    logic1_raw_eqFunction_3449,
    logic1_raw_eqFunction_3419,
    logic1_raw_eqFunction_3418,
    logic1_raw_eqFunction_3119,
    logic1_raw_eqFunction_3120,
    logic1_raw_eqFunction_3121,
    logic1_raw_eqFunction_3122,
    logic1_raw_eqFunction_447,
    logic1_raw_eqFunction_3111,
    logic1_raw_eqFunction_3112,
    logic1_raw_eqFunction_3113,
    logic1_raw_eqFunction_454,
    logic1_raw_eqFunction_3411,
    logic1_raw_eqFunction_3110,
    logic1_raw_eqFunction_3408,
    logic1_raw_eqFunction_3409,
    logic1_raw_eqFunction_3410,
    logic1_raw_eqFunction_460,
    logic1_raw_eqFunction_461,
    logic1_raw_eqFunction_3117,
    logic1_raw_eqFunction_463,
    logic1_raw_eqFunction_464,
    logic1_raw_eqFunction_465,
    logic1_raw_eqFunction_3125,
    logic1_raw_eqFunction_3142,
    logic1_raw_eqFunction_3126,
    logic1_raw_eqFunction_3127,
    logic1_raw_eqFunction_3128,
    logic1_raw_eqFunction_3129,
    logic1_raw_eqFunction_2048,
    logic1_raw_eqFunction_2049,
    logic1_raw_eqFunction_3131,
    logic1_raw_eqFunction_2051,
    logic1_raw_eqFunction_3138,
    logic1_raw_eqFunction_3139,
    logic1_raw_eqFunction_3140,
    logic1_raw_eqFunction_3141,
    logic1_raw_eqFunction_3143,
    logic1_raw_eqFunction_3144,
    logic1_raw_eqFunction_3399,
    logic1_raw_eqFunction_3400,
    logic1_raw_eqFunction_3430,
    logic1_raw_eqFunction_3460,
    logic1_raw_eqFunction_3461,
    logic1_raw_eqFunction_3428,
    logic1_raw_eqFunction_3429,
    logic1_raw_eqFunction_3427,
    logic1_raw_eqFunction_490,
    logic1_raw_eqFunction_491,
    logic1_raw_eqFunction_3148,
    logic1_raw_eqFunction_3147,
    logic1_raw_eqFunction_494,
    logic1_raw_eqFunction_495,
    logic1_raw_eqFunction_496,
    logic1_raw_eqFunction_497,
    logic1_raw_eqFunction_498,
    logic1_raw_eqFunction_3133,
    logic1_raw_eqFunction_3134,
    logic1_raw_eqFunction_501,
    logic1_raw_eqFunction_502,
    logic1_raw_eqFunction_503,
    logic1_raw_eqFunction_504,
    logic1_raw_eqFunction_505,
    logic1_raw_eqFunction_506,
    logic1_raw_eqFunction_3625,
    logic1_raw_eqFunction_3626,
    logic1_raw_eqFunction_2085,
    logic1_raw_eqFunction_3628,
    logic1_raw_eqFunction_511,
    logic1_raw_eqFunction_512,
    logic1_raw_eqFunction_513,
    logic1_raw_eqFunction_514,
    logic1_raw_eqFunction_3172,
    logic1_raw_eqFunction_3173,
    logic1_raw_eqFunction_519,
    logic1_raw_eqFunction_520,
    logic1_raw_eqFunction_521,
    logic1_raw_eqFunction_522,
    logic1_raw_eqFunction_523,
    logic1_raw_eqFunction_524,
    logic1_raw_eqFunction_525,
    logic1_raw_eqFunction_526,
    logic1_raw_eqFunction_527,
    logic1_raw_eqFunction_528,
    logic1_raw_eqFunction_529,
    logic1_raw_eqFunction_3546,
    logic1_raw_eqFunction_531,
    logic1_raw_eqFunction_532,
    logic1_raw_eqFunction_533,
    logic1_raw_eqFunction_534,
    logic1_raw_eqFunction_535,
    logic1_raw_eqFunction_3004,
    logic1_raw_eqFunction_537,
    logic1_raw_eqFunction_538,
    logic1_raw_eqFunction_539,
    logic1_raw_eqFunction_540,
    logic1_raw_eqFunction_3002,
    logic1_raw_eqFunction_542,
    logic1_raw_eqFunction_564,
    logic1_raw_eqFunction_2118,
    logic1_raw_eqFunction_3683,
    logic1_raw_eqFunction_543,
    logic1_raw_eqFunction_544,
    logic1_raw_eqFunction_545,
    logic1_raw_eqFunction_546,
    logic1_raw_eqFunction_3136,
    logic1_raw_eqFunction_3137,
    logic1_raw_eqFunction_549,
    logic1_raw_eqFunction_550,
    logic1_raw_eqFunction_551,
    logic1_raw_eqFunction_552,
    logic1_raw_eqFunction_3169,
    logic1_raw_eqFunction_3170,
    logic1_raw_eqFunction_565,
    logic1_raw_eqFunction_2133,
    logic1_raw_eqFunction_3207,
    logic1_raw_eqFunction_568,
    logic1_raw_eqFunction_2136,
    logic1_raw_eqFunction_3204,
    logic1_raw_eqFunction_3206,
    logic1_raw_eqFunction_3208,
    logic1_raw_eqFunction_575,
    logic1_raw_eqFunction_576,
    logic1_raw_eqFunction_577,
    logic1_raw_eqFunction_578,
    logic1_raw_eqFunction_3197,
    logic1_raw_eqFunction_580,
    logic1_raw_eqFunction_3215,
    logic1_raw_eqFunction_3216,
    logic1_raw_eqFunction_583,
    logic1_raw_eqFunction_2997,
    logic1_raw_eqFunction_3212,
    logic1_raw_eqFunction_2992,
    logic1_raw_eqFunction_587,
    logic1_raw_eqFunction_588,
    logic1_raw_eqFunction_589,
    logic1_raw_eqFunction_590,
    logic1_raw_eqFunction_2157,
    logic1_raw_eqFunction_593,
    logic1_raw_eqFunction_3217,
    logic1_raw_eqFunction_595,
    logic1_raw_eqFunction_596,
    logic1_raw_eqFunction_597,
    logic1_raw_eqFunction_598,
    logic1_raw_eqFunction_599,
    logic1_raw_eqFunction_600,
    logic1_raw_eqFunction_601,
    logic1_raw_eqFunction_602,
    logic1_raw_eqFunction_2180,
    logic1_raw_eqFunction_3670,
    logic1_raw_eqFunction_3671,
    logic1_raw_eqFunction_620,
    logic1_raw_eqFunction_621,
    logic1_raw_eqFunction_3679,
    logic1_raw_eqFunction_3680,
    logic1_raw_eqFunction_624,
    logic1_raw_eqFunction_3674,
    logic1_raw_eqFunction_626,
    logic1_raw_eqFunction_3684,
    logic1_raw_eqFunction_3685,
    logic1_raw_eqFunction_3686,
    logic1_raw_eqFunction_630,
    logic1_raw_eqFunction_631,
    logic1_raw_eqFunction_2990,
    logic1_raw_eqFunction_633,
    logic1_raw_eqFunction_2197,
    logic1_raw_eqFunction_635,
    logic1_raw_eqFunction_2199,
    logic1_raw_eqFunction_3164,
    logic1_raw_eqFunction_638,
    logic1_raw_eqFunction_639,
    logic1_raw_eqFunction_640,
    logic1_raw_eqFunction_641,
    logic1_raw_eqFunction_3166,
    logic1_raw_eqFunction_3544,
    logic1_raw_eqFunction_2987,
    logic1_raw_eqFunction_645,
    logic1_raw_eqFunction_3558,
    logic1_raw_eqFunction_3559,
    logic1_raw_eqFunction_648,
    logic1_raw_eqFunction_649,
    logic1_raw_eqFunction_650,
    logic1_raw_eqFunction_651,
    logic1_raw_eqFunction_652,
    logic1_raw_eqFunction_653,
    logic1_raw_eqFunction_654,
    logic1_raw_eqFunction_655,
    logic1_raw_eqFunction_656,
    logic1_raw_eqFunction_657,
    logic1_raw_eqFunction_2975,
    logic1_raw_eqFunction_2976,
    logic1_raw_eqFunction_2977,
    logic1_raw_eqFunction_2978,
    logic1_raw_eqFunction_662,
    logic1_raw_eqFunction_663,
    logic1_raw_eqFunction_664,
    logic1_raw_eqFunction_2981,
    logic1_raw_eqFunction_2982,
    logic1_raw_eqFunction_667,
    logic1_raw_eqFunction_2985,
    logic1_raw_eqFunction_669,
    logic1_raw_eqFunction_670,
    logic1_raw_eqFunction_671,
    logic1_raw_eqFunction_2966,
    logic1_raw_eqFunction_2967,
    logic1_raw_eqFunction_674,
    logic1_raw_eqFunction_2973,
    logic1_raw_eqFunction_676,
    logic1_raw_eqFunction_677,
    logic1_raw_eqFunction_678,
    logic1_raw_eqFunction_679,
    logic1_raw_eqFunction_680,
    logic1_raw_eqFunction_681,
    logic1_raw_eqFunction_682,
    logic1_raw_eqFunction_683,
    logic1_raw_eqFunction_684,
    logic1_raw_eqFunction_3710,
    logic1_raw_eqFunction_3716,
    logic1_raw_eqFunction_3719,
    logic1_raw_eqFunction_3720,
    logic1_raw_eqFunction_3721,
    logic1_raw_eqFunction_690,
    logic1_raw_eqFunction_691,
    logic1_raw_eqFunction_692,
    logic1_raw_eqFunction_3712,
    logic1_raw_eqFunction_3714,
    logic1_raw_eqFunction_3715,
    logic1_raw_eqFunction_3713,
    logic1_raw_eqFunction_3711,
    logic1_raw_eqFunction_698,
    logic1_raw_eqFunction_3722,
    logic1_raw_eqFunction_700,
    logic1_raw_eqFunction_701,
    logic1_raw_eqFunction_702,
    logic1_raw_eqFunction_2957,
    logic1_raw_eqFunction_2968,
    logic1_raw_eqFunction_2969,
    logic1_raw_eqFunction_2958,
    logic1_raw_eqFunction_2956,
    logic1_raw_eqFunction_708,
    logic1_raw_eqFunction_2964,
    logic1_raw_eqFunction_710,
    logic1_raw_eqFunction_711,
    logic1_raw_eqFunction_712,
    logic1_raw_eqFunction_713,
    logic1_raw_eqFunction_714,
    logic1_raw_eqFunction_715,
    logic1_raw_eqFunction_716,
    logic1_raw_eqFunction_717,
    logic1_raw_eqFunction_718,
    logic1_raw_eqFunction_3727,
    logic1_raw_eqFunction_3734,
    logic1_raw_eqFunction_3737,
    logic1_raw_eqFunction_3738,
    logic1_raw_eqFunction_3739,
    logic1_raw_eqFunction_724,
    logic1_raw_eqFunction_725,
    logic1_raw_eqFunction_726,
    logic1_raw_eqFunction_3729,
    logic1_raw_eqFunction_3731,
    logic1_raw_eqFunction_3732,
    logic1_raw_eqFunction_3733,
    logic1_raw_eqFunction_3730,
    logic1_raw_eqFunction_3728,
    logic1_raw_eqFunction_733,
    logic1_raw_eqFunction_3740,
    logic1_raw_eqFunction_735,
    logic1_raw_eqFunction_736,
    logic1_raw_eqFunction_737,
    logic1_raw_eqFunction_2948,
    logic1_raw_eqFunction_2959,
    logic1_raw_eqFunction_2960,
    logic1_raw_eqFunction_2970,
    logic1_raw_eqFunction_2949,
    logic1_raw_eqFunction_2947,
    logic1_raw_eqFunction_744,
    logic1_raw_eqFunction_2954,
    logic1_raw_eqFunction_746,
    logic1_raw_eqFunction_747,
    logic1_raw_eqFunction_748,
    logic1_raw_eqFunction_749,
    logic1_raw_eqFunction_750,
    logic1_raw_eqFunction_751,
    logic1_raw_eqFunction_752,
    logic1_raw_eqFunction_753,
    logic1_raw_eqFunction_754,
    logic1_raw_eqFunction_3752,
    logic1_raw_eqFunction_3753,
    logic1_raw_eqFunction_3754,
    logic1_raw_eqFunction_3751,
    logic1_raw_eqFunction_3750,
    logic1_raw_eqFunction_3763,
    logic1_raw_eqFunction_3766,
    logic1_raw_eqFunction_3767,
    logic1_raw_eqFunction_3768,
    logic1_raw_eqFunction_764,
    logic1_raw_eqFunction_3741,
    logic1_raw_eqFunction_766,
    logic1_raw_eqFunction_3723,
    logic1_raw_eqFunction_768,
    logic1_raw_eqFunction_769,
    logic1_raw_eqFunction_3706,
    logic1_raw_eqFunction_771,
    logic1_raw_eqFunction_772,
    logic1_raw_eqFunction_773,
    logic1_raw_eqFunction_774,
    logic1_raw_eqFunction_775,
    logic1_raw_eqFunction_3780,
    logic1_raw_eqFunction_2340,
    logic1_raw_eqFunction_3783,
    logic1_raw_eqFunction_3784,
    logic1_raw_eqFunction_781,
    logic1_raw_eqFunction_3787,
    logic1_raw_eqFunction_3788,
    logic1_raw_eqFunction_784,
    logic1_raw_eqFunction_3791,
    logic1_raw_eqFunction_3792,
    logic1_raw_eqFunction_2364,
    logic1_raw_eqFunction_807,
    logic1_raw_eqFunction_808,
    logic1_raw_eqFunction_811,
    logic1_raw_eqFunction_814,
    logic1_raw_eqFunction_3811,
    logic1_raw_eqFunction_3809,
    logic1_raw_eqFunction_3810,
    logic1_raw_eqFunction_3812,
    logic1_raw_eqFunction_818,
    logic1_raw_eqFunction_3813,
    logic1_raw_eqFunction_3814,
    logic1_raw_eqFunction_3815,
    logic1_raw_eqFunction_3822,
    logic1_raw_eqFunction_3823,
    logic1_raw_eqFunction_3824,
    logic1_raw_eqFunction_3820,
    logic1_raw_eqFunction_3829,
    logic1_raw_eqFunction_3830,
    logic1_raw_eqFunction_3831,
    logic1_raw_eqFunction_3827,
    logic1_raw_eqFunction_3828,
    logic1_raw_eqFunction_3785,
    logic1_raw_eqFunction_3835,
    logic1_raw_eqFunction_3836,
    logic1_raw_eqFunction_3789,
    logic1_raw_eqFunction_3833,
    logic1_raw_eqFunction_3837,
    logic1_raw_eqFunction_3838,
    logic1_raw_eqFunction_831,
    logic1_raw_eqFunction_3841,
    logic1_raw_eqFunction_3860,
    logic1_raw_eqFunction_3861,
    logic1_raw_eqFunction_3862,
    logic1_raw_eqFunction_3854,
    logic1_raw_eqFunction_3855,
    logic1_raw_eqFunction_3856,
    logic1_raw_eqFunction_3848,
    logic1_raw_eqFunction_3770,
    logic1_raw_eqFunction_3771,
    logic1_raw_eqFunction_3772,
    logic1_raw_eqFunction_3773,
    logic1_raw_eqFunction_3774,
    logic1_raw_eqFunction_3775,
    logic1_raw_eqFunction_3776,
    logic1_raw_eqFunction_847,
    logic1_raw_eqFunction_3867,
    logic1_raw_eqFunction_3870,
    logic1_raw_eqFunction_3871,
    logic1_raw_eqFunction_3872,
    logic1_raw_eqFunction_3873,
    logic1_raw_eqFunction_3874,
    logic1_raw_eqFunction_3875,
    logic1_raw_eqFunction_855,
    logic1_raw_eqFunction_856,
    logic1_raw_eqFunction_857,
    logic1_raw_eqFunction_3756,
    logic1_raw_eqFunction_3761,
    logic1_raw_eqFunction_3762,
    logic1_raw_eqFunction_3758,
    logic1_raw_eqFunction_3759,
    logic1_raw_eqFunction_3760,
    logic1_raw_eqFunction_3849,
    logic1_raw_eqFunction_3757,
    logic1_raw_eqFunction_3842,
    logic1_raw_eqFunction_3843,
    logic1_raw_eqFunction_3863,
    logic1_raw_eqFunction_3745,
    logic1_raw_eqFunction_3746,
    logic1_raw_eqFunction_3747,
    logic1_raw_eqFunction_872,
    logic1_raw_eqFunction_3821,
    logic1_raw_eqFunction_3850,
    logic1_raw_eqFunction_3755,
    logic1_raw_eqFunction_3744,
    logic1_raw_eqFunction_3817,
    logic1_raw_eqFunction_3818,
    logic1_raw_eqFunction_3844,
    logic1_raw_eqFunction_880,
    logic1_raw_eqFunction_881,
    logic1_raw_eqFunction_3748,
    logic1_raw_eqFunction_3769,
    logic1_raw_eqFunction_884,
    logic1_raw_eqFunction_885,
    logic1_raw_eqFunction_886,
    logic1_raw_eqFunction_2942,
    logic1_raw_eqFunction_2950,
    logic1_raw_eqFunction_2951,
    logic1_raw_eqFunction_2961,
    logic1_raw_eqFunction_2943,
    logic1_raw_eqFunction_2480,
    logic1_raw_eqFunction_3310,
    logic1_raw_eqFunction_3371,
    logic1_raw_eqFunction_3507,
    logic1_raw_eqFunction_3379,
    logic1_raw_eqFunction_3381,
    logic1_raw_eqFunction_3378,
    logic1_raw_eqFunction_3382,
    logic1_raw_eqFunction_3502,
    logic1_raw_eqFunction_3503,
    logic1_raw_eqFunction_928,
    logic1_raw_eqFunction_2491,
    logic1_raw_eqFunction_3385,
    logic1_raw_eqFunction_960,
    logic1_raw_eqFunction_2494,
    logic1_raw_eqFunction_3652,
    logic1_raw_eqFunction_3373,
    logic1_raw_eqFunction_3374,
    logic1_raw_eqFunction_934,
    logic1_raw_eqFunction_3372,
    logic1_raw_eqFunction_2500,
    logic1_raw_eqFunction_3387,
    logic1_raw_eqFunction_947,
    logic1_raw_eqFunction_3398,
    logic1_raw_eqFunction_3490,
    logic1_raw_eqFunction_3397,
    logic1_raw_eqFunction_3396,
    logic1_raw_eqFunction_3389,
    logic1_raw_eqFunction_3390,
    logic1_raw_eqFunction_3392,
    logic1_raw_eqFunction_3395,
    logic1_raw_eqFunction_3391,
    logic1_raw_eqFunction_3393,
    logic1_raw_eqFunction_3388,
    logic1_raw_eqFunction_3341,
    logic1_raw_eqFunction_3353,
    logic1_raw_eqFunction_3354,
    logic1_raw_eqFunction_3355,
    logic1_raw_eqFunction_3350,
    logic1_raw_eqFunction_3351,
    logic1_raw_eqFunction_3352,
    logic1_raw_eqFunction_3342,
    logic1_raw_eqFunction_3343,
    logic1_raw_eqFunction_3344,
    logic1_raw_eqFunction_964,
    logic1_raw_eqFunction_2537,
    logic1_raw_eqFunction_3634,
    logic1_raw_eqFunction_3635,
    logic1_raw_eqFunction_982,
    logic1_raw_eqFunction_983,
    logic1_raw_eqFunction_3642,
    logic1_raw_eqFunction_985,
    logic1_raw_eqFunction_986,
    logic1_raw_eqFunction_3648,
    logic1_raw_eqFunction_3649,
    logic1_raw_eqFunction_3637,
    logic1_raw_eqFunction_3638,
    logic1_raw_eqFunction_3639,
    logic1_raw_eqFunction_2550,
    logic1_raw_eqFunction_994,
    logic1_raw_eqFunction_3617,
    logic1_raw_eqFunction_3619,
    logic1_raw_eqFunction_3620,
    logic1_raw_eqFunction_998,
    logic1_raw_eqFunction_3601,
    logic1_raw_eqFunction_3603,
    logic1_raw_eqFunction_3604,
    logic1_raw_eqFunction_1002,
    logic1_raw_eqFunction_3251,
    logic1_raw_eqFunction_3252,
    logic1_raw_eqFunction_3358,
    logic1_raw_eqFunction_3368,
    logic1_raw_eqFunction_3478,
    logic1_raw_eqFunction_3257,
    logic1_raw_eqFunction_3600,
    logic1_raw_eqFunction_3256,
    logic1_raw_eqFunction_3562,
    logic1_raw_eqFunction_3255,
    logic1_raw_eqFunction_3260,
    logic1_raw_eqFunction_3305,
    logic1_raw_eqFunction_3616,
    logic1_raw_eqFunction_3304,
    logic1_raw_eqFunction_3554,
    logic1_raw_eqFunction_3263,
    logic1_raw_eqFunction_3272,
    logic1_raw_eqFunction_3273,
    logic1_raw_eqFunction_3274,
    logic1_raw_eqFunction_3277,
    logic1_raw_eqFunction_3275,
    logic1_raw_eqFunction_3276,
    logic1_raw_eqFunction_1025,
    logic1_raw_eqFunction_1026,
    logic1_raw_eqFunction_1027,
    logic1_raw_eqFunction_3552,
    logic1_raw_eqFunction_3553,
    logic1_raw_eqFunction_1030,
    logic1_raw_eqFunction_1031,
    logic1_raw_eqFunction_3288,
    logic1_raw_eqFunction_3289,
    logic1_raw_eqFunction_3290,
    logic1_raw_eqFunction_3291,
    logic1_raw_eqFunction_3297,
    logic1_raw_eqFunction_3300,
    logic1_raw_eqFunction_3545,
    logic1_raw_eqFunction_3292,
    logic1_raw_eqFunction_3295,
    logic1_raw_eqFunction_3293,
    logic1_raw_eqFunction_3294,
    logic1_raw_eqFunction_3296,
    logic1_raw_eqFunction_3299,
    logic1_raw_eqFunction_3298,
    logic1_raw_eqFunction_3675,
    logic1_raw_eqFunction_1047,
    logic1_raw_eqFunction_3324,
    logic1_raw_eqFunction_3330,
    logic1_raw_eqFunction_3323,
    logic1_raw_eqFunction_1051,
    logic1_raw_eqFunction_3319,
    logic1_raw_eqFunction_3321,
    logic1_raw_eqFunction_1054,
    logic1_raw_eqFunction_3864,
    logic1_raw_eqFunction_3865,
    logic1_raw_eqFunction_3866,
    logic1_raw_eqFunction_3322,
    logic1_raw_eqFunction_3857,
    logic1_raw_eqFunction_3858,
    logic1_raw_eqFunction_3859,
    logic1_raw_eqFunction_3851,
    logic1_raw_eqFunction_3852,
    logic1_raw_eqFunction_3853,
    logic1_raw_eqFunction_3262,
    logic1_raw_eqFunction_3261,
    logic1_raw_eqFunction_3265,
    logic1_raw_eqFunction_3266,
    logic1_raw_eqFunction_3268,
    logic1_raw_eqFunction_3271,
    logic1_raw_eqFunction_3560,
    logic1_raw_eqFunction_3267,
    logic1_raw_eqFunction_3269,
    logic1_raw_eqFunction_3264,
    logic1_raw_eqFunction_3303,
    logic1_raw_eqFunction_3311,
    logic1_raw_eqFunction_1078,
    logic1_raw_eqFunction_1079,
    logic1_raw_eqFunction_1080,
    logic1_raw_eqFunction_1081,
    logic1_raw_eqFunction_1082,
    logic1_raw_eqFunction_3577,
    logic1_raw_eqFunction_1084,
    logic1_raw_eqFunction_3576,
    logic1_raw_eqFunction_3312,
    logic1_raw_eqFunction_3613,
    logic1_raw_eqFunction_1088,
    logic1_raw_eqFunction_3515,
    logic1_raw_eqFunction_3611,
    logic1_raw_eqFunction_3338,
    logic1_raw_eqFunction_3339,
    logic1_raw_eqFunction_3337,
    logic1_raw_eqFunction_3340,
    logic1_raw_eqFunction_2651,
    logic1_raw_eqFunction_3347,
    logic1_raw_eqFunction_3348,
    logic1_raw_eqFunction_3516,
    logic1_raw_eqFunction_3517,
    logic1_raw_eqFunction_1101,
    logic1_raw_eqFunction_3349,
    logic1_raw_eqFunction_1103,
    logic1_raw_eqFunction_1104,
    logic1_raw_eqFunction_1105,
    logic1_raw_eqFunction_3623,
    logic1_raw_eqFunction_3624,
    logic1_raw_eqFunction_1108,
    logic1_raw_eqFunction_1109,
    logic1_raw_eqFunction_3538,
    logic1_raw_eqFunction_3539,
    logic1_raw_eqFunction_3360,
    logic1_raw_eqFunction_3359,
    logic1_raw_eqFunction_3367,
    logic1_raw_eqFunction_3332,
    logic1_raw_eqFunction_3361,
    logic1_raw_eqFunction_3363,
    logic1_raw_eqFunction_3366,
    logic1_raw_eqFunction_3362,
    logic1_raw_eqFunction_3364,
    logic1_raw_eqFunction_3333,
    logic1_raw_eqFunction_1126,
    logic1_raw_eqFunction_3594,
    logic1_raw_eqFunction_3595,
    logic1_raw_eqFunction_3596,
    logic1_raw_eqFunction_3471,
    logic1_raw_eqFunction_3526,
    logic1_raw_eqFunction_3518,
    logic1_raw_eqFunction_3519,
    logic1_raw_eqFunction_3524,
    logic1_raw_eqFunction_3525,
    logic1_raw_eqFunction_3612,
    logic1_raw_eqFunction_3520,
    logic1_raw_eqFunction_3523,
    logic1_raw_eqFunction_3521,
    logic1_raw_eqFunction_3522,
    logic1_raw_eqFunction_3527,
    logic1_raw_eqFunction_3529,
    logic1_raw_eqFunction_3528,
    logic1_raw_eqFunction_3643,
    logic1_raw_eqFunction_1145,
    logic1_raw_eqFunction_3845,
    logic1_raw_eqFunction_3846,
    logic1_raw_eqFunction_3847,
    logic1_raw_eqFunction_1149,
    logic1_raw_eqFunction_3589,
    logic1_raw_eqFunction_3614,
    logic1_raw_eqFunction_3615,
    logic1_raw_eqFunction_1153,
    logic1_raw_eqFunction_1154,
    logic1_raw_eqFunction_3563,
    logic1_raw_eqFunction_3598,
    logic1_raw_eqFunction_3599,
    logic1_raw_eqFunction_1158,
    logic1_raw_eqFunction_1159,
    logic1_raw_eqFunction_3572,
    logic1_raw_eqFunction_3573,
    logic1_raw_eqFunction_1162,
    logic1_raw_eqFunction_1163,
    logic1_raw_eqFunction_3567,
    logic1_raw_eqFunction_3568,
    logic1_raw_eqFunction_1166,
    logic1_raw_eqFunction_1167,
    logic1_raw_eqFunction_3583,
    logic1_raw_eqFunction_3584,
    logic1_raw_eqFunction_3315,
    logic1_raw_eqFunction_3317,
    logic1_raw_eqFunction_3318,
    logic1_raw_eqFunction_2941,
    logic1_raw_eqFunction_1174,
    logic1_raw_eqFunction_3578,
    logic1_raw_eqFunction_3579,
    logic1_raw_eqFunction_3580,
    logic1_raw_eqFunction_1178,
    logic1_raw_eqFunction_1179,
    logic1_raw_eqFunction_3587,
    logic1_raw_eqFunction_1181,
    logic1_raw_eqFunction_2733,
    logic1_raw_eqFunction_1183,
    logic1_raw_eqFunction_2735,
    logic1_raw_eqFunction_3779,
    logic1_raw_eqFunction_3876,
    logic1_raw_eqFunction_1215,
    logic1_raw_eqFunction_154,
    logic1_raw_eqFunction_155,
    logic1_raw_eqFunction_1216,
    logic1_raw_eqFunction_1217,
    logic1_raw_eqFunction_1218,
    logic1_raw_eqFunction_1219,
    logic1_raw_eqFunction_1220,
    logic1_raw_eqFunction_1221,
    logic1_raw_eqFunction_1222,
    logic1_raw_eqFunction_1223,
    logic1_raw_eqFunction_1224,
    logic1_raw_eqFunction_1225,
    logic1_raw_eqFunction_1226,
    logic1_raw_eqFunction_1227,
    logic1_raw_eqFunction_1228,
    logic1_raw_eqFunction_1229,
    logic1_raw_eqFunction_1230,
    logic1_raw_eqFunction_1231,
    logic1_raw_eqFunction_1232,
    logic1_raw_eqFunction_1233,
    logic1_raw_eqFunction_1234,
    logic1_raw_eqFunction_1235,
    logic1_raw_eqFunction_1236,
    logic1_raw_eqFunction_1237,
    logic1_raw_eqFunction_1238,
    logic1_raw_eqFunction_1239,
    logic1_raw_eqFunction_1240,
    logic1_raw_eqFunction_1241,
    logic1_raw_eqFunction_1242,
    logic1_raw_eqFunction_1243,
    logic1_raw_eqFunction_1244,
    logic1_raw_eqFunction_1245,
    logic1_raw_eqFunction_1246,
    logic1_raw_eqFunction_1247,
    logic1_raw_eqFunction_1248,
    logic1_raw_eqFunction_1249,
    logic1_raw_eqFunction_1250,
    logic1_raw_eqFunction_1251,
    logic1_raw_eqFunction_1252,
    logic1_raw_eqFunction_1253,
    logic1_raw_eqFunction_1254,
    logic1_raw_eqFunction_1255,
    logic1_raw_eqFunction_1256,
    logic1_raw_eqFunction_1257,
    logic1_raw_eqFunction_1258,
    logic1_raw_eqFunction_1259,
    logic1_raw_eqFunction_1260,
    logic1_raw_eqFunction_1261,
    logic1_raw_eqFunction_1262,
    logic1_raw_eqFunction_1263,
    logic1_raw_eqFunction_1264,
    logic1_raw_eqFunction_1265,
    logic1_raw_eqFunction_1266,
    logic1_raw_eqFunction_1267,
    logic1_raw_eqFunction_1268,
    logic1_raw_eqFunction_1269,
    logic1_raw_eqFunction_1270,
    logic1_raw_eqFunction_1271,
    logic1_raw_eqFunction_1272,
    logic1_raw_eqFunction_1273,
    logic1_raw_eqFunction_1274,
    logic1_raw_eqFunction_1275,
    logic1_raw_eqFunction_1276,
    logic1_raw_eqFunction_1277,
    logic1_raw_eqFunction_1278,
    logic1_raw_eqFunction_1279,
    logic1_raw_eqFunction_1280,
    logic1_raw_eqFunction_1281,
    logic1_raw_eqFunction_1282,
    logic1_raw_eqFunction_1283,
    logic1_raw_eqFunction_1284,
    logic1_raw_eqFunction_1285,
    logic1_raw_eqFunction_1286,
    logic1_raw_eqFunction_1287,
    logic1_raw_eqFunction_1288,
    logic1_raw_eqFunction_1289,
    logic1_raw_eqFunction_1290,
    logic1_raw_eqFunction_1291,
    logic1_raw_eqFunction_1292,
    logic1_raw_eqFunction_1293,
    logic1_raw_eqFunction_1294,
    logic1_raw_eqFunction_1295,
    logic1_raw_eqFunction_1296,
    logic1_raw_eqFunction_1297,
    logic1_raw_eqFunction_1298,
    logic1_raw_eqFunction_1299,
    logic1_raw_eqFunction_1300,
    logic1_raw_eqFunction_1301,
    logic1_raw_eqFunction_1302,
    logic1_raw_eqFunction_1303,
    logic1_raw_eqFunction_1304,
    logic1_raw_eqFunction_1305,
    logic1_raw_eqFunction_1306,
    logic1_raw_eqFunction_1307,
    logic1_raw_eqFunction_1308,
    logic1_raw_eqFunction_1309,
    logic1_raw_eqFunction_1310,
    logic1_raw_eqFunction_1311,
    logic1_raw_eqFunction_1312,
    logic1_raw_eqFunction_1313,
    logic1_raw_eqFunction_1314,
    logic1_raw_eqFunction_1315,
    logic1_raw_eqFunction_1316,
    logic1_raw_eqFunction_1317,
    logic1_raw_eqFunction_1318,
    logic1_raw_eqFunction_1319,
    logic1_raw_eqFunction_1320,
    logic1_raw_eqFunction_1321,
    logic1_raw_eqFunction_1322,
    logic1_raw_eqFunction_1323,
    logic1_raw_eqFunction_1324,
    logic1_raw_eqFunction_1325,
    logic1_raw_eqFunction_1326,
    logic1_raw_eqFunction_1327,
    logic1_raw_eqFunction_1328,
    logic1_raw_eqFunction_1329,
    logic1_raw_eqFunction_1330,
    logic1_raw_eqFunction_1331,
    logic1_raw_eqFunction_1332,
    logic1_raw_eqFunction_1333,
    logic1_raw_eqFunction_1334,
    logic1_raw_eqFunction_1335,
    logic1_raw_eqFunction_1336,
    logic1_raw_eqFunction_1337,
    logic1_raw_eqFunction_1338,
    logic1_raw_eqFunction_1339,
    logic1_raw_eqFunction_1340,
    logic1_raw_eqFunction_1341,
    logic1_raw_eqFunction_1342,
    logic1_raw_eqFunction_1343,
    logic1_raw_eqFunction_1344,
    logic1_raw_eqFunction_1345,
    logic1_raw_eqFunction_1346,
    logic1_raw_eqFunction_1347,
    logic1_raw_eqFunction_1348,
    logic1_raw_eqFunction_1349,
    logic1_raw_eqFunction_1350,
    logic1_raw_eqFunction_1351,
    logic1_raw_eqFunction_1352,
    logic1_raw_eqFunction_3000,
    logic1_raw_eqFunction_3001,
    logic1_raw_eqFunction_3149,
    logic1_raw_eqFunction_3491,
    logic1_raw_eqFunction_3492,
    logic1_raw_eqFunction_1358,
    logic1_raw_eqFunction_1359,
    logic1_raw_eqFunction_1360,
    logic1_raw_eqFunction_1361,
    logic1_raw_eqFunction_1362,
    logic1_raw_eqFunction_1363,
    logic1_raw_eqFunction_1364,
    logic1_raw_eqFunction_1365,
    logic1_raw_eqFunction_1366,
    logic1_raw_eqFunction_1367,
    logic1_raw_eqFunction_1368,
    logic1_raw_eqFunction_1369,
    logic1_raw_eqFunction_1370,
    logic1_raw_eqFunction_1371,
    logic1_raw_eqFunction_1372,
    logic1_raw_eqFunction_1373,
    logic1_raw_eqFunction_1374,
    logic1_raw_eqFunction_1375,
    logic1_raw_eqFunction_1376,
    logic1_raw_eqFunction_1377,
    logic1_raw_eqFunction_1378,
    logic1_raw_eqFunction_1379,
    logic1_raw_eqFunction_1380,
    logic1_raw_eqFunction_1381,
    logic1_raw_eqFunction_1382,
    logic1_raw_eqFunction_1383,
    logic1_raw_eqFunction_1384,
    logic1_raw_eqFunction_1385,
    logic1_raw_eqFunction_1386,
    logic1_raw_eqFunction_1387,
    logic1_raw_eqFunction_1388,
    logic1_raw_eqFunction_1389,
    logic1_raw_eqFunction_1390,
    logic1_raw_eqFunction_1391,
    logic1_raw_eqFunction_1392,
    logic1_raw_eqFunction_1393,
    logic1_raw_eqFunction_1394,
    logic1_raw_eqFunction_1395,
    logic1_raw_eqFunction_1396,
    logic1_raw_eqFunction_1397,
    logic1_raw_eqFunction_1398,
    logic1_raw_eqFunction_1399,
    logic1_raw_eqFunction_1400,
    logic1_raw_eqFunction_1401,
    logic1_raw_eqFunction_1402,
    logic1_raw_eqFunction_1403,
    logic1_raw_eqFunction_1404,
    logic1_raw_eqFunction_1405,
    logic1_raw_eqFunction_1406,
    logic1_raw_eqFunction_1407,
    logic1_raw_eqFunction_1408,
    logic1_raw_eqFunction_1409,
    logic1_raw_eqFunction_1410,
    logic1_raw_eqFunction_1411,
    logic1_raw_eqFunction_1412,
    logic1_raw_eqFunction_1413,
    logic1_raw_eqFunction_1414
  };
  
  for (int id = 0; id < 1333; id++) {
    eqFunctions[id](data, threadData);
  }
  data->simulationInfo->discreteCall = 0;
  
  return 0;
}
int logic1_raw_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  return 0;
}


#if defined(__cplusplus)
}
#endif
