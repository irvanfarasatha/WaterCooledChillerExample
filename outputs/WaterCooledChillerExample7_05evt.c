/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "outputs/WaterCooledChillerExample7_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void outputs_WaterCooledChillerExample7_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *outputs_WaterCooledChillerExample7_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time < ramp.startTime",
  "time < ramp.startTime + ramp.duration",
  "weaData.conTim1.canRepeatWeatherFile and weaData.add.y > pre(weaData.conTim1.tNext)",
  "weaData.conTim.canRepeatWeatherFile and weaBus.cloTim > pre(weaData.conTim.tNext)"};
  static const int occurEqs0[] = {1,4523};
  static const int occurEqs1[] = {1,4523};
  static const int occurEqs2[] = {1,4405};
  static const int occurEqs3[] = {1,4423};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void outputs_WaterCooledChillerExample7_eqFunction_4403(DATA* data, threadData_t *threadData);
extern void outputs_WaterCooledChillerExample7_eqFunction_4404(DATA* data, threadData_t *threadData);

int outputs_WaterCooledChillerExample7_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  static void (*const eqFunctions[2])(DATA*, threadData_t*) = {
    outputs_WaterCooledChillerExample7_eqFunction_4403,
    outputs_WaterCooledChillerExample7_eqFunction_4404
  };
  
  for (int id = 0; id < 2; id++) {
    eqFunctions[id](data, threadData);
  }
  
  return 0;
}

int outputs_WaterCooledChillerExample7_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  const int *equationIndexes = NULL;

  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  start_index = current_index;
  tmp1 = 1.0;
  tmp2 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2839]] /* ramp.startTime PARAM */));
  tmp0 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2839]] /* ramp.startTime PARAM */), tmp1, tmp2, data->simulationInfo->storedRelations[0]);
  gout[start_index] = (tmp0) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp4 = 1.0;
  tmp5 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2839]] /* ramp.startTime PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2836]] /* ramp.duration PARAM */));
  tmp3 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2839]] /* ramp.startTime PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2836]] /* ramp.duration PARAM */), tmp4, tmp5, data->simulationInfo->storedRelations[1]);
  gout[start_index] = (tmp3) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp7 = 1.0;
  tmp8 = 1.0;
  tmp6 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1845]] /* weaData.add.y variable */), (data->simulationInfo->realVarsPre[1887] /* weaData.conTim1.tNext DISCRETE */), tmp7, tmp8, data->simulationInfo->storedRelations[2]);
  gout[start_index] = (((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1105]] /* weaData.conTim1.canRepeatWeatherFile PARAM */) && tmp6)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp10 = 1.0;
  tmp11 = 1.0;
  tmp9 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1827]] /* weaBus.cloTim variable */), (data->simulationInfo->realVarsPre[1886] /* weaData.conTim.tNext DISCRETE */), tmp10, tmp11, data->simulationInfo->storedRelations[3]);
  gout[start_index] = (((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1104]] /* weaData.conTim.canRepeatWeatherFile PARAM */) && tmp9)) ? 1 : -1;
  current_index++;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  return 0;
}

const char *outputs_WaterCooledChillerExample7_relationDescription(int i)
{
  const char *res[] = {"time < ramp.startTime",
  "time < ramp.startTime + ramp.duration",
  "weaData.add.y > pre(weaData.conTim1.tNext)",
  "weaBus.cloTim > pre(weaData.conTim.tNext)"};
  return res[i];
}

int outputs_WaterCooledChillerExample7_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  const int *equationIndexes = NULL;

  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
  if(evalforZeroCross) {
    start_index = current_index;
    tmp13 = 1.0;
    tmp14 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2839]] /* ramp.startTime PARAM */));
    tmp12 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2839]] /* ramp.startTime PARAM */), tmp13, tmp14, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[start_index] = tmp12;
    current_index++;

    start_index = current_index;
    tmp16 = 1.0;
    tmp17 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2839]] /* ramp.startTime PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2836]] /* ramp.duration PARAM */));
    tmp15 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2839]] /* ramp.startTime PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2836]] /* ramp.duration PARAM */), tmp16, tmp17, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[start_index] = tmp15;
    current_index++;

    start_index = current_index;
    tmp19 = 1.0;
    tmp20 = 1.0;
    tmp18 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1845]] /* weaData.add.y variable */), (data->simulationInfo->realVarsPre[1887] /* weaData.conTim1.tNext DISCRETE */), tmp19, tmp20, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[start_index] = tmp18;
    current_index++;

    start_index = current_index;
    tmp22 = 1.0;
    tmp23 = 1.0;
    tmp21 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1827]] /* weaBus.cloTim variable */), (data->simulationInfo->realVarsPre[1886] /* weaData.conTim.tNext DISCRETE */), tmp22, tmp23, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[start_index] = tmp21;
    current_index++;
  } else {
    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2839]] /* ramp.startTime PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2839]] /* ramp.startTime PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2836]] /* ramp.duration PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1845]] /* weaData.add.y variable */) > (data->simulationInfo->realVarsPre[1887] /* weaData.conTim1.tNext DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1827]] /* weaBus.cloTim variable */) > (data->simulationInfo->realVarsPre[1886] /* weaData.conTim.tNext DISCRETE */));
    current_index++;
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
