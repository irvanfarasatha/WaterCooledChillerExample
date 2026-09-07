#include "WaterCooledChillerExample.WaterCooledChillerExample7_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5015(DATA *data, threadData_t *threadData);


/*
equation index: 896
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.ports_H_flow[2] = semiLinear(-val8Sto.m_flow, val8_2Sto.port_b.h_outflow, tan.indTanHex.vol[5].ports[2].h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,896};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1585]] /* tan.indTanHex.vol[5].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* val8_2Sto.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1598]] /* tan.indTanHex.vol[5].ports[2].h_outflow variable */));
  threadData->lastEquationSolved = 896;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4949(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4951(DATA *data, threadData_t *threadData);


/*
equation index: 899
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.ports_H_flow[2] = semiLinear(-val8Sto.m_flow, tan.indTanHex.vol[5].ports[2].h_outflow, tan.indTanHex.vol[4].ports[2].h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,899};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1583]] /* tan.indTanHex.vol[4].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1598]] /* tan.indTanHex.vol[5].ports[2].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1597]] /* tan.indTanHex.vol[4].ports[2].h_outflow variable */));
  threadData->lastEquationSolved = 899;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4946(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4948(DATA *data, threadData_t *threadData);


/*
equation index: 902
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.ports_H_flow[2] = semiLinear(-val8Sto.m_flow, tan.indTanHex.vol[4].ports[2].h_outflow, tan.indTanHex.vol[3].ports[2].h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,902};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1581]] /* tan.indTanHex.vol[3].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1597]] /* tan.indTanHex.vol[4].ports[2].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1596]] /* tan.indTanHex.vol[3].ports[2].h_outflow variable */));
  threadData->lastEquationSolved = 902;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4943(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4945(DATA *data, threadData_t *threadData);


/*
equation index: 905
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.ports_H_flow[2] = semiLinear(-val8Sto.m_flow, tan.indTanHex.vol[3].ports[2].h_outflow, tan.indTanHex.vol[2].ports[2].h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,905};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1579]] /* tan.indTanHex.vol[2].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1596]] /* tan.indTanHex.vol[3].ports[2].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1595]] /* tan.indTanHex.vol[2].ports[2].h_outflow variable */));
  threadData->lastEquationSolved = 905;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4940(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4942(DATA *data, threadData_t *threadData);


/*
equation index: 908
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.ports_H_flow[2] = semiLinear(-val8Sto.m_flow, tan.indTanHex.vol[2].ports[2].h_outflow, val8Sto.port_a.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,908};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1577]] /* tan.indTanHex.vol[1].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1595]] /* tan.indTanHex.vol[2].ports[2].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* val8Sto.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 908;
}

/*
equation index: 909
type: SIMPLE_ASSIGN
val8.port_b.h_outflow = (4.761904761904762 * chi2.port_a2.h_outflow + max(-val8Sto.m_flow, 1e-7) * val8Sto.port_a.h_outflow) / (4.761904761904762 + max(-val8Sto.m_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,909};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1753]] /* val8.port_b.h_outflow variable */) = DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* chi2.port_a2.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* val8Sto.port_a.h_outflow variable */)),4.761904761904762 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)),1e-7),"4.761904761904762 + max(-val8Sto.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 909;
}

/*
equation index: 910
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.ports_H_flow[1] = semiLinear(4.761904761904762, (max(val8_2.m_flow, 1e-7) * val8_2Rel.port_b.h_outflow + max(val8Sto.m_flow, 1e-7) * val8_2Sto.port_b.h_outflow) / (max(val8_2.m_flow, 1e-7) + max(val8Sto.m_flow, 1e-7)), pumCHW2.port_b.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,910};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1130]] /* pumCHW2.vol.dynBal.ports_H_flow[1] variable */) = semiLinear(4.761904761904762, DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* val8_2Rel.port_b.h_outflow variable */)) + (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* val8_2Sto.port_b.h_outflow variable */)),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */),1e-7) + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */),1e-7),"max(val8_2.m_flow, 1e-7) + max(val8Sto.m_flow, 1e-7)",equationIndexes), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* pumCHW2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 910;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5012(DATA *data, threadData_t *threadData);


/*
equation index: 912
type: SIMPLE_ASSIGN
val8Sto.port_b.h_outflow = (4.761904761904762 * chi2.port_a2.h_outflow + max(-val8.m_flow, 1e-7) * val8Rel.port_a.h_outflow) / (4.761904761904762 + max(-val8.m_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,912};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1767]] /* val8Sto.port_b.h_outflow variable */) = DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* chi2.port_a2.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* val8Rel.port_a.h_outflow variable */)),4.761904761904762 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)),1e-7),"4.761904761904762 + max(-val8.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 912;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4937(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4939(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5004(DATA *data, threadData_t *threadData);


/*
equation index: 916
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.ports_H_flow[2] = semiLinear(-4.761904761904762, (max(-val8.m_flow, 1e-7) * val8Rel.port_a.h_outflow + max(-val8Sto.m_flow, 1e-7) * val8Sto.port_a.h_outflow) / (max(-val8.m_flow, 1e-7) + max(-val8Sto.m_flow, 1e-7)), chi2.port_a2.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,916};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* chi2.vol2.dynBal.ports_H_flow[2] variable */) = semiLinear(-4.761904761904762, DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* val8Rel.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* val8Sto.port_a.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)),1e-7),"max(-val8.m_flow, 1e-7) + max(-val8Sto.m_flow, 1e-7)",equationIndexes), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* chi2.port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 916;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5007(DATA *data, threadData_t *threadData);


/*
equation index: 918
type: SIMPLE_ASSIGN
chi2.state_b2_inflow.T = 273.15 + 2.390057361376673e-4 * (max(-val8.m_flow, 1e-7) * val8Rel.port_a.h_outflow + max(-val8Sto.m_flow, 1e-7) * val8Sto.port_a.h_outflow) / (max(-val8.m_flow, 1e-7) + max(-val8Sto.m_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,918};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* chi2.state_b2_inflow.T variable */) = 273.15 + (2.390057361376673e-4) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* val8Rel.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* val8Sto.port_a.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)),1e-7),"max(-val8.m_flow, 1e-7) + max(-val8Sto.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 918;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5222(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5223(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5221(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5224(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5193(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5194(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5195(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5196(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5204(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5155(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5162(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5132(DATA *data, threadData_t *threadData);


/*
equation index: 931
type: SIMPLE_ASSIGN
cooCoi.hA.hA_1 = cooCoi.hA.hA_nominal_w * Buildings.Utilities.Math.Functions.regNonZeroPower(cooCoi.hA.fm_w, cooCoi.hA.n_w, 0.1)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,931};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* cooCoi.hA.hA_1 variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* cooCoi.hA.hA_nominal_w PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* cooCoi.hA.fm_w variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[903]] /* cooCoi.hA.n_w PARAM */), 0.1));
  threadData->lastEquationSolved = 931;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5135(DATA *data, threadData_t *threadData);


/*
equation index: 933
type: SIMPLE_ASSIGN
pumTanRet.preSou.V_flow = pumTanRet.m_flow / Modelica.Fluid.Utilities.regStep(pumTanRet.m_flow, WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.preSou.Medium.setState_phX(tan.vol[4].p, val8Rel.port_b.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.preSou.Medium.setState_phX(pumTanRet.port_b.p, val8Rel.port_a.h_outflow, {})), pumTanRet.preSou.m_flow_small)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,933};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* pumTanRet.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */), omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* tan.vol[4].p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1759]] /* val8Rel.port_b.h_outflow variable */), _OMC_LIT88)), omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* pumTanRet.port_b.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* val8Rel.port_a.h_outflow variable */), _OMC_LIT88)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2669]] /* pumTanRet.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(pumTanRet.m_flow, WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.preSou.Medium.setState_phX(tan.vol[4].p, val8Rel.port_b.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.preSou.Medium.setState_phX(pumTanRet.port_b.p, val8Rel.port_a.h_outflow, {})), pumTanRet.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 933;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4767(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4770(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4766(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4765(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4771(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4785(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4786(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4787(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4788(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4789(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4790(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4791(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4792(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4793(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4794(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4774(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4775(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4776(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4777(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4778(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4779(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4780(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4781(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4782(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4783(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4773(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4795(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4772(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4784(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4764(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4796(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4813(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4814(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4815(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4816(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4817(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4818(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4819(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4820(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4821(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4822(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4802(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4803(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4804(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4805(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4806(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4807(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4808(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4809(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4810(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4811(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4801(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4823(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4800(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4812(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4797(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4799(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4798(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4763(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4824(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4842(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4843(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4844(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4845(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4846(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4847(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4848(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4849(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4850(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4851(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4831(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4832(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4833(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4834(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4835(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4836(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4837(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4838(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4839(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4840(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4830(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4852(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4829(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4841(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4853(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4825(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4828(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4826(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4827(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4762(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4854(DATA *data, threadData_t *threadData);


/*
equation index: 1040
type: LINEAR

<var>tan.heaPorSid.T</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1040};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 1040 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1040};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 1040 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */) = aux_x[0];

  threadData->lastEquationSolved = 1040;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4875(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4855(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4858(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4856(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4857(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4761(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4878(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4881(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4877(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4876(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4883(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4882(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4886(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4889(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4895(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4896(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4898(DATA *data, threadData_t *threadData);


/*
equation index: 1058
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[6].hA = tan.indTanHex.hAPipIns[6].x * tan.indTanHex.hAPipIns[6].hA_nominal * Buildings.Utilities.Math.Functions.regNonZeroPower(tan.indTanHex.hAPipIns[6].fm, tan.indTanHex.hAPipIns[6].n, 0.1)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1058};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1467]] /* tan.indTanHex.hAPipIns[6].hA variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1473]] /* tan.indTanHex.hAPipIns[6].x variable */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3027]] /* tan.indTanHex.hAPipIns[6].hA_nominal PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1461]] /* tan.indTanHex.hAPipIns[6].fm variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3039]] /* tan.indTanHex.hAPipIns[6].n PARAM */), 0.1)));
  threadData->lastEquationSolved = 1058;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4897(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4996(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5016(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4997(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4998(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4999(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4894(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4899(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4901(DATA *data, threadData_t *threadData);


/*
equation index: 1068
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[5].hA = tan.indTanHex.hAPipIns[5].x * tan.indTanHex.hAPipIns[5].hA_nominal * Buildings.Utilities.Math.Functions.regNonZeroPower(tan.indTanHex.hAPipIns[5].fm, tan.indTanHex.hAPipIns[5].n, 0.1)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1068};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1466]] /* tan.indTanHex.hAPipIns[5].hA variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1472]] /* tan.indTanHex.hAPipIns[5].x variable */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3026]] /* tan.indTanHex.hAPipIns[5].hA_nominal PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1460]] /* tan.indTanHex.hAPipIns[5].fm variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3038]] /* tan.indTanHex.hAPipIns[5].n PARAM */), 0.1)));
  threadData->lastEquationSolved = 1068;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4900(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4988(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4989(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4990(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4991(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4992(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4893(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4902(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4904(DATA *data, threadData_t *threadData);


/*
equation index: 1078
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[4].hA = tan.indTanHex.hAPipIns[4].x * tan.indTanHex.hAPipIns[4].hA_nominal * Buildings.Utilities.Math.Functions.regNonZeroPower(tan.indTanHex.hAPipIns[4].fm, tan.indTanHex.hAPipIns[4].n, 0.1)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1078};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* tan.indTanHex.hAPipIns[4].hA variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1471]] /* tan.indTanHex.hAPipIns[4].x variable */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3025]] /* tan.indTanHex.hAPipIns[4].hA_nominal PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1459]] /* tan.indTanHex.hAPipIns[4].fm variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3037]] /* tan.indTanHex.hAPipIns[4].n PARAM */), 0.1)));
  threadData->lastEquationSolved = 1078;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4903(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4980(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4981(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4982(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4983(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4984(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4892(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4905(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4907(DATA *data, threadData_t *threadData);


/*
equation index: 1088
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[3].hA = tan.indTanHex.hAPipIns[3].x * tan.indTanHex.hAPipIns[3].hA_nominal * Buildings.Utilities.Math.Functions.regNonZeroPower(tan.indTanHex.hAPipIns[3].fm, tan.indTanHex.hAPipIns[3].n, 0.1)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1088};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* tan.indTanHex.hAPipIns[3].hA variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1470]] /* tan.indTanHex.hAPipIns[3].x variable */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3024]] /* tan.indTanHex.hAPipIns[3].hA_nominal PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1458]] /* tan.indTanHex.hAPipIns[3].fm variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3036]] /* tan.indTanHex.hAPipIns[3].n PARAM */), 0.1)));
  threadData->lastEquationSolved = 1088;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4906(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4972(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4973(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4974(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4975(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4976(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4891(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4908(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4910(DATA *data, threadData_t *threadData);


/*
equation index: 1098
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[2].hA = tan.indTanHex.hAPipIns[2].x * tan.indTanHex.hAPipIns[2].hA_nominal * Buildings.Utilities.Math.Functions.regNonZeroPower(tan.indTanHex.hAPipIns[2].fm, tan.indTanHex.hAPipIns[2].n, 0.1)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1098};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* tan.indTanHex.hAPipIns[2].hA variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1469]] /* tan.indTanHex.hAPipIns[2].x variable */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3023]] /* tan.indTanHex.hAPipIns[2].hA_nominal PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1457]] /* tan.indTanHex.hAPipIns[2].fm variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3035]] /* tan.indTanHex.hAPipIns[2].n PARAM */), 0.1)));
  threadData->lastEquationSolved = 1098;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4909(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4964(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4965(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4966(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4967(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4968(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4890(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4911(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4913(DATA *data, threadData_t *threadData);


/*
equation index: 1108
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[1].hA = tan.indTanHex.hAPipIns[1].x * tan.indTanHex.hAPipIns[1].hA_nominal * Buildings.Utilities.Math.Functions.regNonZeroPower(tan.indTanHex.hAPipIns[1].fm, tan.indTanHex.hAPipIns[1].n, 0.1)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* tan.indTanHex.hAPipIns[1].hA variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1468]] /* tan.indTanHex.hAPipIns[1].x variable */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3022]] /* tan.indTanHex.hAPipIns[1].hA_nominal PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1456]] /* tan.indTanHex.hAPipIns[1].fm variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3034]] /* tan.indTanHex.hAPipIns[1].n PARAM */), 0.1)));
  threadData->lastEquationSolved = 1108;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4912(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4956(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4957(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4958(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4959(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4960(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4888(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4914(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4915(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4918(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4916(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4917(DATA *data, threadData_t *threadData);


/*
equation index: 1121
type: SIMPLE_ASSIGN
pumCHW2.preSou.V_flow = 4.761904761904762 / Modelica.Fluid.Utilities.regStep(4.761904761904762, WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.preSou.Medium.setState_phX(pumCHW2.port_a.p, pumCHW2.port_b.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.preSou.Medium.setState_phX(chi2.vol2.p, chi2.port_a2.h_outflow, {})), pumCHW2.preSou.m_flow_small)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* pumCHW2.preSou.V_flow variable */) = DIVISION_SIM(4.761904761904762,omc_Modelica_Fluid_Utilities_regStep(threadData, 4.761904761904762, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* pumCHW2.port_b.h_outflow variable */), _OMC_LIT88)), omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* chi2.port_a2.h_outflow variable */), _OMC_LIT88)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* pumCHW2.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(4.761904761904762, WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.preSou.Medium.setState_phX(pumCHW2.port_a.p, pumCHW2.port_b.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.preSou.Medium.setState_phX(chi2.vol2.p, chi2.port_a2.h_outflow, {})), pumCHW2.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 1121;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4923(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4924(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4930(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5008(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4925(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4928(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4926(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4927(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4929(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4932(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4931(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5255(DATA *data, threadData_t *threadData);


/*
equation index: 1134
type: SIMPLE_ASSIGN
chi2.TEvaEnt = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.Medium2.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.chi2.Medium2.setState_phX(chi2.vol2.p, pumCHW2.port_b.h_outflow, {1.0}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1134};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* chi2.TEvaEnt variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium2_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium2_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* pumCHW2.port_b.h_outflow variable */), _OMC_LIT75));
  threadData->lastEquationSolved = 1134;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4887(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5477(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5478(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5479(DATA *data, threadData_t *threadData);


/*
equation index: 1139
type: SIMPLE_ASSIGN
pumCHW2.PToMed.u1 = homotopy(smooth(1, pumCHW2.heaDis.QThe_flow), 0.0)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* pumCHW2.PToMed.u1 variable */) = homotopy((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1099]] /* pumCHW2.heaDis.QThe_flow variable */), 0.0);
  threadData->lastEquationSolved = 1139;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5481(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5482(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5021(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5022(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5020(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5023(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5019(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5219(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5217(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5218(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5059(DATA *data, threadData_t *threadData);


/*
equation index: 1151
type: SIMPLE_ASSIGN
pumTanRet.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumTanRet.eff.per.motorEfficiency, pumTanRet.VMachine_flow, pumTanRet.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumTanRet.eff.per.motorEfficiency, 0.004783016998938075, pumTanRet.eff.motDer, 1.0, 0.05))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1151};
  real_array tmp108;
  real_array tmp109;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp110;
  real_array tmp111;
  real_array tmp112;
  real_array tmp113;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp114;
  real_array tmp115;
  real_array_create(&tmp108, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2619]] /* pumTanRet.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp109, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2620]] /* pumTanRet.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp110, tmp108, tmp109);
  real_array_create(&tmp111, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2596]] /* pumTanRet.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp112, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2619]] /* pumTanRet.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp113, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2620]] /* pumTanRet.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp114, tmp112, tmp113);
  real_array_create(&tmp115, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2596]] /* pumTanRet.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* pumTanRet.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp110, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* pumTanRet.VMachine_flow variable */), tmp111, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp114, 0.004783016998938075, tmp115, 1.0, 0.05));
  threadData->lastEquationSolved = 1151;
}

/*
equation index: 1152
type: SIMPLE_ASSIGN
pumTanRet.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumTanRet.eff.per.hydraulicEfficiency, pumTanRet.VMachine_flow, pumTanRet.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumTanRet.eff.per.hydraulicEfficiency, 0.004783016998938075, pumTanRet.eff.hydDer, 1.0, 0.05))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1152};
  real_array tmp116;
  real_array tmp117;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp118;
  real_array tmp119;
  real_array tmp120;
  real_array tmp121;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp122;
  real_array tmp123;
  real_array_create(&tmp116, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2617]] /* pumTanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp117, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2618]] /* pumTanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp118, tmp116, tmp117);
  real_array_create(&tmp119, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2594]] /* pumTanRet.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp120, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2617]] /* pumTanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp121, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2618]] /* pumTanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp122, tmp120, tmp121);
  real_array_create(&tmp123, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2594]] /* pumTanRet.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* pumTanRet.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp118, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* pumTanRet.VMachine_flow variable */), tmp119, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp122, 0.004783016998938075, tmp123, 1.0, 0.05));
  threadData->lastEquationSolved = 1152;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5063(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5064(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5066(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5065(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5067(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5060(DATA *data, threadData_t *threadData);


/*
equation index: 1159
type: SIMPLE_ASSIGN
pumTanRet.PToMed.u1 = homotopy(smooth(1, if noEvent(abs(pumTanRet.VMachine_flow) + -9.56603399787615e-6 > 4.783016998938075e-6) then pumTanRet.heaDis.QThe_flow else if noEvent(abs(pumTanRet.VMachine_flow) + -9.56603399787615e-6 < -4.783016998938075e-6) then 0.0 else 0.25 * (2.0 - 209073.05999999997 * abs(pumTanRet.VMachine_flow)) * ((209073.05999999997 * abs(pumTanRet.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * pumTanRet.heaDis.QThe_flow + 0.5 * pumTanRet.heaDis.QThe_flow), 0.0)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1159};
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  modelica_real tmp126;
  modelica_boolean tmp127;
  modelica_real tmp128;
  modelica_boolean tmp129;
  modelica_real tmp130;
  tmp124 = Greater(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* pumTanRet.VMachine_flow variable */)) + -9.56603399787615e-6,4.783016998938075e-6);
  tmp129 = (modelica_boolean)tmp124;
  if(tmp129)
  {
    tmp130 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* pumTanRet.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp125 = Less(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* pumTanRet.VMachine_flow variable */)) + -9.56603399787615e-6,-4.783016998938075e-6);
    tmp127 = (modelica_boolean)tmp125;
    if(tmp127)
    {
      tmp128 = 0.0;
    }
    else
    {
      tmp126 = (209073.05999999997) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* pumTanRet.VMachine_flow variable */))) + -2.0;
      tmp128 = (0.25) * (((2.0 - ((209073.05999999997) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* pumTanRet.VMachine_flow variable */))))) * ((tmp126 * tmp126) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* pumTanRet.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* pumTanRet.heaDis.QThe_flow variable */));
    }
    tmp130 = tmp128;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* pumTanRet.PToMed.u1 variable */) = homotopy(tmp130, 0.0);
  threadData->lastEquationSolved = 1159;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5069(DATA *data, threadData_t *threadData);


/*
equation index: 1161
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.ports_H_flow[2] = semiLinear(-pumTanRet.m_flow, val8Rel.port_a.h_outflow, val8Rel.port_b.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1260]] /* pumTanRet.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* val8Rel.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1759]] /* val8Rel.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1161;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5047(DATA *data, threadData_t *threadData);


/*
equation index: 1163
type: SIMPLE_ASSIGN
pumTanSup.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumTanSup.eff.per.motorEfficiency, pumTanSup.VMachine_flow, pumTanSup.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumTanSup.eff.per.motorEfficiency, 0.004783016998938075, pumTanSup.eff.motDer, 1.0, 0.05))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1163};
  real_array tmp131;
  real_array tmp132;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp133;
  real_array tmp134;
  real_array tmp135;
  real_array tmp136;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp137;
  real_array tmp138;
  real_array_create(&tmp131, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2748]] /* pumTanSup.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp132, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2749]] /* pumTanSup.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp133, tmp131, tmp132);
  real_array_create(&tmp134, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2725]] /* pumTanSup.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp135, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2748]] /* pumTanSup.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp136, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2749]] /* pumTanSup.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp137, tmp135, tmp136);
  real_array_create(&tmp138, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2725]] /* pumTanSup.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* pumTanSup.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp133, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* pumTanSup.VMachine_flow variable */), tmp134, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp137, 0.004783016998938075, tmp138, 1.0, 0.05));
  threadData->lastEquationSolved = 1163;
}

/*
equation index: 1164
type: SIMPLE_ASSIGN
pumTanSup.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumTanSup.eff.per.hydraulicEfficiency, pumTanSup.VMachine_flow, pumTanSup.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumTanSup.eff.per.hydraulicEfficiency, 0.004783016998938075, pumTanSup.eff.hydDer, 1.0, 0.05))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1164};
  real_array tmp139;
  real_array tmp140;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp141;
  real_array tmp142;
  real_array tmp143;
  real_array tmp144;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp145;
  real_array tmp146;
  real_array_create(&tmp139, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2746]] /* pumTanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp140, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* pumTanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp141, tmp139, tmp140);
  real_array_create(&tmp142, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2723]] /* pumTanSup.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp143, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2746]] /* pumTanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp144, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* pumTanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp145, tmp143, tmp144);
  real_array_create(&tmp146, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2723]] /* pumTanSup.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* pumTanSup.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp141, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* pumTanSup.VMachine_flow variable */), tmp142, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp145, 0.004783016998938075, tmp146, 1.0, 0.05));
  threadData->lastEquationSolved = 1164;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5051(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5052(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5054(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5053(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5055(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5048(DATA *data, threadData_t *threadData);


/*
equation index: 1171
type: SIMPLE_ASSIGN
pumTanSup.PToMed.u1 = homotopy(smooth(1, if noEvent(abs(pumTanSup.VMachine_flow) + -9.56603399787615e-6 > 4.783016998938075e-6) then pumTanSup.heaDis.QThe_flow else if noEvent(abs(pumTanSup.VMachine_flow) + -9.56603399787615e-6 < -4.783016998938075e-6) then 0.0 else 0.25 * (2.0 - 209073.05999999997 * abs(pumTanSup.VMachine_flow)) * ((209073.05999999997 * abs(pumTanSup.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * pumTanSup.heaDis.QThe_flow + 0.5 * pumTanSup.heaDis.QThe_flow), 0.0)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1171};
  modelica_boolean tmp147;
  modelica_boolean tmp148;
  modelica_real tmp149;
  modelica_boolean tmp150;
  modelica_real tmp151;
  modelica_boolean tmp152;
  modelica_real tmp153;
  tmp147 = Greater(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* pumTanSup.VMachine_flow variable */)) + -9.56603399787615e-6,4.783016998938075e-6);
  tmp152 = (modelica_boolean)tmp147;
  if(tmp152)
  {
    tmp153 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* pumTanSup.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp148 = Less(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* pumTanSup.VMachine_flow variable */)) + -9.56603399787615e-6,-4.783016998938075e-6);
    tmp150 = (modelica_boolean)tmp148;
    if(tmp150)
    {
      tmp151 = 0.0;
    }
    else
    {
      tmp149 = (209073.05999999997) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* pumTanSup.VMachine_flow variable */))) + -2.0;
      tmp151 = (0.25) * (((2.0 - ((209073.05999999997) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* pumTanSup.VMachine_flow variable */))))) * ((tmp149 * tmp149) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* pumTanSup.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* pumTanSup.heaDis.QThe_flow variable */));
    }
    tmp153 = tmp151;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* pumTanSup.PToMed.u1 variable */) = homotopy(tmp153, 0.0);
  threadData->lastEquationSolved = 1171;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5057(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5046(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5045(DATA *data, threadData_t *threadData);


/*
equation index: 1175
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.ports_H_flow[3] = semiLinear(-pumTanRet.m_flow, val8_2Rel.port_a.h_outflow, val8_2Rel.port_b.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1175};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[927]] /* junCHWRet2.vol.dynBal.ports_H_flow[3] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* val8_2Rel.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* val8_2Rel.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1175;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5072(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5073(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5076(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5075(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5074(DATA *data, threadData_t *threadData);


/*
equation index: 1181
type: SIMPLE_ASSIGN
tan.str.h[6] = (max(-pumTanRet.m_flow, 1e-7) * val8Rel.port_b.h_outflow + max(pumTanRet.m_flow, 1e-7) * tan.vol[4].ports[3].h_outflow) / (max(-pumTanRet.m_flow, 1e-7) + max(pumTanRet.m_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1625]] /* tan.str.h[6] variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1759]] /* val8Rel.port_b.h_outflow variable */)) + (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1710]] /* tan.vol[4].ports[3].h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)),1e-7) + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),1e-7),"max(-pumTanRet.m_flow, 1e-7) + max(pumTanRet.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1181;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5105(DATA *data, threadData_t *threadData);


/*
equation index: 1183
type: SIMPLE_ASSIGN
tan.str.h[1] = (max(pumTanRet.m_flow, 1e-7) * val8_2Rel.port_a.h_outflow + max(-pumTanRet.m_flow, 1e-7) * tan.vol[1].ports[3].h_outflow) / (max(pumTanRet.m_flow, 1e-7) + max(-pumTanRet.m_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1624]] /* tan.str.h[1] variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* val8_2Rel.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1707]] /* tan.vol[1].ports[3].h_outflow variable */)),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)),1e-7),"max(pumTanRet.m_flow, 1e-7) + max(-pumTanRet.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1183;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5103(DATA *data, threadData_t *threadData);


/*
equation index: 1185
type: SIMPLE_ASSIGN
tan.H_b_flow.port_a.h_outflow = max(-pumTanRet.m_flow, 1e-7) * val8Rel.port_b.h_outflow / (1e-7 + max(-pumTanRet.m_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1306]] /* tan.H_b_flow.port_a.h_outflow variable */) = (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)),1e-7)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1759]] /* val8Rel.port_b.h_outflow variable */),1e-7 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)),1e-7),"1e-7 + max(-pumTanRet.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 1185;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5098(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5099(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5077(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5078(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5115(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5116(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5117(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5079(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5080(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5081(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5082(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5083(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5085(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5086(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5087(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5088(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5089(DATA *data, threadData_t *threadData);


/*
equation index: 1203
type: SIMPLE_ASSIGN
tan.H_a_flow.port_b.h_outflow = max(pumTanRet.m_flow, 1e-7) * val8_2Rel.port_a.h_outflow / (1e-7 + max(pumTanRet.m_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1302]] /* tan.H_a_flow.port_b.h_outflow variable */) = (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),1e-7)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* val8_2Rel.port_a.h_outflow variable */),1e-7 + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),1e-7),"1e-7 + max(pumTanRet.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 1203;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5109(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5110(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5111(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5112(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5113(DATA *data, threadData_t *threadData);


/*
equation index: 1209
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.ports_H_flow[2] = semiLinear(-pumTanRet.m_flow, tan.H_b_flow.port_a.h_outflow, tan.vol[4].ports[3].h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1700]] /* tan.vol[4].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1306]] /* tan.H_b_flow.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1710]] /* tan.vol[4].ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 1209;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5041(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5097(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5118(DATA *data, threadData_t *threadData);


/*
equation index: 1213
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.ports_H_flow[2] = semiLinear(-pumTanRet.m_flow, tan.vol[4].ports[3].h_outflow, tan.vol[3].ports[3].h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1213};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1697]] /* tan.vol[3].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1710]] /* tan.vol[4].ports[3].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1709]] /* tan.vol[3].ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 1213;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5038(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5040(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5084(DATA *data, threadData_t *threadData);


/*
equation index: 1217
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.ports_H_flow[2] = semiLinear(-pumTanRet.m_flow, tan.vol[3].ports[3].h_outflow, tan.vol[2].ports[3].h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* tan.vol[2].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1709]] /* tan.vol[3].ports[3].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1708]] /* tan.vol[2].ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 1217;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5035(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5037(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5090(DATA *data, threadData_t *threadData);


/*
equation index: 1221
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.ports_H_flow[2] = semiLinear(-pumTanRet.m_flow, tan.vol[2].ports[3].h_outflow, tan.vol[1].ports[3].h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1691]] /* tan.vol[1].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1708]] /* tan.vol[2].ports[3].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1707]] /* tan.vol[1].ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 1221;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5107(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5108(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5114(DATA *data, threadData_t *threadData);


/*
equation index: 1225
type: SIMPLE_ASSIGN
tan.port_a.h_outflow = max(-pumTanRet.m_flow, 1e-7) * tan.vol[1].ports[3].h_outflow / (1e-7 + max(-pumTanRet.m_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* tan.port_a.h_outflow variable */) = (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)),1e-7)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1707]] /* tan.vol[1].ports[3].h_outflow variable */),1e-7 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)),1e-7),"1e-7 + max(-pumTanRet.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 1225;
}

/*
equation index: 1226
type: SIMPLE_ASSIGN
pumTanSup.preSou.V_flow = pumTanRet.m_flow / Modelica.Fluid.Utilities.regStep(pumTanRet.m_flow, WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.preSou.Medium.setState_phX(pumTanSup.port_a.p, val8_2Rel.port_a.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.preSou.Medium.setState_phX(tan.vol[4].p, tan.port_a.h_outflow, {})), pumTanSup.preSou.m_flow_small)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* pumTanSup.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */), omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* pumTanSup.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* val8_2Rel.port_a.h_outflow variable */), _OMC_LIT88)), omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* tan.vol[4].p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* tan.port_a.h_outflow variable */), _OMC_LIT88)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2798]] /* pumTanSup.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(pumTanRet.m_flow, WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.preSou.Medium.setState_phX(pumTanSup.port_a.p, val8_2Rel.port_a.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.preSou.Medium.setState_phX(tan.vol[4].p, tan.port_a.h_outflow, {})), pumTanSup.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 1226;
}

/*
equation index: 1227
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.ports_H_flow[2] = semiLinear(-pumTanRet.m_flow, tan.port_a.h_outflow, val8_2Rel.port_a.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1297]] /* pumTanSup.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* tan.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* val8_2Rel.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 1227;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5120(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5121(DATA *data, threadData_t *threadData);


/*
equation index: 1230
type: SIMPLE_ASSIGN
tan.port_b.h_outflow = max(pumTanRet.m_flow, 1e-7) * tan.vol[4].ports[3].h_outflow / (1e-7 + max(pumTanRet.m_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1604]] /* tan.port_b.h_outflow variable */) = (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),1e-7)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1710]] /* tan.vol[4].ports[3].h_outflow variable */),1e-7 + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),1e-7),"1e-7 + max(pumTanRet.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 1230;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5124(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5125(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5126(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5128(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5129(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5130(DATA *data, threadData_t *threadData);


/*
equation index: 1237
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.ports_H_flow[3] = semiLinear(-junCHWSup2.res2.m_flow, val8Rel.port_a.h_outflow, junCHWSup.port_3.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[951]] /* junCHWSup.vol.dynBal.ports_H_flow[3] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* junCHWSup2.res2.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* val8Rel.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* junCHWSup.port_3.h_outflow variable */));
  threadData->lastEquationSolved = 1237;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5192(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5191(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5220(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5033(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5043(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5044(DATA *data, threadData_t *threadData);


/*
equation index: 1244
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.ports_H_flow[3] = semiLinear(-junCHWRet2.res1.m_flow, val8_2Rel.port_b.h_outflow, junCHWRet.port_3.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* junCHWRet.vol.dynBal.ports_H_flow[3] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* junCHWRet2.res1.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* val8_2Rel.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* junCHWRet.port_3.h_outflow variable */));
  threadData->lastEquationSolved = 1244;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5163(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5164(DATA *data, threadData_t *threadData);


/*
equation index: 1247
type: SIMPLE_ASSIGN
val5.Kv_SI = 15.873015873015873 / sqrt(val5.dpValve_nominal)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1247};
  modelica_real tmp154;
  tmp154 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3373]] /* val5.dpValve_nominal PARAM */);
  if(!(tmp154 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val5.dpValve_nominal) was %g should be >= 0", tmp154);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3368]] /* val5.Kv_SI PARAM */) = DIVISION_SIM(15.873015873015873,sqrt(tmp154),"sqrt(val5.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 1247;
}

/*
equation index: 1248
type: SIMPLE_ASSIGN
val5.Kv = 1.1384199576606166e6 * val5.Kv_SI / val5.rhoStd
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1248};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3367]] /* val5.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3368]] /* val5.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3383]] /* val5.rhoStd PARAM */),"val5.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 1248;
}

/*
equation index: 1249
type: SIMPLE_ASSIGN
val5.Cv = 83036.13671167512 * val5.Kv_SI / (val5.rhoStd * 0.0631)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1249};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3366]] /* val5.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3368]] /* val5.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3383]] /* val5.rhoStd PARAM */)) * (0.0631),"val5.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 1249;
}

/*
equation index: 1250
type: SIMPLE_ASSIGN
val5.Av = val5.Kv_SI / sqrt(val5.rhoStd)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1250};
  modelica_real tmp155;
  tmp155 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3383]] /* val5.rhoStd PARAM */);
  if(!(tmp155 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val5.rhoStd) was %g should be >= 0", tmp155);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3365]] /* val5.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3368]] /* val5.Kv_SI PARAM */),sqrt(tmp155),"sqrt(val5.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 1250;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4356(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4357(DATA *data, threadData_t *threadData);


/*
equation index: 1253
type: SIMPLE_ASSIGN
val5.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(15.873015873015873, val5.k, val5.m_flow_turbulent), val5.dp_nominal_pos)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1723]] /* val5.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, 15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1724]] /* val5.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3382]] /* val5.m_flow_turbulent PARAM */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3375]] /* val5.dp_nominal_pos PARAM */));
  threadData->lastEquationSolved = 1253;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4359(DATA *data, threadData_t *threadData);


/*
equation index: 1255
type: SIMPLE_ASSIGN
cooTow.vol.p = val5.port_b.p - cooTow.dp
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cooTow.vol.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1731]] /* val5.port_b.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.dp variable */);
  threadData->lastEquationSolved = 1255;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4366(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4365(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4364(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4362(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4363(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4361(DATA *data, threadData_t *threadData);


/*
equation index: 1262
type: SIMPLE_ASSIGN
cooTow.T_a = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Water.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Water.setState_phX(val5.port_b.p, val5.port_b.h_outflow, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1262};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cooTow.T_a variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Water_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1731]] /* val5.port_b.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* val5.port_b.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 1262;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4484(DATA *data, threadData_t *threadData);


/*
equation index: 1264
type: SIMPLE_ASSIGN
pumCW.eff.hydDer[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1264};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2334]] /* pumCW.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1264;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5484(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5487(DATA *data, threadData_t *threadData);


/*
equation index: 1267
type: SIMPLE_ASSIGN
pumCW.eff.motDer[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1267};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2336]] /* pumCW.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1267;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5483(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5485(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5486(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5488(DATA *data, threadData_t *threadData);


/*
equation index: 1272
type: SIMPLE_ASSIGN
pumCW.PToMed.u1 = homotopy(smooth(1, pumCW.heaDis.QThe_flow), 0.0)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1272};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1136]] /* pumCW.PToMed.u1 variable */) = homotopy((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1146]] /* pumCW.heaDis.QThe_flow variable */), 0.0);
  threadData->lastEquationSolved = 1272;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5490(DATA *data, threadData_t *threadData);


/*
equation index: 1274
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.medium.T = pumCW.vol.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1274};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* pumCW.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* pumCW.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 1274;
}

/*
equation index: 1275
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.medium.T_degC = -273.15 + pumCW.vol.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* pumCW.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* pumCW.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1275;
}

/*
equation index: 1276
type: SIMPLE_ASSIGN
TCWLeaTow.port_b.h_outflow = 4184.0 * pumCW.vol.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1276};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWLeaTow.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* pumCW.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 1276;
}

/*
equation index: 1277
type: SIMPLE_ASSIGN
pumCW.preSou.V_flow = 15.873015873015873 / Modelica.Fluid.Utilities.regStep(15.873015873015873, WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.preSou.Medium.setState_phX(cooTow.vol.p, TCWLeaTow.port_b.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.preSou.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_a.h_outflow, {})), pumCW.preSou.m_flow_small)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1277};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* pumCW.preSou.V_flow variable */) = DIVISION_SIM(15.873015873015873,omc_Modelica_Fluid_Utilities_regStep(threadData, 15.873015873015873, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWLeaTow.port_b.h_outflow variable */), _OMC_LIT88)), omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_preSou_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* TCWLeaTow.port_a.h_outflow variable */), _OMC_LIT88)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2409]] /* pumCW.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(15.873015873015873, WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.preSou.Medium.setState_phX(cooTow.vol.p, TCWLeaTow.port_b.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.preSou.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_a.h_outflow, {})), pumCW.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 1277;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4369(DATA *data, threadData_t *threadData);


/*
equation index: 1279
type: SIMPLE_ASSIGN
TCWLeaTow.T_a_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.TCWLeaTow.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.TCWLeaTow.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_b.h_outflow, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* TCWLeaTow.T_a_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCWLeaTow_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCWLeaTow_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWLeaTow.port_b.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 1279;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4381(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4382(DATA *data, threadData_t *threadData);


/*
equation index: 1282
type: SIMPLE_ASSIGN
chi.TConEnt = WaterCooledChillerExample.WaterCooledChillerExample7.chi.Medium1.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.chi.Medium1.setState_phX(expVesChi.p_start, TCWLeaTow.port_b.h_outflow, {1.0}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* chi.TConEnt variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium1_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium1_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWLeaTow.port_b.h_outflow variable */), _OMC_LIT75));
  threadData->lastEquationSolved = 1282;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4353(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5199(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5197(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5198(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4389(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4348(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4388(DATA *data, threadData_t *threadData);


/*
equation index: 1290
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.U = pumCW.vol.dynBal.m * TCWLeaTow.port_b.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* pumCW.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1164]] /* pumCW.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWLeaTow.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1290;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1291(DATA*, threadData_t*);
/*
equation index: 1292
indexNonlinear: 8
type: NONLINEAR

vars: {cooTow.FRWat0}
eqns: {1291}
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1292};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1292 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */);
  retValue = solve_nonlinear_system(data, threadData, 8);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1292};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1292 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */) = data->simulationInfo->nonlinearSystemData[8].nlsx[0];
  threadData->lastEquationSolved = 1292;
}

/*
equation index: 1293
type: SIMPLE_ASSIGN
cooTow.mRef_flow = 15.873015873015873 / cooTow.FRWat0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1293};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[973]] /* cooTow.mRef_flow PARAM */) = DIVISION_SIM(15.873015873015873,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */),"cooTow.FRWat0",equationIndexes);
  threadData->lastEquationSolved = 1293;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4346(DATA *data, threadData_t *threadData);


/*
equation index: 1295
type: SIMPLE_ASSIGN
$DER.cooTow.vol.dynBal.medium.T = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[144]] /* der(cooTow.vol.dynBal.medium.T) DUMMY_DER */) = 0.0;
  threadData->lastEquationSolved = 1295;
}

/*
equation index: 1296
type: SIMPLE_ASSIGN
$DER.cooTow.vol.dynBal.medium.T_degC = $DER.cooTow.vol.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1296};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[145]] /* der(cooTow.vol.dynBal.medium.T_degC) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[144]] /* der(cooTow.vol.dynBal.medium.T) DUMMY_DER */);
  threadData->lastEquationSolved = 1296;
}

/*
equation index: 1297
type: SIMPLE_ASSIGN
$DER.val5.port_a.h_outflow = 4184.0 * $DER.cooTow.vol.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1297};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* der(val5.port_a.h_outflow) DUMMY_DER */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[145]] /* der(cooTow.vol.dynBal.medium.T_degC) DUMMY_DER */));
  threadData->lastEquationSolved = 1297;
}

/*
equation index: 1298
type: SIMPLE_ASSIGN
$DER.cooTow.vol.dynBal.U = cooTow.vol.dynBal.m * $DER.val5.port_a.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* der(cooTow.vol.dynBal.U) STATE_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* der(val5.port_a.h_outflow) DUMMY_DER */));
  threadData->lastEquationSolved = 1298;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1299(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1300(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1301(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1302(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1303(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1304(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1305(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1306(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1307(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1308(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1309(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1310(DATA*, threadData_t*);
/*
equation index: 1311
indexNonlinear: 9
type: NONLINEAR

vars: {val5.port_a.h_outflow}
eqns: {1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310}
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1311};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1311 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */);
  retValue = solve_nonlinear_system(data, threadData, 9);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1311};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1311 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[9].nlsx[0];
  threadData->lastEquationSolved = 1311;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5266(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5267(DATA *data, threadData_t *threadData);


/*
equation index: 1314
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.U = cooTow.vol.dynBal.m * val5.port_a.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1314};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* cooTow.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 1314;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5269(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5270(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5268(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5272(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5273(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5491(DATA *data, threadData_t *threadData);


/*
equation index: 1321
type: SIMPLE_ASSIGN
expVesCHW.m = expVesCHW.V_start * expVesCHW.rho_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* expVesCHW.m STATE(1,expVesCHW.port_a.m_flow) */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1224]] /* expVesCHW.V_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1229]] /* expVesCHW.rho_start PARAM */));
  threadData->lastEquationSolved = 1321;
}

/*
equation index: 1322
type: SIMPLE_ASSIGN
expVesCHW.H = expVesCHW.m * WaterCooledChillerExample.WaterCooledChillerExample7.expVesCHW.Medium.specificInternalEnergy(WaterCooledChillerExample.WaterCooledChillerExample7.expVesCHW.Medium.setState_pTX(expVesCHW.p_start, expVesCHW.T_start, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* expVesCHW.H STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* expVesCHW.m STATE(1,expVesCHW.port_a.m_flow) */)) * (omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesCHW_Medium_specificInternalEnergy(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesCHW_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* expVesCHW.T_start PARAM */), _OMC_LIT88)));
  threadData->lastEquationSolved = 1322;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4345(DATA *data, threadData_t *threadData);


/*
equation index: 1324
type: SIMPLE_ASSIGN
pumCHW.eff.hydDer[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1324};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2076]] /* pumCHW.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1324;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5493(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5496(DATA *data, threadData_t *threadData);


/*
equation index: 1327
type: SIMPLE_ASSIGN
pumCHW.eff.motDer[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1327};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2078]] /* pumCHW.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1327;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5492(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5494(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5495(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5497(DATA *data, threadData_t *threadData);


/*
equation index: 1332
type: SIMPLE_ASSIGN
pumCHW.PToMed.u1 = homotopy(smooth(1, pumCHW.heaDis.QThe_flow), 0.0)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1332};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1045]] /* pumCHW.PToMed.u1 variable */) = homotopy((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* pumCHW.heaDis.QThe_flow variable */), 0.0);
  threadData->lastEquationSolved = 1332;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5499(DATA *data, threadData_t *threadData);


/*
equation index: 1334
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.medium.T = pumCHW.vol.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1334};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* pumCHW.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2166]] /* pumCHW.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 1334;
}

/*
equation index: 1335
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.medium.T_degC = -273.15 + pumCHW.vol.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1335};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* pumCHW.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* pumCHW.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1335;
}

/*
equation index: 1336
type: SIMPLE_ASSIGN
pumCHW.port_a.h_outflow = 4184.0 * pumCHW.vol.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1336};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* pumCHW.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* pumCHW.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 1336;
}

/*
equation index: 1337
type: SIMPLE_ASSIGN
pumCHW.preSou.V_flow = 4.761904761904762 / Modelica.Fluid.Utilities.regStep(4.761904761904762, WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.preSou.Medium.setState_phX(junCHWRet.vol.p, pumCHW.port_a.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.preSou.Medium.setState_phX(chi.vol2.p, val6.port_b.h_outflow, {})), pumCHW.preSou.m_flow_small)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1337};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1063]] /* pumCHW.preSou.V_flow variable */) = DIVISION_SIM(4.761904761904762,omc_Modelica_Fluid_Utilities_regStep(threadData, 4.761904761904762, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* pumCHW.port_a.h_outflow variable */), _OMC_LIT88)), omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1737]] /* val6.port_b.h_outflow variable */), _OMC_LIT88)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2151]] /* pumCHW.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(4.761904761904762, WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.preSou.Medium.setState_phX(junCHWRet.vol.p, pumCHW.port_a.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.preSou.Medium.setState_phX(chi.vol2.p, val6.port_b.h_outflow, {})), pumCHW.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 1337;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5026(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4671(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5205(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5211(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5206(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void WaterCooledChillerExample_WaterCooledChillerExample7_functionInitialEquations_2(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[420])(DATA*, threadData_t*) = {
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5015,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_896,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4949,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4951,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_899,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4946,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4948,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_902,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4943,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4945,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_905,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4940,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4942,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_908,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_909,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_910,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5012,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_912,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4937,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4939,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5004,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_916,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5007,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_918,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5222,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5223,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5221,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5224,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5193,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5194,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5195,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5196,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5204,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5155,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5162,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5132,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_931,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5135,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_933,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4767,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4770,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4766,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4765,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4771,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4785,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4786,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4787,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4788,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4789,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4790,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4791,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4792,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4793,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4794,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4774,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4775,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4776,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4777,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4778,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4779,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4780,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4781,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4782,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4783,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4773,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4795,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4772,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4784,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4764,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4796,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4813,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4814,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4815,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4816,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4817,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4818,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4819,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4820,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4821,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4822,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4802,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4803,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4804,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4805,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4806,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4807,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4808,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4809,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4810,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4811,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4801,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4823,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4800,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4812,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4797,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4799,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4798,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4763,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4824,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4842,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4843,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4844,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4845,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4846,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4847,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4848,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4849,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4850,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4851,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4831,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4832,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4833,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4834,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4835,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4836,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4837,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4838,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4839,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4840,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4830,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4852,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4829,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4841,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4853,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4825,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4828,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4826,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4827,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4762,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4854,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1040,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4875,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4855,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4858,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4856,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4857,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4761,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4878,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4881,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4877,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4876,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4883,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4882,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4886,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4889,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4895,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4896,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4898,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1058,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4897,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4996,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5016,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4997,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4998,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4999,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4894,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4899,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4901,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1068,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4900,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4988,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4989,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4990,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4991,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4992,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4893,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4902,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4904,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1078,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4903,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4980,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4981,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4982,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4983,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4984,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4892,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4905,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4907,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1088,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4906,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4972,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4973,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4974,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4975,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4976,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4891,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4908,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4910,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1098,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4909,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4964,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4965,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4966,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4967,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4968,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4890,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4911,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4913,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1108,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4912,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4956,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4957,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4958,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4959,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4960,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4888,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4914,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4915,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4918,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4916,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4917,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1121,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4923,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4924,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4930,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5008,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4925,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4928,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4926,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4927,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4929,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4932,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4931,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5255,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1134,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4887,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5477,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5478,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5479,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1139,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5481,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5482,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5021,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5022,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5020,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5023,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5019,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5219,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5217,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5218,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5059,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1151,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1152,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5063,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5064,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5066,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5065,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5067,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5060,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1159,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5069,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1161,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5047,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1163,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1164,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5051,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5052,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5054,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5053,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5055,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5048,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1171,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5057,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5046,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5045,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1175,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5072,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5073,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5076,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5075,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5074,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1181,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5105,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1183,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5103,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1185,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5098,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5099,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5077,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5078,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5115,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5116,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5117,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5079,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5080,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5081,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5082,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5083,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5085,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5086,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5087,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5088,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5089,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1203,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5109,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5110,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5111,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5112,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5113,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1209,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5041,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5097,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5118,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1213,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5038,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5040,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5084,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1217,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5035,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5037,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5090,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1221,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5107,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5108,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5114,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1225,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1226,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1227,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5120,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5121,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1230,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5124,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5125,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5126,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5128,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5129,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5130,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1237,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5192,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5191,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5220,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5033,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5043,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5044,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1244,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5163,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5164,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1247,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1248,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1249,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1250,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4356,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4357,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1253,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4359,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1255,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4366,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4365,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4364,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4362,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4363,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4361,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1262,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4484,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1264,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5484,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5487,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1267,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5483,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5485,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5486,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5488,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1272,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5490,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1274,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1275,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1276,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1277,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4369,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1279,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4381,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4382,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1282,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4353,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5199,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5197,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5198,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4389,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4348,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4388,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1290,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1292,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1293,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4346,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1295,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1296,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1297,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1298,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1311,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5266,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5267,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1314,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5269,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5270,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5268,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5272,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5273,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5491,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1321,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1322,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4345,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1324,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5493,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5496,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1327,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5492,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5494,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5495,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5497,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1332,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5499,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1334,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1335,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1336,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1337,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5026,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4671,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5205,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5211,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5206
  };
  
  for (int id = 0; id < 420; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif