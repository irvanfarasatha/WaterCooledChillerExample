#include "WaterCooledChillerExample.WaterCooledChillerExample7_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5209(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5207(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5208(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5210(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5214(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5213(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5271(DATA *data, threadData_t *threadData);


/*
equation index: 1350
type: SIMPLE_ASSIGN
chi.TEvaEnt = WaterCooledChillerExample.WaterCooledChillerExample7.chi.Medium2.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.chi.Medium2.setState_phX(chi.vol2.p, pumCHW.port_a.h_outflow, {1.0}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* chi.TEvaEnt variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium2_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium2_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* pumCHW.port_a.h_outflow variable */), _OMC_LIT75));
  threadData->lastEquationSolved = 1350;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4394(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4663(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5212(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4342(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4393(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4669(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4670(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5500(DATA *data, threadData_t *threadData);


/*
equation index: 1359
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.U = pumCHW.vol.dynBal.m * pumCHW.port_a.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* pumCHW.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* pumCHW.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* pumCHW.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 1359;
}

/*
equation index: 1360
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.Xi[1] = 0.01
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1360};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */) = 0.01;
  threadData->lastEquationSolved = 1360;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4330(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4331(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4332(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4333(DATA *data, threadData_t *threadData);


/*
equation index: 1365
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.T = 293.15
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1365};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* cooCoi.ele[4].vol2.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 1365;
}

/*
equation index: 1366
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[4].vol2.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1366};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* cooCoi.ele[4].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* cooCoi.ele[4].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1366;
}

/*
equation index: 1367
type: SIMPLE_ASSIGN
cooCoi.port_a2.h_outflow = 1006.0 * cooCoi.ele[4].vol2.dynBal.medium.T_degC * cooCoi.ele[4].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[4].vol2.dynBal.medium.T_degC) * cooCoi.ele[4].vol2.dynBal.medium.Xi[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cooCoi.port_a2.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* cooCoi.ele[4].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cooCoi.ele[4].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* cooCoi.ele[4].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1367;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4336(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4337(DATA *data, threadData_t *threadData);


/*
equation index: 1370
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.u = -84437.5 + cooCoi.port_a2.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1370};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[4].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cooCoi.port_a2.h_outflow variable */);
  threadData->lastEquationSolved = 1370;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4340(DATA *data, threadData_t *threadData);


/*
equation index: 1372
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.T = cooCoi.ele[4].vol1.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1372};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[572]] /* cooCoi.ele[4].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[676]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 1372;
}

/*
equation index: 1373
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[4].vol1.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1373};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[576]] /* cooCoi.ele[4].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[572]] /* cooCoi.ele[4].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1373;
}

/*
equation index: 1374
type: SIMPLE_ASSIGN
cooCoi.port_b1.h_outflow = 4184.0 * cooCoi.ele[4].vol1.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1374};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cooCoi.port_b1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[576]] /* cooCoi.ele[4].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 1374;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4321(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4322(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5142(DATA *data, threadData_t *threadData);


/*
equation index: 1378
type: SIMPLE_ASSIGN
val1.port_b.h_outflow = (max(-expVesCHW.port_a.m_flow, 1e-7) * expVesCHW.port_a.h_outflow + max(cooCoi.m1_flow, 1e-7) * cooCoi.port_b1.h_outflow) / (max(-expVesCHW.port_a.m_flow, 1e-7) + max(cooCoi.m1_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1378};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* val1.port_b.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* expVesCHW.port_a.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* expVesCHW.port_a.h_outflow variable */)) + (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cooCoi.port_b1.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* expVesCHW.port_a.m_flow variable */)),1e-7) + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */),1e-7),"max(-expVesCHW.port_a.m_flow, 1e-7) + max(cooCoi.m1_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1378;
}

/*
equation index: 1379
type: SIMPLE_ASSIGN
TCHWLeaCoi.T_a_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.TCHWLeaCoi.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.TCHWLeaCoi.Medium.setState_phX(expVesCHW.p_start, val1.port_b.h_outflow, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1379};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* TCHWLeaCoi.T_a_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCHWLeaCoi_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCHWLeaCoi_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* val1.port_b.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 1379;
}

/*
equation index: 1380
type: SIMPLE_ASSIGN
valByp.port_b.h_outflow = (max(val1.m_flow, 1e-7) * val1.port_b.h_outflow + max(-junCHWRet.res1.m_flow, 1e-7) * junCHWRet.port_3.h_outflow) / (max(val1.m_flow, 1e-7) + max(-junCHWRet.res1.m_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1380};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* valByp.port_b.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* val1.port_b.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* junCHWRet.port_3.h_outflow variable */)),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */)),1e-7),"max(val1.m_flow, 1e-7) + max(-junCHWRet.res1.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1380;
}

/*
equation index: 1381
type: SIMPLE_ASSIGN
TCHWEntChi.port_a.h_outflow = (max(valByp.m_flow, 1e-7) * valByp.port_b.h_outflow + max(-junCHWSup.res2.m_flow, 1e-7) * junCHWSup.port_3.h_outflow) / (max(valByp.m_flow, 1e-7) + max(-junCHWSup.res2.m_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1381};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* TCHWEntChi.port_a.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* valByp.port_b.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* junCHWSup.port_3.h_outflow variable */)),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */)),1e-7),"max(valByp.m_flow, 1e-7) + max(-junCHWSup.res2.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1381;
}

/*
equation index: 1382
type: SIMPLE_ASSIGN
TCHWEntChi.T_b_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.TCHWEntChi.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.TCHWEntChi.Medium.setState_phX(junCHWSup.vol.p, TCHWEntChi.port_a.h_outflow, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1382};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* TCHWEntChi.T_b_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCHWEntChi_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCHWEntChi_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* TCHWEntChi.port_a.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 1382;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5172(DATA *data, threadData_t *threadData);


/*
equation index: 1384
type: SIMPLE_ASSIGN
cooCoi.temSen_1.T_a_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.temSen_1.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.temSen_1.Medium.setState_phX(junCHWSup.vol.p, TCHWEntChi.port_a.h_outflow, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[690]] /* cooCoi.temSen_1.T_a_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_temSen__1_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_temSen__1_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* TCHWEntChi.port_a.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 1384;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5171(DATA *data, threadData_t *threadData);


/*
equation index: 1386
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.U = cooCoi.ele[4].vol1.dynBal.m * cooCoi.port_b1.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1386};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* cooCoi.ele[4].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* cooCoi.ele[4].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cooCoi.port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 1386;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4328(DATA *data, threadData_t *threadData);


/*
equation index: 1388
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.Xi[1] = 0.01
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1388};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */) = 0.01;
  threadData->lastEquationSolved = 1388;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5298(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5304(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5307(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5308(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5309(DATA *data, threadData_t *threadData);


/*
equation index: 1394
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.T = 293.15
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1394};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* cooCoi.ele[3].vol2.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 1394;
}

/*
equation index: 1395
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[3].vol2.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1395};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* cooCoi.ele[3].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* cooCoi.ele[3].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1395;
}

/*
equation index: 1396
type: SIMPLE_ASSIGN
cooCoi.ele[3].port_a2.h_outflow = 1006.0 * cooCoi.ele[3].vol2.dynBal.medium.T_degC * cooCoi.ele[3].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[3].vol2.dynBal.medium.T_degC) * cooCoi.ele[3].vol2.dynBal.medium.Xi[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1396};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* cooCoi.ele[3].port_a2.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* cooCoi.ele[3].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* cooCoi.ele[3].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* cooCoi.ele[3].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1396;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5300(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5302(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5303(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5301(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5299(DATA *data, threadData_t *threadData);


/*
equation index: 1402
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.u = -84437.5 + cooCoi.ele[3].port_a2.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1402};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[3].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* cooCoi.ele[3].port_a2.h_outflow variable */);
  threadData->lastEquationSolved = 1402;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5310(DATA *data, threadData_t *threadData);


/*
equation index: 1404
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.T = cooCoi.ele[3].vol1.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1404};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[571]] /* cooCoi.ele[3].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 1404;
}

/*
equation index: 1405
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[3].vol1.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1405};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* cooCoi.ele[3].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[571]] /* cooCoi.ele[3].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1405;
}

/*
equation index: 1406
type: SIMPLE_ASSIGN
cooCoi.ele[3].port_b1.h_outflow = 4184.0 * cooCoi.ele[3].vol1.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1406};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[3].port_b1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* cooCoi.ele[3].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 1406;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4312(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4323(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4324(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5143(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4313(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5140(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5154(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4311(DATA *data, threadData_t *threadData);


/*
equation index: 1415
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m1_flow, cooCoi.port_b1.h_outflow, cooCoi.ele[3].port_b1.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1415};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[594]] /* cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cooCoi.port_b1.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[3].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 1415;
}

/*
equation index: 1416
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.U = cooCoi.ele[3].vol1.dynBal.m * cooCoi.ele[3].port_b1.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1416};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* cooCoi.ele[3].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* cooCoi.ele[3].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[3].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 1416;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4319(DATA *data, threadData_t *threadData);


/*
equation index: 1418
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.Xi[1] = 0.01
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1418};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */) = 0.01;
  threadData->lastEquationSolved = 1418;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5315(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5322(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5325(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5326(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5327(DATA *data, threadData_t *threadData);


/*
equation index: 1424
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.T = 293.15
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1424};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* cooCoi.ele[2].vol2.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 1424;
}

/*
equation index: 1425
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[2].vol2.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1425};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[2].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* cooCoi.ele[2].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1425;
}

/*
equation index: 1426
type: SIMPLE_ASSIGN
cooCoi.ele[2].port_a2.h_outflow = 1006.0 * cooCoi.ele[2].vol2.dynBal.medium.T_degC * cooCoi.ele[2].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[2].vol2.dynBal.medium.T_degC) * cooCoi.ele[2].vol2.dynBal.medium.Xi[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1426};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* cooCoi.ele[2].port_a2.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[2].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* cooCoi.ele[2].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[2].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1426;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5317(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5319(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5320(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5321(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5318(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5316(DATA *data, threadData_t *threadData);


/*
equation index: 1433
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.u = -84437.5 + cooCoi.ele[2].port_a2.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1433};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[2].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* cooCoi.ele[2].port_a2.h_outflow variable */);
  threadData->lastEquationSolved = 1433;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5328(DATA *data, threadData_t *threadData);


/*
equation index: 1435
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.T = cooCoi.ele[2].vol1.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1435};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[570]] /* cooCoi.ele[2].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[674]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 1435;
}

/*
equation index: 1436
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[2].vol1.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1436};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[574]] /* cooCoi.ele[2].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[570]] /* cooCoi.ele[2].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1436;
}

/*
equation index: 1437
type: SIMPLE_ASSIGN
cooCoi.ele[2].port_b1.h_outflow = 4184.0 * cooCoi.ele[2].vol1.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1437};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* cooCoi.ele[2].port_b1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[574]] /* cooCoi.ele[2].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 1437;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4303(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4314(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4315(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4325(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5141(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4304(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5138(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5150(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5152(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5153(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4302(DATA *data, threadData_t *threadData);


/*
equation index: 1449
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m1_flow, cooCoi.ele[3].port_b1.h_outflow, cooCoi.ele[2].port_b1.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1449};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[3].port_b1.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* cooCoi.ele[2].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 1449;
}

/*
equation index: 1450
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.U = cooCoi.ele[2].vol1.dynBal.m * cooCoi.ele[2].port_b1.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1450};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* cooCoi.ele[2].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[550]] /* cooCoi.ele[2].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* cooCoi.ele[2].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 1450;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4309(DATA *data, threadData_t *threadData);


/*
equation index: 1452
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.Xi[1] = cooCoi.ele[1].vol2.dynBal.X_start[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1452};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */);
  threadData->lastEquationSolved = 1452;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5340(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5341(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5342(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5339(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5338(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5351(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5354(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5355(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5356(DATA *data, threadData_t *threadData);


/*
equation index: 1462
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.p = cooCoi.ele[1].vol2.dynBal.p_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1462};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* cooCoi.ele[1].vol2.dynBal.p_start PARAM */);
  threadData->lastEquationSolved = 1462;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5329(DATA *data, threadData_t *threadData);


/*
equation index: 1464
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mXi[1] = cooCoi.ele[1].vol2.dynBal.m * cooCoi.ele[1].vol2.dynBal.medium.Xi[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1464};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* cooCoi.ele[1].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[601]] /* cooCoi.ele[1].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1464;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5311(DATA *data, threadData_t *threadData);


/*
equation index: 1466
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.U = cooCoi.ele[2].vol2.dynBal.m * cooCoi.ele[2].vol2.dynBal.medium.u
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1466};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* cooCoi.ele[2].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* cooCoi.ele[2].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[2].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 1466;
}

/*
equation index: 1467
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mXi[1] = cooCoi.ele[2].vol2.dynBal.m * cooCoi.ele[2].vol2.dynBal.medium.Xi[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1467};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* cooCoi.ele[2].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* cooCoi.ele[2].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1467;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5294(DATA *data, threadData_t *threadData);


/*
equation index: 1469
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.U = cooCoi.ele[3].vol2.dynBal.m * cooCoi.ele[3].vol2.dynBal.medium.u
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1469};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* cooCoi.ele[3].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* cooCoi.ele[3].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[3].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 1469;
}

/*
equation index: 1470
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mXi[1] = cooCoi.ele[3].vol2.dynBal.m * cooCoi.ele[3].vol2.dynBal.medium.Xi[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1470};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* cooCoi.ele[3].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* cooCoi.ele[3].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1470;
}

/*
equation index: 1471
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.m = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * cooCoi.ele[1].vol2.dynBal.medium.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1471};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* cooCoi.ele[4].vol2.dynBal.m STATE(1,cooCoi.ele[4].vol2.dynBal.mb_flow) */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */)));
  threadData->lastEquationSolved = 1471;
}

/*
equation index: 1472
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.U = cooCoi.ele[4].vol2.dynBal.m * cooCoi.ele[4].vol2.dynBal.medium.u
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1472};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* cooCoi.ele[4].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* cooCoi.ele[4].vol2.dynBal.m STATE(1,cooCoi.ele[4].vol2.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[4].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 1472;
}

/*
equation index: 1473
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mXi[1] = cooCoi.ele[4].vol2.dynBal.m * cooCoi.ele[4].vol2.dynBal.medium.Xi[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1473};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* cooCoi.ele[4].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* cooCoi.ele[4].vol2.dynBal.m STATE(1,cooCoi.ele[4].vol2.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1473;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5368(DATA *data, threadData_t *threadData);


void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1475(DATA*, threadData_t*);
/*
equation index: 1476
indexNonlinear: 10
type: NONLINEAR

vars: {cooCoi.m2_flow}
eqns: {1475}
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1476};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1476 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[10].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 10);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1476};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1476 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */) = data->simulationInfo->nonlinearSystemData[10].nlsx[0];
  threadData->lastEquationSolved = 1476;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5371(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5372(DATA *data, threadData_t *threadData);


/*
equation index: 1479
type: SIMPLE_ASSIGN
junOut.vol.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.m2_flow, cooCoi.ele[4].vol2.dynBal.medium.Xi[1], junOut.vol.dynBal.medium.Xi[1])
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1479};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* junOut.vol.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* junOut.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1479;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5375(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5376(DATA *data, threadData_t *threadData);


/*
equation index: 1482
type: SIMPLE_ASSIGN
junOut.vol.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m2_flow, cooCoi.port_a2.h_outflow, junOut.vol.ports[3].h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1482};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* junOut.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cooCoi.port_a2.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* junOut.vol.ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 1482;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5379(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5380(DATA *data, threadData_t *threadData);


/*
equation index: 1500
type: LINEAR

<var>$DER.cooCoi.ele[1].vol2.dynBal.medium.p</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1500};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 1500 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1500};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 1500 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = aux_x[0];

  threadData->lastEquationSolved = 1500;
}

/*
equation index: 1501
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.ele[3].m2_flow, cooCoi.ele[3].vol2.dynBal.medium.Xi[1], cooCoi.ele[4].vol2.dynBal.medium.Xi[1])
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1501};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* cooCoi.ele[4].vol2.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[3].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1501;
}

/*
equation index: 1502
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.ele[3].m2_flow, cooCoi.ele[3].port_a2.h_outflow, cooCoi.port_a2.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1502};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[3].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* cooCoi.ele[3].port_a2.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cooCoi.port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 1502;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5405(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5424(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5423(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5404(DATA *data, threadData_t *threadData);


/*
equation index: 1507
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.ele[2].m2_flow, cooCoi.ele[2].vol2.dynBal.medium.Xi[1], cooCoi.ele[3].vol2.dynBal.medium.Xi[1])
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1507};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* cooCoi.ele[3].vol2.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[2].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1507;
}

/*
equation index: 1508
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.ele[2].m2_flow, cooCoi.ele[2].port_a2.h_outflow, cooCoi.ele[3].port_a2.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1508};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[2].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* cooCoi.ele[2].port_a2.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* cooCoi.ele[3].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 1508;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5415(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5413(DATA *data, threadData_t *threadData);


/*
equation index: 1511
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.ele[1].m2_flow, cooCoi.ele[1].vol2.dynBal.medium.Xi[1], cooCoi.ele[2].vol2.dynBal.medium.Xi[1])
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1511};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* cooCoi.ele[2].vol2.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[1].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1511;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5416(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5417(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5397(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5398(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5399(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5407(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5421(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5422(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5406(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5419(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5373(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5411(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5412(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5377(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5409(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5425(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5426(DATA *data, threadData_t *threadData);


/*
equation index: 1529
type: SIMPLE_ASSIGN
cooCoi.hA.hA_2 = cooCoi.hA.hA_nominal_a * Buildings.Utilities.Math.Functions.regNonZeroPower(cooCoi.hA.fm_a, cooCoi.hA.n_a, 0.1)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* cooCoi.hA.hA_2 variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[898]] /* cooCoi.hA.hA_nominal_a PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* cooCoi.hA.fm_a variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[902]] /* cooCoi.hA.n_a PARAM */), 0.1));
  threadData->lastEquationSolved = 1529;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5429(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5448(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5449(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5450(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5452(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5453(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5454(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5442(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5443(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5444(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5445(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5446(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5447(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5436(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5439(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5440(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5441(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5358(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5359(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5360(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5361(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5362(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5363(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5364(DATA *data, threadData_t *threadData);


/*
equation index: 1554
type: SIMPLE_ASSIGN
fanSup.preSou.V_flow = 13.266998341625207 / Modelica.Fluid.Utilities.regStep(13.266998341625207, 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.medium.p, 1.1843079200592153e-5 * vol.dynBal.medium.p, fanSup.preSou.m_flow_small)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1554};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[858]] /* fanSup.preSou.V_flow variable */) = DIVISION_SIM(13.266998341625207,omc_Modelica_Fluid_Utilities_regStep(threadData, 13.266998341625207, (1.1843079200592153e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */)), (1.1843079200592153e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1806]] /* vol.dynBal.medium.p variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1473]] /* fanSup.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(13.266998341625207, 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.medium.p, 1.1843079200592153e-5 * vol.dynBal.medium.p, fanSup.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 1554;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5455(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5458(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5459(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5460(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5461(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5462(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5463(DATA *data, threadData_t *threadData);


/*
equation index: 1562
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.T = cooCoi.ele[1].vol2.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1562};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[624]] /* cooCoi.ele[1].vol2.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 1562;
}

/*
equation index: 1563
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[1].vol2.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1563};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[1].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[624]] /* cooCoi.ele[1].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1563;
}

/*
equation index: 1564
type: SIMPLE_ASSIGN
TAirSup.port_b.h_outflow = 1006.0 * cooCoi.ele[1].vol2.dynBal.medium.T_degC * cooCoi.ele[1].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[1].vol2.dynBal.medium.T_degC) * cooCoi.ele[1].vol2.dynBal.medium.Xi[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* TAirSup.port_b.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[1].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* cooCoi.ele[1].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[1].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1564;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5344(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5349(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5350(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5346(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5347(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5348(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5437(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5345(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5430(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5431(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5451(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5333(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5334(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5335(DATA *data, threadData_t *threadData);


/*
equation index: 1579
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.ele[1].m2_flow, TAirSup.port_b.h_outflow, cooCoi.ele[2].port_a2.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1579};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[1].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* TAirSup.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* cooCoi.ele[2].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 1579;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5414(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5438(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5343(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5332(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5401(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5402(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5432(DATA *data, threadData_t *threadData);


/*
equation index: 1587
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.u = -84437.5 + TAirSup.port_b.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1587};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* cooCoi.ele[1].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* TAirSup.port_b.h_outflow variable */);
  threadData->lastEquationSolved = 1587;
}

/*
equation index: 1588
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.U = cooCoi.ele[1].vol2.dynBal.m * cooCoi.ele[1].vol2.dynBal.medium.u
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1588};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* cooCoi.ele[1].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[601]] /* cooCoi.ele[1].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* cooCoi.ele[1].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 1588;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5336(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5357(DATA *data, threadData_t *threadData);


/*
equation index: 1591
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.T = cooCoi.ele[1].vol1.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1591};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[569]] /* cooCoi.ele[1].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[673]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 1591;
}

/*
equation index: 1592
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[1].vol1.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1592};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[573]] /* cooCoi.ele[1].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[569]] /* cooCoi.ele[1].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1592;
}

/*
equation index: 1593
type: SIMPLE_ASSIGN
TCHWEntChi.port_b.h_outflow = 4184.0 * cooCoi.ele[1].vol1.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1593};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[573]] /* cooCoi.ele[1].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 1593;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4297(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4305(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4306(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4316(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5139(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4298(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5136(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5137(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5144(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5433(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5434(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5435(DATA *data, threadData_t *threadData);


/*
equation index: 1606
type: SIMPLE_ASSIGN
junCHWSup.res2.port_b.h_outflow = (max(valByp.m_flow, 1e-7) * valByp.port_b.h_outflow + max(-cooCoi.m1_flow, 1e-7) * TCHWEntChi.port_b.h_outflow) / (max(valByp.m_flow, 1e-7) + max(-cooCoi.m1_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1606};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* junCHWSup.res2.port_b.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* valByp.port_b.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.port_b.h_outflow variable */)),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)),1e-7),"max(valByp.m_flow, 1e-7) + max(-cooCoi.m1_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1606;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5174(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5175(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5176(DATA *data, threadData_t *threadData);


/*
equation index: 1610
type: SIMPLE_ASSIGN
valByp.port_a.h_outflow = (max(-cooCoi.m1_flow, 1e-7) * TCHWEntChi.port_b.h_outflow + max(-junCHWSup.res2.m_flow, 1e-7) * junCHWSup.port_3.h_outflow) / (max(-cooCoi.m1_flow, 1e-7) + max(-junCHWSup.res2.m_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1610};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* valByp.port_a.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.port_b.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* junCHWSup.port_3.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */)),1e-7),"max(-cooCoi.m1_flow, 1e-7) + max(-junCHWSup.res2.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1610;
}

/*
equation index: 1611
type: SIMPLE_ASSIGN
junCHWRet.res1.port_b.h_outflow = (max(-valByp.m_flow, 1e-7) * valByp.port_a.h_outflow + max(val1.m_flow, 1e-7) * val1.port_b.h_outflow) / (max(-valByp.m_flow, 1e-7) + max(val1.m_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1611};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[884]] /* junCHWRet.res1.port_b.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* valByp.port_a.h_outflow variable */)) + (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* val1.port_b.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */)),1e-7) + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */),1e-7),"max(-valByp.m_flow, 1e-7) + max(val1.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1611;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5178(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5179(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5180(DATA *data, threadData_t *threadData);


/*
equation index: 1615
type: SIMPLE_ASSIGN
TCHWLeaCoi.port_a.h_outflow = (max(-valByp.m_flow, 1e-7) * valByp.port_a.h_outflow + max(-junCHWRet.res1.m_flow, 1e-7) * junCHWRet.port_3.h_outflow) / (max(-valByp.m_flow, 1e-7) + max(-junCHWRet.res1.m_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1615};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* TCHWLeaCoi.port_a.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* valByp.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* junCHWRet.port_3.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */)),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */)),1e-7),"max(-valByp.m_flow, 1e-7) + max(-junCHWRet.res1.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1615;
}

/*
equation index: 1616
type: SIMPLE_ASSIGN
TCHWLeaCoi.T_b_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.TCHWLeaCoi.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.TCHWLeaCoi.Medium.setState_phX(expVesCHW.p_start, TCHWLeaCoi.port_a.h_outflow, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1616};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* TCHWLeaCoi.T_b_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCHWLeaCoi_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCHWLeaCoi_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* TCHWLeaCoi.port_a.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 1616;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5183(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5184(DATA *data, threadData_t *threadData);


/*
equation index: 1619
type: SIMPLE_ASSIGN
$DER.expVesCHW.H = smooth(0, expVesCHW.port_a.m_flow * (if expVesCHW.port_a.m_flow > 0.0 then (max(-val1.m_flow, 1e-7) * TCHWLeaCoi.port_a.h_outflow + max(cooCoi.m1_flow, 1e-7) * cooCoi.port_b1.h_outflow) / (max(-val1.m_flow, 1e-7) + max(cooCoi.m1_flow, 1e-7)) else expVesCHW.port_a.h_outflow))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1619};
  modelica_boolean tmp156;
  tmp156 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* expVesCHW.port_a.m_flow variable */),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* der(expVesCHW.H) STATE_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* expVesCHW.port_a.m_flow variable */)) * ((tmp156?DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* TCHWLeaCoi.port_a.h_outflow variable */)) + (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cooCoi.port_b1.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */)),1e-7) + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */),1e-7),"max(-val1.m_flow, 1e-7) + max(cooCoi.m1_flow, 1e-7)",equationIndexes):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* expVesCHW.port_a.h_outflow variable */)));
  threadData->lastEquationSolved = 1619;
}

/*
equation index: 1620
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m1_flow, (max(-expVesCHW.port_a.m_flow, 1e-7) * expVesCHW.port_a.h_outflow + max(-val1.m_flow, 1e-7) * TCHWLeaCoi.port_a.h_outflow) / (max(-expVesCHW.port_a.m_flow, 1e-7) + max(-val1.m_flow, 1e-7)), cooCoi.port_b1.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1620};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* cooCoi.ele[4].vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)), DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* expVesCHW.port_a.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* expVesCHW.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* TCHWLeaCoi.port_a.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* expVesCHW.port_a.m_flow variable */)),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */)),1e-7),"max(-expVesCHW.port_a.m_flow, 1e-7) + max(-val1.m_flow, 1e-7)",equationIndexes), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cooCoi.port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 1620;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5186(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5187(DATA *data, threadData_t *threadData);


/*
equation index: 1623
type: SIMPLE_ASSIGN
cooCoi.ele[4].state_b1_inflow.T = 273.15 + 2.390057361376673e-4 * (max(-expVesCHW.port_a.m_flow, 1e-7) * expVesCHW.port_a.h_outflow + max(-val1.m_flow, 1e-7) * TCHWLeaCoi.port_a.h_outflow) / (max(-expVesCHW.port_a.m_flow, 1e-7) + max(-val1.m_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1623};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[537]] /* cooCoi.ele[4].state_b1_inflow.T variable */) = 273.15 + (2.390057361376673e-4) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* expVesCHW.port_a.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* expVesCHW.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* TCHWLeaCoi.port_a.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* expVesCHW.port_a.m_flow variable */)),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */)),1e-7),"max(-expVesCHW.port_a.m_flow, 1e-7) + max(-val1.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 1623;
}

/*
equation index: 1624
type: SIMPLE_ASSIGN
TCHWEntChi.T_a_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.TCHWEntChi.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.TCHWEntChi.Medium.setState_phX(junCHWSup.vol.p, TCHWEntChi.port_b.h_outflow, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1624};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* TCHWEntChi.T_a_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCHWEntChi_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCHWEntChi_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.port_b.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 1624;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5231(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5232(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5146(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5148(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5149(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4296(DATA *data, threadData_t *threadData);


/*
equation index: 1631
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m1_flow, cooCoi.ele[2].port_b1.h_outflow, TCHWEntChi.port_b.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1631};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* cooCoi.ele[1].vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* cooCoi.ele[2].port_b1.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1631;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5188(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5189(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5190(DATA *data, threadData_t *threadData);


/*
equation index: 1635
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.U = cooCoi.ele[1].vol1.dynBal.m * TCHWEntChi.port_b.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1635};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* cooCoi.ele[1].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[549]] /* cooCoi.ele[1].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1635;
}

/*
equation index: 1636
type: SIMPLE_ASSIGN
cooCoi.temSen_1.T_b_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.temSen_1.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.temSen_1.Medium.setState_phX(junCHWSup.vol.p, TCHWEntChi.port_b.h_outflow, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1636};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.temSen_1.T_b_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_temSen__1_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_temSen__1_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.port_b.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 1636;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5235(DATA *data, threadData_t *threadData);


/*
equation index: 1638
type: SIMPLE_ASSIGN
fanSup.eff.hydDer[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1638};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1401]] /* fanSup.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1638;
}

/*
equation index: 1639
type: SIMPLE_ASSIGN
fanSup.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.hydraulicEfficiency, fanSup.VMachine_flow, fanSup.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.hydraulicEfficiency, 11.05583195135434, fanSup.eff.hydDer, 1.0, 0.05))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1639};
  real_array tmp157;
  real_array tmp158;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp159;
  real_array tmp160;
  real_array tmp161;
  real_array tmp162;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp163;
  real_array tmp164;
  real_array_create(&tmp157, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1424]] /* fanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp158, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1425]] /* fanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp159, tmp157, tmp158);
  real_array_create(&tmp160, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1401]] /* fanSup.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp161, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1424]] /* fanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp162, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1425]] /* fanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp163, tmp161, tmp162);
  real_array_create(&tmp164, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1401]] /* fanSup.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* fanSup.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp159, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* fanSup.VMachine_flow variable */), tmp160, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp163, 11.05583195135434, tmp164, 1.0, 0.05));
  threadData->lastEquationSolved = 1639;
}

/*
equation index: 1640
type: SIMPLE_ASSIGN
fanSup.eff.motDer[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1640};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1403]] /* fanSup.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1640;
}

/*
equation index: 1641
type: SIMPLE_ASSIGN
fanSup.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.motorEfficiency, fanSup.VMachine_flow, fanSup.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.motorEfficiency, 11.05583195135434, fanSup.eff.motDer, 1.0, 0.05))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1641};
  real_array tmp165;
  real_array tmp166;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp167;
  real_array tmp168;
  real_array tmp169;
  real_array tmp170;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp171;
  real_array tmp172;
  real_array_create(&tmp165, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1426]] /* fanSup.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp166, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1427]] /* fanSup.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp167, tmp165, tmp166);
  real_array_create(&tmp168, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1403]] /* fanSup.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp169, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1426]] /* fanSup.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp170, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1427]] /* fanSup.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp171, tmp169, tmp170);
  real_array_create(&tmp172, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1403]] /* fanSup.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[853]] /* fanSup.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp167, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* fanSup.VMachine_flow variable */), tmp168, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp171, 11.05583195135434, tmp172, 1.0, 0.05));
  threadData->lastEquationSolved = 1641;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5367(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5464(DATA *data, threadData_t *threadData);


/*
equation index: 1644
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1644};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* pumCHW2.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1644;
}

/*
equation index: 1645
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1645};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[777]] /* cooTow2.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1645;
}

/*
equation index: 1646
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1646};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1209]] /* pumCW2.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1646;
}

/*
equation index: 1647
type: SIMPLE_ASSIGN
TWCLeaTow2.mNor_flow = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1647};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TWCLeaTow2.mNor_flow variable */) = 1.0;
  threadData->lastEquationSolved = 1647;
}

/*
equation index: 1648
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1648};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* chi2.vol1.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1648;
}

/*
equation index: 1649
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1649};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* chi2.vol2.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1649;
}

/*
equation index: 1650
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1650};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[941]] /* junCHWSup.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1650;
}

/*
equation index: 1651
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1651};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[893]] /* junCHWRet.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1651;
}

/*
equation index: 1652
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1652};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1654]] /* tan.vol[1].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1652;
}

/*
equation index: 1653
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1653};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1655]] /* tan.vol[2].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1653;
}

/*
equation index: 1654
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1654};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1656]] /* tan.vol[3].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1654;
}

/*
equation index: 1655
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1655};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1657]] /* tan.vol[4].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1655;
}

/*
equation index: 1656
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1656};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1528]] /* tan.indTanHex.vol[1].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1656;
}

/*
equation index: 1657
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1657};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1529]] /* tan.indTanHex.vol[2].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1657;
}

/*
equation index: 1658
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1658};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1530]] /* tan.indTanHex.vol[3].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1658;
}

/*
equation index: 1659
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1659};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1531]] /* tan.indTanHex.vol[4].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1659;
}

/*
equation index: 1660
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1660};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1532]] /* tan.indTanHex.vol[5].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1660;
}

/*
equation index: 1661
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1661};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1533]] /* tan.indTanHex.vol[6].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1661;
}

/*
equation index: 1662
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1662};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[917]] /* junCHWRet2.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1662;
}

/*
equation index: 1663
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1663};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[963]] /* junCHWSup2.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1663;
}

/*
equation index: 1664
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1664};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1288]] /* pumTanSup.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1664;
}

/*
equation index: 1665
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1665};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1251]] /* pumTanRet.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1665;
}

/*
equation index: 1666
type: SIMPLE_ASSIGN
cooCoi.ele[1].dp2 = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1666};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* cooCoi.ele[1].dp2 variable */) = 0.0;
  threadData->lastEquationSolved = 1666;
}

/*
equation index: 1667
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.p_bar = 1e-5 * expVesCHW.p_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1667};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* cooCoi.ele[1].vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */));
  threadData->lastEquationSolved = 1667;
}

/*
equation index: 1668
type: SIMPLE_ASSIGN
cooCoi.ele[2].dp1 = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1668};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* cooCoi.ele[2].dp1 variable */) = 0.0;
  threadData->lastEquationSolved = 1668;
}

/*
equation index: 1669
type: SIMPLE_ASSIGN
cooCoi.ele[2].dp2 = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1669};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* cooCoi.ele[2].dp2 variable */) = 0.0;
  threadData->lastEquationSolved = 1669;
}

/*
equation index: 1670
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.p_bar = 1e-5 * expVesCHW.p_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1670};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[586]] /* cooCoi.ele[2].vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */));
  threadData->lastEquationSolved = 1670;
}

/*
equation index: 1671
type: SIMPLE_ASSIGN
cooCoi.ele[3].dp1 = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1671};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* cooCoi.ele[3].dp1 variable */) = 0.0;
  threadData->lastEquationSolved = 1671;
}

/*
equation index: 1672
type: SIMPLE_ASSIGN
cooCoi.ele[3].dp2 = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1672};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[494]] /* cooCoi.ele[3].dp2 variable */) = 0.0;
  threadData->lastEquationSolved = 1672;
}

/*
equation index: 1673
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.p_bar = 1e-5 * expVesCHW.p_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1673};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[587]] /* cooCoi.ele[3].vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */));
  threadData->lastEquationSolved = 1673;
}

/*
equation index: 1674
type: SIMPLE_ASSIGN
cooCoi.ele[4].dp1 = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1674};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* cooCoi.ele[4].dp1 variable */) = 0.0;
  threadData->lastEquationSolved = 1674;
}

/*
equation index: 1675
type: SIMPLE_ASSIGN
chi.dp1 = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1675};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* chi.dp1 variable */) = 0.0;
  threadData->lastEquationSolved = 1675;
}

/*
equation index: 1676
type: SIMPLE_ASSIGN
chi.dp2 = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1676};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* chi.dp2 variable */) = 0.0;
  threadData->lastEquationSolved = 1676;
}

/*
equation index: 1677
type: SIMPLE_ASSIGN
chi2.dp1 = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1677};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[395]] /* chi2.dp1 variable */) = 0.0;
  threadData->lastEquationSolved = 1677;
}

/*
equation index: 1678
type: SIMPLE_ASSIGN
chi2.dp2 = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1678};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[396]] /* chi2.dp2 variable */) = 0.0;
  threadData->lastEquationSolved = 1678;
}

/*
equation index: 1679
type: SIMPLE_ASSIGN
tan.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1679};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1346]] /* tan.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1679;
}

/*
equation index: 1680
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.medium.p_bar = 1e-5 * expVesChi2.p_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1680};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* chi2.vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* expVesChi2.p_start PARAM */));
  threadData->lastEquationSolved = 1680;
}

/*
equation index: 1681
type: SIMPLE_ASSIGN
out.medium.p_bar = 1e-5 * weaData.pAtm
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1681};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* out.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3669]] /* weaData.pAtm PARAM */));
  threadData->lastEquationSolved = 1681;
}

/*
equation index: 1682
type: SIMPLE_ASSIGN
fanRet.vol.steBal.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1682};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[840]] /* fanRet.vol.steBal.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1682;
}

/*
equation index: 1683
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.p_bar = 1e-5 * expVesChi.p_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1683};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[357]] /* chi.vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* expVesChi.p_start PARAM */));
  threadData->lastEquationSolved = 1683;
}

/*
equation index: 1684
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.p_bar = 1e-5 * expVesCHW.p_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1684};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[588]] /* cooCoi.ele[4].vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */));
  threadData->lastEquationSolved = 1684;
}

/*
equation index: 1685
type: SIMPLE_ASSIGN
fanSup.vol.steBal.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1685};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[876]] /* fanSup.vol.steBal.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1685;
}

/*
equation index: 1686
type: SIMPLE_ASSIGN
tan.conBot.dT = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1686};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* tan.conBot.dT variable */) = 0.0;
  threadData->lastEquationSolved = 1686;
}

/*
equation index: 1687
type: SIMPLE_ASSIGN
tan.conTop.dT = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1687};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* tan.conTop.dT variable */) = 0.0;
  threadData->lastEquationSolved = 1687;
}

/*
equation index: 1688
type: SIMPLE_ASSIGN
out.medium.d = 1.1843079200592153e-5 * weaData.pAtm
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1688};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* out.medium.d variable */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3669]] /* weaData.pAtm PARAM */));
  threadData->lastEquationSolved = 1688;
}

/*
equation index: 1689
type: SIMPLE_ASSIGN
pumCW2.senMasFlo.m_flow = 15.873015873015873
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1689};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* pumCW2.senMasFlo.m_flow variable */) = 15.873015873015873;
  threadData->lastEquationSolved = 1689;
}

/*
equation index: 1690
type: SIMPLE_ASSIGN
pumCHW2.senMasFlo.m_flow = 4.761904761904762
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1690};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1112]] /* pumCHW2.senMasFlo.m_flow variable */) = 4.761904761904762;
  threadData->lastEquationSolved = 1690;
}

/*
equation index: 1691
type: SIMPLE_ASSIGN
fanRet.m_flow = 13.266998341625207
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1691};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* fanRet.m_flow variable */) = 13.266998341625207;
  threadData->lastEquationSolved = 1691;
}

/*
equation index: 1692
type: SIMPLE_ASSIGN
pumCW.senMasFlo.m_flow = 15.873015873015873
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1692};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1156]] /* pumCW.senMasFlo.m_flow variable */) = 15.873015873015873;
  threadData->lastEquationSolved = 1692;
}

/*
equation index: 1693
type: SIMPLE_ASSIGN
pumCHW.senMasFlo.m_flow = 4.761904761904762
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1693};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1067]] /* pumCHW.senMasFlo.m_flow variable */) = 4.761904761904762;
  threadData->lastEquationSolved = 1693;
}

/*
equation index: 1694
type: SIMPLE_ASSIGN
fanSup.m_flow = 13.266998341625207
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1694};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[856]] /* fanSup.m_flow variable */) = 13.266998341625207;
  threadData->lastEquationSolved = 1694;
}

/*
equation index: 1695
type: SIMPLE_ASSIGN
chi2.m1_flow = 15.873015873015873
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1695};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[398]] /* chi2.m1_flow variable */) = 15.873015873015873;
  threadData->lastEquationSolved = 1695;
}

/*
equation index: 1696
type: SIMPLE_ASSIGN
chi2.m2_flow = 4.761904761904762
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* chi2.m2_flow variable */) = 4.761904761904762;
  threadData->lastEquationSolved = 1696;
}

/*
equation index: 1697
type: SIMPLE_ASSIGN
junRet.res1.m_flow = 13.266998341625207
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* junRet.res1.m_flow variable */) = 13.266998341625207;
  threadData->lastEquationSolved = 1697;
}

/*
equation index: 1698
type: SIMPLE_ASSIGN
chi.m1_flow = 15.873015873015873
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1698};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* chi.m1_flow variable */) = 15.873015873015873;
  threadData->lastEquationSolved = 1698;
}

/*
equation index: 1699
type: SIMPLE_ASSIGN
chi.m2_flow = 4.761904761904762
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1699};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* chi.m2_flow variable */) = 4.761904761904762;
  threadData->lastEquationSolved = 1699;
}

/*
equation index: 1700
type: SIMPLE_ASSIGN
vol.ports[1].m_flow = 13.266998341625207
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1700};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1816]] /* vol.ports[1].m_flow variable */) = 13.266998341625207;
  threadData->lastEquationSolved = 1700;
}

/*
equation index: 1701
type: SIMPLE_ASSIGN
pumCHW.heatPort.Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1701};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* pumCHW.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1701;
}

/*
equation index: 1702
type: SIMPLE_ASSIGN
pumCW.heatPort.Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1702};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* pumCW.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1702;
}

/*
equation index: 1703
type: SIMPLE_ASSIGN
pumCHW2.heatPort.Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1703};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* pumCHW2.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1703;
}

/*
equation index: 1704
type: SIMPLE_ASSIGN
pumCW2.heatPort.Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1704};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1191]] /* pumCW2.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1704;
}

/*
equation index: 1705
type: SIMPLE_ASSIGN
tan.heaPorVol[1].Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1705};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1355]] /* tan.heaPorVol[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1705;
}

/*
equation index: 1706
type: SIMPLE_ASSIGN
tan.heaPorVol[2].Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1706};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1356]] /* tan.heaPorVol[2].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1706;
}

/*
equation index: 1707
type: SIMPLE_ASSIGN
tan.heaPorVol[3].Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1707};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1357]] /* tan.heaPorVol[3].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1707;
}

/*
equation index: 1708
type: SIMPLE_ASSIGN
tan.heaPorVol[4].Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1708};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* tan.heaPorVol[4].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1708;
}

/*
equation index: 1709
type: SIMPLE_ASSIGN
tan.heaPorSid.Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1709};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1352]] /* tan.heaPorSid.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1709;
}

/*
equation index: 1710
type: SIMPLE_ASSIGN
pumTanSup.heatPort.Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1710};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* pumTanSup.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1710;
}

/*
equation index: 1711
type: SIMPLE_ASSIGN
pumTanRet.heatPort.Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1711};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1236]] /* pumTanRet.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1711;
}

/*
equation index: 1712
type: SIMPLE_ASSIGN
fanSup.vol.steBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1712};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[877]] /* fanSup.vol.steBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1712;
}

/*
equation index: 1713
type: SIMPLE_ASSIGN
fanSup.heatPort.Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1713};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[854]] /* fanSup.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1713;
}

/*
equation index: 1714
type: SIMPLE_ASSIGN
fanSup.senRelPre.port_a.m_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1714};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* fanSup.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1714;
}

/*
equation index: 1715
type: SIMPLE_ASSIGN
fanSup.senRelPre.port_b.m_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1715};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[868]] /* fanSup.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1715;
}

/*
equation index: 1716
type: SIMPLE_ASSIGN
fanSup.eff.r_N = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1716};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[849]] /* fanSup.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1716;
}

/*
equation index: 1717
type: SIMPLE_ASSIGN
cooCoi.hA.x_w = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1717};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* cooCoi.hA.x_w variable */) = 1.0;
  threadData->lastEquationSolved = 1717;
}

/*
equation index: 1718
type: SIMPLE_ASSIGN
cooCoi.hA.x_a = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1718};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* cooCoi.hA.x_a variable */) = 1.0;
  threadData->lastEquationSolved = 1718;
}

/*
equation index: 1719
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1719};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* cooCoi.ele[1].vol2.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1719;
}

/*
equation index: 1720
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro2.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1720};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* cooCoi.ele[1].preDro2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1720;
}

/*
equation index: 1721
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1721};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* cooCoi.ele[2].vol2.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1721;
}

/*
equation index: 1722
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro1.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1722};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[516]] /* cooCoi.ele[2].preDro1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1722;
}

/*
equation index: 1723
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro2.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1723};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* cooCoi.ele[2].preDro2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1723;
}

/*
equation index: 1724
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1724};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* cooCoi.ele[3].vol2.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1724;
}

/*
equation index: 1725
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro1.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1725};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[517]] /* cooCoi.ele[3].preDro1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1725;
}

/*
equation index: 1726
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro2.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1726};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* cooCoi.ele[3].preDro2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1726;
}

/*
equation index: 1727
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1727};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* cooCoi.ele[4].vol2.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1727;
}

/*
equation index: 1728
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro1.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1728};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[518]] /* cooCoi.ele[4].preDro1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1728;
}

/*
equation index: 1729
type: SIMPLE_ASSIGN
pumCHW.senRelPre.port_a.m_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1729};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1070]] /* pumCHW.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1729;
}

/*
equation index: 1730
type: SIMPLE_ASSIGN
pumCHW.senRelPre.port_b.m_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1730};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* pumCHW.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1730;
}

/*
equation index: 1731
type: SIMPLE_ASSIGN
pumCHW.eff.r_N = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1731};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* pumCHW.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1731;
}

/*
equation index: 1732
type: SIMPLE_ASSIGN
cooTow.T_Vol.port.Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1732};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cooTow.T_Vol.port.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1732;
}

/*
equation index: 1733
type: SIMPLE_ASSIGN
pumCW.senRelPre.port_a.m_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1733};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1160]] /* pumCW.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1733;
}

/*
equation index: 1734
type: SIMPLE_ASSIGN
pumCW.senRelPre.port_b.m_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1734};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1162]] /* pumCW.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1734;
}

/*
equation index: 1735
type: SIMPLE_ASSIGN
pumCW.eff.r_N = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1735};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* pumCW.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1735;
}

/*
equation index: 1736
type: SIMPLE_ASSIGN
chi.preDro1.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1736};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* chi.preDro1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1736;
}

/*
equation index: 1737
type: SIMPLE_ASSIGN
chi.preDro2.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1737};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* chi.preDro2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1737;
}

/*
equation index: 1738
type: SIMPLE_ASSIGN
weaData.con30mins.y = 1800.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1738};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1847]] /* weaData.con30mins.y variable */) = 1800.0;
  threadData->lastEquationSolved = 1738;
}

/*
equation index: 1739
type: SIMPLE_ASSIGN
pumCWCon.y = 15.873015873015873
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1739};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1221]] /* pumCWCon.y variable */) = 15.873015873015873;
  threadData->lastEquationSolved = 1739;
}

/*
equation index: 1740
type: SIMPLE_ASSIGN
pumCHWCon.y = 4.761904761904762
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1740};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* pumCHWCon.y variable */) = 4.761904761904762;
  threadData->lastEquationSolved = 1740;
}

/*
equation index: 1741
type: SIMPLE_ASSIGN
vol.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1741};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1796]] /* vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1741;
}

/*
equation index: 1742
type: SIMPLE_ASSIGN
TRooAir.port.Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1742};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* TRooAir.port.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1742;
}

/*
equation index: 1743
type: SIMPLE_ASSIGN
conPIDTAirSup.Dzero.y = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1743};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* conPIDTAirSup.Dzero.y variable */) = 0.0;
  threadData->lastEquationSolved = 1743;
}

/*
equation index: 1744
type: SIMPLE_ASSIGN
fanRet.vol.steBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1744};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[841]] /* fanRet.vol.steBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1744;
}

/*
equation index: 1745
type: SIMPLE_ASSIGN
fanRet.heatPort.Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1745};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* fanRet.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1745;
}

/*
equation index: 1746
type: SIMPLE_ASSIGN
mFanFlo.y = 13.266998341625207
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1746};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* mFanFlo.y variable */) = 13.266998341625207;
  threadData->lastEquationSolved = 1746;
}

/*
equation index: 1747
type: SIMPLE_ASSIGN
fanRet.senRelPre.port_a.m_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1747};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* fanRet.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1747;
}

/*
equation index: 1748
type: SIMPLE_ASSIGN
fanRet.senRelPre.port_b.m_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1748};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* fanRet.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1748;
}

/*
equation index: 1749
type: SIMPLE_ASSIGN
fanRet.eff.r_N = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1749};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* fanRet.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1749;
}

/*
equation index: 1750
type: SIMPLE_ASSIGN
junRet.res1.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1750};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1003]] /* junRet.res1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1750;
}

/*
equation index: 1751
type: SIMPLE_ASSIGN
junRet.res2.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1751};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* junRet.res2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1751;
}

/*
equation index: 1752
type: SIMPLE_ASSIGN
junRet.res3.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1752};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* junRet.res3.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1752;
}

/*
equation index: 1753
type: SIMPLE_ASSIGN
junRet.vol.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1753};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* junRet.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1753;
}

/*
equation index: 1754
type: SIMPLE_ASSIGN
junRet.vol.heatPort.Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1754};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* junRet.vol.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1754;
}

/*
equation index: 1755
type: SIMPLE_ASSIGN
junOut.res1.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1755};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[976]] /* junOut.res1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1755;
}

/*
equation index: 1756
type: SIMPLE_ASSIGN
junOut.res2.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1756};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* junOut.res2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1756;
}

/*
equation index: 1757
type: SIMPLE_ASSIGN
junOut.res3.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1757};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[978]] /* junOut.res3.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1757;
}

/*
equation index: 1758
type: SIMPLE_ASSIGN
junOut.vol.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1758};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* junOut.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1758;
}

/*
equation index: 1759
type: SIMPLE_ASSIGN
junOut.vol.heatPort.Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1759};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* junOut.vol.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1759;
}

/*
equation index: 1760
type: SIMPLE_ASSIGN
PCHW.port_a.m_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1760};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* PCHW.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1760;
}

/*
equation index: 1761
type: SIMPLE_ASSIGN
PCHW.port_b.m_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1761};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* PCHW.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1761;
}

/*
equation index: 1762
type: SIMPLE_ASSIGN
pumCHW2.senRelPre.port_a.m_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1762};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* pumCHW2.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1762;
}

/*
equation index: 1763
type: SIMPLE_ASSIGN
pumCHW2.senRelPre.port_b.m_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1763};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* pumCHW2.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1763;
}

/*
equation index: 1764
type: SIMPLE_ASSIGN
pumCHW2.eff.r_N = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1764};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* pumCHW2.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1764;
}

/*
equation index: 1765
type: SIMPLE_ASSIGN
cooTow2.T_Vol.port.Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1765};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cooTow2.T_Vol.port.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1765;
}

/*
equation index: 1766
type: SIMPLE_ASSIGN
pumCWcon2.y = 15.873015873015873
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1766};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* pumCWcon2.y variable */) = 15.873015873015873;
  threadData->lastEquationSolved = 1766;
}

/*
equation index: 1767
type: SIMPLE_ASSIGN
pumCW2.senRelPre.port_a.m_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1767};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1203]] /* pumCW2.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1767;
}

/*
equation index: 1768
type: SIMPLE_ASSIGN
pumCW2.senRelPre.port_b.m_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1768};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* pumCW2.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1768;
}

/*
equation index: 1769
type: SIMPLE_ASSIGN
pumCW2.eff.r_N = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1769};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1184]] /* pumCW2.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1769;
}

/*
equation index: 1770
type: SIMPLE_ASSIGN
pumCHWcon2.y = 4.761904761904762
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1770};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* pumCHWcon2.y variable */) = 4.761904761904762;
  threadData->lastEquationSolved = 1770;
}

/*
equation index: 1771
type: SIMPLE_ASSIGN
chi2.preDro1.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1771};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* chi2.preDro1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1771;
}

/*
equation index: 1772
type: SIMPLE_ASSIGN
chi2.preDro2.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1772};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* chi2.preDro2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1772;
}

/*
equation index: 1773
type: SIMPLE_ASSIGN
junCHWSup.res1.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1773};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[931]] /* junCHWSup.res1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1773;
}

/*
equation index: 1774
type: SIMPLE_ASSIGN
junCHWSup.res2.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1774};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[933]] /* junCHWSup.res2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1774;
}

/*
equation index: 1775
type: SIMPLE_ASSIGN
junCHWSup.res3.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1775};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[936]] /* junCHWSup.res3.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1775;
}

/*
equation index: 1776
type: SIMPLE_ASSIGN
junCHWSup.vol.heatPort.Q_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1776};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[953]] /* junCHWSup.vol.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1776;
}

/*
equation index: 1777
type: SIMPLE_ASSIGN
junCHWRet.res1.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1777};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[882]] /* junCHWRet.res1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1777;
}

/*
equation index: 1778
type: SIMPLE_ASSIGN
junCHWRet.res2.dp = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1778};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[885]] /* junCHWRet.res2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1778;
}
OMC_DISABLE_OPT
void WaterCooledChillerExample_WaterCooledChillerExample7_functionInitialEquations_3(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[420])(DATA*, threadData_t*) = {
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5209,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5207,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5208,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5210,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5214,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5213,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5271,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1350,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4394,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4663,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5212,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4342,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4393,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4669,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4670,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5500,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1359,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1360,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4330,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4331,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4332,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4333,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1365,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1366,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1367,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4336,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4337,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1370,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4340,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1372,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1373,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1374,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4321,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4322,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5142,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1378,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1379,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1380,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1381,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1382,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5172,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1384,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5171,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1386,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4328,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1388,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5298,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5304,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5307,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5308,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5309,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1394,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1395,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1396,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5300,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5302,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5303,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5301,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5299,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1402,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5310,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1404,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1405,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1406,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4312,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4323,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4324,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5143,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4313,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5140,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5154,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4311,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1415,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1416,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4319,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1418,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5315,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5322,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5325,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5326,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5327,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1424,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1425,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1426,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5317,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5319,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5320,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5321,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5318,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5316,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1433,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5328,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1435,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1436,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1437,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4303,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4314,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4315,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4325,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5141,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4304,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5138,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5150,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5152,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5153,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4302,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1449,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1450,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4309,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1452,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5340,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5341,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5342,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5339,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5338,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5351,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5354,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5355,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5356,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1462,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5329,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1464,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5311,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1466,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1467,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5294,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1469,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1470,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1471,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1472,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1473,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5368,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1476,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5371,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5372,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1479,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5375,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5376,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1482,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5379,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5380,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1500,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1501,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1502,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5405,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5424,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5423,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5404,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1507,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1508,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5415,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5413,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1511,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5416,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5417,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5397,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5398,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5399,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5407,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5421,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5422,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5406,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5419,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5373,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5411,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5412,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5377,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5409,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5425,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5426,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1529,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5429,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5448,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5449,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5450,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5452,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5453,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5454,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5442,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5443,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5444,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5445,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5446,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5447,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5436,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5439,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5440,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5441,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5358,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5359,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5360,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5361,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5362,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5363,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5364,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1554,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5455,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5458,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5459,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5460,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5461,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5462,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5463,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1562,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1563,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1564,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5344,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5349,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5350,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5346,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5347,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5348,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5437,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5345,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5430,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5431,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5451,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5333,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5334,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5335,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1579,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5414,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5438,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5343,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5332,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5401,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5402,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5432,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1587,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1588,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5336,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5357,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1591,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1592,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1593,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4297,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4305,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4306,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4316,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5139,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4298,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5136,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5137,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5144,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5433,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5434,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5435,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1606,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5174,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5175,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5176,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1610,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1611,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5178,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5179,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5180,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1615,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1616,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5183,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5184,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1619,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1620,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5186,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5187,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1623,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1624,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5231,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5232,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5146,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5148,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5149,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4296,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1631,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5188,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5189,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5190,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1635,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1636,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5235,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1638,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1639,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1640,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1641,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5367,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5464,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1644,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1645,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1646,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1647,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1648,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1649,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1650,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1651,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1652,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1653,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1654,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1655,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1656,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1657,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1658,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1659,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1660,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1661,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1662,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1663,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1664,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1665,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1666,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1667,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1668,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1669,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1670,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1671,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1672,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1673,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1674,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1675,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1676,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1677,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1678,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1679,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1680,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1681,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1682,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1683,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1684,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1685,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1686,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1687,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1688,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1689,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1690,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1691,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1692,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1693,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1694,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1695,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1696,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1697,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1698,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1699,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1700,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1701,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1702,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1703,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1704,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1705,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1706,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1707,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1708,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1709,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1710,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1711,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1712,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1713,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1714,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1715,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1716,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1717,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1718,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1719,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1720,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1721,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1722,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1723,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1724,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1725,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1726,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1727,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1728,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1729,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1730,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1731,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1732,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1733,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1734,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1735,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1736,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1737,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1738,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1739,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1740,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1741,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1742,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1743,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1744,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1745,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1746,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1747,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1748,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1749,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1750,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1751,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1752,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1753,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1754,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1755,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1756,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1757,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1758,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1759,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1760,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1761,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1762,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1763,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1764,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1765,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1766,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1767,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1768,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1769,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1770,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1771,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1772,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1773,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1774,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1775,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1776,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1777,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1778
  };
  
  for (int id = 0; id < 420; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif