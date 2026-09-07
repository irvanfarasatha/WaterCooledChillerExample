/* Jacobians */
static _index_t one_dim[1] = { 1 };
static modelica_real nominal_data[1] = { 1.0 };
static modelica_real start_data[1]   = { 0.0 };
static modelica_real min_data[1]   = { -DBL_MAX };
static modelica_real max_data[1]   = { DBL_MAX };
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = {
  .unit = NULL,
  .displayUnit = NULL,
  .min = {
    .ndims     = 1,
    .dim_size  = one_dim,
    .data      = (void*) min_data,
    .flexible  = FALSE
  },
  .max = {
    .ndims     = 1,
    .dim_size  = one_dim,
    .data      = (void*) max_data,
    .flexible  = FALSE
  },
  .fixed = FALSE,
  .useNominal = FALSE,
  .nominal = {
    .ndims     = 1,
    .dim_size  = one_dim,
    .data      = (void*) nominal_data,
    .flexible  = FALSE
  },
  .start = {
    .ndims     = 1,
    .dim_size  = one_dim,
    .data      = (void*) start_data,
    .flexible  = FALSE
  }
};

#if defined(__cplusplus)
extern "C" {
#endif

/* Jacobian Variables */
#define WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_NLSJac0 0
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacNLSJac0_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianNLSJac0(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void WaterCooledChillerExample_WaterCooledChillerExample7_JacNLSJac0_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac8 1
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac8_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac8(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void WaterCooledChillerExample_WaterCooledChillerExample7_JacLSJac8_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac12 2
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac12_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac12(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void WaterCooledChillerExample_WaterCooledChillerExample7_JacLSJac12_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac13 3
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac13_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac13(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void WaterCooledChillerExample_WaterCooledChillerExample7_JacLSJac13_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_NLSJac14 4
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacNLSJac14_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianNLSJac14(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void WaterCooledChillerExample_WaterCooledChillerExample7_JacNLSJac14_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac15 5
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac15_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac15(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void WaterCooledChillerExample_WaterCooledChillerExample7_JacLSJac15_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac20 6
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac20_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac20(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void WaterCooledChillerExample_WaterCooledChillerExample7_JacLSJac20_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_NLSJac22 7
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacNLSJac22_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianNLSJac22(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void WaterCooledChillerExample_WaterCooledChillerExample7_JacNLSJac22_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac27 8
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac27_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac27(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void WaterCooledChillerExample_WaterCooledChillerExample7_JacLSJac27_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac29 9
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac29_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac29(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void WaterCooledChillerExample_WaterCooledChillerExample7_JacLSJac29_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_ADJ 10
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacADJ_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianADJ(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void WaterCooledChillerExample_WaterCooledChillerExample7_JacADJ_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_H 11
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void WaterCooledChillerExample_WaterCooledChillerExample7_JacH_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_F 12
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void WaterCooledChillerExample_WaterCooledChillerExample7_JacF_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_D 13
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void WaterCooledChillerExample_WaterCooledChillerExample7_JacD_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_C 14
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void WaterCooledChillerExample_WaterCooledChillerExample7_JacC_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_B 15
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void WaterCooledChillerExample_WaterCooledChillerExample7_JacB_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_A 16
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void WaterCooledChillerExample_WaterCooledChillerExample7_JacA_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);

#if defined(__cplusplus)
}
#endif
