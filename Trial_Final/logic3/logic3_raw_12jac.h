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
#define logic3_raw_INDEX_JAC_NLSJac0 0
int logic3_raw_functionJacNLSJac0_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int logic3_raw_initialAnalyticJacobianNLSJac0(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void logic3_raw_JacNLSJac0_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define logic3_raw_INDEX_JAC_LSJac9 1
int logic3_raw_functionJacLSJac9_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int logic3_raw_initialAnalyticJacobianLSJac9(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void logic3_raw_JacLSJac9_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define logic3_raw_INDEX_JAC_NLSJac14 2
int logic3_raw_functionJacNLSJac14_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int logic3_raw_initialAnalyticJacobianNLSJac14(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void logic3_raw_JacNLSJac14_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define logic3_raw_INDEX_JAC_LSJac18 3
int logic3_raw_functionJacLSJac18_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int logic3_raw_initialAnalyticJacobianLSJac18(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void logic3_raw_JacLSJac18_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define logic3_raw_INDEX_JAC_NLSJac21 4
int logic3_raw_functionJacNLSJac21_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int logic3_raw_initialAnalyticJacobianNLSJac21(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void logic3_raw_JacNLSJac21_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define logic3_raw_INDEX_JAC_LSJac30 5
int logic3_raw_functionJacLSJac30_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int logic3_raw_initialAnalyticJacobianLSJac30(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void logic3_raw_JacLSJac30_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define logic3_raw_INDEX_JAC_ADJ 6
int logic3_raw_functionJacADJ_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int logic3_raw_initialAnalyticJacobianADJ(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void logic3_raw_JacADJ_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define logic3_raw_INDEX_JAC_H 7
int logic3_raw_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int logic3_raw_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void logic3_raw_JacH_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define logic3_raw_INDEX_JAC_F 8
int logic3_raw_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int logic3_raw_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void logic3_raw_JacF_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define logic3_raw_INDEX_JAC_D 9
int logic3_raw_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int logic3_raw_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void logic3_raw_JacD_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define logic3_raw_INDEX_JAC_C 10
int logic3_raw_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int logic3_raw_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void logic3_raw_JacC_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define logic3_raw_INDEX_JAC_B 11
int logic3_raw_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int logic3_raw_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void logic3_raw_JacB_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define logic3_raw_INDEX_JAC_A 12
int logic3_raw_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int logic3_raw_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void logic3_raw_JacA_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);

#if defined(__cplusplus)
}
#endif
