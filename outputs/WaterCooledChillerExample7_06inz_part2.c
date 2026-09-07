#include "outputs/WaterCooledChillerExample7_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void outputs_WaterCooledChillerExample7_eqFunction_4809(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4810(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4811(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4812(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4813(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4814(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4815(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4805(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4827(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4804(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4816(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4801(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4803(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4802(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4767(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4828(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4846(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4847(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4848(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4849(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4850(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4851(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4852(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4853(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4854(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4855(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4835(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4836(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4837(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4838(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4839(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4840(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4841(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4842(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4843(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4844(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4834(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4856(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4833(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4845(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4857(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4829(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4832(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4830(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4831(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4766(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4858(DATA *data, threadData_t *threadData);


/*
equation index: 938
type: LINEAR

<var>tan.heaPorSid.T</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void outputs_WaterCooledChillerExample7_eqFunction_938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,938};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 938 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,938};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 938 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */) = aux_x[0];

  threadData->lastEquationSolved = 938;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4879(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4859(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4862(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4860(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4861(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4765(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4882(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4885(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4881(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4880(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5063(DATA *data, threadData_t *threadData);


/*
equation index: 950
type: SIMPLE_ASSIGN
pumTanRet.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumTanRet.eff.per.motorEfficiency, pumTanRet.VMachine_flow, pumTanRet.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumTanRet.eff.per.motorEfficiency, 0.004783016998938075, pumTanRet.eff.motDer, 1.0, 0.05))
*/
void outputs_WaterCooledChillerExample7_eqFunction_950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,950};
  real_array tmp105;
  real_array tmp106;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp107;
  real_array tmp108;
  real_array tmp109;
  real_array tmp110;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp111;
  real_array tmp112;
  real_array_create(&tmp105, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2619]] /* pumTanRet.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp106, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2620]] /* pumTanRet.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp107, tmp105, tmp106);
  real_array_create(&tmp108, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2596]] /* pumTanRet.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp109, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2619]] /* pumTanRet.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp110, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2620]] /* pumTanRet.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp111, tmp109, tmp110);
  real_array_create(&tmp112, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2596]] /* pumTanRet.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* pumTanRet.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp107, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* pumTanRet.VMachine_flow variable */), tmp108, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp111, 0.004783016998938075, tmp112, 1.0, 0.05));
  threadData->lastEquationSolved = 950;
}

/*
equation index: 951
type: SIMPLE_ASSIGN
pumTanRet.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumTanRet.eff.per.hydraulicEfficiency, pumTanRet.VMachine_flow, pumTanRet.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumTanRet.eff.per.hydraulicEfficiency, 0.004783016998938075, pumTanRet.eff.hydDer, 1.0, 0.05))
*/
void outputs_WaterCooledChillerExample7_eqFunction_951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,951};
  real_array tmp113;
  real_array tmp114;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp115;
  real_array tmp116;
  real_array tmp117;
  real_array tmp118;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp119;
  real_array tmp120;
  real_array_create(&tmp113, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2617]] /* pumTanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp114, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2618]] /* pumTanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp115, tmp113, tmp114);
  real_array_create(&tmp116, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2594]] /* pumTanRet.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp117, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2617]] /* pumTanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp118, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2618]] /* pumTanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp119, tmp117, tmp118);
  real_array_create(&tmp120, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2594]] /* pumTanRet.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* pumTanRet.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp115, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* pumTanRet.VMachine_flow variable */), tmp116, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp119, 0.004783016998938075, tmp120, 1.0, 0.05));
  threadData->lastEquationSolved = 951;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5067(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5068(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5070(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5069(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5071(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5064(DATA *data, threadData_t *threadData);


/*
equation index: 958
type: SIMPLE_ASSIGN
pumTanRet.PToMed.u1 = homotopy(smooth(1, if noEvent(abs(pumTanRet.VMachine_flow) + -9.56603399787615e-6 > 4.783016998938075e-6) then pumTanRet.heaDis.QThe_flow else if noEvent(abs(pumTanRet.VMachine_flow) + -9.56603399787615e-6 < -4.783016998938075e-6) then 0.0 else 0.25 * (2.0 - 209073.05999999997 * abs(pumTanRet.VMachine_flow)) * ((209073.05999999997 * abs(pumTanRet.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * pumTanRet.heaDis.QThe_flow + 0.5 * pumTanRet.heaDis.QThe_flow), 0.0)
*/
void outputs_WaterCooledChillerExample7_eqFunction_958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,958};
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  modelica_real tmp123;
  modelica_boolean tmp124;
  modelica_real tmp125;
  modelica_boolean tmp126;
  modelica_real tmp127;
  tmp121 = Greater(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* pumTanRet.VMachine_flow variable */)) + -9.56603399787615e-6,4.783016998938075e-6);
  tmp126 = (modelica_boolean)tmp121;
  if(tmp126)
  {
    tmp127 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* pumTanRet.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp122 = Less(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* pumTanRet.VMachine_flow variable */)) + -9.56603399787615e-6,-4.783016998938075e-6);
    tmp124 = (modelica_boolean)tmp122;
    if(tmp124)
    {
      tmp125 = 0.0;
    }
    else
    {
      tmp123 = (209073.05999999997) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* pumTanRet.VMachine_flow variable */))) + -2.0;
      tmp125 = (0.25) * (((2.0 - ((209073.05999999997) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* pumTanRet.VMachine_flow variable */))))) * ((tmp123 * tmp123) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* pumTanRet.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* pumTanRet.heaDis.QThe_flow variable */));
    }
    tmp127 = tmp125;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* pumTanRet.PToMed.u1 variable */) = homotopy(tmp127, 0.0);
  threadData->lastEquationSolved = 958;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5073(DATA *data, threadData_t *threadData);


/*
equation index: 960
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.ports_H_flow[2] = semiLinear(-pumTanRet.m_flow, val8Rel.port_a.h_outflow, val8Rel.port_b.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,960};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1260]] /* pumTanRet.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* val8Rel.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1759]] /* val8Rel.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 960;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5051(DATA *data, threadData_t *threadData);


/*
equation index: 962
type: SIMPLE_ASSIGN
pumTanSup.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumTanSup.eff.per.motorEfficiency, pumTanSup.VMachine_flow, pumTanSup.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumTanSup.eff.per.motorEfficiency, 0.004783016998938075, pumTanSup.eff.motDer, 1.0, 0.05))
*/
void outputs_WaterCooledChillerExample7_eqFunction_962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,962};
  real_array tmp128;
  real_array tmp129;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp130;
  real_array tmp131;
  real_array tmp132;
  real_array tmp133;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp134;
  real_array tmp135;
  real_array_create(&tmp128, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2748]] /* pumTanSup.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp129, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2749]] /* pumTanSup.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp130, tmp128, tmp129);
  real_array_create(&tmp131, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2725]] /* pumTanSup.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp132, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2748]] /* pumTanSup.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp133, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2749]] /* pumTanSup.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp134, tmp132, tmp133);
  real_array_create(&tmp135, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2725]] /* pumTanSup.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* pumTanSup.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp130, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* pumTanSup.VMachine_flow variable */), tmp131, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp134, 0.004783016998938075, tmp135, 1.0, 0.05));
  threadData->lastEquationSolved = 962;
}

/*
equation index: 963
type: SIMPLE_ASSIGN
pumTanSup.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumTanSup.eff.per.hydraulicEfficiency, pumTanSup.VMachine_flow, pumTanSup.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumTanSup.eff.per.hydraulicEfficiency, 0.004783016998938075, pumTanSup.eff.hydDer, 1.0, 0.05))
*/
void outputs_WaterCooledChillerExample7_eqFunction_963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,963};
  real_array tmp136;
  real_array tmp137;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp138;
  real_array tmp139;
  real_array tmp140;
  real_array tmp141;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp142;
  real_array tmp143;
  real_array_create(&tmp136, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2746]] /* pumTanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp137, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* pumTanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp138, tmp136, tmp137);
  real_array_create(&tmp139, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2723]] /* pumTanSup.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp140, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2746]] /* pumTanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp141, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* pumTanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp142, tmp140, tmp141);
  real_array_create(&tmp143, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2723]] /* pumTanSup.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* pumTanSup.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp138, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* pumTanSup.VMachine_flow variable */), tmp139, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp142, 0.004783016998938075, tmp143, 1.0, 0.05));
  threadData->lastEquationSolved = 963;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5055(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5056(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5058(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5057(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5059(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5052(DATA *data, threadData_t *threadData);


/*
equation index: 970
type: SIMPLE_ASSIGN
pumTanSup.PToMed.u1 = homotopy(smooth(1, if noEvent(abs(pumTanSup.VMachine_flow) + -9.56603399787615e-6 > 4.783016998938075e-6) then pumTanSup.heaDis.QThe_flow else if noEvent(abs(pumTanSup.VMachine_flow) + -9.56603399787615e-6 < -4.783016998938075e-6) then 0.0 else 0.25 * (2.0 - 209073.05999999997 * abs(pumTanSup.VMachine_flow)) * ((209073.05999999997 * abs(pumTanSup.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * pumTanSup.heaDis.QThe_flow + 0.5 * pumTanSup.heaDis.QThe_flow), 0.0)
*/
void outputs_WaterCooledChillerExample7_eqFunction_970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,970};
  modelica_boolean tmp144;
  modelica_boolean tmp145;
  modelica_real tmp146;
  modelica_boolean tmp147;
  modelica_real tmp148;
  modelica_boolean tmp149;
  modelica_real tmp150;
  tmp144 = Greater(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* pumTanSup.VMachine_flow variable */)) + -9.56603399787615e-6,4.783016998938075e-6);
  tmp149 = (modelica_boolean)tmp144;
  if(tmp149)
  {
    tmp150 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* pumTanSup.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp145 = Less(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* pumTanSup.VMachine_flow variable */)) + -9.56603399787615e-6,-4.783016998938075e-6);
    tmp147 = (modelica_boolean)tmp145;
    if(tmp147)
    {
      tmp148 = 0.0;
    }
    else
    {
      tmp146 = (209073.05999999997) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* pumTanSup.VMachine_flow variable */))) + -2.0;
      tmp148 = (0.25) * (((2.0 - ((209073.05999999997) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* pumTanSup.VMachine_flow variable */))))) * ((tmp146 * tmp146) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* pumTanSup.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* pumTanSup.heaDis.QThe_flow variable */));
    }
    tmp150 = tmp148;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* pumTanSup.PToMed.u1 variable */) = homotopy(tmp150, 0.0);
  threadData->lastEquationSolved = 970;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5061(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5050(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5132(DATA *data, threadData_t *threadData);


/*
equation index: 974
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.ports_H_flow[3] = semiLinear(-junCHWSup2.res2.m_flow, val8Rel.port_a.h_outflow, junCHWSup.port_3.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,974};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[951]] /* junCHWSup.vol.dynBal.ports_H_flow[3] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* junCHWSup2.res2.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* val8Rel.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* junCHWSup.port_3.h_outflow variable */));
  threadData->lastEquationSolved = 974;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5049(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5133(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5134(DATA *data, threadData_t *threadData);


/*
equation index: 978
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.ports_H_flow[3] = semiLinear(-pumTanRet.m_flow, val8_2Rel.port_a.h_outflow, val8_2Rel.port_b.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,978};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[927]] /* junCHWRet2.vol.dynBal.ports_H_flow[3] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* val8_2Rel.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* val8_2Rel.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 978;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5076(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5077(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5080(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5079(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5078(DATA *data, threadData_t *threadData);


/*
equation index: 984
type: SIMPLE_ASSIGN
tan.str.h[6] = (max(-pumTanRet.m_flow, 1e-7) * val8Rel.port_b.h_outflow + max(pumTanRet.m_flow, 1e-7) * tan.vol[4].ports[3].h_outflow) / (max(-pumTanRet.m_flow, 1e-7) + max(pumTanRet.m_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,984};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1625]] /* tan.str.h[6] variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1759]] /* val8Rel.port_b.h_outflow variable */)) + (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1710]] /* tan.vol[4].ports[3].h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)),1e-7) + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),1e-7),"max(-pumTanRet.m_flow, 1e-7) + max(pumTanRet.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 984;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5109(DATA *data, threadData_t *threadData);


/*
equation index: 986
type: SIMPLE_ASSIGN
tan.str.h[1] = (max(pumTanRet.m_flow, 1e-7) * val8_2Rel.port_a.h_outflow + max(-pumTanRet.m_flow, 1e-7) * tan.vol[1].ports[3].h_outflow) / (max(pumTanRet.m_flow, 1e-7) + max(-pumTanRet.m_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,986};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1624]] /* tan.str.h[1] variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* val8_2Rel.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1707]] /* tan.vol[1].ports[3].h_outflow variable */)),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)),1e-7),"max(pumTanRet.m_flow, 1e-7) + max(-pumTanRet.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 986;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5107(DATA *data, threadData_t *threadData);


/*
equation index: 988
type: SIMPLE_ASSIGN
tan.H_b_flow.port_a.h_outflow = max(-pumTanRet.m_flow, 1e-7) * val8Rel.port_b.h_outflow / (1e-7 + max(-pumTanRet.m_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,988};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1306]] /* tan.H_b_flow.port_a.h_outflow variable */) = (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)),1e-7)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1759]] /* val8Rel.port_b.h_outflow variable */),1e-7 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)),1e-7),"1e-7 + max(-pumTanRet.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 988;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5102(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5103(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5081(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5082(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5119(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5120(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5121(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5083(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5084(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5085(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5086(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5087(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5089(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5090(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5091(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5092(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5093(DATA *data, threadData_t *threadData);


/*
equation index: 1006
type: SIMPLE_ASSIGN
tan.H_a_flow.port_b.h_outflow = max(pumTanRet.m_flow, 1e-7) * val8_2Rel.port_a.h_outflow / (1e-7 + max(pumTanRet.m_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1006};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1302]] /* tan.H_a_flow.port_b.h_outflow variable */) = (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),1e-7)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* val8_2Rel.port_a.h_outflow variable */),1e-7 + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),1e-7),"1e-7 + max(pumTanRet.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 1006;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5113(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5114(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5115(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5116(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5117(DATA *data, threadData_t *threadData);


/*
equation index: 1012
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.ports_H_flow[2] = semiLinear(-pumTanRet.m_flow, tan.H_b_flow.port_a.h_outflow, tan.vol[4].ports[3].h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1012};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1700]] /* tan.vol[4].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1306]] /* tan.H_b_flow.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1710]] /* tan.vol[4].ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 1012;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5045(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5101(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5122(DATA *data, threadData_t *threadData);


/*
equation index: 1016
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.ports_H_flow[2] = semiLinear(-pumTanRet.m_flow, tan.vol[4].ports[3].h_outflow, tan.vol[3].ports[3].h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1016};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1697]] /* tan.vol[3].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1710]] /* tan.vol[4].ports[3].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1709]] /* tan.vol[3].ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 1016;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5042(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5044(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5088(DATA *data, threadData_t *threadData);


/*
equation index: 1020
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.ports_H_flow[2] = semiLinear(-pumTanRet.m_flow, tan.vol[3].ports[3].h_outflow, tan.vol[2].ports[3].h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1020};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* tan.vol[2].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1709]] /* tan.vol[3].ports[3].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1708]] /* tan.vol[2].ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 1020;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5039(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5041(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5094(DATA *data, threadData_t *threadData);


/*
equation index: 1024
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.ports_H_flow[2] = semiLinear(-pumTanRet.m_flow, tan.vol[2].ports[3].h_outflow, tan.vol[1].ports[3].h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1024};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1691]] /* tan.vol[1].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1708]] /* tan.vol[2].ports[3].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1707]] /* tan.vol[1].ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 1024;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5111(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5112(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5118(DATA *data, threadData_t *threadData);


/*
equation index: 1028
type: SIMPLE_ASSIGN
tan.port_a.h_outflow = max(-pumTanRet.m_flow, 1e-7) * tan.vol[1].ports[3].h_outflow / (1e-7 + max(-pumTanRet.m_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1028};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* tan.port_a.h_outflow variable */) = (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)),1e-7)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1707]] /* tan.vol[1].ports[3].h_outflow variable */),1e-7 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)),1e-7),"1e-7 + max(-pumTanRet.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 1028;
}

/*
equation index: 1029
type: SIMPLE_ASSIGN
pumTanSup.preSou.V_flow = pumTanRet.m_flow / Modelica.Fluid.Utilities.regStep(pumTanRet.m_flow, WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.preSou.Medium.setState_phX(pumTanSup.port_a.p, val8_2Rel.port_a.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.preSou.Medium.setState_phX(tan.vol[4].p, tan.port_a.h_outflow, {})), pumTanSup.preSou.m_flow_small)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1029};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* pumTanSup.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */), omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* pumTanSup.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* val8_2Rel.port_a.h_outflow variable */), _OMC_LIT88)), omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumTanSup_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* tan.vol[4].p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* tan.port_a.h_outflow variable */), _OMC_LIT88)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2798]] /* pumTanSup.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(pumTanRet.m_flow, WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.preSou.Medium.setState_phX(pumTanSup.port_a.p, val8_2Rel.port_a.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumTanSup.preSou.Medium.setState_phX(tan.vol[4].p, tan.port_a.h_outflow, {})), pumTanSup.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 1029;
}

/*
equation index: 1030
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.ports_H_flow[2] = semiLinear(-pumTanRet.m_flow, tan.port_a.h_outflow, val8_2Rel.port_a.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1030};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1297]] /* pumTanSup.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* tan.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* val8_2Rel.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 1030;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5124(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5125(DATA *data, threadData_t *threadData);


/*
equation index: 1033
type: SIMPLE_ASSIGN
tan.port_b.h_outflow = max(pumTanRet.m_flow, 1e-7) * tan.vol[4].ports[3].h_outflow / (1e-7 + max(pumTanRet.m_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1033};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1604]] /* tan.port_b.h_outflow variable */) = (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),1e-7)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1710]] /* tan.vol[4].ports[3].h_outflow variable */),1e-7 + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */),1e-7),"1e-7 + max(pumTanRet.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 1033;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5128(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5129(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5130(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4887(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4886(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4890(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4893(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4899(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4900(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4902(DATA *data, threadData_t *threadData);


/*
equation index: 1044
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[6].hA = tan.indTanHex.hAPipIns[6].x * tan.indTanHex.hAPipIns[6].hA_nominal * Buildings.Utilities.Math.Functions.regNonZeroPower(tan.indTanHex.hAPipIns[6].fm, tan.indTanHex.hAPipIns[6].n, 0.1)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1044};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1467]] /* tan.indTanHex.hAPipIns[6].hA variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1473]] /* tan.indTanHex.hAPipIns[6].x variable */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3027]] /* tan.indTanHex.hAPipIns[6].hA_nominal PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1461]] /* tan.indTanHex.hAPipIns[6].fm variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3039]] /* tan.indTanHex.hAPipIns[6].n PARAM */), 0.1)));
  threadData->lastEquationSolved = 1044;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4901(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5000(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5020(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5001(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5002(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5003(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4898(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4903(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4905(DATA *data, threadData_t *threadData);


/*
equation index: 1054
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[5].hA = tan.indTanHex.hAPipIns[5].x * tan.indTanHex.hAPipIns[5].hA_nominal * Buildings.Utilities.Math.Functions.regNonZeroPower(tan.indTanHex.hAPipIns[5].fm, tan.indTanHex.hAPipIns[5].n, 0.1)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1054};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1466]] /* tan.indTanHex.hAPipIns[5].hA variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1472]] /* tan.indTanHex.hAPipIns[5].x variable */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3026]] /* tan.indTanHex.hAPipIns[5].hA_nominal PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1460]] /* tan.indTanHex.hAPipIns[5].fm variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3038]] /* tan.indTanHex.hAPipIns[5].n PARAM */), 0.1)));
  threadData->lastEquationSolved = 1054;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4904(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4992(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4993(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4994(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4995(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4996(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4897(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4906(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4908(DATA *data, threadData_t *threadData);


/*
equation index: 1064
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[4].hA = tan.indTanHex.hAPipIns[4].x * tan.indTanHex.hAPipIns[4].hA_nominal * Buildings.Utilities.Math.Functions.regNonZeroPower(tan.indTanHex.hAPipIns[4].fm, tan.indTanHex.hAPipIns[4].n, 0.1)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1064};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* tan.indTanHex.hAPipIns[4].hA variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1471]] /* tan.indTanHex.hAPipIns[4].x variable */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3025]] /* tan.indTanHex.hAPipIns[4].hA_nominal PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1459]] /* tan.indTanHex.hAPipIns[4].fm variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3037]] /* tan.indTanHex.hAPipIns[4].n PARAM */), 0.1)));
  threadData->lastEquationSolved = 1064;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4907(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4984(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4985(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4986(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4987(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4988(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4896(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4909(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4911(DATA *data, threadData_t *threadData);


/*
equation index: 1074
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[3].hA = tan.indTanHex.hAPipIns[3].x * tan.indTanHex.hAPipIns[3].hA_nominal * Buildings.Utilities.Math.Functions.regNonZeroPower(tan.indTanHex.hAPipIns[3].fm, tan.indTanHex.hAPipIns[3].n, 0.1)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1074};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* tan.indTanHex.hAPipIns[3].hA variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1470]] /* tan.indTanHex.hAPipIns[3].x variable */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3024]] /* tan.indTanHex.hAPipIns[3].hA_nominal PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1458]] /* tan.indTanHex.hAPipIns[3].fm variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3036]] /* tan.indTanHex.hAPipIns[3].n PARAM */), 0.1)));
  threadData->lastEquationSolved = 1074;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4910(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4976(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4977(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4978(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4979(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4980(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4895(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4912(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4914(DATA *data, threadData_t *threadData);


/*
equation index: 1084
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[2].hA = tan.indTanHex.hAPipIns[2].x * tan.indTanHex.hAPipIns[2].hA_nominal * Buildings.Utilities.Math.Functions.regNonZeroPower(tan.indTanHex.hAPipIns[2].fm, tan.indTanHex.hAPipIns[2].n, 0.1)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1084};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* tan.indTanHex.hAPipIns[2].hA variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1469]] /* tan.indTanHex.hAPipIns[2].x variable */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3023]] /* tan.indTanHex.hAPipIns[2].hA_nominal PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1457]] /* tan.indTanHex.hAPipIns[2].fm variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3035]] /* tan.indTanHex.hAPipIns[2].n PARAM */), 0.1)));
  threadData->lastEquationSolved = 1084;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4913(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4968(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4969(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4970(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4971(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4972(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4894(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4915(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4917(DATA *data, threadData_t *threadData);


/*
equation index: 1094
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[1].hA = tan.indTanHex.hAPipIns[1].x * tan.indTanHex.hAPipIns[1].hA_nominal * Buildings.Utilities.Math.Functions.regNonZeroPower(tan.indTanHex.hAPipIns[1].fm, tan.indTanHex.hAPipIns[1].n, 0.1)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1094};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* tan.indTanHex.hAPipIns[1].hA variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1468]] /* tan.indTanHex.hAPipIns[1].x variable */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3022]] /* tan.indTanHex.hAPipIns[1].hA_nominal PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1456]] /* tan.indTanHex.hAPipIns[1].fm variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3034]] /* tan.indTanHex.hAPipIns[1].n PARAM */), 0.1)));
  threadData->lastEquationSolved = 1094;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4916(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4960(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4961(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4962(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4963(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4964(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4892(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4918(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4919(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4922(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4920(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4921(DATA *data, threadData_t *threadData);


/*
equation index: 1107
type: SIMPLE_ASSIGN
pumCHW2.preSou.V_flow = 4.761904761904762 / Modelica.Fluid.Utilities.regStep(4.761904761904762, WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.preSou.Medium.setState_phX(pumCHW2.port_a.p, pumCHW2.port_b.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.preSou.Medium.setState_phX(chi2.vol2.p, chi2.port_a2.h_outflow, {})), pumCHW2.preSou.m_flow_small)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* pumCHW2.preSou.V_flow variable */) = DIVISION_SIM(4.761904761904762,omc_Modelica_Fluid_Utilities_regStep(threadData, 4.761904761904762, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* pumCHW2.port_b.h_outflow variable */), _OMC_LIT88)), omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* chi2.port_a2.h_outflow variable */), _OMC_LIT88)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* pumCHW2.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(4.761904761904762, WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.preSou.Medium.setState_phX(pumCHW2.port_a.p, pumCHW2.port_b.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.preSou.Medium.setState_phX(chi2.vol2.p, chi2.port_a2.h_outflow, {})), pumCHW2.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 1107;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4927(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4928(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4934(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5012(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4929(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4932(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4930(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4931(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4933(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4936(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4935(DATA *data, threadData_t *threadData);


/*
equation index: 1119
type: SIMPLE_ASSIGN
chi2.TEvaEnt = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.Medium2.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.chi2.Medium2.setState_phX(chi2.vol2.p, pumCHW2.port_b.h_outflow, {1.0}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* chi2.TEvaEnt variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium2_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium2_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* pumCHW2.port_b.h_outflow variable */), _OMC_LIT75));
  threadData->lastEquationSolved = 1119;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4891(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5481(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5482(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5483(DATA *data, threadData_t *threadData);


/*
equation index: 1124
type: SIMPLE_ASSIGN
pumCHW2.PToMed.u1 = homotopy(smooth(1, pumCHW2.heaDis.QThe_flow), 0.0)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* pumCHW2.PToMed.u1 variable */) = homotopy((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1099]] /* pumCHW2.heaDis.QThe_flow variable */), 0.0);
  threadData->lastEquationSolved = 1124;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5485(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5486(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5025(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5026(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5024(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5027(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5023(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5223(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5221(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5222(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5196(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5195(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5224(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5037(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5047(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5048(DATA *data, threadData_t *threadData);


/*
equation index: 1141
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.ports_H_flow[3] = semiLinear(-junCHWRet2.res1.m_flow, val8_2Rel.port_b.h_outflow, junCHWRet.port_3.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* junCHWRet.vol.dynBal.ports_H_flow[3] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* junCHWRet2.res1.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* val8_2Rel.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* junCHWRet.port_3.h_outflow variable */));
  threadData->lastEquationSolved = 1141;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5167(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5168(DATA *data, threadData_t *threadData);


/*
equation index: 1144
type: SIMPLE_ASSIGN
val5.Kv_SI = 15.873015873015873 / sqrt(val5.dpValve_nominal)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1144};
  modelica_real tmp151;
  tmp151 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3373]] /* val5.dpValve_nominal PARAM */);
  if(!(tmp151 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val5.dpValve_nominal) was %g should be >= 0", tmp151);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3368]] /* val5.Kv_SI PARAM */) = DIVISION_SIM(15.873015873015873,sqrt(tmp151),"sqrt(val5.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 1144;
}

/*
equation index: 1145
type: SIMPLE_ASSIGN
val5.Kv = 1.1384199576606166e6 * val5.Kv_SI / val5.rhoStd
*/
void outputs_WaterCooledChillerExample7_eqFunction_1145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1145};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3367]] /* val5.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3368]] /* val5.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3383]] /* val5.rhoStd PARAM */),"val5.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 1145;
}

/*
equation index: 1146
type: SIMPLE_ASSIGN
val5.Cv = 83036.13671167512 * val5.Kv_SI / (val5.rhoStd * 0.0631)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1146};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3366]] /* val5.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3368]] /* val5.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3383]] /* val5.rhoStd PARAM */)) * (0.0631),"val5.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 1146;
}

/*
equation index: 1147
type: SIMPLE_ASSIGN
val5.Av = val5.Kv_SI / sqrt(val5.rhoStd)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1147};
  modelica_real tmp152;
  tmp152 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3383]] /* val5.rhoStd PARAM */);
  if(!(tmp152 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val5.rhoStd) was %g should be >= 0", tmp152);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3365]] /* val5.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3368]] /* val5.Kv_SI PARAM */),sqrt(tmp152),"sqrt(val5.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 1147;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4360(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4361(DATA *data, threadData_t *threadData);


/*
equation index: 1150
type: SIMPLE_ASSIGN
val5.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(15.873015873015873, val5.k, val5.m_flow_turbulent), val5.dp_nominal_pos)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1723]] /* val5.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, 15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1724]] /* val5.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3382]] /* val5.m_flow_turbulent PARAM */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3375]] /* val5.dp_nominal_pos PARAM */));
  threadData->lastEquationSolved = 1150;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4363(DATA *data, threadData_t *threadData);


/*
equation index: 1152
type: SIMPLE_ASSIGN
cooTow.vol.p = val5.port_b.p - cooTow.dp
*/
void outputs_WaterCooledChillerExample7_eqFunction_1152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cooTow.vol.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1731]] /* val5.port_b.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.dp variable */);
  threadData->lastEquationSolved = 1152;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4370(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4369(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4368(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4366(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4367(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4365(DATA *data, threadData_t *threadData);


/*
equation index: 1159
type: SIMPLE_ASSIGN
cooTow.T_a = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Water.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Water.setState_phX(val5.port_b.p, val5.port_b.h_outflow, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cooTow.T_a variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Water_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1731]] /* val5.port_b.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* val5.port_b.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 1159;
}

/*
equation index: 1160
type: SIMPLE_ASSIGN
pumCW.eff.hydDer[1] = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1160};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2334]] /* pumCW.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1160;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5488(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5491(DATA *data, threadData_t *threadData);


/*
equation index: 1163
type: SIMPLE_ASSIGN
pumCW.eff.motDer[1] = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1163};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2336]] /* pumCW.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1163;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5487(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5489(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5490(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5492(DATA *data, threadData_t *threadData);


/*
equation index: 1168
type: SIMPLE_ASSIGN
pumCW.PToMed.u1 = homotopy(smooth(1, pumCW.heaDis.QThe_flow), 0.0)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1136]] /* pumCW.PToMed.u1 variable */) = homotopy((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1146]] /* pumCW.heaDis.QThe_flow variable */), 0.0);
  threadData->lastEquationSolved = 1168;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5494(DATA *data, threadData_t *threadData);


/*
equation index: 1170
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.medium.T = pumCW.vol.dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_1170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* pumCW.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* pumCW.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 1170;
}

/*
equation index: 1171
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.medium.T_degC = -273.15 + pumCW.vol.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_1171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* pumCW.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* pumCW.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1171;
}

/*
equation index: 1172
type: SIMPLE_ASSIGN
TCWLeaTow.port_b.h_outflow = 4184.0 * pumCW.vol.dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_1172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWLeaTow.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* pumCW.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 1172;
}

/*
equation index: 1173
type: SIMPLE_ASSIGN
pumCW.preSou.V_flow = 15.873015873015873 / Modelica.Fluid.Utilities.regStep(15.873015873015873, WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.preSou.Medium.setState_phX(cooTow.vol.p, TCWLeaTow.port_b.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.preSou.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_a.h_outflow, {})), pumCW.preSou.m_flow_small)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* pumCW.preSou.V_flow variable */) = DIVISION_SIM(15.873015873015873,omc_Modelica_Fluid_Utilities_regStep(threadData, 15.873015873015873, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWLeaTow.port_b.h_outflow variable */), _OMC_LIT88)), omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_preSou_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* TCWLeaTow.port_a.h_outflow variable */), _OMC_LIT88)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2409]] /* pumCW.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(15.873015873015873, WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.preSou.Medium.setState_phX(cooTow.vol.p, TCWLeaTow.port_b.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.preSou.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_a.h_outflow, {})), pumCW.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 1173;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4373(DATA *data, threadData_t *threadData);


/*
equation index: 1175
type: SIMPLE_ASSIGN
TCWLeaTow.T_a_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.TCWLeaTow.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.TCWLeaTow.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_b.h_outflow, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1175};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* TCWLeaTow.T_a_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCWLeaTow_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCWLeaTow_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWLeaTow.port_b.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 1175;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4385(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4386(DATA *data, threadData_t *threadData);


/*
equation index: 1178
type: SIMPLE_ASSIGN
chi.TConEnt = WaterCooledChillerExample.WaterCooledChillerExample7.chi.Medium1.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.chi.Medium1.setState_phX(expVesChi.p_start, TCWLeaTow.port_b.h_outflow, {1.0}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* chi.TConEnt variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium1_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium1_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWLeaTow.port_b.h_outflow variable */), _OMC_LIT75));
  threadData->lastEquationSolved = 1178;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4357(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5203(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5201(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5202(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4393(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4352(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4392(DATA *data, threadData_t *threadData);


/*
equation index: 1186
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.U = pumCW.vol.dynBal.m * TCWLeaTow.port_b.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* pumCW.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1164]] /* pumCW.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWLeaTow.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1186;
}

void outputs_WaterCooledChillerExample7_eqFunction_1187(DATA*, threadData_t*);
/*
equation index: 1188
indexNonlinear: 6
type: NONLINEAR

vars: {cooTow.FRWat0}
eqns: {1187}
*/
void outputs_WaterCooledChillerExample7_eqFunction_1188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1188};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1188 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */);
  retValue = solve_nonlinear_system(data, threadData, 6);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1188};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1188 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */) = data->simulationInfo->nonlinearSystemData[6].nlsx[0];
  threadData->lastEquationSolved = 1188;
}

/*
equation index: 1189
type: SIMPLE_ASSIGN
cooTow.mRef_flow = 15.873015873015873 / cooTow.FRWat0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1189};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[973]] /* cooTow.mRef_flow PARAM */) = DIVISION_SIM(15.873015873015873,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */),"cooTow.FRWat0",equationIndexes);
  threadData->lastEquationSolved = 1189;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4350(DATA *data, threadData_t *threadData);


/*
equation index: 1191
type: SIMPLE_ASSIGN
$DER.cooTow.vol.dynBal.medium.T = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[144]] /* der(cooTow.vol.dynBal.medium.T) DUMMY_DER */) = 0.0;
  threadData->lastEquationSolved = 1191;
}

/*
equation index: 1192
type: SIMPLE_ASSIGN
$DER.cooTow.vol.dynBal.medium.T_degC = $DER.cooTow.vol.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1192};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[145]] /* der(cooTow.vol.dynBal.medium.T_degC) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[144]] /* der(cooTow.vol.dynBal.medium.T) DUMMY_DER */);
  threadData->lastEquationSolved = 1192;
}

/*
equation index: 1193
type: SIMPLE_ASSIGN
$DER.val5.port_a.h_outflow = 4184.0 * $DER.cooTow.vol.dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1193};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* der(val5.port_a.h_outflow) DUMMY_DER */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[145]] /* der(cooTow.vol.dynBal.medium.T_degC) DUMMY_DER */));
  threadData->lastEquationSolved = 1193;
}

/*
equation index: 1194
type: SIMPLE_ASSIGN
$DER.cooTow.vol.dynBal.U = cooTow.vol.dynBal.m * $DER.val5.port_a.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1194};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* der(cooTow.vol.dynBal.U) STATE_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* der(val5.port_a.h_outflow) DUMMY_DER */));
  threadData->lastEquationSolved = 1194;
}

/*
equation index: 1195
type: SIMPLE_ASSIGN
expVesCHW.m = expVesCHW.V_start * expVesCHW.rho_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_1195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* expVesCHW.m STATE(1,expVesCHW.port_a.m_flow) */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1224]] /* expVesCHW.V_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1229]] /* expVesCHW.rho_start PARAM */));
  threadData->lastEquationSolved = 1195;
}

/*
equation index: 1196
type: SIMPLE_ASSIGN
expVesCHW.H = expVesCHW.m * WaterCooledChillerExample.WaterCooledChillerExample7.expVesCHW.Medium.specificInternalEnergy(WaterCooledChillerExample.WaterCooledChillerExample7.expVesCHW.Medium.setState_pTX(expVesCHW.p_start, expVesCHW.T_start, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1196};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* expVesCHW.H STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* expVesCHW.m STATE(1,expVesCHW.port_a.m_flow) */)) * (omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesCHW_Medium_specificInternalEnergy(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesCHW_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* expVesCHW.T_start PARAM */), _OMC_LIT88)));
  threadData->lastEquationSolved = 1196;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4349(DATA *data, threadData_t *threadData);


/*
equation index: 1198
type: SIMPLE_ASSIGN
pumCHW.eff.hydDer[1] = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1198};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2076]] /* pumCHW.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1198;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5497(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5500(DATA *data, threadData_t *threadData);


/*
equation index: 1201
type: SIMPLE_ASSIGN
pumCHW.eff.motDer[1] = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1201};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2078]] /* pumCHW.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1201;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5496(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5498(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5499(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5501(DATA *data, threadData_t *threadData);


/*
equation index: 1206
type: SIMPLE_ASSIGN
pumCHW.PToMed.u1 = homotopy(smooth(1, pumCHW.heaDis.QThe_flow), 0.0)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1206};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1045]] /* pumCHW.PToMed.u1 variable */) = homotopy((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* pumCHW.heaDis.QThe_flow variable */), 0.0);
  threadData->lastEquationSolved = 1206;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5503(DATA *data, threadData_t *threadData);


/*
equation index: 1208
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.medium.T = pumCHW.vol.dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_1208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* pumCHW.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2166]] /* pumCHW.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 1208;
}

/*
equation index: 1209
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.medium.T_degC = -273.15 + pumCHW.vol.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* pumCHW.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* pumCHW.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1209;
}

/*
equation index: 1210
type: SIMPLE_ASSIGN
pumCHW.port_a.h_outflow = 4184.0 * pumCHW.vol.dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_1210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* pumCHW.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* pumCHW.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 1210;
}

/*
equation index: 1211
type: SIMPLE_ASSIGN
pumCHW.preSou.V_flow = 4.761904761904762 / Modelica.Fluid.Utilities.regStep(4.761904761904762, WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.preSou.Medium.setState_phX(junCHWRet.vol.p, pumCHW.port_a.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.preSou.Medium.setState_phX(chi.vol2.p, val6.port_b.h_outflow, {})), pumCHW.preSou.m_flow_small)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1063]] /* pumCHW.preSou.V_flow variable */) = DIVISION_SIM(4.761904761904762,omc_Modelica_Fluid_Utilities_regStep(threadData, 4.761904761904762, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* pumCHW.port_a.h_outflow variable */), _OMC_LIT88)), omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1737]] /* val6.port_b.h_outflow variable */), _OMC_LIT88)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2151]] /* pumCHW.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(4.761904761904762, WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.preSou.Medium.setState_phX(junCHWRet.vol.p, pumCHW.port_a.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.preSou.Medium.setState_phX(chi.vol2.p, val6.port_b.h_outflow, {})), pumCHW.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 1211;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5030(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4675(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5209(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5215(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5210(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5213(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5211(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5212(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5214(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5218(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5217(DATA *data, threadData_t *threadData);


/*
equation index: 1223
type: SIMPLE_ASSIGN
chi.TEvaEnt = WaterCooledChillerExample.WaterCooledChillerExample7.chi.Medium2.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.chi.Medium2.setState_phX(chi.vol2.p, pumCHW.port_a.h_outflow, {1.0}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* chi.TEvaEnt variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium2_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium2_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* pumCHW.port_a.h_outflow variable */), _OMC_LIT75));
  threadData->lastEquationSolved = 1223;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4398(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4667(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5216(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4346(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4397(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4673(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4674(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5504(DATA *data, threadData_t *threadData);


/*
equation index: 1232
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.U = pumCHW.vol.dynBal.m * pumCHW.port_a.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* pumCHW.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* pumCHW.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* pumCHW.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 1232;
}

/*
equation index: 1233
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.Xi[1] = 0.01
*/
void outputs_WaterCooledChillerExample7_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */) = 0.01;
  threadData->lastEquationSolved = 1233;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4334(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4335(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4336(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4337(DATA *data, threadData_t *threadData);


/*
equation index: 1238
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.T = 293.15
*/
void outputs_WaterCooledChillerExample7_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* cooCoi.ele[4].vol2.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 1238;
}

/*
equation index: 1239
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[4].vol2.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* cooCoi.ele[4].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* cooCoi.ele[4].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1239;
}

/*
equation index: 1240
type: SIMPLE_ASSIGN
cooCoi.port_a2.h_outflow = 1006.0 * cooCoi.ele[4].vol2.dynBal.medium.T_degC * cooCoi.ele[4].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[4].vol2.dynBal.medium.T_degC) * cooCoi.ele[4].vol2.dynBal.medium.Xi[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cooCoi.port_a2.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* cooCoi.ele[4].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cooCoi.ele[4].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* cooCoi.ele[4].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1240;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4340(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4341(DATA *data, threadData_t *threadData);


/*
equation index: 1243
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.u = -84437.5 + cooCoi.port_a2.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[4].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cooCoi.port_a2.h_outflow variable */);
  threadData->lastEquationSolved = 1243;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4344(DATA *data, threadData_t *threadData);


/*
equation index: 1245
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.T = cooCoi.ele[4].vol1.dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[572]] /* cooCoi.ele[4].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[676]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 1245;
}

/*
equation index: 1246
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[4].vol1.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[576]] /* cooCoi.ele[4].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[572]] /* cooCoi.ele[4].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1246;
}

/*
equation index: 1247
type: SIMPLE_ASSIGN
cooCoi.port_b1.h_outflow = 4184.0 * cooCoi.ele[4].vol1.dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cooCoi.port_b1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[576]] /* cooCoi.ele[4].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 1247;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4325(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4326(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5146(DATA *data, threadData_t *threadData);


/*
equation index: 1251
type: SIMPLE_ASSIGN
val1.port_b.h_outflow = (max(-expVesCHW.port_a.m_flow, 1e-7) * expVesCHW.port_a.h_outflow + max(cooCoi.m1_flow, 1e-7) * cooCoi.port_b1.h_outflow) / (max(-expVesCHW.port_a.m_flow, 1e-7) + max(cooCoi.m1_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* val1.port_b.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* expVesCHW.port_a.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* expVesCHW.port_a.h_outflow variable */)) + (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cooCoi.port_b1.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* expVesCHW.port_a.m_flow variable */)),1e-7) + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */),1e-7),"max(-expVesCHW.port_a.m_flow, 1e-7) + max(cooCoi.m1_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1251;
}

/*
equation index: 1252
type: SIMPLE_ASSIGN
TCHWLeaCoi.T_a_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.TCHWLeaCoi.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.TCHWLeaCoi.Medium.setState_phX(expVesCHW.p_start, val1.port_b.h_outflow, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* TCHWLeaCoi.T_a_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCHWLeaCoi_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCHWLeaCoi_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* val1.port_b.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 1252;
}

/*
equation index: 1253
type: SIMPLE_ASSIGN
valByp.port_b.h_outflow = (max(val1.m_flow, 1e-7) * val1.port_b.h_outflow + max(-junCHWRet.res1.m_flow, 1e-7) * junCHWRet.port_3.h_outflow) / (max(val1.m_flow, 1e-7) + max(-junCHWRet.res1.m_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* valByp.port_b.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* val1.port_b.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* junCHWRet.port_3.h_outflow variable */)),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */)),1e-7),"max(val1.m_flow, 1e-7) + max(-junCHWRet.res1.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1253;
}

/*
equation index: 1254
type: SIMPLE_ASSIGN
TCHWEntChi.port_a.h_outflow = (max(valByp.m_flow, 1e-7) * valByp.port_b.h_outflow + max(-junCHWSup.res2.m_flow, 1e-7) * junCHWSup.port_3.h_outflow) / (max(valByp.m_flow, 1e-7) + max(-junCHWSup.res2.m_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* TCHWEntChi.port_a.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* valByp.port_b.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* junCHWSup.port_3.h_outflow variable */)),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */)),1e-7),"max(valByp.m_flow, 1e-7) + max(-junCHWSup.res2.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1254;
}

/*
equation index: 1255
type: SIMPLE_ASSIGN
TCHWEntChi.T_b_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.TCHWEntChi.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.TCHWEntChi.Medium.setState_phX(junCHWSup.vol.p, TCHWEntChi.port_a.h_outflow, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* TCHWEntChi.T_b_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCHWEntChi_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCHWEntChi_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* TCHWEntChi.port_a.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 1255;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5176(DATA *data, threadData_t *threadData);


/*
equation index: 1257
type: SIMPLE_ASSIGN
cooCoi.temSen_1.T_a_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.temSen_1.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.temSen_1.Medium.setState_phX(junCHWSup.vol.p, TCHWEntChi.port_a.h_outflow, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1257};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[690]] /* cooCoi.temSen_1.T_a_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_temSen__1_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_temSen__1_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* TCHWEntChi.port_a.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 1257;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5175(DATA *data, threadData_t *threadData);


/*
equation index: 1259
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.U = cooCoi.ele[4].vol1.dynBal.m * cooCoi.port_b1.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1259};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* cooCoi.ele[4].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* cooCoi.ele[4].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cooCoi.port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 1259;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4332(DATA *data, threadData_t *threadData);


/*
equation index: 1261
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.Xi[1] = 0.01
*/
void outputs_WaterCooledChillerExample7_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */) = 0.01;
  threadData->lastEquationSolved = 1261;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5302(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5308(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5311(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5312(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5313(DATA *data, threadData_t *threadData);


/*
equation index: 1267
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.T = 293.15
*/
void outputs_WaterCooledChillerExample7_eqFunction_1267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1267};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* cooCoi.ele[3].vol2.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 1267;
}

/*
equation index: 1268
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[3].vol2.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1268};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* cooCoi.ele[3].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* cooCoi.ele[3].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1268;
}

/*
equation index: 1269
type: SIMPLE_ASSIGN
cooCoi.ele[3].port_a2.h_outflow = 1006.0 * cooCoi.ele[3].vol2.dynBal.medium.T_degC * cooCoi.ele[3].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[3].vol2.dynBal.medium.T_degC) * cooCoi.ele[3].vol2.dynBal.medium.Xi[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* cooCoi.ele[3].port_a2.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* cooCoi.ele[3].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* cooCoi.ele[3].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* cooCoi.ele[3].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1269;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5304(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5306(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5307(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5305(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5303(DATA *data, threadData_t *threadData);


/*
equation index: 1275
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.u = -84437.5 + cooCoi.ele[3].port_a2.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[3].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* cooCoi.ele[3].port_a2.h_outflow variable */);
  threadData->lastEquationSolved = 1275;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5314(DATA *data, threadData_t *threadData);


/*
equation index: 1277
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.T = cooCoi.ele[3].vol1.dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_1277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1277};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[571]] /* cooCoi.ele[3].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 1277;
}

/*
equation index: 1278
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[3].vol1.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_1278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1278};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* cooCoi.ele[3].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[571]] /* cooCoi.ele[3].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1278;
}

/*
equation index: 1279
type: SIMPLE_ASSIGN
cooCoi.ele[3].port_b1.h_outflow = 4184.0 * cooCoi.ele[3].vol1.dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[3].port_b1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* cooCoi.ele[3].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 1279;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4316(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4327(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4328(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5147(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4317(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5144(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5158(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4315(DATA *data, threadData_t *threadData);


/*
equation index: 1288
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m1_flow, cooCoi.port_b1.h_outflow, cooCoi.ele[3].port_b1.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1288};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[594]] /* cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cooCoi.port_b1.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[3].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 1288;
}

/*
equation index: 1289
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.U = cooCoi.ele[3].vol1.dynBal.m * cooCoi.ele[3].port_b1.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1289};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* cooCoi.ele[3].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* cooCoi.ele[3].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[3].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 1289;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4323(DATA *data, threadData_t *threadData);


/*
equation index: 1291
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.Xi[1] = 0.01
*/
void outputs_WaterCooledChillerExample7_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */) = 0.01;
  threadData->lastEquationSolved = 1291;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5319(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5326(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5329(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5330(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5331(DATA *data, threadData_t *threadData);


/*
equation index: 1297
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.T = 293.15
*/
void outputs_WaterCooledChillerExample7_eqFunction_1297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1297};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* cooCoi.ele[2].vol2.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 1297;
}

/*
equation index: 1298
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[2].vol2.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[2].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* cooCoi.ele[2].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1298;
}

/*
equation index: 1299
type: SIMPLE_ASSIGN
cooCoi.ele[2].port_a2.h_outflow = 1006.0 * cooCoi.ele[2].vol2.dynBal.medium.T_degC * cooCoi.ele[2].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[2].vol2.dynBal.medium.T_degC) * cooCoi.ele[2].vol2.dynBal.medium.Xi[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_1299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* cooCoi.ele[2].port_a2.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[2].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* cooCoi.ele[2].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[2].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1299;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5321(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5323(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5324(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5325(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5322(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5320(DATA *data, threadData_t *threadData);


/*
equation index: 1306
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.u = -84437.5 + cooCoi.ele[2].port_a2.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[2].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* cooCoi.ele[2].port_a2.h_outflow variable */);
  threadData->lastEquationSolved = 1306;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5332(DATA *data, threadData_t *threadData);


/*
equation index: 1308
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.T = cooCoi.ele[2].vol1.dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[570]] /* cooCoi.ele[2].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[674]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 1308;
}

/*
equation index: 1309
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[2].vol1.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[574]] /* cooCoi.ele[2].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[570]] /* cooCoi.ele[2].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1309;
}

/*
equation index: 1310
type: SIMPLE_ASSIGN
cooCoi.ele[2].port_b1.h_outflow = 4184.0 * cooCoi.ele[2].vol1.dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* cooCoi.ele[2].port_b1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[574]] /* cooCoi.ele[2].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 1310;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4307(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void outputs_WaterCooledChillerExample7_functionInitialEquations_2(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[420])(DATA*, threadData_t*) = {
    outputs_WaterCooledChillerExample7_eqFunction_4809,
    outputs_WaterCooledChillerExample7_eqFunction_4810,
    outputs_WaterCooledChillerExample7_eqFunction_4811,
    outputs_WaterCooledChillerExample7_eqFunction_4812,
    outputs_WaterCooledChillerExample7_eqFunction_4813,
    outputs_WaterCooledChillerExample7_eqFunction_4814,
    outputs_WaterCooledChillerExample7_eqFunction_4815,
    outputs_WaterCooledChillerExample7_eqFunction_4805,
    outputs_WaterCooledChillerExample7_eqFunction_4827,
    outputs_WaterCooledChillerExample7_eqFunction_4804,
    outputs_WaterCooledChillerExample7_eqFunction_4816,
    outputs_WaterCooledChillerExample7_eqFunction_4801,
    outputs_WaterCooledChillerExample7_eqFunction_4803,
    outputs_WaterCooledChillerExample7_eqFunction_4802,
    outputs_WaterCooledChillerExample7_eqFunction_4767,
    outputs_WaterCooledChillerExample7_eqFunction_4828,
    outputs_WaterCooledChillerExample7_eqFunction_4846,
    outputs_WaterCooledChillerExample7_eqFunction_4847,
    outputs_WaterCooledChillerExample7_eqFunction_4848,
    outputs_WaterCooledChillerExample7_eqFunction_4849,
    outputs_WaterCooledChillerExample7_eqFunction_4850,
    outputs_WaterCooledChillerExample7_eqFunction_4851,
    outputs_WaterCooledChillerExample7_eqFunction_4852,
    outputs_WaterCooledChillerExample7_eqFunction_4853,
    outputs_WaterCooledChillerExample7_eqFunction_4854,
    outputs_WaterCooledChillerExample7_eqFunction_4855,
    outputs_WaterCooledChillerExample7_eqFunction_4835,
    outputs_WaterCooledChillerExample7_eqFunction_4836,
    outputs_WaterCooledChillerExample7_eqFunction_4837,
    outputs_WaterCooledChillerExample7_eqFunction_4838,
    outputs_WaterCooledChillerExample7_eqFunction_4839,
    outputs_WaterCooledChillerExample7_eqFunction_4840,
    outputs_WaterCooledChillerExample7_eqFunction_4841,
    outputs_WaterCooledChillerExample7_eqFunction_4842,
    outputs_WaterCooledChillerExample7_eqFunction_4843,
    outputs_WaterCooledChillerExample7_eqFunction_4844,
    outputs_WaterCooledChillerExample7_eqFunction_4834,
    outputs_WaterCooledChillerExample7_eqFunction_4856,
    outputs_WaterCooledChillerExample7_eqFunction_4833,
    outputs_WaterCooledChillerExample7_eqFunction_4845,
    outputs_WaterCooledChillerExample7_eqFunction_4857,
    outputs_WaterCooledChillerExample7_eqFunction_4829,
    outputs_WaterCooledChillerExample7_eqFunction_4832,
    outputs_WaterCooledChillerExample7_eqFunction_4830,
    outputs_WaterCooledChillerExample7_eqFunction_4831,
    outputs_WaterCooledChillerExample7_eqFunction_4766,
    outputs_WaterCooledChillerExample7_eqFunction_4858,
    outputs_WaterCooledChillerExample7_eqFunction_938,
    outputs_WaterCooledChillerExample7_eqFunction_4879,
    outputs_WaterCooledChillerExample7_eqFunction_4859,
    outputs_WaterCooledChillerExample7_eqFunction_4862,
    outputs_WaterCooledChillerExample7_eqFunction_4860,
    outputs_WaterCooledChillerExample7_eqFunction_4861,
    outputs_WaterCooledChillerExample7_eqFunction_4765,
    outputs_WaterCooledChillerExample7_eqFunction_4882,
    outputs_WaterCooledChillerExample7_eqFunction_4885,
    outputs_WaterCooledChillerExample7_eqFunction_4881,
    outputs_WaterCooledChillerExample7_eqFunction_4880,
    outputs_WaterCooledChillerExample7_eqFunction_5063,
    outputs_WaterCooledChillerExample7_eqFunction_950,
    outputs_WaterCooledChillerExample7_eqFunction_951,
    outputs_WaterCooledChillerExample7_eqFunction_5067,
    outputs_WaterCooledChillerExample7_eqFunction_5068,
    outputs_WaterCooledChillerExample7_eqFunction_5070,
    outputs_WaterCooledChillerExample7_eqFunction_5069,
    outputs_WaterCooledChillerExample7_eqFunction_5071,
    outputs_WaterCooledChillerExample7_eqFunction_5064,
    outputs_WaterCooledChillerExample7_eqFunction_958,
    outputs_WaterCooledChillerExample7_eqFunction_5073,
    outputs_WaterCooledChillerExample7_eqFunction_960,
    outputs_WaterCooledChillerExample7_eqFunction_5051,
    outputs_WaterCooledChillerExample7_eqFunction_962,
    outputs_WaterCooledChillerExample7_eqFunction_963,
    outputs_WaterCooledChillerExample7_eqFunction_5055,
    outputs_WaterCooledChillerExample7_eqFunction_5056,
    outputs_WaterCooledChillerExample7_eqFunction_5058,
    outputs_WaterCooledChillerExample7_eqFunction_5057,
    outputs_WaterCooledChillerExample7_eqFunction_5059,
    outputs_WaterCooledChillerExample7_eqFunction_5052,
    outputs_WaterCooledChillerExample7_eqFunction_970,
    outputs_WaterCooledChillerExample7_eqFunction_5061,
    outputs_WaterCooledChillerExample7_eqFunction_5050,
    outputs_WaterCooledChillerExample7_eqFunction_5132,
    outputs_WaterCooledChillerExample7_eqFunction_974,
    outputs_WaterCooledChillerExample7_eqFunction_5049,
    outputs_WaterCooledChillerExample7_eqFunction_5133,
    outputs_WaterCooledChillerExample7_eqFunction_5134,
    outputs_WaterCooledChillerExample7_eqFunction_978,
    outputs_WaterCooledChillerExample7_eqFunction_5076,
    outputs_WaterCooledChillerExample7_eqFunction_5077,
    outputs_WaterCooledChillerExample7_eqFunction_5080,
    outputs_WaterCooledChillerExample7_eqFunction_5079,
    outputs_WaterCooledChillerExample7_eqFunction_5078,
    outputs_WaterCooledChillerExample7_eqFunction_984,
    outputs_WaterCooledChillerExample7_eqFunction_5109,
    outputs_WaterCooledChillerExample7_eqFunction_986,
    outputs_WaterCooledChillerExample7_eqFunction_5107,
    outputs_WaterCooledChillerExample7_eqFunction_988,
    outputs_WaterCooledChillerExample7_eqFunction_5102,
    outputs_WaterCooledChillerExample7_eqFunction_5103,
    outputs_WaterCooledChillerExample7_eqFunction_5081,
    outputs_WaterCooledChillerExample7_eqFunction_5082,
    outputs_WaterCooledChillerExample7_eqFunction_5119,
    outputs_WaterCooledChillerExample7_eqFunction_5120,
    outputs_WaterCooledChillerExample7_eqFunction_5121,
    outputs_WaterCooledChillerExample7_eqFunction_5083,
    outputs_WaterCooledChillerExample7_eqFunction_5084,
    outputs_WaterCooledChillerExample7_eqFunction_5085,
    outputs_WaterCooledChillerExample7_eqFunction_5086,
    outputs_WaterCooledChillerExample7_eqFunction_5087,
    outputs_WaterCooledChillerExample7_eqFunction_5089,
    outputs_WaterCooledChillerExample7_eqFunction_5090,
    outputs_WaterCooledChillerExample7_eqFunction_5091,
    outputs_WaterCooledChillerExample7_eqFunction_5092,
    outputs_WaterCooledChillerExample7_eqFunction_5093,
    outputs_WaterCooledChillerExample7_eqFunction_1006,
    outputs_WaterCooledChillerExample7_eqFunction_5113,
    outputs_WaterCooledChillerExample7_eqFunction_5114,
    outputs_WaterCooledChillerExample7_eqFunction_5115,
    outputs_WaterCooledChillerExample7_eqFunction_5116,
    outputs_WaterCooledChillerExample7_eqFunction_5117,
    outputs_WaterCooledChillerExample7_eqFunction_1012,
    outputs_WaterCooledChillerExample7_eqFunction_5045,
    outputs_WaterCooledChillerExample7_eqFunction_5101,
    outputs_WaterCooledChillerExample7_eqFunction_5122,
    outputs_WaterCooledChillerExample7_eqFunction_1016,
    outputs_WaterCooledChillerExample7_eqFunction_5042,
    outputs_WaterCooledChillerExample7_eqFunction_5044,
    outputs_WaterCooledChillerExample7_eqFunction_5088,
    outputs_WaterCooledChillerExample7_eqFunction_1020,
    outputs_WaterCooledChillerExample7_eqFunction_5039,
    outputs_WaterCooledChillerExample7_eqFunction_5041,
    outputs_WaterCooledChillerExample7_eqFunction_5094,
    outputs_WaterCooledChillerExample7_eqFunction_1024,
    outputs_WaterCooledChillerExample7_eqFunction_5111,
    outputs_WaterCooledChillerExample7_eqFunction_5112,
    outputs_WaterCooledChillerExample7_eqFunction_5118,
    outputs_WaterCooledChillerExample7_eqFunction_1028,
    outputs_WaterCooledChillerExample7_eqFunction_1029,
    outputs_WaterCooledChillerExample7_eqFunction_1030,
    outputs_WaterCooledChillerExample7_eqFunction_5124,
    outputs_WaterCooledChillerExample7_eqFunction_5125,
    outputs_WaterCooledChillerExample7_eqFunction_1033,
    outputs_WaterCooledChillerExample7_eqFunction_5128,
    outputs_WaterCooledChillerExample7_eqFunction_5129,
    outputs_WaterCooledChillerExample7_eqFunction_5130,
    outputs_WaterCooledChillerExample7_eqFunction_4887,
    outputs_WaterCooledChillerExample7_eqFunction_4886,
    outputs_WaterCooledChillerExample7_eqFunction_4890,
    outputs_WaterCooledChillerExample7_eqFunction_4893,
    outputs_WaterCooledChillerExample7_eqFunction_4899,
    outputs_WaterCooledChillerExample7_eqFunction_4900,
    outputs_WaterCooledChillerExample7_eqFunction_4902,
    outputs_WaterCooledChillerExample7_eqFunction_1044,
    outputs_WaterCooledChillerExample7_eqFunction_4901,
    outputs_WaterCooledChillerExample7_eqFunction_5000,
    outputs_WaterCooledChillerExample7_eqFunction_5020,
    outputs_WaterCooledChillerExample7_eqFunction_5001,
    outputs_WaterCooledChillerExample7_eqFunction_5002,
    outputs_WaterCooledChillerExample7_eqFunction_5003,
    outputs_WaterCooledChillerExample7_eqFunction_4898,
    outputs_WaterCooledChillerExample7_eqFunction_4903,
    outputs_WaterCooledChillerExample7_eqFunction_4905,
    outputs_WaterCooledChillerExample7_eqFunction_1054,
    outputs_WaterCooledChillerExample7_eqFunction_4904,
    outputs_WaterCooledChillerExample7_eqFunction_4992,
    outputs_WaterCooledChillerExample7_eqFunction_4993,
    outputs_WaterCooledChillerExample7_eqFunction_4994,
    outputs_WaterCooledChillerExample7_eqFunction_4995,
    outputs_WaterCooledChillerExample7_eqFunction_4996,
    outputs_WaterCooledChillerExample7_eqFunction_4897,
    outputs_WaterCooledChillerExample7_eqFunction_4906,
    outputs_WaterCooledChillerExample7_eqFunction_4908,
    outputs_WaterCooledChillerExample7_eqFunction_1064,
    outputs_WaterCooledChillerExample7_eqFunction_4907,
    outputs_WaterCooledChillerExample7_eqFunction_4984,
    outputs_WaterCooledChillerExample7_eqFunction_4985,
    outputs_WaterCooledChillerExample7_eqFunction_4986,
    outputs_WaterCooledChillerExample7_eqFunction_4987,
    outputs_WaterCooledChillerExample7_eqFunction_4988,
    outputs_WaterCooledChillerExample7_eqFunction_4896,
    outputs_WaterCooledChillerExample7_eqFunction_4909,
    outputs_WaterCooledChillerExample7_eqFunction_4911,
    outputs_WaterCooledChillerExample7_eqFunction_1074,
    outputs_WaterCooledChillerExample7_eqFunction_4910,
    outputs_WaterCooledChillerExample7_eqFunction_4976,
    outputs_WaterCooledChillerExample7_eqFunction_4977,
    outputs_WaterCooledChillerExample7_eqFunction_4978,
    outputs_WaterCooledChillerExample7_eqFunction_4979,
    outputs_WaterCooledChillerExample7_eqFunction_4980,
    outputs_WaterCooledChillerExample7_eqFunction_4895,
    outputs_WaterCooledChillerExample7_eqFunction_4912,
    outputs_WaterCooledChillerExample7_eqFunction_4914,
    outputs_WaterCooledChillerExample7_eqFunction_1084,
    outputs_WaterCooledChillerExample7_eqFunction_4913,
    outputs_WaterCooledChillerExample7_eqFunction_4968,
    outputs_WaterCooledChillerExample7_eqFunction_4969,
    outputs_WaterCooledChillerExample7_eqFunction_4970,
    outputs_WaterCooledChillerExample7_eqFunction_4971,
    outputs_WaterCooledChillerExample7_eqFunction_4972,
    outputs_WaterCooledChillerExample7_eqFunction_4894,
    outputs_WaterCooledChillerExample7_eqFunction_4915,
    outputs_WaterCooledChillerExample7_eqFunction_4917,
    outputs_WaterCooledChillerExample7_eqFunction_1094,
    outputs_WaterCooledChillerExample7_eqFunction_4916,
    outputs_WaterCooledChillerExample7_eqFunction_4960,
    outputs_WaterCooledChillerExample7_eqFunction_4961,
    outputs_WaterCooledChillerExample7_eqFunction_4962,
    outputs_WaterCooledChillerExample7_eqFunction_4963,
    outputs_WaterCooledChillerExample7_eqFunction_4964,
    outputs_WaterCooledChillerExample7_eqFunction_4892,
    outputs_WaterCooledChillerExample7_eqFunction_4918,
    outputs_WaterCooledChillerExample7_eqFunction_4919,
    outputs_WaterCooledChillerExample7_eqFunction_4922,
    outputs_WaterCooledChillerExample7_eqFunction_4920,
    outputs_WaterCooledChillerExample7_eqFunction_4921,
    outputs_WaterCooledChillerExample7_eqFunction_1107,
    outputs_WaterCooledChillerExample7_eqFunction_4927,
    outputs_WaterCooledChillerExample7_eqFunction_4928,
    outputs_WaterCooledChillerExample7_eqFunction_4934,
    outputs_WaterCooledChillerExample7_eqFunction_5012,
    outputs_WaterCooledChillerExample7_eqFunction_4929,
    outputs_WaterCooledChillerExample7_eqFunction_4932,
    outputs_WaterCooledChillerExample7_eqFunction_4930,
    outputs_WaterCooledChillerExample7_eqFunction_4931,
    outputs_WaterCooledChillerExample7_eqFunction_4933,
    outputs_WaterCooledChillerExample7_eqFunction_4936,
    outputs_WaterCooledChillerExample7_eqFunction_4935,
    outputs_WaterCooledChillerExample7_eqFunction_1119,
    outputs_WaterCooledChillerExample7_eqFunction_4891,
    outputs_WaterCooledChillerExample7_eqFunction_5481,
    outputs_WaterCooledChillerExample7_eqFunction_5482,
    outputs_WaterCooledChillerExample7_eqFunction_5483,
    outputs_WaterCooledChillerExample7_eqFunction_1124,
    outputs_WaterCooledChillerExample7_eqFunction_5485,
    outputs_WaterCooledChillerExample7_eqFunction_5486,
    outputs_WaterCooledChillerExample7_eqFunction_5025,
    outputs_WaterCooledChillerExample7_eqFunction_5026,
    outputs_WaterCooledChillerExample7_eqFunction_5024,
    outputs_WaterCooledChillerExample7_eqFunction_5027,
    outputs_WaterCooledChillerExample7_eqFunction_5023,
    outputs_WaterCooledChillerExample7_eqFunction_5223,
    outputs_WaterCooledChillerExample7_eqFunction_5221,
    outputs_WaterCooledChillerExample7_eqFunction_5222,
    outputs_WaterCooledChillerExample7_eqFunction_5196,
    outputs_WaterCooledChillerExample7_eqFunction_5195,
    outputs_WaterCooledChillerExample7_eqFunction_5224,
    outputs_WaterCooledChillerExample7_eqFunction_5037,
    outputs_WaterCooledChillerExample7_eqFunction_5047,
    outputs_WaterCooledChillerExample7_eqFunction_5048,
    outputs_WaterCooledChillerExample7_eqFunction_1141,
    outputs_WaterCooledChillerExample7_eqFunction_5167,
    outputs_WaterCooledChillerExample7_eqFunction_5168,
    outputs_WaterCooledChillerExample7_eqFunction_1144,
    outputs_WaterCooledChillerExample7_eqFunction_1145,
    outputs_WaterCooledChillerExample7_eqFunction_1146,
    outputs_WaterCooledChillerExample7_eqFunction_1147,
    outputs_WaterCooledChillerExample7_eqFunction_4360,
    outputs_WaterCooledChillerExample7_eqFunction_4361,
    outputs_WaterCooledChillerExample7_eqFunction_1150,
    outputs_WaterCooledChillerExample7_eqFunction_4363,
    outputs_WaterCooledChillerExample7_eqFunction_1152,
    outputs_WaterCooledChillerExample7_eqFunction_4370,
    outputs_WaterCooledChillerExample7_eqFunction_4369,
    outputs_WaterCooledChillerExample7_eqFunction_4368,
    outputs_WaterCooledChillerExample7_eqFunction_4366,
    outputs_WaterCooledChillerExample7_eqFunction_4367,
    outputs_WaterCooledChillerExample7_eqFunction_4365,
    outputs_WaterCooledChillerExample7_eqFunction_1159,
    outputs_WaterCooledChillerExample7_eqFunction_1160,
    outputs_WaterCooledChillerExample7_eqFunction_5488,
    outputs_WaterCooledChillerExample7_eqFunction_5491,
    outputs_WaterCooledChillerExample7_eqFunction_1163,
    outputs_WaterCooledChillerExample7_eqFunction_5487,
    outputs_WaterCooledChillerExample7_eqFunction_5489,
    outputs_WaterCooledChillerExample7_eqFunction_5490,
    outputs_WaterCooledChillerExample7_eqFunction_5492,
    outputs_WaterCooledChillerExample7_eqFunction_1168,
    outputs_WaterCooledChillerExample7_eqFunction_5494,
    outputs_WaterCooledChillerExample7_eqFunction_1170,
    outputs_WaterCooledChillerExample7_eqFunction_1171,
    outputs_WaterCooledChillerExample7_eqFunction_1172,
    outputs_WaterCooledChillerExample7_eqFunction_1173,
    outputs_WaterCooledChillerExample7_eqFunction_4373,
    outputs_WaterCooledChillerExample7_eqFunction_1175,
    outputs_WaterCooledChillerExample7_eqFunction_4385,
    outputs_WaterCooledChillerExample7_eqFunction_4386,
    outputs_WaterCooledChillerExample7_eqFunction_1178,
    outputs_WaterCooledChillerExample7_eqFunction_4357,
    outputs_WaterCooledChillerExample7_eqFunction_5203,
    outputs_WaterCooledChillerExample7_eqFunction_5201,
    outputs_WaterCooledChillerExample7_eqFunction_5202,
    outputs_WaterCooledChillerExample7_eqFunction_4393,
    outputs_WaterCooledChillerExample7_eqFunction_4352,
    outputs_WaterCooledChillerExample7_eqFunction_4392,
    outputs_WaterCooledChillerExample7_eqFunction_1186,
    outputs_WaterCooledChillerExample7_eqFunction_1188,
    outputs_WaterCooledChillerExample7_eqFunction_1189,
    outputs_WaterCooledChillerExample7_eqFunction_4350,
    outputs_WaterCooledChillerExample7_eqFunction_1191,
    outputs_WaterCooledChillerExample7_eqFunction_1192,
    outputs_WaterCooledChillerExample7_eqFunction_1193,
    outputs_WaterCooledChillerExample7_eqFunction_1194,
    outputs_WaterCooledChillerExample7_eqFunction_1195,
    outputs_WaterCooledChillerExample7_eqFunction_1196,
    outputs_WaterCooledChillerExample7_eqFunction_4349,
    outputs_WaterCooledChillerExample7_eqFunction_1198,
    outputs_WaterCooledChillerExample7_eqFunction_5497,
    outputs_WaterCooledChillerExample7_eqFunction_5500,
    outputs_WaterCooledChillerExample7_eqFunction_1201,
    outputs_WaterCooledChillerExample7_eqFunction_5496,
    outputs_WaterCooledChillerExample7_eqFunction_5498,
    outputs_WaterCooledChillerExample7_eqFunction_5499,
    outputs_WaterCooledChillerExample7_eqFunction_5501,
    outputs_WaterCooledChillerExample7_eqFunction_1206,
    outputs_WaterCooledChillerExample7_eqFunction_5503,
    outputs_WaterCooledChillerExample7_eqFunction_1208,
    outputs_WaterCooledChillerExample7_eqFunction_1209,
    outputs_WaterCooledChillerExample7_eqFunction_1210,
    outputs_WaterCooledChillerExample7_eqFunction_1211,
    outputs_WaterCooledChillerExample7_eqFunction_5030,
    outputs_WaterCooledChillerExample7_eqFunction_4675,
    outputs_WaterCooledChillerExample7_eqFunction_5209,
    outputs_WaterCooledChillerExample7_eqFunction_5215,
    outputs_WaterCooledChillerExample7_eqFunction_5210,
    outputs_WaterCooledChillerExample7_eqFunction_5213,
    outputs_WaterCooledChillerExample7_eqFunction_5211,
    outputs_WaterCooledChillerExample7_eqFunction_5212,
    outputs_WaterCooledChillerExample7_eqFunction_5214,
    outputs_WaterCooledChillerExample7_eqFunction_5218,
    outputs_WaterCooledChillerExample7_eqFunction_5217,
    outputs_WaterCooledChillerExample7_eqFunction_1223,
    outputs_WaterCooledChillerExample7_eqFunction_4398,
    outputs_WaterCooledChillerExample7_eqFunction_4667,
    outputs_WaterCooledChillerExample7_eqFunction_5216,
    outputs_WaterCooledChillerExample7_eqFunction_4346,
    outputs_WaterCooledChillerExample7_eqFunction_4397,
    outputs_WaterCooledChillerExample7_eqFunction_4673,
    outputs_WaterCooledChillerExample7_eqFunction_4674,
    outputs_WaterCooledChillerExample7_eqFunction_5504,
    outputs_WaterCooledChillerExample7_eqFunction_1232,
    outputs_WaterCooledChillerExample7_eqFunction_1233,
    outputs_WaterCooledChillerExample7_eqFunction_4334,
    outputs_WaterCooledChillerExample7_eqFunction_4335,
    outputs_WaterCooledChillerExample7_eqFunction_4336,
    outputs_WaterCooledChillerExample7_eqFunction_4337,
    outputs_WaterCooledChillerExample7_eqFunction_1238,
    outputs_WaterCooledChillerExample7_eqFunction_1239,
    outputs_WaterCooledChillerExample7_eqFunction_1240,
    outputs_WaterCooledChillerExample7_eqFunction_4340,
    outputs_WaterCooledChillerExample7_eqFunction_4341,
    outputs_WaterCooledChillerExample7_eqFunction_1243,
    outputs_WaterCooledChillerExample7_eqFunction_4344,
    outputs_WaterCooledChillerExample7_eqFunction_1245,
    outputs_WaterCooledChillerExample7_eqFunction_1246,
    outputs_WaterCooledChillerExample7_eqFunction_1247,
    outputs_WaterCooledChillerExample7_eqFunction_4325,
    outputs_WaterCooledChillerExample7_eqFunction_4326,
    outputs_WaterCooledChillerExample7_eqFunction_5146,
    outputs_WaterCooledChillerExample7_eqFunction_1251,
    outputs_WaterCooledChillerExample7_eqFunction_1252,
    outputs_WaterCooledChillerExample7_eqFunction_1253,
    outputs_WaterCooledChillerExample7_eqFunction_1254,
    outputs_WaterCooledChillerExample7_eqFunction_1255,
    outputs_WaterCooledChillerExample7_eqFunction_5176,
    outputs_WaterCooledChillerExample7_eqFunction_1257,
    outputs_WaterCooledChillerExample7_eqFunction_5175,
    outputs_WaterCooledChillerExample7_eqFunction_1259,
    outputs_WaterCooledChillerExample7_eqFunction_4332,
    outputs_WaterCooledChillerExample7_eqFunction_1261,
    outputs_WaterCooledChillerExample7_eqFunction_5302,
    outputs_WaterCooledChillerExample7_eqFunction_5308,
    outputs_WaterCooledChillerExample7_eqFunction_5311,
    outputs_WaterCooledChillerExample7_eqFunction_5312,
    outputs_WaterCooledChillerExample7_eqFunction_5313,
    outputs_WaterCooledChillerExample7_eqFunction_1267,
    outputs_WaterCooledChillerExample7_eqFunction_1268,
    outputs_WaterCooledChillerExample7_eqFunction_1269,
    outputs_WaterCooledChillerExample7_eqFunction_5304,
    outputs_WaterCooledChillerExample7_eqFunction_5306,
    outputs_WaterCooledChillerExample7_eqFunction_5307,
    outputs_WaterCooledChillerExample7_eqFunction_5305,
    outputs_WaterCooledChillerExample7_eqFunction_5303,
    outputs_WaterCooledChillerExample7_eqFunction_1275,
    outputs_WaterCooledChillerExample7_eqFunction_5314,
    outputs_WaterCooledChillerExample7_eqFunction_1277,
    outputs_WaterCooledChillerExample7_eqFunction_1278,
    outputs_WaterCooledChillerExample7_eqFunction_1279,
    outputs_WaterCooledChillerExample7_eqFunction_4316,
    outputs_WaterCooledChillerExample7_eqFunction_4327,
    outputs_WaterCooledChillerExample7_eqFunction_4328,
    outputs_WaterCooledChillerExample7_eqFunction_5147,
    outputs_WaterCooledChillerExample7_eqFunction_4317,
    outputs_WaterCooledChillerExample7_eqFunction_5144,
    outputs_WaterCooledChillerExample7_eqFunction_5158,
    outputs_WaterCooledChillerExample7_eqFunction_4315,
    outputs_WaterCooledChillerExample7_eqFunction_1288,
    outputs_WaterCooledChillerExample7_eqFunction_1289,
    outputs_WaterCooledChillerExample7_eqFunction_4323,
    outputs_WaterCooledChillerExample7_eqFunction_1291,
    outputs_WaterCooledChillerExample7_eqFunction_5319,
    outputs_WaterCooledChillerExample7_eqFunction_5326,
    outputs_WaterCooledChillerExample7_eqFunction_5329,
    outputs_WaterCooledChillerExample7_eqFunction_5330,
    outputs_WaterCooledChillerExample7_eqFunction_5331,
    outputs_WaterCooledChillerExample7_eqFunction_1297,
    outputs_WaterCooledChillerExample7_eqFunction_1298,
    outputs_WaterCooledChillerExample7_eqFunction_1299,
    outputs_WaterCooledChillerExample7_eqFunction_5321,
    outputs_WaterCooledChillerExample7_eqFunction_5323,
    outputs_WaterCooledChillerExample7_eqFunction_5324,
    outputs_WaterCooledChillerExample7_eqFunction_5325,
    outputs_WaterCooledChillerExample7_eqFunction_5322,
    outputs_WaterCooledChillerExample7_eqFunction_5320,
    outputs_WaterCooledChillerExample7_eqFunction_1306,
    outputs_WaterCooledChillerExample7_eqFunction_5332,
    outputs_WaterCooledChillerExample7_eqFunction_1308,
    outputs_WaterCooledChillerExample7_eqFunction_1309,
    outputs_WaterCooledChillerExample7_eqFunction_1310,
    outputs_WaterCooledChillerExample7_eqFunction_4307
  };
  
  for (int id = 0; id < 420; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif