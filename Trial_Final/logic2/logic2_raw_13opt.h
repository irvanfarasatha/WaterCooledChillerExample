#if defined(__cplusplus)
  extern "C" {
#endif
  int logic2_raw_mayer(DATA* data, modelica_real** res, short*);
  int logic2_raw_lagrange(DATA* data, modelica_real** res, short *, short *);
  int logic2_raw_getInputVarIndicesInOptimization(DATA* data, int* input_var_indices);
  int logic2_raw_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int logic2_raw_setInputData(DATA *data, const modelica_boolean file);
  int logic2_raw_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif
