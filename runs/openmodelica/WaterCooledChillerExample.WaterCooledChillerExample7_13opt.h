#if defined(__cplusplus)
  extern "C" {
#endif
  int WaterCooledChillerExample_WaterCooledChillerExample7_mayer(DATA* data, modelica_real** res, short*);
  int WaterCooledChillerExample_WaterCooledChillerExample7_lagrange(DATA* data, modelica_real** res, short *, short *);
  int WaterCooledChillerExample_WaterCooledChillerExample7_getInputVarIndicesInOptimization(DATA* data, int* input_var_indices);
  int WaterCooledChillerExample_WaterCooledChillerExample7_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int WaterCooledChillerExample_WaterCooledChillerExample7_setInputData(DATA *data, const modelica_boolean file);
  int WaterCooledChillerExample_WaterCooledChillerExample7_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif
