#include "outputs/WaterCooledChillerExample7_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 421
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.medium.T_degC = -273.15 + junCHWRet2.vol.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,421};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* junCHWRet2.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* junCHWRet2.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 421;
}

/*
equation index: 422
type: SIMPLE_ASSIGN
val8_2Rel.port_b.h_outflow = 4184.0 * junCHWRet2.vol.dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,422};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* val8_2Rel.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* junCHWRet2.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 422;
}

/*
equation index: 423
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.U = junCHWRet2.vol.dynBal.m * val8_2Rel.port_b.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,423};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* junCHWRet2.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[915]] /* junCHWRet2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* val8_2Rel.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 423;
}

/*
equation index: 424
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].k_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.thermalConductivity(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[6].TFlu_nominal + tan.indTanHex.hANatCyl[6].TSur_nominal), {1.0}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,424};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2997]] /* tan.indTanHex.hANatCyl[6].k_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_thermalConductivity(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2973]] /* tan.indTanHex.hANatCyl[6].TFlu_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2979]] /* tan.indTanHex.hANatCyl[6].TSur_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 424;
}

/*
equation index: 425
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].B_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.isobaricExpansionCoefficientWater(0.5 * (tan.indTanHex.hANatCyl[6].TSur_nominal + tan.indTanHex.hANatCyl[6].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,425};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2937]] /* tan.indTanHex.hANatCyl[6].B_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_isobaricExpansionCoefficientWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2979]] /* tan.indTanHex.hANatCyl[6].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2973]] /* tan.indTanHex.hANatCyl[6].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 425;
}

/*
equation index: 426
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].Pr_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.prandtlNumberWater(0.5 * (tan.indTanHex.hANatCyl[6].TSur_nominal + tan.indTanHex.hANatCyl[6].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,426};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2961]] /* tan.indTanHex.hANatCyl[6].Pr_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_prandtlNumberWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2979]] /* tan.indTanHex.hANatCyl[6].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2973]] /* tan.indTanHex.hANatCyl[6].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 426;
}

/*
equation index: 427
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].rho_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[6].TSur_nominal + tan.indTanHex.hANatCyl[6].TFlu_nominal), {1.0}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,427};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3015]] /* tan.indTanHex.hANatCyl[6].rho_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2979]] /* tan.indTanHex.hANatCyl[6].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2973]] /* tan.indTanHex.hANatCyl[6].TFlu_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 427;
}

/*
equation index: 428
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].mu_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.dynamicViscosityWater(0.5 * (tan.indTanHex.hANatCyl[6].TSur_nominal + tan.indTanHex.hANatCyl[6].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,428};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3003]] /* tan.indTanHex.hANatCyl[6].mu_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_dynamicViscosityWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2979]] /* tan.indTanHex.hANatCyl[6].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2973]] /* tan.indTanHex.hANatCyl[6].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 428;
}

/*
equation index: 429
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].nu_nominal = tan.indTanHex.hANatCyl[6].mu_nominal / tan.indTanHex.hANatCyl[6].rho_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,429};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3009]] /* tan.indTanHex.hANatCyl[6].nu_nominal PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3003]] /* tan.indTanHex.hANatCyl[6].mu_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3015]] /* tan.indTanHex.hANatCyl[6].rho_nominal PARAM */),"tan.indTanHex.hANatCyl[6].rho_nominal",equationIndexes);
  threadData->lastEquationSolved = 429;
}

/*
equation index: 430
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].Gr_nominal = 9.80665 * tan.indTanHex.hANatCyl[6].B_nominal * (tan.indTanHex.hANatCyl[6].TSur_nominal - tan.indTanHex.hANatCyl[6].TFlu_nominal) * tan.indTanHex.hANatCyl[6].ChaLen ^ 3.0 / tan.indTanHex.hANatCyl[6].nu_nominal ^ 2.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,430};
  modelica_real tmp63;
  modelica_real tmp64;
  tmp63 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2943]] /* tan.indTanHex.hANatCyl[6].ChaLen PARAM */);
  tmp64 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3009]] /* tan.indTanHex.hANatCyl[6].nu_nominal PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2949]] /* tan.indTanHex.hANatCyl[6].Gr_nominal PARAM */) = (9.80665) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2937]] /* tan.indTanHex.hANatCyl[6].B_nominal PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2979]] /* tan.indTanHex.hANatCyl[6].TSur_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2973]] /* tan.indTanHex.hANatCyl[6].TFlu_nominal PARAM */)) * (DIVISION_SIM((tmp63 * tmp63 * tmp63),(tmp64 * tmp64),"tan.indTanHex.hANatCyl[6].nu_nominal ^ 2.0",equationIndexes))));
  threadData->lastEquationSolved = 430;
}

/*
equation index: 431
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].Ra_nominal = tan.indTanHex.hANatCyl[6].Gr_nominal * tan.indTanHex.hANatCyl[6].Pr_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,431};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2967]] /* tan.indTanHex.hANatCyl[6].Ra_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2949]] /* tan.indTanHex.hANatCyl[6].Gr_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2961]] /* tan.indTanHex.hANatCyl[6].Pr_nominal PARAM */));
  threadData->lastEquationSolved = 431;
}

/*
equation index: 432
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].Nusselt_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.nusselt(tan.indTanHex.hANatCyl[6].k_nominal, tan.indTanHex.hANatCyl[6].Pr_nominal, tan.indTanHex.hANatCyl[6].Ra_nominal)
*/
void outputs_WaterCooledChillerExample7_eqFunction_432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,432};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2955]] /* tan.indTanHex.hANatCyl[6].Nusselt_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_nusselt(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2997]] /* tan.indTanHex.hANatCyl[6].k_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2961]] /* tan.indTanHex.hANatCyl[6].Pr_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2967]] /* tan.indTanHex.hANatCyl[6].Ra_nominal PARAM */));
  threadData->lastEquationSolved = 432;
}

/*
equation index: 433
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].h_nominal = tan.indTanHex.hANatCyl[6].Nusselt_nominal * tan.indTanHex.hANatCyl[6].k_nominal / tan.indTanHex.hANatCyl[6].ChaLen
*/
void outputs_WaterCooledChillerExample7_eqFunction_433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,433};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2991]] /* tan.indTanHex.hANatCyl[6].h_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2955]] /* tan.indTanHex.hANatCyl[6].Nusselt_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2997]] /* tan.indTanHex.hANatCyl[6].k_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2943]] /* tan.indTanHex.hANatCyl[6].ChaLen PARAM */),"tan.indTanHex.hANatCyl[6].ChaLen",equationIndexes));
  threadData->lastEquationSolved = 433;
}

/*
equation index: 434
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].A = tan.indTanHex.hANatCyl[6].hA_nominal / tan.indTanHex.hANatCyl[6].h_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,434};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2931]] /* tan.indTanHex.hANatCyl[6].A PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2985]] /* tan.indTanHex.hANatCyl[6].hA_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2991]] /* tan.indTanHex.hANatCyl[6].h_nominal PARAM */),"tan.indTanHex.hANatCyl[6].h_nominal",equationIndexes);
  threadData->lastEquationSolved = 434;
}

/*
equation index: 435
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].k_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.thermalConductivity(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[5].TFlu_nominal + tan.indTanHex.hANatCyl[5].TSur_nominal), {1.0}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,435};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2996]] /* tan.indTanHex.hANatCyl[5].k_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_thermalConductivity(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2972]] /* tan.indTanHex.hANatCyl[5].TFlu_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* tan.indTanHex.hANatCyl[5].TSur_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 435;
}

/*
equation index: 436
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].B_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.isobaricExpansionCoefficientWater(0.5 * (tan.indTanHex.hANatCyl[5].TSur_nominal + tan.indTanHex.hANatCyl[5].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,436};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2936]] /* tan.indTanHex.hANatCyl[5].B_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_isobaricExpansionCoefficientWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* tan.indTanHex.hANatCyl[5].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2972]] /* tan.indTanHex.hANatCyl[5].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 436;
}

/*
equation index: 437
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].Pr_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.prandtlNumberWater(0.5 * (tan.indTanHex.hANatCyl[5].TSur_nominal + tan.indTanHex.hANatCyl[5].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,437};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2960]] /* tan.indTanHex.hANatCyl[5].Pr_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_prandtlNumberWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* tan.indTanHex.hANatCyl[5].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2972]] /* tan.indTanHex.hANatCyl[5].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 437;
}

/*
equation index: 438
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].rho_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[5].TSur_nominal + tan.indTanHex.hANatCyl[5].TFlu_nominal), {1.0}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,438};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3014]] /* tan.indTanHex.hANatCyl[5].rho_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* tan.indTanHex.hANatCyl[5].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2972]] /* tan.indTanHex.hANatCyl[5].TFlu_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 438;
}

/*
equation index: 439
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].mu_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.dynamicViscosityWater(0.5 * (tan.indTanHex.hANatCyl[5].TSur_nominal + tan.indTanHex.hANatCyl[5].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,439};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3002]] /* tan.indTanHex.hANatCyl[5].mu_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_dynamicViscosityWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* tan.indTanHex.hANatCyl[5].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2972]] /* tan.indTanHex.hANatCyl[5].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 439;
}

/*
equation index: 440
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].nu_nominal = tan.indTanHex.hANatCyl[5].mu_nominal / tan.indTanHex.hANatCyl[5].rho_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,440};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3008]] /* tan.indTanHex.hANatCyl[5].nu_nominal PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3002]] /* tan.indTanHex.hANatCyl[5].mu_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3014]] /* tan.indTanHex.hANatCyl[5].rho_nominal PARAM */),"tan.indTanHex.hANatCyl[5].rho_nominal",equationIndexes);
  threadData->lastEquationSolved = 440;
}

/*
equation index: 441
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].Gr_nominal = 9.80665 * tan.indTanHex.hANatCyl[5].B_nominal * (tan.indTanHex.hANatCyl[5].TSur_nominal - tan.indTanHex.hANatCyl[5].TFlu_nominal) * tan.indTanHex.hANatCyl[5].ChaLen ^ 3.0 / tan.indTanHex.hANatCyl[5].nu_nominal ^ 2.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,441};
  modelica_real tmp65;
  modelica_real tmp66;
  tmp65 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2942]] /* tan.indTanHex.hANatCyl[5].ChaLen PARAM */);
  tmp66 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3008]] /* tan.indTanHex.hANatCyl[5].nu_nominal PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2948]] /* tan.indTanHex.hANatCyl[5].Gr_nominal PARAM */) = (9.80665) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2936]] /* tan.indTanHex.hANatCyl[5].B_nominal PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* tan.indTanHex.hANatCyl[5].TSur_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2972]] /* tan.indTanHex.hANatCyl[5].TFlu_nominal PARAM */)) * (DIVISION_SIM((tmp65 * tmp65 * tmp65),(tmp66 * tmp66),"tan.indTanHex.hANatCyl[5].nu_nominal ^ 2.0",equationIndexes))));
  threadData->lastEquationSolved = 441;
}

/*
equation index: 442
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].Ra_nominal = tan.indTanHex.hANatCyl[5].Gr_nominal * tan.indTanHex.hANatCyl[5].Pr_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,442};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2966]] /* tan.indTanHex.hANatCyl[5].Ra_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2948]] /* tan.indTanHex.hANatCyl[5].Gr_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2960]] /* tan.indTanHex.hANatCyl[5].Pr_nominal PARAM */));
  threadData->lastEquationSolved = 442;
}

/*
equation index: 443
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].Nusselt_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.nusselt(tan.indTanHex.hANatCyl[5].k_nominal, tan.indTanHex.hANatCyl[5].Pr_nominal, tan.indTanHex.hANatCyl[5].Ra_nominal)
*/
void outputs_WaterCooledChillerExample7_eqFunction_443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,443};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2954]] /* tan.indTanHex.hANatCyl[5].Nusselt_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_nusselt(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2996]] /* tan.indTanHex.hANatCyl[5].k_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2960]] /* tan.indTanHex.hANatCyl[5].Pr_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2966]] /* tan.indTanHex.hANatCyl[5].Ra_nominal PARAM */));
  threadData->lastEquationSolved = 443;
}

/*
equation index: 444
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].h_nominal = tan.indTanHex.hANatCyl[5].Nusselt_nominal * tan.indTanHex.hANatCyl[5].k_nominal / tan.indTanHex.hANatCyl[5].ChaLen
*/
void outputs_WaterCooledChillerExample7_eqFunction_444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,444};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2990]] /* tan.indTanHex.hANatCyl[5].h_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2954]] /* tan.indTanHex.hANatCyl[5].Nusselt_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2996]] /* tan.indTanHex.hANatCyl[5].k_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2942]] /* tan.indTanHex.hANatCyl[5].ChaLen PARAM */),"tan.indTanHex.hANatCyl[5].ChaLen",equationIndexes));
  threadData->lastEquationSolved = 444;
}

/*
equation index: 445
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].A = tan.indTanHex.hANatCyl[5].hA_nominal / tan.indTanHex.hANatCyl[5].h_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,445};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2930]] /* tan.indTanHex.hANatCyl[5].A PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2984]] /* tan.indTanHex.hANatCyl[5].hA_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2990]] /* tan.indTanHex.hANatCyl[5].h_nominal PARAM */),"tan.indTanHex.hANatCyl[5].h_nominal",equationIndexes);
  threadData->lastEquationSolved = 445;
}

/*
equation index: 446
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].k_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.thermalConductivity(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[4].TFlu_nominal + tan.indTanHex.hANatCyl[4].TSur_nominal), {1.0}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,446};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2995]] /* tan.indTanHex.hANatCyl[4].k_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_thermalConductivity(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2971]] /* tan.indTanHex.hANatCyl[4].TFlu_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2977]] /* tan.indTanHex.hANatCyl[4].TSur_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 446;
}

/*
equation index: 447
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].B_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.isobaricExpansionCoefficientWater(0.5 * (tan.indTanHex.hANatCyl[4].TSur_nominal + tan.indTanHex.hANatCyl[4].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,447};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2935]] /* tan.indTanHex.hANatCyl[4].B_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_isobaricExpansionCoefficientWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2977]] /* tan.indTanHex.hANatCyl[4].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2971]] /* tan.indTanHex.hANatCyl[4].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 447;
}

/*
equation index: 448
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].Pr_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.prandtlNumberWater(0.5 * (tan.indTanHex.hANatCyl[4].TSur_nominal + tan.indTanHex.hANatCyl[4].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,448};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2959]] /* tan.indTanHex.hANatCyl[4].Pr_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_prandtlNumberWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2977]] /* tan.indTanHex.hANatCyl[4].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2971]] /* tan.indTanHex.hANatCyl[4].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 448;
}

/*
equation index: 449
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].rho_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[4].TSur_nominal + tan.indTanHex.hANatCyl[4].TFlu_nominal), {1.0}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,449};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3013]] /* tan.indTanHex.hANatCyl[4].rho_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2977]] /* tan.indTanHex.hANatCyl[4].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2971]] /* tan.indTanHex.hANatCyl[4].TFlu_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 449;
}

/*
equation index: 450
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].mu_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.dynamicViscosityWater(0.5 * (tan.indTanHex.hANatCyl[4].TSur_nominal + tan.indTanHex.hANatCyl[4].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,450};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3001]] /* tan.indTanHex.hANatCyl[4].mu_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_dynamicViscosityWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2977]] /* tan.indTanHex.hANatCyl[4].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2971]] /* tan.indTanHex.hANatCyl[4].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 450;
}

/*
equation index: 451
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].nu_nominal = tan.indTanHex.hANatCyl[4].mu_nominal / tan.indTanHex.hANatCyl[4].rho_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,451};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3007]] /* tan.indTanHex.hANatCyl[4].nu_nominal PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3001]] /* tan.indTanHex.hANatCyl[4].mu_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3013]] /* tan.indTanHex.hANatCyl[4].rho_nominal PARAM */),"tan.indTanHex.hANatCyl[4].rho_nominal",equationIndexes);
  threadData->lastEquationSolved = 451;
}

/*
equation index: 452
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].Gr_nominal = 9.80665 * tan.indTanHex.hANatCyl[4].B_nominal * (tan.indTanHex.hANatCyl[4].TSur_nominal - tan.indTanHex.hANatCyl[4].TFlu_nominal) * tan.indTanHex.hANatCyl[4].ChaLen ^ 3.0 / tan.indTanHex.hANatCyl[4].nu_nominal ^ 2.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,452};
  modelica_real tmp67;
  modelica_real tmp68;
  tmp67 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2941]] /* tan.indTanHex.hANatCyl[4].ChaLen PARAM */);
  tmp68 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3007]] /* tan.indTanHex.hANatCyl[4].nu_nominal PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2947]] /* tan.indTanHex.hANatCyl[4].Gr_nominal PARAM */) = (9.80665) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2935]] /* tan.indTanHex.hANatCyl[4].B_nominal PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2977]] /* tan.indTanHex.hANatCyl[4].TSur_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2971]] /* tan.indTanHex.hANatCyl[4].TFlu_nominal PARAM */)) * (DIVISION_SIM((tmp67 * tmp67 * tmp67),(tmp68 * tmp68),"tan.indTanHex.hANatCyl[4].nu_nominal ^ 2.0",equationIndexes))));
  threadData->lastEquationSolved = 452;
}

/*
equation index: 453
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].Ra_nominal = tan.indTanHex.hANatCyl[4].Gr_nominal * tan.indTanHex.hANatCyl[4].Pr_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,453};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2965]] /* tan.indTanHex.hANatCyl[4].Ra_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2947]] /* tan.indTanHex.hANatCyl[4].Gr_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2959]] /* tan.indTanHex.hANatCyl[4].Pr_nominal PARAM */));
  threadData->lastEquationSolved = 453;
}

/*
equation index: 454
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].Nusselt_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.nusselt(tan.indTanHex.hANatCyl[4].k_nominal, tan.indTanHex.hANatCyl[4].Pr_nominal, tan.indTanHex.hANatCyl[4].Ra_nominal)
*/
void outputs_WaterCooledChillerExample7_eqFunction_454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,454};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2953]] /* tan.indTanHex.hANatCyl[4].Nusselt_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_nusselt(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2995]] /* tan.indTanHex.hANatCyl[4].k_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2959]] /* tan.indTanHex.hANatCyl[4].Pr_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2965]] /* tan.indTanHex.hANatCyl[4].Ra_nominal PARAM */));
  threadData->lastEquationSolved = 454;
}

/*
equation index: 455
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].h_nominal = tan.indTanHex.hANatCyl[4].Nusselt_nominal * tan.indTanHex.hANatCyl[4].k_nominal / tan.indTanHex.hANatCyl[4].ChaLen
*/
void outputs_WaterCooledChillerExample7_eqFunction_455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,455};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2989]] /* tan.indTanHex.hANatCyl[4].h_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2953]] /* tan.indTanHex.hANatCyl[4].Nusselt_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2995]] /* tan.indTanHex.hANatCyl[4].k_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2941]] /* tan.indTanHex.hANatCyl[4].ChaLen PARAM */),"tan.indTanHex.hANatCyl[4].ChaLen",equationIndexes));
  threadData->lastEquationSolved = 455;
}

/*
equation index: 456
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].A = tan.indTanHex.hANatCyl[4].hA_nominal / tan.indTanHex.hANatCyl[4].h_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,456};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2929]] /* tan.indTanHex.hANatCyl[4].A PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2983]] /* tan.indTanHex.hANatCyl[4].hA_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2989]] /* tan.indTanHex.hANatCyl[4].h_nominal PARAM */),"tan.indTanHex.hANatCyl[4].h_nominal",equationIndexes);
  threadData->lastEquationSolved = 456;
}

/*
equation index: 457
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].k_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.thermalConductivity(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[3].TFlu_nominal + tan.indTanHex.hANatCyl[3].TSur_nominal), {1.0}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,457};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2994]] /* tan.indTanHex.hANatCyl[3].k_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_thermalConductivity(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2970]] /* tan.indTanHex.hANatCyl[3].TFlu_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2976]] /* tan.indTanHex.hANatCyl[3].TSur_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 457;
}

/*
equation index: 458
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].B_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.isobaricExpansionCoefficientWater(0.5 * (tan.indTanHex.hANatCyl[3].TSur_nominal + tan.indTanHex.hANatCyl[3].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,458};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2934]] /* tan.indTanHex.hANatCyl[3].B_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_isobaricExpansionCoefficientWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2976]] /* tan.indTanHex.hANatCyl[3].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2970]] /* tan.indTanHex.hANatCyl[3].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 458;
}

/*
equation index: 459
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].Pr_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.prandtlNumberWater(0.5 * (tan.indTanHex.hANatCyl[3].TSur_nominal + tan.indTanHex.hANatCyl[3].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,459};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2958]] /* tan.indTanHex.hANatCyl[3].Pr_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_prandtlNumberWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2976]] /* tan.indTanHex.hANatCyl[3].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2970]] /* tan.indTanHex.hANatCyl[3].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 459;
}

/*
equation index: 460
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].rho_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[3].TSur_nominal + tan.indTanHex.hANatCyl[3].TFlu_nominal), {1.0}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,460};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3012]] /* tan.indTanHex.hANatCyl[3].rho_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2976]] /* tan.indTanHex.hANatCyl[3].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2970]] /* tan.indTanHex.hANatCyl[3].TFlu_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 460;
}

/*
equation index: 461
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].mu_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.dynamicViscosityWater(0.5 * (tan.indTanHex.hANatCyl[3].TSur_nominal + tan.indTanHex.hANatCyl[3].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,461};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3000]] /* tan.indTanHex.hANatCyl[3].mu_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_dynamicViscosityWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2976]] /* tan.indTanHex.hANatCyl[3].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2970]] /* tan.indTanHex.hANatCyl[3].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 461;
}

/*
equation index: 462
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].nu_nominal = tan.indTanHex.hANatCyl[3].mu_nominal / tan.indTanHex.hANatCyl[3].rho_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,462};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3006]] /* tan.indTanHex.hANatCyl[3].nu_nominal PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3000]] /* tan.indTanHex.hANatCyl[3].mu_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3012]] /* tan.indTanHex.hANatCyl[3].rho_nominal PARAM */),"tan.indTanHex.hANatCyl[3].rho_nominal",equationIndexes);
  threadData->lastEquationSolved = 462;
}

/*
equation index: 463
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].Gr_nominal = 9.80665 * tan.indTanHex.hANatCyl[3].B_nominal * (tan.indTanHex.hANatCyl[3].TSur_nominal - tan.indTanHex.hANatCyl[3].TFlu_nominal) * tan.indTanHex.hANatCyl[3].ChaLen ^ 3.0 / tan.indTanHex.hANatCyl[3].nu_nominal ^ 2.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,463};
  modelica_real tmp69;
  modelica_real tmp70;
  tmp69 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2940]] /* tan.indTanHex.hANatCyl[3].ChaLen PARAM */);
  tmp70 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3006]] /* tan.indTanHex.hANatCyl[3].nu_nominal PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2946]] /* tan.indTanHex.hANatCyl[3].Gr_nominal PARAM */) = (9.80665) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2934]] /* tan.indTanHex.hANatCyl[3].B_nominal PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2976]] /* tan.indTanHex.hANatCyl[3].TSur_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2970]] /* tan.indTanHex.hANatCyl[3].TFlu_nominal PARAM */)) * (DIVISION_SIM((tmp69 * tmp69 * tmp69),(tmp70 * tmp70),"tan.indTanHex.hANatCyl[3].nu_nominal ^ 2.0",equationIndexes))));
  threadData->lastEquationSolved = 463;
}

/*
equation index: 464
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].Ra_nominal = tan.indTanHex.hANatCyl[3].Gr_nominal * tan.indTanHex.hANatCyl[3].Pr_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,464};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2964]] /* tan.indTanHex.hANatCyl[3].Ra_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2946]] /* tan.indTanHex.hANatCyl[3].Gr_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2958]] /* tan.indTanHex.hANatCyl[3].Pr_nominal PARAM */));
  threadData->lastEquationSolved = 464;
}

/*
equation index: 465
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].Nusselt_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.nusselt(tan.indTanHex.hANatCyl[3].k_nominal, tan.indTanHex.hANatCyl[3].Pr_nominal, tan.indTanHex.hANatCyl[3].Ra_nominal)
*/
void outputs_WaterCooledChillerExample7_eqFunction_465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,465};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2952]] /* tan.indTanHex.hANatCyl[3].Nusselt_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_nusselt(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2994]] /* tan.indTanHex.hANatCyl[3].k_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2958]] /* tan.indTanHex.hANatCyl[3].Pr_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2964]] /* tan.indTanHex.hANatCyl[3].Ra_nominal PARAM */));
  threadData->lastEquationSolved = 465;
}

/*
equation index: 466
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].h_nominal = tan.indTanHex.hANatCyl[3].Nusselt_nominal * tan.indTanHex.hANatCyl[3].k_nominal / tan.indTanHex.hANatCyl[3].ChaLen
*/
void outputs_WaterCooledChillerExample7_eqFunction_466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,466};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2988]] /* tan.indTanHex.hANatCyl[3].h_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2952]] /* tan.indTanHex.hANatCyl[3].Nusselt_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2994]] /* tan.indTanHex.hANatCyl[3].k_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2940]] /* tan.indTanHex.hANatCyl[3].ChaLen PARAM */),"tan.indTanHex.hANatCyl[3].ChaLen",equationIndexes));
  threadData->lastEquationSolved = 466;
}

/*
equation index: 467
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].A = tan.indTanHex.hANatCyl[3].hA_nominal / tan.indTanHex.hANatCyl[3].h_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,467};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2928]] /* tan.indTanHex.hANatCyl[3].A PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2982]] /* tan.indTanHex.hANatCyl[3].hA_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2988]] /* tan.indTanHex.hANatCyl[3].h_nominal PARAM */),"tan.indTanHex.hANatCyl[3].h_nominal",equationIndexes);
  threadData->lastEquationSolved = 467;
}

/*
equation index: 468
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].k_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.thermalConductivity(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[2].TFlu_nominal + tan.indTanHex.hANatCyl[2].TSur_nominal), {1.0}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,468};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2993]] /* tan.indTanHex.hANatCyl[2].k_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_thermalConductivity(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2969]] /* tan.indTanHex.hANatCyl[2].TFlu_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2975]] /* tan.indTanHex.hANatCyl[2].TSur_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 468;
}

/*
equation index: 469
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].B_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.isobaricExpansionCoefficientWater(0.5 * (tan.indTanHex.hANatCyl[2].TSur_nominal + tan.indTanHex.hANatCyl[2].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,469};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2933]] /* tan.indTanHex.hANatCyl[2].B_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_isobaricExpansionCoefficientWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2975]] /* tan.indTanHex.hANatCyl[2].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2969]] /* tan.indTanHex.hANatCyl[2].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 469;
}

/*
equation index: 470
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].Pr_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.prandtlNumberWater(0.5 * (tan.indTanHex.hANatCyl[2].TSur_nominal + tan.indTanHex.hANatCyl[2].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,470};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2957]] /* tan.indTanHex.hANatCyl[2].Pr_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_prandtlNumberWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2975]] /* tan.indTanHex.hANatCyl[2].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2969]] /* tan.indTanHex.hANatCyl[2].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 470;
}

/*
equation index: 471
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].rho_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[2].TSur_nominal + tan.indTanHex.hANatCyl[2].TFlu_nominal), {1.0}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,471};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3011]] /* tan.indTanHex.hANatCyl[2].rho_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2975]] /* tan.indTanHex.hANatCyl[2].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2969]] /* tan.indTanHex.hANatCyl[2].TFlu_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 471;
}

/*
equation index: 472
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].mu_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.dynamicViscosityWater(0.5 * (tan.indTanHex.hANatCyl[2].TSur_nominal + tan.indTanHex.hANatCyl[2].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,472};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2999]] /* tan.indTanHex.hANatCyl[2].mu_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_dynamicViscosityWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2975]] /* tan.indTanHex.hANatCyl[2].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2969]] /* tan.indTanHex.hANatCyl[2].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 472;
}

/*
equation index: 473
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].nu_nominal = tan.indTanHex.hANatCyl[2].mu_nominal / tan.indTanHex.hANatCyl[2].rho_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,473};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3005]] /* tan.indTanHex.hANatCyl[2].nu_nominal PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2999]] /* tan.indTanHex.hANatCyl[2].mu_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3011]] /* tan.indTanHex.hANatCyl[2].rho_nominal PARAM */),"tan.indTanHex.hANatCyl[2].rho_nominal",equationIndexes);
  threadData->lastEquationSolved = 473;
}

/*
equation index: 474
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].Gr_nominal = 9.80665 * tan.indTanHex.hANatCyl[2].B_nominal * (tan.indTanHex.hANatCyl[2].TSur_nominal - tan.indTanHex.hANatCyl[2].TFlu_nominal) * tan.indTanHex.hANatCyl[2].ChaLen ^ 3.0 / tan.indTanHex.hANatCyl[2].nu_nominal ^ 2.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,474};
  modelica_real tmp71;
  modelica_real tmp72;
  tmp71 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2939]] /* tan.indTanHex.hANatCyl[2].ChaLen PARAM */);
  tmp72 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3005]] /* tan.indTanHex.hANatCyl[2].nu_nominal PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2945]] /* tan.indTanHex.hANatCyl[2].Gr_nominal PARAM */) = (9.80665) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2933]] /* tan.indTanHex.hANatCyl[2].B_nominal PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2975]] /* tan.indTanHex.hANatCyl[2].TSur_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2969]] /* tan.indTanHex.hANatCyl[2].TFlu_nominal PARAM */)) * (DIVISION_SIM((tmp71 * tmp71 * tmp71),(tmp72 * tmp72),"tan.indTanHex.hANatCyl[2].nu_nominal ^ 2.0",equationIndexes))));
  threadData->lastEquationSolved = 474;
}

/*
equation index: 475
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].Ra_nominal = tan.indTanHex.hANatCyl[2].Gr_nominal * tan.indTanHex.hANatCyl[2].Pr_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,475};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* tan.indTanHex.hANatCyl[2].Ra_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2945]] /* tan.indTanHex.hANatCyl[2].Gr_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2957]] /* tan.indTanHex.hANatCyl[2].Pr_nominal PARAM */));
  threadData->lastEquationSolved = 475;
}

/*
equation index: 476
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].Nusselt_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.nusselt(tan.indTanHex.hANatCyl[2].k_nominal, tan.indTanHex.hANatCyl[2].Pr_nominal, tan.indTanHex.hANatCyl[2].Ra_nominal)
*/
void outputs_WaterCooledChillerExample7_eqFunction_476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,476};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2951]] /* tan.indTanHex.hANatCyl[2].Nusselt_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_nusselt(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2993]] /* tan.indTanHex.hANatCyl[2].k_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2957]] /* tan.indTanHex.hANatCyl[2].Pr_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* tan.indTanHex.hANatCyl[2].Ra_nominal PARAM */));
  threadData->lastEquationSolved = 476;
}

/*
equation index: 477
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].h_nominal = tan.indTanHex.hANatCyl[2].Nusselt_nominal * tan.indTanHex.hANatCyl[2].k_nominal / tan.indTanHex.hANatCyl[2].ChaLen
*/
void outputs_WaterCooledChillerExample7_eqFunction_477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,477};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2987]] /* tan.indTanHex.hANatCyl[2].h_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2951]] /* tan.indTanHex.hANatCyl[2].Nusselt_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2993]] /* tan.indTanHex.hANatCyl[2].k_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2939]] /* tan.indTanHex.hANatCyl[2].ChaLen PARAM */),"tan.indTanHex.hANatCyl[2].ChaLen",equationIndexes));
  threadData->lastEquationSolved = 477;
}

/*
equation index: 478
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].A = tan.indTanHex.hANatCyl[2].hA_nominal / tan.indTanHex.hANatCyl[2].h_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,478};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* tan.indTanHex.hANatCyl[2].A PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2981]] /* tan.indTanHex.hANatCyl[2].hA_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2987]] /* tan.indTanHex.hANatCyl[2].h_nominal PARAM */),"tan.indTanHex.hANatCyl[2].h_nominal",equationIndexes);
  threadData->lastEquationSolved = 478;
}

/*
equation index: 479
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].k_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.thermalConductivity(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[1].TFlu_nominal + tan.indTanHex.hANatCyl[1].TSur_nominal), {1.0}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,479};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2992]] /* tan.indTanHex.hANatCyl[1].k_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_thermalConductivity(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* tan.indTanHex.hANatCyl[1].TFlu_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2974]] /* tan.indTanHex.hANatCyl[1].TSur_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 479;
}

/*
equation index: 480
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].B_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.isobaricExpansionCoefficientWater(0.5 * (tan.indTanHex.hANatCyl[1].TSur_nominal + tan.indTanHex.hANatCyl[1].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,480};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2932]] /* tan.indTanHex.hANatCyl[1].B_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_isobaricExpansionCoefficientWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2974]] /* tan.indTanHex.hANatCyl[1].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* tan.indTanHex.hANatCyl[1].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 480;
}

/*
equation index: 481
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].Pr_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.prandtlNumberWater(0.5 * (tan.indTanHex.hANatCyl[1].TSur_nominal + tan.indTanHex.hANatCyl[1].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,481};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2956]] /* tan.indTanHex.hANatCyl[1].Pr_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_prandtlNumberWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2974]] /* tan.indTanHex.hANatCyl[1].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* tan.indTanHex.hANatCyl[1].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 481;
}

/*
equation index: 482
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].rho_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[1].TSur_nominal + tan.indTanHex.hANatCyl[1].TFlu_nominal), {1.0}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,482};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3010]] /* tan.indTanHex.hANatCyl[1].rho_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2974]] /* tan.indTanHex.hANatCyl[1].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* tan.indTanHex.hANatCyl[1].TFlu_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 482;
}

/*
equation index: 483
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].mu_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.dynamicViscosityWater(0.5 * (tan.indTanHex.hANatCyl[1].TSur_nominal + tan.indTanHex.hANatCyl[1].TFlu_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,483};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2998]] /* tan.indTanHex.hANatCyl[1].mu_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_dynamicViscosityWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2974]] /* tan.indTanHex.hANatCyl[1].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* tan.indTanHex.hANatCyl[1].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 483;
}

/*
equation index: 484
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].nu_nominal = tan.indTanHex.hANatCyl[1].mu_nominal / tan.indTanHex.hANatCyl[1].rho_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,484};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3004]] /* tan.indTanHex.hANatCyl[1].nu_nominal PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2998]] /* tan.indTanHex.hANatCyl[1].mu_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3010]] /* tan.indTanHex.hANatCyl[1].rho_nominal PARAM */),"tan.indTanHex.hANatCyl[1].rho_nominal",equationIndexes);
  threadData->lastEquationSolved = 484;
}

/*
equation index: 485
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].Gr_nominal = 9.80665 * tan.indTanHex.hANatCyl[1].B_nominal * (tan.indTanHex.hANatCyl[1].TSur_nominal - tan.indTanHex.hANatCyl[1].TFlu_nominal) * tan.indTanHex.hANatCyl[1].ChaLen ^ 3.0 / tan.indTanHex.hANatCyl[1].nu_nominal ^ 2.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,485};
  modelica_real tmp73;
  modelica_real tmp74;
  tmp73 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2938]] /* tan.indTanHex.hANatCyl[1].ChaLen PARAM */);
  tmp74 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3004]] /* tan.indTanHex.hANatCyl[1].nu_nominal PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2944]] /* tan.indTanHex.hANatCyl[1].Gr_nominal PARAM */) = (9.80665) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2932]] /* tan.indTanHex.hANatCyl[1].B_nominal PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2974]] /* tan.indTanHex.hANatCyl[1].TSur_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* tan.indTanHex.hANatCyl[1].TFlu_nominal PARAM */)) * (DIVISION_SIM((tmp73 * tmp73 * tmp73),(tmp74 * tmp74),"tan.indTanHex.hANatCyl[1].nu_nominal ^ 2.0",equationIndexes))));
  threadData->lastEquationSolved = 485;
}

/*
equation index: 486
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].Ra_nominal = tan.indTanHex.hANatCyl[1].Gr_nominal * tan.indTanHex.hANatCyl[1].Pr_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,486};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2962]] /* tan.indTanHex.hANatCyl[1].Ra_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2944]] /* tan.indTanHex.hANatCyl[1].Gr_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2956]] /* tan.indTanHex.hANatCyl[1].Pr_nominal PARAM */));
  threadData->lastEquationSolved = 486;
}

/*
equation index: 487
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].Nusselt_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.nusselt(tan.indTanHex.hANatCyl[1].k_nominal, tan.indTanHex.hANatCyl[1].Pr_nominal, tan.indTanHex.hANatCyl[1].Ra_nominal)
*/
void outputs_WaterCooledChillerExample7_eqFunction_487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,487};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2950]] /* tan.indTanHex.hANatCyl[1].Nusselt_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_nusselt(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2992]] /* tan.indTanHex.hANatCyl[1].k_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2956]] /* tan.indTanHex.hANatCyl[1].Pr_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2962]] /* tan.indTanHex.hANatCyl[1].Ra_nominal PARAM */));
  threadData->lastEquationSolved = 487;
}

/*
equation index: 488
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].h_nominal = tan.indTanHex.hANatCyl[1].Nusselt_nominal * tan.indTanHex.hANatCyl[1].k_nominal / tan.indTanHex.hANatCyl[1].ChaLen
*/
void outputs_WaterCooledChillerExample7_eqFunction_488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,488};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2986]] /* tan.indTanHex.hANatCyl[1].h_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2950]] /* tan.indTanHex.hANatCyl[1].Nusselt_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2992]] /* tan.indTanHex.hANatCyl[1].k_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2938]] /* tan.indTanHex.hANatCyl[1].ChaLen PARAM */),"tan.indTanHex.hANatCyl[1].ChaLen",equationIndexes));
  threadData->lastEquationSolved = 488;
}

/*
equation index: 489
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].A = tan.indTanHex.hANatCyl[1].hA_nominal / tan.indTanHex.hANatCyl[1].h_nominal
*/
void outputs_WaterCooledChillerExample7_eqFunction_489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,489};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2926]] /* tan.indTanHex.hANatCyl[1].A PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2980]] /* tan.indTanHex.hANatCyl[1].hA_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2986]] /* tan.indTanHex.hANatCyl[1].h_nominal PARAM */),"tan.indTanHex.hANatCyl[1].h_nominal",equationIndexes);
  threadData->lastEquationSolved = 489;
}

/*
equation index: 490
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[6].s = 0.014 / (1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[6].T_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,490};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3045]] /* tan.indTanHex.hAPipIns[6].s PARAM */) = DIVISION_SIM(0.014,1.0 + (0.014) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3021]] /* tan.indTanHex.hAPipIns[6].T_nominal PARAM */)),"1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[6].T_nominal)",equationIndexes);
  threadData->lastEquationSolved = 490;
}

/*
equation index: 491
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[5].s = 0.014 / (1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[5].T_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,491};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3044]] /* tan.indTanHex.hAPipIns[5].s PARAM */) = DIVISION_SIM(0.014,1.0 + (0.014) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3020]] /* tan.indTanHex.hAPipIns[5].T_nominal PARAM */)),"1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[5].T_nominal)",equationIndexes);
  threadData->lastEquationSolved = 491;
}

/*
equation index: 492
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[4].s = 0.014 / (1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[4].T_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,492};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3043]] /* tan.indTanHex.hAPipIns[4].s PARAM */) = DIVISION_SIM(0.014,1.0 + (0.014) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3019]] /* tan.indTanHex.hAPipIns[4].T_nominal PARAM */)),"1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[4].T_nominal)",equationIndexes);
  threadData->lastEquationSolved = 492;
}

/*
equation index: 493
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[3].s = 0.014 / (1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[3].T_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,493};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3042]] /* tan.indTanHex.hAPipIns[3].s PARAM */) = DIVISION_SIM(0.014,1.0 + (0.014) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3018]] /* tan.indTanHex.hAPipIns[3].T_nominal PARAM */)),"1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[3].T_nominal)",equationIndexes);
  threadData->lastEquationSolved = 493;
}

/*
equation index: 494
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[2].s = 0.014 / (1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[2].T_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,494};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3041]] /* tan.indTanHex.hAPipIns[2].s PARAM */) = DIVISION_SIM(0.014,1.0 + (0.014) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3017]] /* tan.indTanHex.hAPipIns[2].T_nominal PARAM */)),"1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[2].T_nominal)",equationIndexes);
  threadData->lastEquationSolved = 494;
}

/*
equation index: 495
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[1].s = 0.014 / (1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[1].T_nominal))
*/
void outputs_WaterCooledChillerExample7_eqFunction_495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,495};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3040]] /* tan.indTanHex.hAPipIns[1].s PARAM */) = DIVISION_SIM(0.014,1.0 + (0.014) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3016]] /* tan.indTanHex.hAPipIns[1].T_nominal PARAM */)),"1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[1].T_nominal)",equationIndexes);
  threadData->lastEquationSolved = 495;
}

/*
equation index: 496
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.medium.T = tan.vol[4].dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,496};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1669]] /* tan.vol[4].dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3257]] /* tan.vol[4].dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 496;
}

/*
equation index: 497
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.medium.T_degC = -273.15 + tan.vol[4].dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,497};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1673]] /* tan.vol[4].dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1669]] /* tan.vol[4].dynBal.medium.T variable */);
  threadData->lastEquationSolved = 497;
}

/*
equation index: 498
type: SIMPLE_ASSIGN
tan.vol[4].ports[3].h_outflow = 4184.0 * tan.vol[4].dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,498};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1710]] /* tan.vol[4].ports[3].h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1673]] /* tan.vol[4].dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 498;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4689(DATA *data, threadData_t *threadData);


/*
equation index: 500
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.U = tan.vol[4].dynBal.m * tan.vol[4].ports[3].h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,500};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[66]] /* tan.vol[4].dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* tan.vol[4].dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1710]] /* tan.vol[4].ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 500;
}

/*
equation index: 501
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.medium.T = tan.vol[3].dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,501};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1668]] /* tan.vol[3].dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3256]] /* tan.vol[3].dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 501;
}

/*
equation index: 502
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.medium.T_degC = -273.15 + tan.vol[3].dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,502};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1672]] /* tan.vol[3].dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1668]] /* tan.vol[3].dynBal.medium.T variable */);
  threadData->lastEquationSolved = 502;
}

/*
equation index: 503
type: SIMPLE_ASSIGN
tan.vol[3].ports[3].h_outflow = 4184.0 * tan.vol[3].dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,503};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1709]] /* tan.vol[3].ports[3].h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1672]] /* tan.vol[3].dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 503;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4685(DATA *data, threadData_t *threadData);


/*
equation index: 505
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.U = tan.vol[3].dynBal.m * tan.vol[3].ports[3].h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,505};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* tan.vol[3].dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* tan.vol[3].dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1709]] /* tan.vol[3].ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 505;
}

/*
equation index: 506
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.medium.T = tan.vol[2].dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,506};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1667]] /* tan.vol[2].dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3255]] /* tan.vol[2].dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 506;
}

/*
equation index: 507
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.medium.T_degC = -273.15 + tan.vol[2].dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,507};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1671]] /* tan.vol[2].dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1667]] /* tan.vol[2].dynBal.medium.T variable */);
  threadData->lastEquationSolved = 507;
}

/*
equation index: 508
type: SIMPLE_ASSIGN
tan.vol[2].ports[3].h_outflow = 4184.0 * tan.vol[2].dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,508};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1708]] /* tan.vol[2].ports[3].h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1671]] /* tan.vol[2].dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 508;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4681(DATA *data, threadData_t *threadData);


/*
equation index: 510
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.U = tan.vol[2].dynBal.m * tan.vol[2].ports[3].h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,510};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* tan.vol[2].dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* tan.vol[2].dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1708]] /* tan.vol[2].ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 510;
}

/*
equation index: 511
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.medium.T = tan.vol[1].dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,511};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1666]] /* tan.vol[1].dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3254]] /* tan.vol[1].dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 511;
}

/*
equation index: 512
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.medium.T_degC = -273.15 + tan.vol[1].dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,512};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1670]] /* tan.vol[1].dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1666]] /* tan.vol[1].dynBal.medium.T variable */);
  threadData->lastEquationSolved = 512;
}

/*
equation index: 513
type: SIMPLE_ASSIGN
tan.vol[1].ports[3].h_outflow = 4184.0 * tan.vol[1].dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,513};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1707]] /* tan.vol[1].ports[3].h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1670]] /* tan.vol[1].dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 513;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4677(DATA *data, threadData_t *threadData);


/*
equation index: 515
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.U = tan.vol[1].dynBal.m * tan.vol[1].ports[3].h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,515};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* tan.vol[1].dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* tan.vol[1].dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1707]] /* tan.vol[1].ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 515;
}

/*
equation index: 516
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.medium.T = junCHWRet.vol.dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,516};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* junCHWRet.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1585]] /* junCHWRet.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 516;
}

/*
equation index: 517
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.medium.T_degC = -273.15 + junCHWRet.vol.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,517};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* junCHWRet.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* junCHWRet.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 517;
}

/*
equation index: 518
type: SIMPLE_ASSIGN
junCHWRet.port_3.h_outflow = 4184.0 * junCHWRet.vol.dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,518};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* junCHWRet.port_3.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* junCHWRet.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 518;
}

/*
equation index: 519
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.U = junCHWRet.vol.dynBal.m * junCHWRet.port_3.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,519};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* junCHWRet.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* junCHWRet.port_3.h_outflow variable */));
  threadData->lastEquationSolved = 519;
}

/*
equation index: 520
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.medium.T = junCHWSup.vol.dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,520};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* junCHWSup.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1751]] /* junCHWSup.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 520;
}

/*
equation index: 521
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.medium.T_degC = -273.15 + junCHWSup.vol.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,521};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[945]] /* junCHWSup.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* junCHWSup.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 521;
}

/*
equation index: 522
type: SIMPLE_ASSIGN
junCHWSup.port_3.h_outflow = 4184.0 * junCHWSup.vol.dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,522};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* junCHWSup.port_3.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[945]] /* junCHWSup.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 522;
}

/*
equation index: 523
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.U = junCHWSup.vol.dynBal.m * junCHWSup.port_3.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,523};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* junCHWSup.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[939]] /* junCHWSup.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* junCHWSup.port_3.h_outflow variable */));
  threadData->lastEquationSolved = 523;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4669(DATA *data, threadData_t *threadData);


/*
equation index: 525
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.medium.T = chi2.vol2.dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,525};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* chi2.vol2.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* chi2.vol2.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 525;
}

/*
equation index: 526
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.medium.T_degC = -273.15 + chi2.vol2.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,526};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* chi2.vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* chi2.vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 526;
}

/*
equation index: 527
type: SIMPLE_ASSIGN
chi2.port_a2.h_outflow = 4184.0 * chi2.vol2.dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,527};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* chi2.port_a2.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* chi2.vol2.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 527;
}

/*
equation index: 528
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.U = chi2.vol2.dynBal.m * chi2.port_a2.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,528};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* chi2.vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* chi2.vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* chi2.port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 528;
}

/*
equation index: 529
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.medium.T = chi2.vol1.dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* chi2.vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* chi2.vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 529;
}

/*
equation index: 530
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.medium.T_degC = -273.15 + chi2.vol1.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,530};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* chi2.vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* chi2.vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 530;
}

/*
equation index: 531
type: SIMPLE_ASSIGN
chi2.port_a1.h_outflow = 4184.0 * chi2.vol1.dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,531};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* chi2.port_a1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* chi2.vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 531;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4641(DATA *data, threadData_t *threadData);


/*
equation index: 533
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.U = chi2.vol1.dynBal.m * chi2.port_a1.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,533};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* chi2.vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* chi2.vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* chi2.port_a1.h_outflow variable */));
  threadData->lastEquationSolved = 533;
}

/*
equation index: 534
type: SIMPLE_ASSIGN
TWCLeaTow2.T_b_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.TWCLeaTow2.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.TWCLeaTow2.Medium.setState_phX(expVesChi2.p_start, chi2.port_a1.h_outflow, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,534};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TWCLeaTow2.T_b_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_TWCLeaTow2_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_TWCLeaTow2_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* expVesChi2.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* chi2.port_a1.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 534;
}

/*
equation index: 535
type: SIMPLE_ASSIGN
TWCLeaTow2.T = TWCLeaTow2.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,535};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* TWCLeaTow2.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* TWCLeaTow2.T_start PARAM */);
  threadData->lastEquationSolved = 535;
}

/*
equation index: 536
type: SIMPLE_ASSIGN
val7.Kv_SI = 15.873015873015873 / sqrt(val7.dpValve_nominal)
*/
void outputs_WaterCooledChillerExample7_eqFunction_536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,536};
  modelica_real tmp75;
  tmp75 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3421]] /* val7.dpValve_nominal PARAM */);
  if(!(tmp75 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val7.dpValve_nominal) was %g should be >= 0", tmp75);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3416]] /* val7.Kv_SI PARAM */) = DIVISION_SIM(15.873015873015873,sqrt(tmp75),"sqrt(val7.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 536;
}

/*
equation index: 537
type: SIMPLE_ASSIGN
val7.Kv = 1.1384199576606166e6 * val7.Kv_SI / val7.rhoStd
*/
void outputs_WaterCooledChillerExample7_eqFunction_537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,537};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3415]] /* val7.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3416]] /* val7.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3431]] /* val7.rhoStd PARAM */),"val7.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 537;
}

/*
equation index: 538
type: SIMPLE_ASSIGN
val7.Cv = 83036.13671167512 * val7.Kv_SI / (val7.rhoStd * 0.0631)
*/
void outputs_WaterCooledChillerExample7_eqFunction_538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,538};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3414]] /* val7.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3416]] /* val7.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3431]] /* val7.rhoStd PARAM */)) * (0.0631),"val7.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 538;
}

/*
equation index: 539
type: SIMPLE_ASSIGN
val7.Av = val7.Kv_SI / sqrt(val7.rhoStd)
*/
void outputs_WaterCooledChillerExample7_eqFunction_539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,539};
  modelica_real tmp76;
  tmp76 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3431]] /* val7.rhoStd PARAM */);
  if(!(tmp76 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val7.rhoStd) was %g should be >= 0", tmp76);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3413]] /* val7.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3416]] /* val7.Kv_SI PARAM */),sqrt(tmp76),"sqrt(val7.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 539;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4626(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4627(DATA *data, threadData_t *threadData);


/*
equation index: 542
type: SIMPLE_ASSIGN
val7.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(15.873015873015873, val7.k, val7.m_flow_turbulent), val7.dp_nominal_pos)
*/
void outputs_WaterCooledChillerExample7_eqFunction_542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,542};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* val7.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, 15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* val7.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3430]] /* val7.m_flow_turbulent PARAM */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3423]] /* val7.dp_nominal_pos PARAM */));
  threadData->lastEquationSolved = 542;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4629(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4630(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4633(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4632(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4631(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4634(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4635(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4636(DATA *data, threadData_t *threadData);


/*
equation index: 551
type: SIMPLE_ASSIGN
expVesChi2.m = expVesChi2.V_start * expVesChi2.rho_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,551};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* expVesChi2.m STATE(1) */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* expVesChi2.V_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* expVesChi2.rho_start PARAM */));
  threadData->lastEquationSolved = 551;
}

/*
equation index: 552
type: SIMPLE_ASSIGN
expVesChi2.H = expVesChi2.m * WaterCooledChillerExample.WaterCooledChillerExample7.expVesChi2.Medium.specificInternalEnergy(WaterCooledChillerExample.WaterCooledChillerExample7.expVesChi2.Medium.setState_pTX(expVesChi2.p_start, expVesChi2.T_start, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,552};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* expVesChi2.H STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* expVesChi2.m STATE(1) */)) * (omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi2_Medium_specificInternalEnergy(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi2_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* expVesChi2.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1241]] /* expVesChi2.T_start PARAM */), _OMC_LIT88)));
  threadData->lastEquationSolved = 552;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4625(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4652(DATA *data, threadData_t *threadData);


/*
equation index: 555
type: SIMPLE_ASSIGN
cooTow2.T_a = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Water.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Water.setState_phX(val7.port_b.p, val7.port_b.h_outflow, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,555};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cooTow2.T_a variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Water_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1747]] /* val7.port_b.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* val7.port_b.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 555;
}

/*
equation index: 556
type: SIMPLE_ASSIGN
pumCW2.eff.hydDer[1] = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,556};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2462]] /* pumCW2.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 556;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5470(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5473(DATA *data, threadData_t *threadData);


/*
equation index: 559
type: SIMPLE_ASSIGN
pumCW2.eff.motDer[1] = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,559};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2464]] /* pumCW2.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 559;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5469(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5471(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5472(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5474(DATA *data, threadData_t *threadData);


/*
equation index: 564
type: SIMPLE_ASSIGN
pumCW2.PToMed.u1 = homotopy(smooth(1, pumCW2.heaDis.QThe_flow), 0.0)
*/
void outputs_WaterCooledChillerExample7_eqFunction_564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* pumCW2.PToMed.u1 variable */) = homotopy((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* pumCW2.heaDis.QThe_flow variable */), 0.0);
  threadData->lastEquationSolved = 564;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5476(DATA *data, threadData_t *threadData);


/*
equation index: 566
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.medium.T = pumCW2.vol.dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,566};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* pumCW2.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2552]] /* pumCW2.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 566;
}

/*
equation index: 567
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.medium.T_degC = -273.15 + pumCW2.vol.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* pumCW2.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* pumCW2.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 567;
}

/*
equation index: 568
type: SIMPLE_ASSIGN
TWCLeaTow2.port_b.h_outflow = 4184.0 * pumCW2.vol.dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,568};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TWCLeaTow2.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* pumCW2.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 568;
}

/*
equation index: 569
type: SIMPLE_ASSIGN
pumCW2.preSou.V_flow = 15.873015873015873 / Modelica.Fluid.Utilities.regStep(15.873015873015873, WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.preSou.Medium.setState_phX(cooTow2.vol.p, TWCLeaTow2.port_b.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.preSou.Medium.setState_phX(expVesChi2.p_start, chi2.port_a1.h_outflow, {})), pumCW2.preSou.m_flow_small)
*/
void outputs_WaterCooledChillerExample7_eqFunction_569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,569};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* pumCW2.preSou.V_flow variable */) = DIVISION_SIM(15.873015873015873,omc_Modelica_Fluid_Utilities_regStep(threadData, 15.873015873015873, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TWCLeaTow2.port_b.h_outflow variable */), _OMC_LIT88)), omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_preSou_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* expVesChi2.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* chi2.port_a1.h_outflow variable */), _OMC_LIT88)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2537]] /* pumCW2.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(15.873015873015873, WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.preSou.Medium.setState_phX(cooTow2.vol.p, TWCLeaTow2.port_b.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.preSou.Medium.setState_phX(expVesChi2.p_start, chi2.port_a1.h_outflow, {})), pumCW2.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 569;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4639(DATA *data, threadData_t *threadData);


/*
equation index: 571
type: SIMPLE_ASSIGN
chi2.TConEnt = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.Medium1.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.chi2.Medium1.setState_phX(expVesChi2.p_start, TWCLeaTow2.port_b.h_outflow, {1.0}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,571};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* chi2.TConEnt variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium1_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium1_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* expVesChi2.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TWCLeaTow2.port_b.h_outflow variable */), _OMC_LIT75));
  threadData->lastEquationSolved = 571;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4618(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4657(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4615(DATA *data, threadData_t *threadData);


/*
equation index: 575
type: SIMPLE_ASSIGN
TWCLeaTow2.T_a_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.TWCLeaTow2.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.TWCLeaTow2.Medium.setState_phX(expVesChi2.p_start, TWCLeaTow2.port_b.h_outflow, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,575};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* TWCLeaTow2.T_a_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_TWCLeaTow2_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_TWCLeaTow2_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* expVesChi2.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TWCLeaTow2.port_b.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 575;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4648(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4649(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4656(DATA *data, threadData_t *threadData);


/*
equation index: 579
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.U = pumCW2.vol.dynBal.m * TWCLeaTow2.port_b.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,579};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* pumCW2.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1207]] /* pumCW2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TWCLeaTow2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 579;
}

void outputs_WaterCooledChillerExample7_eqFunction_580(DATA*, threadData_t*);
/*
equation index: 581
indexNonlinear: 0
type: NONLINEAR

vars: {cooTow2.FRWat0}
eqns: {580}
*/
void outputs_WaterCooledChillerExample7_eqFunction_581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,581};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 581 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */);
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,581};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 581 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */) = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  threadData->lastEquationSolved = 581;
}

/*
equation index: 582
type: SIMPLE_ASSIGN
cooTow2.mRef_flow = 15.873015873015873 / cooTow2.FRWat0
*/
void outputs_WaterCooledChillerExample7_eqFunction_582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,582};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1057]] /* cooTow2.mRef_flow PARAM */) = DIVISION_SIM(15.873015873015873,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */),"cooTow2.FRWat0",equationIndexes);
  threadData->lastEquationSolved = 582;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4613(DATA *data, threadData_t *threadData);


/*
equation index: 584
type: SIMPLE_ASSIGN
$DER.cooTow2.vol.dynBal.medium.T = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,584};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* der(cooTow2.vol.dynBal.medium.T) DUMMY_DER */) = 0.0;
  threadData->lastEquationSolved = 584;
}

/*
equation index: 585
type: SIMPLE_ASSIGN
$DER.cooTow2.vol.dynBal.medium.T_degC = $DER.cooTow2.vol.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,585};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* der(cooTow2.vol.dynBal.medium.T_degC) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* der(cooTow2.vol.dynBal.medium.T) DUMMY_DER */);
  threadData->lastEquationSolved = 585;
}

/*
equation index: 586
type: SIMPLE_ASSIGN
$DER.val7.port_a.h_outflow = 4184.0 * $DER.cooTow2.vol.dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,586};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* der(val7.port_a.h_outflow) DUMMY_DER */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* der(cooTow2.vol.dynBal.medium.T_degC) DUMMY_DER */));
  threadData->lastEquationSolved = 586;
}

/*
equation index: 587
type: SIMPLE_ASSIGN
$DER.cooTow2.vol.dynBal.U = cooTow2.vol.dynBal.m * $DER.val7.port_a.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,587};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* der(cooTow2.vol.dynBal.U) STATE_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* cooTow2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* der(val7.port_a.h_outflow) DUMMY_DER */));
  threadData->lastEquationSolved = 587;
}

/*
equation index: 588
type: SIMPLE_ASSIGN
val8.Kv_SI = 4.761904761904762 / sqrt(val8.dpValve_nominal)
*/
void outputs_WaterCooledChillerExample7_eqFunction_588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,588};
  modelica_real tmp77;
  tmp77 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3445]] /* val8.dpValve_nominal PARAM */);
  if(!(tmp77 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8.dpValve_nominal) was %g should be >= 0", tmp77);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3440]] /* val8.Kv_SI PARAM */) = DIVISION_SIM(4.761904761904762,sqrt(tmp77),"sqrt(val8.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 588;
}

/*
equation index: 589
type: SIMPLE_ASSIGN
val8.Kv = 1.1384199576606166e6 * val8.Kv_SI / val8.rhoStd
*/
void outputs_WaterCooledChillerExample7_eqFunction_589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,589};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3439]] /* val8.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3440]] /* val8.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3455]] /* val8.rhoStd PARAM */),"val8.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 589;
}

/*
equation index: 590
type: SIMPLE_ASSIGN
val8.Cv = 83036.13671167512 * val8.Kv_SI / (val8.rhoStd * 0.0631)
*/
void outputs_WaterCooledChillerExample7_eqFunction_590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,590};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3438]] /* val8.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3440]] /* val8.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3455]] /* val8.rhoStd PARAM */)) * (0.0631),"val8.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 590;
}

/*
equation index: 591
type: SIMPLE_ASSIGN
val8.Av = val8.Kv_SI / sqrt(val8.rhoStd)
*/
void outputs_WaterCooledChillerExample7_eqFunction_591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,591};
  modelica_real tmp78;
  tmp78 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3455]] /* val8.rhoStd PARAM */);
  if(!(tmp78 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8.rhoStd) was %g should be >= 0", tmp78);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3437]] /* val8.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3440]] /* val8.Kv_SI PARAM */),sqrt(tmp78),"sqrt(val8.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 591;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4611(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4612(DATA *data, threadData_t *threadData);


/*
equation index: 594
type: SIMPLE_ASSIGN
pumCHW2.eff.hydDer[1] = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,594};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2204]] /* pumCHW2.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 594;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5479(DATA *data, threadData_t *threadData);


/*
equation index: 596
type: SIMPLE_ASSIGN
pumCHW2.eff.motDer[1] = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,596};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2206]] /* pumCHW2.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 596;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5478(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5480(DATA *data, threadData_t *threadData);


/*
equation index: 599
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.medium.T = pumCHW2.vol.dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,599};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* pumCHW2.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2294]] /* pumCHW2.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 599;
}

/*
equation index: 600
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.medium.T_degC = -273.15 + pumCHW2.vol.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,600};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* pumCHW2.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* pumCHW2.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 600;
}

/*
equation index: 601
type: SIMPLE_ASSIGN
pumCHW2.port_b.h_outflow = 4184.0 * pumCHW2.vol.dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,601};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* pumCHW2.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* pumCHW2.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 601;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4662(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4608(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4661(DATA *data, threadData_t *threadData);


/*
equation index: 605
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.U = pumCHW2.vol.dynBal.m * pumCHW2.port_b.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,605};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* pumCHW2.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* pumCHW2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* pumCHW2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 605;
}

/*
equation index: 606
type: SIMPLE_ASSIGN
junOut.vol.dynBal.medium.Xi[1] = junOut.vol.dynBal.X_start[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,606};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* junOut.vol.dynBal.medium.Xi[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* junOut.vol.dynBal.X_start[1] PARAM */);
  threadData->lastEquationSolved = 606;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4584(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4585(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4586(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4592(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4593(DATA *data, threadData_t *threadData);


/*
equation index: 612
type: SIMPLE_ASSIGN
junOut.vol.dynBal.medium.p = junOut.vol.dynBal.p_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,612};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* junOut.vol.dynBal.medium.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1932]] /* junOut.vol.dynBal.p_start PARAM */);
  threadData->lastEquationSolved = 612;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4576(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4573(DATA *data, threadData_t *threadData);


void outputs_WaterCooledChillerExample7_eqFunction_615(DATA*, threadData_t*);
/*
equation index: 616
indexNonlinear: 1
type: NONLINEAR

vars: {damOA.m_flow}
eqns: {615}
*/
void outputs_WaterCooledChillerExample7_eqFunction_616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,616};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 616 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,616};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 616 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  threadData->lastEquationSolved = 616;
}

/*
equation index: 617
type: SIMPLE_ASSIGN
junOut.vol.dynBal.m = 1.1843079200592153e-5 * junOut.vol.dynBal.fluidVolume * junOut.vol.dynBal.medium.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,617};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* junOut.vol.dynBal.m STATE(1,junOut.vol.dynBal.mb_flow) */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1929]] /* junOut.vol.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* junOut.vol.dynBal.medium.p variable */)));
  threadData->lastEquationSolved = 617;
}

/*
equation index: 618
type: SIMPLE_ASSIGN
junOut.vol.dynBal.mXi[1] = junOut.vol.dynBal.m * junOut.vol.dynBal.medium.Xi[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,618};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* junOut.vol.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* junOut.vol.dynBal.m STATE(1,junOut.vol.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* junOut.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 618;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4577(DATA *data, threadData_t *threadData);


/*
equation index: 620
type: SIMPLE_ASSIGN
junOut.vol.dynBal.medium.T = junOut.vol.dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,620};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* junOut.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junOut.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 620;
}

/*
equation index: 621
type: SIMPLE_ASSIGN
junOut.vol.dynBal.medium.T_degC = -273.15 + junOut.vol.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,621};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* junOut.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* junOut.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 621;
}

/*
equation index: 622
type: SIMPLE_ASSIGN
junOut.vol.ports[3].h_outflow = 1006.0 * junOut.vol.dynBal.medium.T_degC * junOut.vol.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * junOut.vol.dynBal.medium.T_degC) * junOut.vol.dynBal.medium.Xi[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,622};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* junOut.vol.ports[3].h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* junOut.vol.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* junOut.vol.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* junOut.vol.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* junOut.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 622;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4596(DATA *data, threadData_t *threadData);


/*
equation index: 624
type: SIMPLE_ASSIGN
junOut.vol.dynBal.medium.u = -84437.5 + junOut.vol.ports[3].h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,624};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* junOut.vol.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* junOut.vol.ports[3].h_outflow variable */);
  threadData->lastEquationSolved = 624;
}

/*
equation index: 625
type: SIMPLE_ASSIGN
junOut.vol.dynBal.U = junOut.vol.dynBal.m * junOut.vol.dynBal.medium.u
*/
void outputs_WaterCooledChillerExample7_eqFunction_625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,625};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* junOut.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* junOut.vol.dynBal.m STATE(1,junOut.vol.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* junOut.vol.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 625;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4604(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4605(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4606(DATA *data, threadData_t *threadData);


/*
equation index: 629
type: SIMPLE_ASSIGN
junRet.vol.dynBal.medium.Xi[1] = junRet.vol.dynBal.X_start[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,629};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* junRet.vol.dynBal.medium.Xi[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2025]] /* junRet.vol.dynBal.X_start[1] PARAM */);
  threadData->lastEquationSolved = 629;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4555(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4556(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4557(DATA *data, threadData_t *threadData);


/*
equation index: 633
type: SIMPLE_ASSIGN
junRet.vol.dynBal.medium.p = junRet.vol.dynBal.p_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,633};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* junRet.vol.dynBal.medium.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2031]] /* junRet.vol.dynBal.p_start PARAM */);
  threadData->lastEquationSolved = 633;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4546(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4543(DATA *data, threadData_t *threadData);


void outputs_WaterCooledChillerExample7_eqFunction_636(DATA*, threadData_t*);
/*
equation index: 637
indexNonlinear: 2
type: NONLINEAR

vars: {damEA.m_flow}
eqns: {636}
*/
void outputs_WaterCooledChillerExample7_eqFunction_637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,637};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 637 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,637};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 637 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */) = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  threadData->lastEquationSolved = 637;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4578(DATA *data, threadData_t *threadData);


void outputs_WaterCooledChillerExample7_eqFunction_639(DATA*, threadData_t*);
/*
equation index: 640
indexNonlinear: 3
type: NONLINEAR

vars: {damRet.m_flow}
eqns: {639}
*/
void outputs_WaterCooledChillerExample7_eqFunction_640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,640};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 640 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,640};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 640 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  threadData->lastEquationSolved = 640;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4590(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4581(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4582(DATA *data, threadData_t *threadData);


/*
equation index: 644
type: SIMPLE_ASSIGN
junRet.vol.dynBal.ports_mXi_flow[3,1] = semiLinear(-damRet.m_flow, junOut.vol.dynBal.medium.Xi[1], junRet.vol.dynBal.medium.Xi[1])
*/
void outputs_WaterCooledChillerExample7_eqFunction_644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,644};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* junRet.vol.dynBal.ports_mXi_flow[3,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* junOut.vol.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* junRet.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 644;
}

/*
equation index: 645
type: SIMPLE_ASSIGN
junRet.vol.dynBal.m = 1.1843079200592153e-5 * junRet.vol.dynBal.fluidVolume * junRet.vol.dynBal.medium.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,645};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* junRet.vol.dynBal.m STATE(1,junRet.vol.dynBal.mb_flow) */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2028]] /* junRet.vol.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* junRet.vol.dynBal.medium.p variable */)));
  threadData->lastEquationSolved = 645;
}

/*
equation index: 646
type: SIMPLE_ASSIGN
junRet.vol.dynBal.mXi[1] = junRet.vol.dynBal.m * junRet.vol.dynBal.medium.Xi[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,646};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* junRet.vol.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* junRet.vol.dynBal.m STATE(1,junRet.vol.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* junRet.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 646;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4547(DATA *data, threadData_t *threadData);


/*
equation index: 648
type: SIMPLE_ASSIGN
junRet.vol.dynBal.medium.T = junRet.vol.dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,648};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* junRet.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2024]] /* junRet.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 648;
}

/*
equation index: 649
type: SIMPLE_ASSIGN
junRet.vol.dynBal.medium.T_degC = -273.15 + junRet.vol.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,649};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* junRet.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* junRet.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 649;
}

/*
equation index: 650
type: SIMPLE_ASSIGN
fanRet.port_a.h_outflow = 1006.0 * junRet.vol.dynBal.medium.T_degC * junRet.vol.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * junRet.vol.dynBal.medium.T_degC) * junRet.vol.dynBal.medium.Xi[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,650};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* fanRet.port_a.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* junRet.vol.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* junRet.vol.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* junRet.vol.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* junRet.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 650;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4564(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4602(DATA *data, threadData_t *threadData);


/*
equation index: 653
type: SIMPLE_ASSIGN
junRet.vol.dynBal.ports_H_flow[3] = semiLinear(-damRet.m_flow, junOut.vol.ports[3].h_outflow, fanRet.port_a.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,653};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* junRet.vol.dynBal.ports_H_flow[3] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* junOut.vol.ports[3].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* fanRet.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 653;
}

/*
equation index: 654
type: SIMPLE_ASSIGN
junRet.vol.dynBal.medium.u = -84437.5 + fanRet.port_a.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,654};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* junRet.vol.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* fanRet.port_a.h_outflow variable */);
  threadData->lastEquationSolved = 654;
}

/*
equation index: 655
type: SIMPLE_ASSIGN
junRet.vol.dynBal.U = junRet.vol.dynBal.m * junRet.vol.dynBal.medium.u
*/
void outputs_WaterCooledChillerExample7_eqFunction_655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,655};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* junRet.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* junRet.vol.dynBal.m STATE(1,junRet.vol.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* junRet.vol.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 655;
}

/*
equation index: 656
type: SIMPLE_ASSIGN
fanRet.eff.hydDer[1] = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,656};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* fanRet.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 656;
}

/*
equation index: 657
type: SIMPLE_ASSIGN
fanRet.eff.motDer[1] = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,657};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* fanRet.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 657;
}

/*
equation index: 658
type: SIMPLE_ASSIGN
conPIDTAirSup.I.y = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,658};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* conPIDTAirSup.I.y STATE(1) */) = 0.0;
  threadData->lastEquationSolved = 658;
}

/*
equation index: 659
type: SIMPLE_ASSIGN
vol.dynBal.medium.Xi[1] = vol.dynBal.X_start[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,659};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1804]] /* vol.dynBal.medium.Xi[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3607]] /* vol.dynBal.X_start[1] PARAM */);
  threadData->lastEquationSolved = 659;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4560(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4559(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4558(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4509(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4510(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4511(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4512(DATA *data, threadData_t *threadData);


/*
equation index: 667
type: SIMPLE_ASSIGN
vol.dynBal.medium.p = vol.dynBal.p_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,667};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1806]] /* vol.dynBal.medium.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3613]] /* vol.dynBal.p_start PARAM */);
  threadData->lastEquationSolved = 667;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4501(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4502(DATA *data, threadData_t *threadData);


/*
equation index: 670
type: SIMPLE_ASSIGN
fanRet.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.motorEfficiency, fanRet.VMachine_flow, fanRet.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.motorEfficiency, 11.05583195135434, fanRet.eff.motDer, 1.0, 0.05))
*/
void outputs_WaterCooledChillerExample7_eqFunction_670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,670};
  real_array tmp79;
  real_array tmp80;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp81;
  real_array tmp82;
  real_array tmp83;
  real_array tmp84;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp85;
  real_array tmp86;
  real_array_create(&tmp79, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* fanRet.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp80, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* fanRet.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp81, tmp79, tmp80);
  real_array_create(&tmp82, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* fanRet.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp83, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* fanRet.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp84, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* fanRet.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp85, tmp83, tmp84);
  real_array_create(&tmp86, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* fanRet.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* fanRet.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp81, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* fanRet.VMachine_flow variable */), tmp82, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp85, 11.05583195135434, tmp86, 1.0, 0.05));
  threadData->lastEquationSolved = 670;
}

/*
equation index: 671
type: SIMPLE_ASSIGN
fanRet.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.hydraulicEfficiency, fanRet.VMachine_flow, fanRet.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.hydraulicEfficiency, 11.05583195135434, fanRet.eff.hydDer, 1.0, 0.05))
*/
void outputs_WaterCooledChillerExample7_eqFunction_671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,671};
  real_array tmp87;
  real_array tmp88;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp89;
  real_array tmp90;
  real_array tmp91;
  real_array tmp92;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp93;
  real_array tmp94;
  real_array_create(&tmp87, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* fanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp88, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* fanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp89, tmp87, tmp88);
  real_array_create(&tmp90, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* fanRet.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp91, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* fanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp92, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* fanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp93, tmp91, tmp92);
  real_array_create(&tmp94, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* fanRet.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* fanRet.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp89, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* fanRet.VMachine_flow variable */), tmp90, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp93, 11.05583195135434, tmp94, 1.0, 0.05));
  threadData->lastEquationSolved = 671;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4506(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4503(DATA *data, threadData_t *threadData);


/*
equation index: 674
type: SIMPLE_ASSIGN
fanRet.preSou.V_flow = 13.266998341625207 / Modelica.Fluid.Utilities.regStep(13.266998341625207, 1.1843079200592153e-5 * vol.dynBal.medium.p, 1.1843079200592153e-5 * junRet.vol.dynBal.medium.p, fanRet.preSou.m_flow_small)
*/
void outputs_WaterCooledChillerExample7_eqFunction_674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,674};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[822]] /* fanRet.preSou.V_flow variable */) = DIVISION_SIM(13.266998341625207,omc_Modelica_Fluid_Utilities_regStep(threadData, 13.266998341625207, (1.1843079200592153e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1806]] /* vol.dynBal.medium.p variable */)), (1.1843079200592153e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* junRet.vol.dynBal.medium.p variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* fanRet.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(13.266998341625207, 1.1843079200592153e-5 * vol.dynBal.medium.p, 1.1843079200592153e-5 * junRet.vol.dynBal.medium.p, fanRet.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 674;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4551(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4500(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4548(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4549(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4550(DATA *data, threadData_t *threadData);


/*
equation index: 680
type: SIMPLE_ASSIGN
vol.dynBal.m = 1.1843079200592153e-5 * vol.dynBal.fluidVolume * vol.dynBal.medium.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,680};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* vol.dynBal.m STATE(1) */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3610]] /* vol.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1806]] /* vol.dynBal.medium.p variable */)));
  threadData->lastEquationSolved = 680;
}

/*
equation index: 681
type: SIMPLE_ASSIGN
vol.dynBal.mXi[1] = vol.dynBal.m * vol.dynBal.medium.Xi[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,681};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* vol.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* vol.dynBal.m STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1804]] /* vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 681;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4507(DATA *data, threadData_t *threadData);


/*
equation index: 683
type: SIMPLE_ASSIGN
vol.dynBal.medium.T = 293.15
*/
void outputs_WaterCooledChillerExample7_eqFunction_683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,683};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1801]] /* vol.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 683;
}

/*
equation index: 684
type: SIMPLE_ASSIGN
vol.dynBal.medium.T_degC = -273.15 + vol.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,684};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1802]] /* vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1801]] /* vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 684;
}

/*
equation index: 685
type: SIMPLE_ASSIGN
vol.ports[2].h_outflow = 1006.0 * vol.dynBal.medium.T_degC * vol.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * vol.dynBal.medium.T_degC) * vol.dynBal.medium.Xi[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,685};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* vol.ports[2].h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1802]] /* vol.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1803]] /* vol.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1802]] /* vol.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1804]] /* vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 685;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4515(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4524(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4570(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4568(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4569(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4567(DATA *data, threadData_t *threadData);


/*
equation index: 692
type: SIMPLE_ASSIGN
vol.dynBal.medium.u = -84437.5 + vol.ports[2].h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,692};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1808]] /* vol.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* vol.ports[2].h_outflow variable */);
  threadData->lastEquationSolved = 692;
}

/*
equation index: 693
type: SIMPLE_ASSIGN
vol.dynBal.U = vol.dynBal.m * vol.dynBal.medium.u
*/
void outputs_WaterCooledChillerExample7_eqFunction_693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,693};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* vol.dynBal.m STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1808]] /* vol.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 693;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4521(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4520(DATA *data, threadData_t *threadData);


/*
equation index: 696
type: SIMPLE_ASSIGN
TCHWLeaCoi.T = TCHWLeaCoi.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* TCHWLeaCoi.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* TCHWLeaCoi.T_start PARAM */);
  threadData->lastEquationSolved = 696;
}

/*
equation index: 697
type: SIMPLE_ASSIGN
valByp.Kv_SI = 4.761904761904762 / sqrt(valByp.dpValve_nominal)
*/
void outputs_WaterCooledChillerExample7_eqFunction_697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,697};
  modelica_real tmp95;
  tmp95 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3586]] /* valByp.dpValve_nominal PARAM */);
  if(!(tmp95 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(valByp.dpValve_nominal) was %g should be >= 0", tmp95);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3579]] /* valByp.Kv_SI PARAM */) = DIVISION_SIM(4.761904761904762,sqrt(tmp95),"sqrt(valByp.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 697;
}

/*
equation index: 698
type: SIMPLE_ASSIGN
valByp.Kv = 1.1384199576606166e6 * valByp.Kv_SI / valByp.rhoStd
*/
void outputs_WaterCooledChillerExample7_eqFunction_698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,698};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3578]] /* valByp.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3579]] /* valByp.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3596]] /* valByp.rhoStd PARAM */),"valByp.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 698;
}

/*
equation index: 699
type: SIMPLE_ASSIGN
valByp.Cv = 83036.13671167512 * valByp.Kv_SI / (valByp.rhoStd * 0.0631)
*/
void outputs_WaterCooledChillerExample7_eqFunction_699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,699};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3577]] /* valByp.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3579]] /* valByp.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3596]] /* valByp.rhoStd PARAM */)) * (0.0631),"valByp.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 699;
}

/*
equation index: 700
type: SIMPLE_ASSIGN
valByp.Av = valByp.Kv_SI / sqrt(valByp.rhoStd)
*/
void outputs_WaterCooledChillerExample7_eqFunction_700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,700};
  modelica_real tmp96;
  tmp96 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3596]] /* valByp.rhoStd PARAM */);
  if(!(tmp96 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(valByp.rhoStd) was %g should be >= 0", tmp96);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3576]] /* valByp.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3579]] /* valByp.Kv_SI PARAM */),sqrt(tmp96),"sqrt(valByp.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 700;
}

/*
equation index: 701
type: SIMPLE_ASSIGN
TCWLeaTow.T = TCWLeaTow.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,701};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* TCWLeaTow.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[36]] /* TCWLeaTow.T_start PARAM */);
  threadData->lastEquationSolved = 701;
}

/*
equation index: 702
type: SIMPLE_ASSIGN
TCHWEntChi.T = TCHWEntChi.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,702};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* TCHWEntChi.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* TCHWEntChi.T_start PARAM */);
  threadData->lastEquationSolved = 702;
}

/*
equation index: 703
type: SIMPLE_ASSIGN
TAirSup.T = TAirSup.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,703};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* TAirSup.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* TAirSup.T_start PARAM */);
  threadData->lastEquationSolved = 703;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5240(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4526(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4527(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4528(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4529(DATA *data, threadData_t *threadData);


/*
equation index: 709
type: SIMPLE_ASSIGN
KMinusU.u = homotopy(smooth(0, if noEvent(conPIDTAirSup.gainPID.y > 1.0) then 1.0 else if noEvent(conPIDTAirSup.gainPID.y < 0.0) then 0.0 else conPIDTAirSup.gainPID.y), conPIDTAirSup.gainPID.y)
*/
void outputs_WaterCooledChillerExample7_eqFunction_709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,709};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  modelica_real tmp100;
  tmp97 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[447]] /* conPIDTAirSup.gainPID.y variable */),1.0);
  tmp99 = (modelica_boolean)tmp97;
  if(tmp99)
  {
    tmp100 = 1.0;
  }
  else
  {
    tmp98 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[447]] /* conPIDTAirSup.gainPID.y variable */),0.0);
    tmp100 = (tmp98?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[447]] /* conPIDTAirSup.gainPID.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* KMinusU.u variable */) = homotopy(tmp100, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[447]] /* conPIDTAirSup.gainPID.y variable */));
  threadData->lastEquationSolved = 709;
}

/*
equation index: 710
type: SIMPLE_ASSIGN
val1.phi = homotopy(Buildings.Fluid.Actuators.BaseClasses.equalPercentage(KMinusU.u, val1.R, val1.l, val1.delta0), val1.l + KMinusU.u * (1.0 - val1.l))
*/
void outputs_WaterCooledChillerExample7_eqFunction_710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,710};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1721]] /* val1.phi variable */) = homotopy(omc_Buildings_Fluid_Actuators_BaseClasses_equalPercentage(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* KMinusU.u variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3344]] /* val1.R PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3355]] /* val1.l PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3347]] /* val1.delta0 PARAM */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3355]] /* val1.l PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* KMinusU.u variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3355]] /* val1.l PARAM */)));
  threadData->lastEquationSolved = 710;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4534(DATA *data, threadData_t *threadData);


/*
equation index: 712
type: SIMPLE_ASSIGN
valByp.phi = homotopy(Buildings.Fluid.Actuators.BaseClasses.equalPercentage(KMinusU.y, valByp.R, valByp.l, valByp.delta0), valByp.l + KMinusU.y * (1.0 - valByp.l))
*/
void outputs_WaterCooledChillerExample7_eqFunction_712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,712};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* valByp.phi variable */) = homotopy(omc_Buildings_Fluid_Actuators_BaseClasses_equalPercentage(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* KMinusU.y variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3580]] /* valByp.R PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3591]] /* valByp.l PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3583]] /* valByp.delta0 PARAM */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3591]] /* valByp.l PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* KMinusU.y variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3591]] /* valByp.l PARAM */)));
  threadData->lastEquationSolved = 712;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4536(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4537(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4538(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4539(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4540(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4541(DATA *data, threadData_t *threadData);


/*
equation index: 719
type: SIMPLE_ASSIGN
val6.Kv_SI = 4.761904761904762 / sqrt(val6.dpValve_nominal)
*/
void outputs_WaterCooledChillerExample7_eqFunction_719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,719};
  modelica_real tmp101;
  tmp101 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3397]] /* val6.dpValve_nominal PARAM */);
  if(!(tmp101 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val6.dpValve_nominal) was %g should be >= 0", tmp101);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3392]] /* val6.Kv_SI PARAM */) = DIVISION_SIM(4.761904761904762,sqrt(tmp101),"sqrt(val6.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 719;
}

/*
equation index: 720
type: SIMPLE_ASSIGN
val6.Kv = 1.1384199576606166e6 * val6.Kv_SI / val6.rhoStd
*/
void outputs_WaterCooledChillerExample7_eqFunction_720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,720};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3391]] /* val6.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3392]] /* val6.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3407]] /* val6.rhoStd PARAM */),"val6.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 720;
}

/*
equation index: 721
type: SIMPLE_ASSIGN
val6.Cv = 83036.13671167512 * val6.Kv_SI / (val6.rhoStd * 0.0631)
*/
void outputs_WaterCooledChillerExample7_eqFunction_721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,721};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3390]] /* val6.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3392]] /* val6.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3407]] /* val6.rhoStd PARAM */)) * (0.0631),"val6.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 721;
}

/*
equation index: 722
type: SIMPLE_ASSIGN
val6.Av = val6.Kv_SI / sqrt(val6.rhoStd)
*/
void outputs_WaterCooledChillerExample7_eqFunction_722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,722};
  modelica_real tmp102;
  tmp102 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3407]] /* val6.rhoStd PARAM */);
  if(!(tmp102 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val6.rhoStd) was %g should be >= 0", tmp102);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3389]] /* val6.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3392]] /* val6.Kv_SI PARAM */),sqrt(tmp102),"sqrt(val6.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 722;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4399(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4400(DATA *data, threadData_t *threadData);


void outputs_WaterCooledChillerExample7_eqFunction_725(DATA*, threadData_t*);
/*
equation index: 726
indexNonlinear: 4
type: NONLINEAR

vars: {val6.dp}
eqns: {725}
*/
void outputs_WaterCooledChillerExample7_eqFunction_726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,726};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 726 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */);
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,726};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 726 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */) = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  threadData->lastEquationSolved = 726;
}

/*
equation index: 727
type: SIMPLE_ASSIGN
chi.vol2.dynBal.medium.T = chi.vol2.dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,727};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* chi.vol2.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* chi.vol2.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 727;
}

/*
equation index: 728
type: SIMPLE_ASSIGN
chi.vol2.dynBal.medium.T_degC = -273.15 + chi.vol2.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,728};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* chi.vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* chi.vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 728;
}

/*
equation index: 729
type: SIMPLE_ASSIGN
val6.port_b.h_outflow = 4184.0 * chi.vol2.dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,729};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1737]] /* val6.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* chi.vol2.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 729;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4668(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4666(DATA *data, threadData_t *threadData);


/*
equation index: 732
type: SIMPLE_ASSIGN
chi.vol2.dynBal.U = chi.vol2.dynBal.m * val6.port_b.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,732};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* chi.vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[362]] /* chi.vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1737]] /* val6.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 732;
}

/*
equation index: 733
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.T = chi.vol1.dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,733};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[353]] /* chi.vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* chi.vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 733;
}

/*
equation index: 734
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.T_degC = -273.15 + chi.vol1.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,734};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[353]] /* chi.vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 734;
}

/*
equation index: 735
type: SIMPLE_ASSIGN
TCWLeaTow.port_a.h_outflow = 4184.0 * chi.vol1.dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,735};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* TCWLeaTow.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 735;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4378(DATA *data, threadData_t *threadData);


/*
equation index: 737
type: SIMPLE_ASSIGN
TCWLeaTow.T_b_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.TCWLeaTow.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.TCWLeaTow.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_a.h_outflow, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,737};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* TCWLeaTow.T_b_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCWLeaTow_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCWLeaTow_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* TCWLeaTow.port_a.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 737;
}

/*
equation index: 738
type: SIMPLE_ASSIGN
chi.vol1.dynBal.U = chi.vol1.dynBal.m * TCWLeaTow.port_a.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,738};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* chi.vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* chi.vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* TCWLeaTow.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 738;
}

/*
equation index: 739
type: SIMPLE_ASSIGN
expVesChi.m = expVesChi.V_start * expVesChi.rho_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,739};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* expVesChi.m STATE(1) */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1233]] /* expVesChi.V_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* expVesChi.rho_start PARAM */));
  threadData->lastEquationSolved = 739;
}

/*
equation index: 740
type: SIMPLE_ASSIGN
expVesChi.H = expVesChi.m * WaterCooledChillerExample.WaterCooledChillerExample7.expVesChi.Medium.specificInternalEnergy(WaterCooledChillerExample.WaterCooledChillerExample7.expVesChi.Medium.setState_pTX(expVesChi.p_start, expVesChi.T_start, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,740};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* expVesChi.H STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* expVesChi.m STATE(1) */)) * (omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi_Medium_specificInternalEnergy(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* expVesChi.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1232]] /* expVesChi.T_start PARAM */), _OMC_LIT88)));
  threadData->lastEquationSolved = 740;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4376(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4389(DATA *data, threadData_t *threadData);


/*
equation index: 743
type: SIMPLE_ASSIGN
val1.Kv_SI = 4.761904761904762 / sqrt(val1.dpValve_nominal)
*/
void outputs_WaterCooledChillerExample7_eqFunction_743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,743};
  modelica_real tmp103;
  tmp103 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3350]] /* val1.dpValve_nominal PARAM */);
  if(!(tmp103 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val1.dpValve_nominal) was %g should be >= 0", tmp103);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3343]] /* val1.Kv_SI PARAM */) = DIVISION_SIM(4.761904761904762,sqrt(tmp103),"sqrt(val1.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 743;
}

/*
equation index: 744
type: SIMPLE_ASSIGN
val1.Kv = 1.1384199576606166e6 * val1.Kv_SI / val1.rhoStd
*/
void outputs_WaterCooledChillerExample7_eqFunction_744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,744};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3342]] /* val1.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3343]] /* val1.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3360]] /* val1.rhoStd PARAM */),"val1.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 744;
}

/*
equation index: 745
type: SIMPLE_ASSIGN
val1.Cv = 83036.13671167512 * val1.Kv_SI / (val1.rhoStd * 0.0631)
*/
void outputs_WaterCooledChillerExample7_eqFunction_745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,745};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3341]] /* val1.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3343]] /* val1.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3360]] /* val1.rhoStd PARAM */)) * (0.0631),"val1.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 745;
}

/*
equation index: 746
type: SIMPLE_ASSIGN
val1.Av = val1.Kv_SI / sqrt(val1.rhoStd)
*/
void outputs_WaterCooledChillerExample7_eqFunction_746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,746};
  modelica_real tmp104;
  tmp104 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3360]] /* val1.rhoStd PARAM */);
  if(!(tmp104 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val1.rhoStd) was %g should be >= 0", tmp104);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3340]] /* val1.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3343]] /* val1.Kv_SI PARAM */),sqrt(tmp104),"sqrt(val1.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 746;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4532(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4533(DATA *data, threadData_t *threadData);


void outputs_WaterCooledChillerExample7_eqFunction_749(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_750(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_751(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_752(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_753(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_754(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_755(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_756(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_757(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_758(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_759(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_760(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_761(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_762(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_763(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_764(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_765(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_766(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_767(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_768(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_769(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_770(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_771(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_778(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_777(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_776(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_775(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_774(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_773(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_772(DATA*, threadData_t*);
/*
equation index: 779
indexNonlinear: 5
type: NONLINEAR

vars: {val8_2Sto.dp, val8_2Rel.dp, pumCHW2.port_a.p, val8.dp, valByp.dp, val1.dp, val8Sto.m_flow}
eqns: {749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 778, 777, 776, 775, 774, 773, 772}
*/
void outputs_WaterCooledChillerExample7_eqFunction_779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,779};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 779 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */);
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */);
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */);
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */);
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */);
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */);
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[6] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,779};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 779 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */) = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */) = data->simulationInfo->nonlinearSystemData[5].nlsx[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */) = data->simulationInfo->nonlinearSystemData[5].nlsx[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */) = data->simulationInfo->nonlinearSystemData[5].nlsx[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */) = data->simulationInfo->nonlinearSystemData[5].nlsx[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */) = data->simulationInfo->nonlinearSystemData[5].nlsx[5];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */) = data->simulationInfo->nonlinearSystemData[5].nlsx[6];
  threadData->lastEquationSolved = 779;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5031(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5032(DATA *data, threadData_t *threadData);


/*
equation index: 782
type: SIMPLE_ASSIGN
val8_2Sto.port_a.h_outflow = (max(val8_2.m_flow, 1e-7) * val8_2Rel.port_b.h_outflow + 1e-7 * pumCHW2.port_b.h_outflow) / (1e-7 + max(val8_2.m_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,782};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* val8_2Sto.port_a.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* val8_2Rel.port_b.h_outflow variable */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* pumCHW2.port_b.h_outflow variable */)),1e-7 + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */),1e-7),"1e-7 + max(val8_2.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 782;
}

/*
equation index: 783
type: SIMPLE_ASSIGN
val8_2.port_a.h_outflow = (1e-7 * pumCHW2.port_b.h_outflow + max(val8Sto.m_flow, 1e-7) * val8_2Sto.port_b.h_outflow) / (1e-7 + max(val8Sto.m_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,783};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1773]] /* val8_2.port_a.h_outflow variable */) = DIVISION_SIM((1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* pumCHW2.port_b.h_outflow variable */)) + (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* val8_2Sto.port_b.h_outflow variable */)),1e-7 + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */),1e-7),"1e-7 + max(val8Sto.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 783;
}

/*
equation index: 784
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.ports_H_flow[2] = semiLinear(-val8_2.m_flow, val8_2.port_a.h_outflow, val8_2Rel.port_b.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,784};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[926]] /* junCHWRet2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1773]] /* val8_2.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* val8_2Rel.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 784;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4997(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4989(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4981(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4973(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4965(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4957(DATA *data, threadData_t *threadData);


/*
equation index: 791
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.ports_H_flow[2] = semiLinear(-val8Sto.m_flow, val8_2Sto.port_a.h_outflow, val8_2Sto.port_b.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,791};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1587]] /* tan.indTanHex.vol[6].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* val8_2Sto.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* val8_2Sto.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 791;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4956(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5019(DATA *data, threadData_t *threadData);


/*
equation index: 794
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.ports_H_flow[2] = semiLinear(-val8Sto.m_flow, val8_2Sto.port_b.h_outflow, tan.indTanHex.vol[5].ports[2].h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,794};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1585]] /* tan.indTanHex.vol[5].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* val8_2Sto.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1598]] /* tan.indTanHex.vol[5].ports[2].h_outflow variable */));
  threadData->lastEquationSolved = 794;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4953(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4955(DATA *data, threadData_t *threadData);


/*
equation index: 797
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.ports_H_flow[2] = semiLinear(-val8Sto.m_flow, tan.indTanHex.vol[5].ports[2].h_outflow, tan.indTanHex.vol[4].ports[2].h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,797};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1583]] /* tan.indTanHex.vol[4].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1598]] /* tan.indTanHex.vol[5].ports[2].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1597]] /* tan.indTanHex.vol[4].ports[2].h_outflow variable */));
  threadData->lastEquationSolved = 797;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4950(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4952(DATA *data, threadData_t *threadData);


/*
equation index: 800
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.ports_H_flow[2] = semiLinear(-val8Sto.m_flow, tan.indTanHex.vol[4].ports[2].h_outflow, tan.indTanHex.vol[3].ports[2].h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,800};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1581]] /* tan.indTanHex.vol[3].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1597]] /* tan.indTanHex.vol[4].ports[2].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1596]] /* tan.indTanHex.vol[3].ports[2].h_outflow variable */));
  threadData->lastEquationSolved = 800;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4947(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4949(DATA *data, threadData_t *threadData);


/*
equation index: 803
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.ports_H_flow[2] = semiLinear(-val8Sto.m_flow, tan.indTanHex.vol[3].ports[2].h_outflow, tan.indTanHex.vol[2].ports[2].h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,803};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1579]] /* tan.indTanHex.vol[2].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1596]] /* tan.indTanHex.vol[3].ports[2].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1595]] /* tan.indTanHex.vol[2].ports[2].h_outflow variable */));
  threadData->lastEquationSolved = 803;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4944(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4946(DATA *data, threadData_t *threadData);


/*
equation index: 806
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.ports_H_flow[2] = semiLinear(-val8Sto.m_flow, tan.indTanHex.vol[2].ports[2].h_outflow, val8Sto.port_a.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,806};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1577]] /* tan.indTanHex.vol[1].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1595]] /* tan.indTanHex.vol[2].ports[2].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* val8Sto.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 806;
}

/*
equation index: 807
type: SIMPLE_ASSIGN
val8.port_b.h_outflow = (4.761904761904762 * chi2.port_a2.h_outflow + max(-val8Sto.m_flow, 1e-7) * val8Sto.port_a.h_outflow) / (4.761904761904762 + max(-val8Sto.m_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,807};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1753]] /* val8.port_b.h_outflow variable */) = DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* chi2.port_a2.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* val8Sto.port_a.h_outflow variable */)),4.761904761904762 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)),1e-7),"4.761904761904762 + max(-val8Sto.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 807;
}

/*
equation index: 808
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.ports_H_flow[1] = semiLinear(4.761904761904762, (max(val8_2.m_flow, 1e-7) * val8_2Rel.port_b.h_outflow + max(val8Sto.m_flow, 1e-7) * val8_2Sto.port_b.h_outflow) / (max(val8_2.m_flow, 1e-7) + max(val8Sto.m_flow, 1e-7)), pumCHW2.port_b.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,808};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1130]] /* pumCHW2.vol.dynBal.ports_H_flow[1] variable */) = semiLinear(4.761904761904762, DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* val8_2Rel.port_b.h_outflow variable */)) + (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* val8_2Sto.port_b.h_outflow variable */)),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */),1e-7) + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */),1e-7),"max(val8_2.m_flow, 1e-7) + max(val8Sto.m_flow, 1e-7)",equationIndexes), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* pumCHW2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 808;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5016(DATA *data, threadData_t *threadData);


/*
equation index: 810
type: SIMPLE_ASSIGN
val8Sto.port_b.h_outflow = (4.761904761904762 * chi2.port_a2.h_outflow + max(-val8.m_flow, 1e-7) * val8Rel.port_a.h_outflow) / (4.761904761904762 + max(-val8.m_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,810};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1767]] /* val8Sto.port_b.h_outflow variable */) = DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* chi2.port_a2.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* val8Rel.port_a.h_outflow variable */)),4.761904761904762 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)),1e-7),"4.761904761904762 + max(-val8.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 810;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4941(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4943(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5008(DATA *data, threadData_t *threadData);


/*
equation index: 814
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.ports_H_flow[2] = semiLinear(-4.761904761904762, (max(-val8.m_flow, 1e-7) * val8Rel.port_a.h_outflow + max(-val8Sto.m_flow, 1e-7) * val8Sto.port_a.h_outflow) / (max(-val8.m_flow, 1e-7) + max(-val8Sto.m_flow, 1e-7)), chi2.port_a2.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,814};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* chi2.vol2.dynBal.ports_H_flow[2] variable */) = semiLinear(-4.761904761904762, DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* val8Rel.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* val8Sto.port_a.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)),1e-7),"max(-val8.m_flow, 1e-7) + max(-val8Sto.m_flow, 1e-7)",equationIndexes), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* chi2.port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 814;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5011(DATA *data, threadData_t *threadData);


/*
equation index: 816
type: SIMPLE_ASSIGN
chi2.state_b2_inflow.T = 273.15 + 2.390057361376673e-4 * (max(-val8.m_flow, 1e-7) * val8Rel.port_a.h_outflow + max(-val8Sto.m_flow, 1e-7) * val8Sto.port_a.h_outflow) / (max(-val8.m_flow, 1e-7) + max(-val8Sto.m_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,816};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* chi2.state_b2_inflow.T variable */) = 273.15 + (2.390057361376673e-4) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* val8Rel.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* val8Sto.port_a.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)),1e-7),"max(-val8.m_flow, 1e-7) + max(-val8Sto.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 816;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5226(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5227(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5225(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5228(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5197(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5198(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5199(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5200(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5208(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5159(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5166(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5136(DATA *data, threadData_t *threadData);


/*
equation index: 829
type: SIMPLE_ASSIGN
cooCoi.hA.hA_1 = cooCoi.hA.hA_nominal_w * Buildings.Utilities.Math.Functions.regNonZeroPower(cooCoi.hA.fm_w, cooCoi.hA.n_w, 0.1)
*/
void outputs_WaterCooledChillerExample7_eqFunction_829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,829};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* cooCoi.hA.hA_1 variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* cooCoi.hA.hA_nominal_w PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* cooCoi.hA.fm_w variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[903]] /* cooCoi.hA.n_w PARAM */), 0.1));
  threadData->lastEquationSolved = 829;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5139(DATA *data, threadData_t *threadData);


/*
equation index: 831
type: SIMPLE_ASSIGN
pumTanRet.preSou.V_flow = pumTanRet.m_flow / Modelica.Fluid.Utilities.regStep(pumTanRet.m_flow, WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.preSou.Medium.setState_phX(tan.vol[4].p, val8Rel.port_b.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.preSou.Medium.setState_phX(pumTanRet.port_b.p, val8Rel.port_a.h_outflow, {})), pumTanRet.preSou.m_flow_small)
*/
void outputs_WaterCooledChillerExample7_eqFunction_831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,831};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* pumTanRet.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */), omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* tan.vol[4].p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1759]] /* val8Rel.port_b.h_outflow variable */), _OMC_LIT88)), omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanRet_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* pumTanRet.port_b.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* val8Rel.port_a.h_outflow variable */), _OMC_LIT88)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2669]] /* pumTanRet.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(pumTanRet.m_flow, WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.preSou.Medium.setState_phX(tan.vol[4].p, val8Rel.port_b.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanRet.preSou.Medium.setState_phX(pumTanRet.port_b.p, val8Rel.port_a.h_outflow, {})), pumTanRet.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 831;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4771(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4774(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4770(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4769(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4775(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4789(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4790(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4791(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4792(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4793(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4794(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4795(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4796(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4797(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4798(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4778(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4779(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4780(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4781(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4782(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4783(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4784(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4785(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4786(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4787(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4777(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4799(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4776(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4788(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4768(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4800(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4817(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4818(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4819(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4820(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4821(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4822(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4823(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4824(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4825(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4826(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4806(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4807(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4808(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void outputs_WaterCooledChillerExample7_functionInitialEquations_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[420])(DATA*, threadData_t*) = {
    outputs_WaterCooledChillerExample7_eqFunction_421,
    outputs_WaterCooledChillerExample7_eqFunction_422,
    outputs_WaterCooledChillerExample7_eqFunction_423,
    outputs_WaterCooledChillerExample7_eqFunction_424,
    outputs_WaterCooledChillerExample7_eqFunction_425,
    outputs_WaterCooledChillerExample7_eqFunction_426,
    outputs_WaterCooledChillerExample7_eqFunction_427,
    outputs_WaterCooledChillerExample7_eqFunction_428,
    outputs_WaterCooledChillerExample7_eqFunction_429,
    outputs_WaterCooledChillerExample7_eqFunction_430,
    outputs_WaterCooledChillerExample7_eqFunction_431,
    outputs_WaterCooledChillerExample7_eqFunction_432,
    outputs_WaterCooledChillerExample7_eqFunction_433,
    outputs_WaterCooledChillerExample7_eqFunction_434,
    outputs_WaterCooledChillerExample7_eqFunction_435,
    outputs_WaterCooledChillerExample7_eqFunction_436,
    outputs_WaterCooledChillerExample7_eqFunction_437,
    outputs_WaterCooledChillerExample7_eqFunction_438,
    outputs_WaterCooledChillerExample7_eqFunction_439,
    outputs_WaterCooledChillerExample7_eqFunction_440,
    outputs_WaterCooledChillerExample7_eqFunction_441,
    outputs_WaterCooledChillerExample7_eqFunction_442,
    outputs_WaterCooledChillerExample7_eqFunction_443,
    outputs_WaterCooledChillerExample7_eqFunction_444,
    outputs_WaterCooledChillerExample7_eqFunction_445,
    outputs_WaterCooledChillerExample7_eqFunction_446,
    outputs_WaterCooledChillerExample7_eqFunction_447,
    outputs_WaterCooledChillerExample7_eqFunction_448,
    outputs_WaterCooledChillerExample7_eqFunction_449,
    outputs_WaterCooledChillerExample7_eqFunction_450,
    outputs_WaterCooledChillerExample7_eqFunction_451,
    outputs_WaterCooledChillerExample7_eqFunction_452,
    outputs_WaterCooledChillerExample7_eqFunction_453,
    outputs_WaterCooledChillerExample7_eqFunction_454,
    outputs_WaterCooledChillerExample7_eqFunction_455,
    outputs_WaterCooledChillerExample7_eqFunction_456,
    outputs_WaterCooledChillerExample7_eqFunction_457,
    outputs_WaterCooledChillerExample7_eqFunction_458,
    outputs_WaterCooledChillerExample7_eqFunction_459,
    outputs_WaterCooledChillerExample7_eqFunction_460,
    outputs_WaterCooledChillerExample7_eqFunction_461,
    outputs_WaterCooledChillerExample7_eqFunction_462,
    outputs_WaterCooledChillerExample7_eqFunction_463,
    outputs_WaterCooledChillerExample7_eqFunction_464,
    outputs_WaterCooledChillerExample7_eqFunction_465,
    outputs_WaterCooledChillerExample7_eqFunction_466,
    outputs_WaterCooledChillerExample7_eqFunction_467,
    outputs_WaterCooledChillerExample7_eqFunction_468,
    outputs_WaterCooledChillerExample7_eqFunction_469,
    outputs_WaterCooledChillerExample7_eqFunction_470,
    outputs_WaterCooledChillerExample7_eqFunction_471,
    outputs_WaterCooledChillerExample7_eqFunction_472,
    outputs_WaterCooledChillerExample7_eqFunction_473,
    outputs_WaterCooledChillerExample7_eqFunction_474,
    outputs_WaterCooledChillerExample7_eqFunction_475,
    outputs_WaterCooledChillerExample7_eqFunction_476,
    outputs_WaterCooledChillerExample7_eqFunction_477,
    outputs_WaterCooledChillerExample7_eqFunction_478,
    outputs_WaterCooledChillerExample7_eqFunction_479,
    outputs_WaterCooledChillerExample7_eqFunction_480,
    outputs_WaterCooledChillerExample7_eqFunction_481,
    outputs_WaterCooledChillerExample7_eqFunction_482,
    outputs_WaterCooledChillerExample7_eqFunction_483,
    outputs_WaterCooledChillerExample7_eqFunction_484,
    outputs_WaterCooledChillerExample7_eqFunction_485,
    outputs_WaterCooledChillerExample7_eqFunction_486,
    outputs_WaterCooledChillerExample7_eqFunction_487,
    outputs_WaterCooledChillerExample7_eqFunction_488,
    outputs_WaterCooledChillerExample7_eqFunction_489,
    outputs_WaterCooledChillerExample7_eqFunction_490,
    outputs_WaterCooledChillerExample7_eqFunction_491,
    outputs_WaterCooledChillerExample7_eqFunction_492,
    outputs_WaterCooledChillerExample7_eqFunction_493,
    outputs_WaterCooledChillerExample7_eqFunction_494,
    outputs_WaterCooledChillerExample7_eqFunction_495,
    outputs_WaterCooledChillerExample7_eqFunction_496,
    outputs_WaterCooledChillerExample7_eqFunction_497,
    outputs_WaterCooledChillerExample7_eqFunction_498,
    outputs_WaterCooledChillerExample7_eqFunction_4689,
    outputs_WaterCooledChillerExample7_eqFunction_500,
    outputs_WaterCooledChillerExample7_eqFunction_501,
    outputs_WaterCooledChillerExample7_eqFunction_502,
    outputs_WaterCooledChillerExample7_eqFunction_503,
    outputs_WaterCooledChillerExample7_eqFunction_4685,
    outputs_WaterCooledChillerExample7_eqFunction_505,
    outputs_WaterCooledChillerExample7_eqFunction_506,
    outputs_WaterCooledChillerExample7_eqFunction_507,
    outputs_WaterCooledChillerExample7_eqFunction_508,
    outputs_WaterCooledChillerExample7_eqFunction_4681,
    outputs_WaterCooledChillerExample7_eqFunction_510,
    outputs_WaterCooledChillerExample7_eqFunction_511,
    outputs_WaterCooledChillerExample7_eqFunction_512,
    outputs_WaterCooledChillerExample7_eqFunction_513,
    outputs_WaterCooledChillerExample7_eqFunction_4677,
    outputs_WaterCooledChillerExample7_eqFunction_515,
    outputs_WaterCooledChillerExample7_eqFunction_516,
    outputs_WaterCooledChillerExample7_eqFunction_517,
    outputs_WaterCooledChillerExample7_eqFunction_518,
    outputs_WaterCooledChillerExample7_eqFunction_519,
    outputs_WaterCooledChillerExample7_eqFunction_520,
    outputs_WaterCooledChillerExample7_eqFunction_521,
    outputs_WaterCooledChillerExample7_eqFunction_522,
    outputs_WaterCooledChillerExample7_eqFunction_523,
    outputs_WaterCooledChillerExample7_eqFunction_4669,
    outputs_WaterCooledChillerExample7_eqFunction_525,
    outputs_WaterCooledChillerExample7_eqFunction_526,
    outputs_WaterCooledChillerExample7_eqFunction_527,
    outputs_WaterCooledChillerExample7_eqFunction_528,
    outputs_WaterCooledChillerExample7_eqFunction_529,
    outputs_WaterCooledChillerExample7_eqFunction_530,
    outputs_WaterCooledChillerExample7_eqFunction_531,
    outputs_WaterCooledChillerExample7_eqFunction_4641,
    outputs_WaterCooledChillerExample7_eqFunction_533,
    outputs_WaterCooledChillerExample7_eqFunction_534,
    outputs_WaterCooledChillerExample7_eqFunction_535,
    outputs_WaterCooledChillerExample7_eqFunction_536,
    outputs_WaterCooledChillerExample7_eqFunction_537,
    outputs_WaterCooledChillerExample7_eqFunction_538,
    outputs_WaterCooledChillerExample7_eqFunction_539,
    outputs_WaterCooledChillerExample7_eqFunction_4626,
    outputs_WaterCooledChillerExample7_eqFunction_4627,
    outputs_WaterCooledChillerExample7_eqFunction_542,
    outputs_WaterCooledChillerExample7_eqFunction_4629,
    outputs_WaterCooledChillerExample7_eqFunction_4630,
    outputs_WaterCooledChillerExample7_eqFunction_4633,
    outputs_WaterCooledChillerExample7_eqFunction_4632,
    outputs_WaterCooledChillerExample7_eqFunction_4631,
    outputs_WaterCooledChillerExample7_eqFunction_4634,
    outputs_WaterCooledChillerExample7_eqFunction_4635,
    outputs_WaterCooledChillerExample7_eqFunction_4636,
    outputs_WaterCooledChillerExample7_eqFunction_551,
    outputs_WaterCooledChillerExample7_eqFunction_552,
    outputs_WaterCooledChillerExample7_eqFunction_4625,
    outputs_WaterCooledChillerExample7_eqFunction_4652,
    outputs_WaterCooledChillerExample7_eqFunction_555,
    outputs_WaterCooledChillerExample7_eqFunction_556,
    outputs_WaterCooledChillerExample7_eqFunction_5470,
    outputs_WaterCooledChillerExample7_eqFunction_5473,
    outputs_WaterCooledChillerExample7_eqFunction_559,
    outputs_WaterCooledChillerExample7_eqFunction_5469,
    outputs_WaterCooledChillerExample7_eqFunction_5471,
    outputs_WaterCooledChillerExample7_eqFunction_5472,
    outputs_WaterCooledChillerExample7_eqFunction_5474,
    outputs_WaterCooledChillerExample7_eqFunction_564,
    outputs_WaterCooledChillerExample7_eqFunction_5476,
    outputs_WaterCooledChillerExample7_eqFunction_566,
    outputs_WaterCooledChillerExample7_eqFunction_567,
    outputs_WaterCooledChillerExample7_eqFunction_568,
    outputs_WaterCooledChillerExample7_eqFunction_569,
    outputs_WaterCooledChillerExample7_eqFunction_4639,
    outputs_WaterCooledChillerExample7_eqFunction_571,
    outputs_WaterCooledChillerExample7_eqFunction_4618,
    outputs_WaterCooledChillerExample7_eqFunction_4657,
    outputs_WaterCooledChillerExample7_eqFunction_4615,
    outputs_WaterCooledChillerExample7_eqFunction_575,
    outputs_WaterCooledChillerExample7_eqFunction_4648,
    outputs_WaterCooledChillerExample7_eqFunction_4649,
    outputs_WaterCooledChillerExample7_eqFunction_4656,
    outputs_WaterCooledChillerExample7_eqFunction_579,
    outputs_WaterCooledChillerExample7_eqFunction_581,
    outputs_WaterCooledChillerExample7_eqFunction_582,
    outputs_WaterCooledChillerExample7_eqFunction_4613,
    outputs_WaterCooledChillerExample7_eqFunction_584,
    outputs_WaterCooledChillerExample7_eqFunction_585,
    outputs_WaterCooledChillerExample7_eqFunction_586,
    outputs_WaterCooledChillerExample7_eqFunction_587,
    outputs_WaterCooledChillerExample7_eqFunction_588,
    outputs_WaterCooledChillerExample7_eqFunction_589,
    outputs_WaterCooledChillerExample7_eqFunction_590,
    outputs_WaterCooledChillerExample7_eqFunction_591,
    outputs_WaterCooledChillerExample7_eqFunction_4611,
    outputs_WaterCooledChillerExample7_eqFunction_4612,
    outputs_WaterCooledChillerExample7_eqFunction_594,
    outputs_WaterCooledChillerExample7_eqFunction_5479,
    outputs_WaterCooledChillerExample7_eqFunction_596,
    outputs_WaterCooledChillerExample7_eqFunction_5478,
    outputs_WaterCooledChillerExample7_eqFunction_5480,
    outputs_WaterCooledChillerExample7_eqFunction_599,
    outputs_WaterCooledChillerExample7_eqFunction_600,
    outputs_WaterCooledChillerExample7_eqFunction_601,
    outputs_WaterCooledChillerExample7_eqFunction_4662,
    outputs_WaterCooledChillerExample7_eqFunction_4608,
    outputs_WaterCooledChillerExample7_eqFunction_4661,
    outputs_WaterCooledChillerExample7_eqFunction_605,
    outputs_WaterCooledChillerExample7_eqFunction_606,
    outputs_WaterCooledChillerExample7_eqFunction_4584,
    outputs_WaterCooledChillerExample7_eqFunction_4585,
    outputs_WaterCooledChillerExample7_eqFunction_4586,
    outputs_WaterCooledChillerExample7_eqFunction_4592,
    outputs_WaterCooledChillerExample7_eqFunction_4593,
    outputs_WaterCooledChillerExample7_eqFunction_612,
    outputs_WaterCooledChillerExample7_eqFunction_4576,
    outputs_WaterCooledChillerExample7_eqFunction_4573,
    outputs_WaterCooledChillerExample7_eqFunction_616,
    outputs_WaterCooledChillerExample7_eqFunction_617,
    outputs_WaterCooledChillerExample7_eqFunction_618,
    outputs_WaterCooledChillerExample7_eqFunction_4577,
    outputs_WaterCooledChillerExample7_eqFunction_620,
    outputs_WaterCooledChillerExample7_eqFunction_621,
    outputs_WaterCooledChillerExample7_eqFunction_622,
    outputs_WaterCooledChillerExample7_eqFunction_4596,
    outputs_WaterCooledChillerExample7_eqFunction_624,
    outputs_WaterCooledChillerExample7_eqFunction_625,
    outputs_WaterCooledChillerExample7_eqFunction_4604,
    outputs_WaterCooledChillerExample7_eqFunction_4605,
    outputs_WaterCooledChillerExample7_eqFunction_4606,
    outputs_WaterCooledChillerExample7_eqFunction_629,
    outputs_WaterCooledChillerExample7_eqFunction_4555,
    outputs_WaterCooledChillerExample7_eqFunction_4556,
    outputs_WaterCooledChillerExample7_eqFunction_4557,
    outputs_WaterCooledChillerExample7_eqFunction_633,
    outputs_WaterCooledChillerExample7_eqFunction_4546,
    outputs_WaterCooledChillerExample7_eqFunction_4543,
    outputs_WaterCooledChillerExample7_eqFunction_637,
    outputs_WaterCooledChillerExample7_eqFunction_4578,
    outputs_WaterCooledChillerExample7_eqFunction_640,
    outputs_WaterCooledChillerExample7_eqFunction_4590,
    outputs_WaterCooledChillerExample7_eqFunction_4581,
    outputs_WaterCooledChillerExample7_eqFunction_4582,
    outputs_WaterCooledChillerExample7_eqFunction_644,
    outputs_WaterCooledChillerExample7_eqFunction_645,
    outputs_WaterCooledChillerExample7_eqFunction_646,
    outputs_WaterCooledChillerExample7_eqFunction_4547,
    outputs_WaterCooledChillerExample7_eqFunction_648,
    outputs_WaterCooledChillerExample7_eqFunction_649,
    outputs_WaterCooledChillerExample7_eqFunction_650,
    outputs_WaterCooledChillerExample7_eqFunction_4564,
    outputs_WaterCooledChillerExample7_eqFunction_4602,
    outputs_WaterCooledChillerExample7_eqFunction_653,
    outputs_WaterCooledChillerExample7_eqFunction_654,
    outputs_WaterCooledChillerExample7_eqFunction_655,
    outputs_WaterCooledChillerExample7_eqFunction_656,
    outputs_WaterCooledChillerExample7_eqFunction_657,
    outputs_WaterCooledChillerExample7_eqFunction_658,
    outputs_WaterCooledChillerExample7_eqFunction_659,
    outputs_WaterCooledChillerExample7_eqFunction_4560,
    outputs_WaterCooledChillerExample7_eqFunction_4559,
    outputs_WaterCooledChillerExample7_eqFunction_4558,
    outputs_WaterCooledChillerExample7_eqFunction_4509,
    outputs_WaterCooledChillerExample7_eqFunction_4510,
    outputs_WaterCooledChillerExample7_eqFunction_4511,
    outputs_WaterCooledChillerExample7_eqFunction_4512,
    outputs_WaterCooledChillerExample7_eqFunction_667,
    outputs_WaterCooledChillerExample7_eqFunction_4501,
    outputs_WaterCooledChillerExample7_eqFunction_4502,
    outputs_WaterCooledChillerExample7_eqFunction_670,
    outputs_WaterCooledChillerExample7_eqFunction_671,
    outputs_WaterCooledChillerExample7_eqFunction_4506,
    outputs_WaterCooledChillerExample7_eqFunction_4503,
    outputs_WaterCooledChillerExample7_eqFunction_674,
    outputs_WaterCooledChillerExample7_eqFunction_4551,
    outputs_WaterCooledChillerExample7_eqFunction_4500,
    outputs_WaterCooledChillerExample7_eqFunction_4548,
    outputs_WaterCooledChillerExample7_eqFunction_4549,
    outputs_WaterCooledChillerExample7_eqFunction_4550,
    outputs_WaterCooledChillerExample7_eqFunction_680,
    outputs_WaterCooledChillerExample7_eqFunction_681,
    outputs_WaterCooledChillerExample7_eqFunction_4507,
    outputs_WaterCooledChillerExample7_eqFunction_683,
    outputs_WaterCooledChillerExample7_eqFunction_684,
    outputs_WaterCooledChillerExample7_eqFunction_685,
    outputs_WaterCooledChillerExample7_eqFunction_4515,
    outputs_WaterCooledChillerExample7_eqFunction_4524,
    outputs_WaterCooledChillerExample7_eqFunction_4570,
    outputs_WaterCooledChillerExample7_eqFunction_4568,
    outputs_WaterCooledChillerExample7_eqFunction_4569,
    outputs_WaterCooledChillerExample7_eqFunction_4567,
    outputs_WaterCooledChillerExample7_eqFunction_692,
    outputs_WaterCooledChillerExample7_eqFunction_693,
    outputs_WaterCooledChillerExample7_eqFunction_4521,
    outputs_WaterCooledChillerExample7_eqFunction_4520,
    outputs_WaterCooledChillerExample7_eqFunction_696,
    outputs_WaterCooledChillerExample7_eqFunction_697,
    outputs_WaterCooledChillerExample7_eqFunction_698,
    outputs_WaterCooledChillerExample7_eqFunction_699,
    outputs_WaterCooledChillerExample7_eqFunction_700,
    outputs_WaterCooledChillerExample7_eqFunction_701,
    outputs_WaterCooledChillerExample7_eqFunction_702,
    outputs_WaterCooledChillerExample7_eqFunction_703,
    outputs_WaterCooledChillerExample7_eqFunction_5240,
    outputs_WaterCooledChillerExample7_eqFunction_4526,
    outputs_WaterCooledChillerExample7_eqFunction_4527,
    outputs_WaterCooledChillerExample7_eqFunction_4528,
    outputs_WaterCooledChillerExample7_eqFunction_4529,
    outputs_WaterCooledChillerExample7_eqFunction_709,
    outputs_WaterCooledChillerExample7_eqFunction_710,
    outputs_WaterCooledChillerExample7_eqFunction_4534,
    outputs_WaterCooledChillerExample7_eqFunction_712,
    outputs_WaterCooledChillerExample7_eqFunction_4536,
    outputs_WaterCooledChillerExample7_eqFunction_4537,
    outputs_WaterCooledChillerExample7_eqFunction_4538,
    outputs_WaterCooledChillerExample7_eqFunction_4539,
    outputs_WaterCooledChillerExample7_eqFunction_4540,
    outputs_WaterCooledChillerExample7_eqFunction_4541,
    outputs_WaterCooledChillerExample7_eqFunction_719,
    outputs_WaterCooledChillerExample7_eqFunction_720,
    outputs_WaterCooledChillerExample7_eqFunction_721,
    outputs_WaterCooledChillerExample7_eqFunction_722,
    outputs_WaterCooledChillerExample7_eqFunction_4399,
    outputs_WaterCooledChillerExample7_eqFunction_4400,
    outputs_WaterCooledChillerExample7_eqFunction_726,
    outputs_WaterCooledChillerExample7_eqFunction_727,
    outputs_WaterCooledChillerExample7_eqFunction_728,
    outputs_WaterCooledChillerExample7_eqFunction_729,
    outputs_WaterCooledChillerExample7_eqFunction_4668,
    outputs_WaterCooledChillerExample7_eqFunction_4666,
    outputs_WaterCooledChillerExample7_eqFunction_732,
    outputs_WaterCooledChillerExample7_eqFunction_733,
    outputs_WaterCooledChillerExample7_eqFunction_734,
    outputs_WaterCooledChillerExample7_eqFunction_735,
    outputs_WaterCooledChillerExample7_eqFunction_4378,
    outputs_WaterCooledChillerExample7_eqFunction_737,
    outputs_WaterCooledChillerExample7_eqFunction_738,
    outputs_WaterCooledChillerExample7_eqFunction_739,
    outputs_WaterCooledChillerExample7_eqFunction_740,
    outputs_WaterCooledChillerExample7_eqFunction_4376,
    outputs_WaterCooledChillerExample7_eqFunction_4389,
    outputs_WaterCooledChillerExample7_eqFunction_743,
    outputs_WaterCooledChillerExample7_eqFunction_744,
    outputs_WaterCooledChillerExample7_eqFunction_745,
    outputs_WaterCooledChillerExample7_eqFunction_746,
    outputs_WaterCooledChillerExample7_eqFunction_4532,
    outputs_WaterCooledChillerExample7_eqFunction_4533,
    outputs_WaterCooledChillerExample7_eqFunction_779,
    outputs_WaterCooledChillerExample7_eqFunction_5031,
    outputs_WaterCooledChillerExample7_eqFunction_5032,
    outputs_WaterCooledChillerExample7_eqFunction_782,
    outputs_WaterCooledChillerExample7_eqFunction_783,
    outputs_WaterCooledChillerExample7_eqFunction_784,
    outputs_WaterCooledChillerExample7_eqFunction_4997,
    outputs_WaterCooledChillerExample7_eqFunction_4989,
    outputs_WaterCooledChillerExample7_eqFunction_4981,
    outputs_WaterCooledChillerExample7_eqFunction_4973,
    outputs_WaterCooledChillerExample7_eqFunction_4965,
    outputs_WaterCooledChillerExample7_eqFunction_4957,
    outputs_WaterCooledChillerExample7_eqFunction_791,
    outputs_WaterCooledChillerExample7_eqFunction_4956,
    outputs_WaterCooledChillerExample7_eqFunction_5019,
    outputs_WaterCooledChillerExample7_eqFunction_794,
    outputs_WaterCooledChillerExample7_eqFunction_4953,
    outputs_WaterCooledChillerExample7_eqFunction_4955,
    outputs_WaterCooledChillerExample7_eqFunction_797,
    outputs_WaterCooledChillerExample7_eqFunction_4950,
    outputs_WaterCooledChillerExample7_eqFunction_4952,
    outputs_WaterCooledChillerExample7_eqFunction_800,
    outputs_WaterCooledChillerExample7_eqFunction_4947,
    outputs_WaterCooledChillerExample7_eqFunction_4949,
    outputs_WaterCooledChillerExample7_eqFunction_803,
    outputs_WaterCooledChillerExample7_eqFunction_4944,
    outputs_WaterCooledChillerExample7_eqFunction_4946,
    outputs_WaterCooledChillerExample7_eqFunction_806,
    outputs_WaterCooledChillerExample7_eqFunction_807,
    outputs_WaterCooledChillerExample7_eqFunction_808,
    outputs_WaterCooledChillerExample7_eqFunction_5016,
    outputs_WaterCooledChillerExample7_eqFunction_810,
    outputs_WaterCooledChillerExample7_eqFunction_4941,
    outputs_WaterCooledChillerExample7_eqFunction_4943,
    outputs_WaterCooledChillerExample7_eqFunction_5008,
    outputs_WaterCooledChillerExample7_eqFunction_814,
    outputs_WaterCooledChillerExample7_eqFunction_5011,
    outputs_WaterCooledChillerExample7_eqFunction_816,
    outputs_WaterCooledChillerExample7_eqFunction_5226,
    outputs_WaterCooledChillerExample7_eqFunction_5227,
    outputs_WaterCooledChillerExample7_eqFunction_5225,
    outputs_WaterCooledChillerExample7_eqFunction_5228,
    outputs_WaterCooledChillerExample7_eqFunction_5197,
    outputs_WaterCooledChillerExample7_eqFunction_5198,
    outputs_WaterCooledChillerExample7_eqFunction_5199,
    outputs_WaterCooledChillerExample7_eqFunction_5200,
    outputs_WaterCooledChillerExample7_eqFunction_5208,
    outputs_WaterCooledChillerExample7_eqFunction_5159,
    outputs_WaterCooledChillerExample7_eqFunction_5166,
    outputs_WaterCooledChillerExample7_eqFunction_5136,
    outputs_WaterCooledChillerExample7_eqFunction_829,
    outputs_WaterCooledChillerExample7_eqFunction_5139,
    outputs_WaterCooledChillerExample7_eqFunction_831,
    outputs_WaterCooledChillerExample7_eqFunction_4771,
    outputs_WaterCooledChillerExample7_eqFunction_4774,
    outputs_WaterCooledChillerExample7_eqFunction_4770,
    outputs_WaterCooledChillerExample7_eqFunction_4769,
    outputs_WaterCooledChillerExample7_eqFunction_4775,
    outputs_WaterCooledChillerExample7_eqFunction_4789,
    outputs_WaterCooledChillerExample7_eqFunction_4790,
    outputs_WaterCooledChillerExample7_eqFunction_4791,
    outputs_WaterCooledChillerExample7_eqFunction_4792,
    outputs_WaterCooledChillerExample7_eqFunction_4793,
    outputs_WaterCooledChillerExample7_eqFunction_4794,
    outputs_WaterCooledChillerExample7_eqFunction_4795,
    outputs_WaterCooledChillerExample7_eqFunction_4796,
    outputs_WaterCooledChillerExample7_eqFunction_4797,
    outputs_WaterCooledChillerExample7_eqFunction_4798,
    outputs_WaterCooledChillerExample7_eqFunction_4778,
    outputs_WaterCooledChillerExample7_eqFunction_4779,
    outputs_WaterCooledChillerExample7_eqFunction_4780,
    outputs_WaterCooledChillerExample7_eqFunction_4781,
    outputs_WaterCooledChillerExample7_eqFunction_4782,
    outputs_WaterCooledChillerExample7_eqFunction_4783,
    outputs_WaterCooledChillerExample7_eqFunction_4784,
    outputs_WaterCooledChillerExample7_eqFunction_4785,
    outputs_WaterCooledChillerExample7_eqFunction_4786,
    outputs_WaterCooledChillerExample7_eqFunction_4787,
    outputs_WaterCooledChillerExample7_eqFunction_4777,
    outputs_WaterCooledChillerExample7_eqFunction_4799,
    outputs_WaterCooledChillerExample7_eqFunction_4776,
    outputs_WaterCooledChillerExample7_eqFunction_4788,
    outputs_WaterCooledChillerExample7_eqFunction_4768,
    outputs_WaterCooledChillerExample7_eqFunction_4800,
    outputs_WaterCooledChillerExample7_eqFunction_4817,
    outputs_WaterCooledChillerExample7_eqFunction_4818,
    outputs_WaterCooledChillerExample7_eqFunction_4819,
    outputs_WaterCooledChillerExample7_eqFunction_4820,
    outputs_WaterCooledChillerExample7_eqFunction_4821,
    outputs_WaterCooledChillerExample7_eqFunction_4822,
    outputs_WaterCooledChillerExample7_eqFunction_4823,
    outputs_WaterCooledChillerExample7_eqFunction_4824,
    outputs_WaterCooledChillerExample7_eqFunction_4825,
    outputs_WaterCooledChillerExample7_eqFunction_4826,
    outputs_WaterCooledChillerExample7_eqFunction_4806,
    outputs_WaterCooledChillerExample7_eqFunction_4807,
    outputs_WaterCooledChillerExample7_eqFunction_4808
  };
  
  for (int id = 0; id < 420; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif