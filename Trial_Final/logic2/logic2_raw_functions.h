#ifndef logic2_raw__H
#define logic2_raw__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  real_array _r_V;
  real_array _r_P;
} Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan;
extern struct record_description Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan__desc;

void Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_construct_p(threadData_t *threadData, void* v_ths );
#define Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_construct(td, ths ) Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_construct_p(td, &ths )
void Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_copy_p(void* v_src, void* v_dst);
#define Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_copy(src,dst) Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_copy_p(&src, &dst)


void Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_wrap_vars_p(threadData_t *threadData , void* v_dst , real_array in_r_V, real_array in_r_P);
#define Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_wrap_vars(td, dst , in_r_V, in_r_P) Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_wrap_vars_p(td, &dst , in_r_V, in_r_P)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_copy_to_vars_p(void* v_src , real_array* in_r_V, real_array* in_r_P);
// #define Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_copy_to_vars(src,...) Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_array;
#define alloc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_array(dst,ndims,...) generic_array_create(NULL, dst, Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_construct_p, ndims, sizeof(Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan), __VA_ARGS__)
#define Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_copy_p, sizeof(Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan))
#define Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_copy_p, sizeof(Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan))
#define Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_array_get(src,ndims,...)   (*(Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan*)(generic_array_get(&src, sizeof(Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan), __VA_ARGS__)))
#define Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_set(dst,val,...)           generic_array_set(&dst, &val, Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_copy_p, sizeof(Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan), __VA_ARGS__)

typedef struct {
  real_array _V_flow;
  real_array _eta;
} Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters;
extern struct record_description Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters__desc;

void Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_construct_p(threadData_t *threadData, void* v_ths );
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_construct(td, ths ) Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_construct_p(td, &ths )
void Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_copy_p(void* v_src, void* v_dst);
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_copy(src,dst) Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_copy_p(&src, &dst)


void Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars_p(threadData_t *threadData , void* v_dst , real_array in_V_flow, real_array in_eta);
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(td, dst , in_V_flow, in_eta) Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars_p(td, &dst , in_V_flow, in_eta)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_copy_to_vars_p(void* v_src , real_array* in_V_flow, real_array* in_eta);
// #define Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_copy_to_vars(src,...) Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_array;
#define alloc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_array(dst,ndims,...) generic_array_create(NULL, dst, Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_construct_p, ndims, sizeof(Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters), __VA_ARGS__)
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_copy_p, sizeof(Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters))
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_copy_p, sizeof(Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters))
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_array_get(src,ndims,...)   (*(Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters*)(generic_array_get(&src, sizeof(Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters), __VA_ARGS__)))
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_set(dst,val,...)           generic_array_set(&dst, &val, Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_copy_p, sizeof(Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters), __VA_ARGS__)

typedef struct {
  modelica_real _p;
  modelica_real _T;
  real_array _X;
} logic2_TAirSup_Medium_ThermodynamicState;
extern struct record_description logic2_TAirSup_Medium_ThermodynamicState__desc;

void logic2_TAirSup_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_TAirSup_Medium_ThermodynamicState_construct(td, ths ) logic2_TAirSup_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_TAirSup_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_TAirSup_Medium_ThermodynamicState_copy(src,dst) logic2_TAirSup_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_TAirSup_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_TAirSup_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_TAirSup_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_TAirSup_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_TAirSup_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_TAirSup_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_TAirSup_Medium_ThermodynamicState_array;
#define alloc_logic2_TAirSup_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_TAirSup_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_TAirSup_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_TAirSup_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_TAirSup_Medium_ThermodynamicState_copy_p, sizeof(logic2_TAirSup_Medium_ThermodynamicState))
#define logic2_TAirSup_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_TAirSup_Medium_ThermodynamicState_copy_p, sizeof(logic2_TAirSup_Medium_ThermodynamicState))
#define logic2_TAirSup_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_TAirSup_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_TAirSup_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_TAirSup_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_TAirSup_Medium_ThermodynamicState_copy_p, sizeof(logic2_TAirSup_Medium_ThermodynamicState), __VA_ARGS__)

typedef struct {
  modelica_real _p;
  modelica_real _T;
} logic2_TCHWChi1In_Medium_ThermodynamicState;
extern struct record_description logic2_TCHWChi1In_Medium_ThermodynamicState__desc;

void logic2_TCHWChi1In_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_TCHWChi1In_Medium_ThermodynamicState_construct(td, ths ) logic2_TCHWChi1In_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_TCHWChi1In_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_TCHWChi1In_Medium_ThermodynamicState_copy(src,dst) logic2_TCHWChi1In_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_TCHWChi1In_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_TCHWChi1In_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_TCHWChi1In_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_TCHWChi1In_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_TCHWChi1In_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_TCHWChi1In_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_TCHWChi1In_Medium_ThermodynamicState_array;
#define alloc_logic2_TCHWChi1In_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_TCHWChi1In_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_TCHWChi1In_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_TCHWChi1In_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_TCHWChi1In_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWChi1In_Medium_ThermodynamicState))
#define logic2_TCHWChi1In_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_TCHWChi1In_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWChi1In_Medium_ThermodynamicState))
#define logic2_TCHWChi1In_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_TCHWChi1In_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_TCHWChi1In_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_TCHWChi1In_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_TCHWChi1In_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWChi1In_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_cooCoi_Medium2_ThermodynamicState;
extern struct record_description logic2_cooCoi_Medium2_ThermodynamicState__desc;

void logic2_cooCoi_Medium2_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooCoi_Medium2_ThermodynamicState_construct(td, ths ) logic2_cooCoi_Medium2_ThermodynamicState_construct_p(td, &ths )
void logic2_cooCoi_Medium2_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooCoi_Medium2_ThermodynamicState_copy(src,dst) logic2_cooCoi_Medium2_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooCoi_Medium2_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_cooCoi_Medium2_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_cooCoi_Medium2_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooCoi_Medium2_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_cooCoi_Medium2_ThermodynamicState_copy_to_vars(src,...) logic2_cooCoi_Medium2_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooCoi_Medium2_ThermodynamicState_array;
#define alloc_logic2_cooCoi_Medium2_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooCoi_Medium2_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooCoi_Medium2_ThermodynamicState), __VA_ARGS__)
#define logic2_cooCoi_Medium2_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooCoi_Medium2_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_Medium2_ThermodynamicState))
#define logic2_cooCoi_Medium2_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooCoi_Medium2_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_Medium2_ThermodynamicState))
#define logic2_cooCoi_Medium2_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooCoi_Medium2_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooCoi_Medium2_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooCoi_Medium2_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooCoi_Medium2_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_Medium2_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_cooCoi_ele_Medium2_ThermodynamicState;
extern struct record_description logic2_cooCoi_ele_Medium2_ThermodynamicState__desc;

void logic2_cooCoi_ele_Medium2_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooCoi_ele_Medium2_ThermodynamicState_construct(td, ths ) logic2_cooCoi_ele_Medium2_ThermodynamicState_construct_p(td, &ths )
void logic2_cooCoi_ele_Medium2_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooCoi_ele_Medium2_ThermodynamicState_copy(src,dst) logic2_cooCoi_ele_Medium2_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooCoi_ele_Medium2_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_cooCoi_ele_Medium2_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_cooCoi_ele_Medium2_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooCoi_ele_Medium2_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_cooCoi_ele_Medium2_ThermodynamicState_copy_to_vars(src,...) logic2_cooCoi_ele_Medium2_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooCoi_ele_Medium2_ThermodynamicState_array;
#define alloc_logic2_cooCoi_ele_Medium2_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooCoi_ele_Medium2_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooCoi_ele_Medium2_ThermodynamicState), __VA_ARGS__)
#define logic2_cooCoi_ele_Medium2_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooCoi_ele_Medium2_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_Medium2_ThermodynamicState))
#define logic2_cooCoi_ele_Medium2_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooCoi_ele_Medium2_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_Medium2_ThermodynamicState))
#define logic2_cooCoi_ele_Medium2_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooCoi_ele_Medium2_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooCoi_ele_Medium2_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooCoi_ele_Medium2_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooCoi_ele_Medium2_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_Medium2_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState;
extern struct record_description logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState__desc;

void logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_construct(td, ths ) logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_copy(src,dst) logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_array;
#define alloc_logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState))
#define logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState))
#define logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_cooCoi_ele_vol2_Medium_ThermodynamicState;
extern struct record_description logic2_cooCoi_ele_vol2_Medium_ThermodynamicState__desc;

void logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_construct(td, ths ) logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_copy(src,dst) logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_array;
#define alloc_logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooCoi_ele_vol2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_vol2_Medium_ThermodynamicState))
#define logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_vol2_Medium_ThermodynamicState))
#define logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooCoi_ele_vol2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooCoi_ele_vol2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooCoi_ele_vol2_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_vol2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState__desc;

void logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState))
#define logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState))
#define logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_cooCoi_temSen__2_Medium_ThermodynamicState;
extern struct record_description logic2_cooCoi_temSen__2_Medium_ThermodynamicState__desc;

void logic2_cooCoi_temSen__2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooCoi_temSen__2_Medium_ThermodynamicState_construct(td, ths ) logic2_cooCoi_temSen__2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_cooCoi_temSen__2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooCoi_temSen__2_Medium_ThermodynamicState_copy(src,dst) logic2_cooCoi_temSen__2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooCoi_temSen__2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_cooCoi_temSen__2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_cooCoi_temSen__2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooCoi_temSen__2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_cooCoi_temSen__2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_cooCoi_temSen__2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooCoi_temSen__2_Medium_ThermodynamicState_array;
#define alloc_logic2_cooCoi_temSen__2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooCoi_temSen__2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooCoi_temSen__2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_cooCoi_temSen__2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooCoi_temSen__2_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_temSen__2_Medium_ThermodynamicState))
#define logic2_cooCoi_temSen__2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooCoi_temSen__2_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_temSen__2_Medium_ThermodynamicState))
#define logic2_cooCoi_temSen__2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooCoi_temSen__2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooCoi_temSen__2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooCoi_temSen__2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooCoi_temSen__2_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_temSen__2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_damEA_Medium_ThermodynamicState;
extern struct record_description logic2_damEA_Medium_ThermodynamicState__desc;

void logic2_damEA_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_damEA_Medium_ThermodynamicState_construct(td, ths ) logic2_damEA_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_damEA_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_damEA_Medium_ThermodynamicState_copy(src,dst) logic2_damEA_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_damEA_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_damEA_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_damEA_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_damEA_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_damEA_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_damEA_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_damEA_Medium_ThermodynamicState_array;
#define alloc_logic2_damEA_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_damEA_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_damEA_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_damEA_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_damEA_Medium_ThermodynamicState_copy_p, sizeof(logic2_damEA_Medium_ThermodynamicState))
#define logic2_damEA_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_damEA_Medium_ThermodynamicState_copy_p, sizeof(logic2_damEA_Medium_ThermodynamicState))
#define logic2_damEA_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_damEA_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_damEA_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_damEA_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_damEA_Medium_ThermodynamicState_copy_p, sizeof(logic2_damEA_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_damOA_Medium_ThermodynamicState;
extern struct record_description logic2_damOA_Medium_ThermodynamicState__desc;

void logic2_damOA_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_damOA_Medium_ThermodynamicState_construct(td, ths ) logic2_damOA_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_damOA_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_damOA_Medium_ThermodynamicState_copy(src,dst) logic2_damOA_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_damOA_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_damOA_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_damOA_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_damOA_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_damOA_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_damOA_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_damOA_Medium_ThermodynamicState_array;
#define alloc_logic2_damOA_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_damOA_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_damOA_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_damOA_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_damOA_Medium_ThermodynamicState_copy_p, sizeof(logic2_damOA_Medium_ThermodynamicState))
#define logic2_damOA_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_damOA_Medium_ThermodynamicState_copy_p, sizeof(logic2_damOA_Medium_ThermodynamicState))
#define logic2_damOA_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_damOA_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_damOA_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_damOA_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_damOA_Medium_ThermodynamicState_copy_p, sizeof(logic2_damOA_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_damRet_Medium_ThermodynamicState;
extern struct record_description logic2_damRet_Medium_ThermodynamicState__desc;

void logic2_damRet_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_damRet_Medium_ThermodynamicState_construct(td, ths ) logic2_damRet_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_damRet_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_damRet_Medium_ThermodynamicState_copy(src,dst) logic2_damRet_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_damRet_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_damRet_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_damRet_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_damRet_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_damRet_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_damRet_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_damRet_Medium_ThermodynamicState_array;
#define alloc_logic2_damRet_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_damRet_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_damRet_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_damRet_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_damRet_Medium_ThermodynamicState_copy_p, sizeof(logic2_damRet_Medium_ThermodynamicState))
#define logic2_damRet_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_damRet_Medium_ThermodynamicState_copy_p, sizeof(logic2_damRet_Medium_ThermodynamicState))
#define logic2_damRet_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_damRet_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_damRet_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_damRet_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_damRet_Medium_ThermodynamicState_copy_p, sizeof(logic2_damRet_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_fanRet_Medium_ThermodynamicState;
extern struct record_description logic2_fanRet_Medium_ThermodynamicState__desc;

void logic2_fanRet_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_fanRet_Medium_ThermodynamicState_construct(td, ths ) logic2_fanRet_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_fanRet_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_fanRet_Medium_ThermodynamicState_copy(src,dst) logic2_fanRet_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_fanRet_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_fanRet_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_fanRet_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_fanRet_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_fanRet_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_fanRet_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_fanRet_Medium_ThermodynamicState_array;
#define alloc_logic2_fanRet_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_fanRet_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_fanRet_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_fanRet_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_fanRet_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanRet_Medium_ThermodynamicState))
#define logic2_fanRet_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_fanRet_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanRet_Medium_ThermodynamicState))
#define logic2_fanRet_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_fanRet_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_fanRet_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_fanRet_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_fanRet_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanRet_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_fanRet_preSou_Medium_ThermodynamicState;
extern struct record_description logic2_fanRet_preSou_Medium_ThermodynamicState__desc;

void logic2_fanRet_preSou_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_fanRet_preSou_Medium_ThermodynamicState_construct(td, ths ) logic2_fanRet_preSou_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_fanRet_preSou_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_fanRet_preSou_Medium_ThermodynamicState_copy(src,dst) logic2_fanRet_preSou_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_fanRet_preSou_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_fanRet_preSou_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_fanRet_preSou_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_fanRet_preSou_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_fanRet_preSou_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_fanRet_preSou_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_fanRet_preSou_Medium_ThermodynamicState_array;
#define alloc_logic2_fanRet_preSou_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_fanRet_preSou_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_fanRet_preSou_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_fanRet_preSou_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_fanRet_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanRet_preSou_Medium_ThermodynamicState))
#define logic2_fanRet_preSou_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_fanRet_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanRet_preSou_Medium_ThermodynamicState))
#define logic2_fanRet_preSou_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_fanRet_preSou_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_fanRet_preSou_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_fanRet_preSou_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_fanRet_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanRet_preSou_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_fanRet_vol_Medium_ThermodynamicState;
extern struct record_description logic2_fanRet_vol_Medium_ThermodynamicState__desc;

void logic2_fanRet_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_fanRet_vol_Medium_ThermodynamicState_construct(td, ths ) logic2_fanRet_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_fanRet_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_fanRet_vol_Medium_ThermodynamicState_copy(src,dst) logic2_fanRet_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_fanRet_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_fanRet_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_fanRet_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_fanRet_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_fanRet_vol_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_fanRet_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_fanRet_vol_Medium_ThermodynamicState_array;
#define alloc_logic2_fanRet_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_fanRet_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_fanRet_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_fanRet_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_fanRet_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanRet_vol_Medium_ThermodynamicState))
#define logic2_fanRet_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_fanRet_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanRet_vol_Medium_ThermodynamicState))
#define logic2_fanRet_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_fanRet_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_fanRet_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_fanRet_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_fanRet_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanRet_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_fanRet_vol_steBal_Medium_ThermodynamicState;
extern struct record_description logic2_fanRet_vol_steBal_Medium_ThermodynamicState__desc;

void logic2_fanRet_vol_steBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_fanRet_vol_steBal_Medium_ThermodynamicState_construct(td, ths ) logic2_fanRet_vol_steBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_fanRet_vol_steBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_fanRet_vol_steBal_Medium_ThermodynamicState_copy(src,dst) logic2_fanRet_vol_steBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_fanRet_vol_steBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_fanRet_vol_steBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_fanRet_vol_steBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_fanRet_vol_steBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_fanRet_vol_steBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_fanRet_vol_steBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_fanRet_vol_steBal_Medium_ThermodynamicState_array;
#define alloc_logic2_fanRet_vol_steBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_fanRet_vol_steBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_fanRet_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_fanRet_vol_steBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_fanRet_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanRet_vol_steBal_Medium_ThermodynamicState))
#define logic2_fanRet_vol_steBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_fanRet_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanRet_vol_steBal_Medium_ThermodynamicState))
#define logic2_fanRet_vol_steBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_fanRet_vol_steBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_fanRet_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_fanRet_vol_steBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_fanRet_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanRet_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_fanSup_Medium_ThermodynamicState;
extern struct record_description logic2_fanSup_Medium_ThermodynamicState__desc;

void logic2_fanSup_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_fanSup_Medium_ThermodynamicState_construct(td, ths ) logic2_fanSup_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_fanSup_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_fanSup_Medium_ThermodynamicState_copy(src,dst) logic2_fanSup_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_fanSup_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_fanSup_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_fanSup_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_fanSup_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_fanSup_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_fanSup_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_fanSup_Medium_ThermodynamicState_array;
#define alloc_logic2_fanSup_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_fanSup_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_fanSup_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_fanSup_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_fanSup_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanSup_Medium_ThermodynamicState))
#define logic2_fanSup_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_fanSup_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanSup_Medium_ThermodynamicState))
#define logic2_fanSup_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_fanSup_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_fanSup_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_fanSup_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_fanSup_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanSup_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_fanSup_preSou_Medium_ThermodynamicState;
extern struct record_description logic2_fanSup_preSou_Medium_ThermodynamicState__desc;

void logic2_fanSup_preSou_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_fanSup_preSou_Medium_ThermodynamicState_construct(td, ths ) logic2_fanSup_preSou_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_fanSup_preSou_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_fanSup_preSou_Medium_ThermodynamicState_copy(src,dst) logic2_fanSup_preSou_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_fanSup_preSou_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_fanSup_preSou_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_fanSup_preSou_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_fanSup_preSou_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_fanSup_preSou_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_fanSup_preSou_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_fanSup_preSou_Medium_ThermodynamicState_array;
#define alloc_logic2_fanSup_preSou_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_fanSup_preSou_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_fanSup_preSou_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_fanSup_preSou_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_fanSup_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanSup_preSou_Medium_ThermodynamicState))
#define logic2_fanSup_preSou_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_fanSup_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanSup_preSou_Medium_ThermodynamicState))
#define logic2_fanSup_preSou_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_fanSup_preSou_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_fanSup_preSou_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_fanSup_preSou_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_fanSup_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanSup_preSou_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_fanSup_vol_Medium_ThermodynamicState;
extern struct record_description logic2_fanSup_vol_Medium_ThermodynamicState__desc;

void logic2_fanSup_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_fanSup_vol_Medium_ThermodynamicState_construct(td, ths ) logic2_fanSup_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_fanSup_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_fanSup_vol_Medium_ThermodynamicState_copy(src,dst) logic2_fanSup_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_fanSup_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_fanSup_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_fanSup_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_fanSup_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_fanSup_vol_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_fanSup_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_fanSup_vol_Medium_ThermodynamicState_array;
#define alloc_logic2_fanSup_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_fanSup_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_fanSup_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_fanSup_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_fanSup_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanSup_vol_Medium_ThermodynamicState))
#define logic2_fanSup_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_fanSup_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanSup_vol_Medium_ThermodynamicState))
#define logic2_fanSup_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_fanSup_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_fanSup_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_fanSup_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_fanSup_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanSup_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_fanSup_vol_steBal_Medium_ThermodynamicState;
extern struct record_description logic2_fanSup_vol_steBal_Medium_ThermodynamicState__desc;

void logic2_fanSup_vol_steBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_fanSup_vol_steBal_Medium_ThermodynamicState_construct(td, ths ) logic2_fanSup_vol_steBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_fanSup_vol_steBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_fanSup_vol_steBal_Medium_ThermodynamicState_copy(src,dst) logic2_fanSup_vol_steBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_fanSup_vol_steBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_fanSup_vol_steBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_fanSup_vol_steBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_fanSup_vol_steBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_fanSup_vol_steBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_fanSup_vol_steBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_fanSup_vol_steBal_Medium_ThermodynamicState_array;
#define alloc_logic2_fanSup_vol_steBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_fanSup_vol_steBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_fanSup_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_fanSup_vol_steBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_fanSup_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanSup_vol_steBal_Medium_ThermodynamicState))
#define logic2_fanSup_vol_steBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_fanSup_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanSup_vol_steBal_Medium_ThermodynamicState))
#define logic2_fanSup_vol_steBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_fanSup_vol_steBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_fanSup_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_fanSup_vol_steBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_fanSup_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_fanSup_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_junOut_res1_Medium_ThermodynamicState;
extern struct record_description logic2_junOut_res1_Medium_ThermodynamicState__desc;

void logic2_junOut_res1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junOut_res1_Medium_ThermodynamicState_construct(td, ths ) logic2_junOut_res1_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junOut_res1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junOut_res1_Medium_ThermodynamicState_copy(src,dst) logic2_junOut_res1_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junOut_res1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_junOut_res1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_junOut_res1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junOut_res1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_junOut_res1_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junOut_res1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junOut_res1_Medium_ThermodynamicState_array;
#define alloc_logic2_junOut_res1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junOut_res1_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junOut_res1_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junOut_res1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junOut_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junOut_res1_Medium_ThermodynamicState))
#define logic2_junOut_res1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junOut_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junOut_res1_Medium_ThermodynamicState))
#define logic2_junOut_res1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junOut_res1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junOut_res1_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junOut_res1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junOut_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junOut_res1_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_junOut_res2_Medium_ThermodynamicState;
extern struct record_description logic2_junOut_res2_Medium_ThermodynamicState__desc;

void logic2_junOut_res2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junOut_res2_Medium_ThermodynamicState_construct(td, ths ) logic2_junOut_res2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junOut_res2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junOut_res2_Medium_ThermodynamicState_copy(src,dst) logic2_junOut_res2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junOut_res2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_junOut_res2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_junOut_res2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junOut_res2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_junOut_res2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junOut_res2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junOut_res2_Medium_ThermodynamicState_array;
#define alloc_logic2_junOut_res2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junOut_res2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junOut_res2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junOut_res2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junOut_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junOut_res2_Medium_ThermodynamicState))
#define logic2_junOut_res2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junOut_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junOut_res2_Medium_ThermodynamicState))
#define logic2_junOut_res2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junOut_res2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junOut_res2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junOut_res2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junOut_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junOut_res2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_junOut_res3_Medium_ThermodynamicState;
extern struct record_description logic2_junOut_res3_Medium_ThermodynamicState__desc;

void logic2_junOut_res3_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junOut_res3_Medium_ThermodynamicState_construct(td, ths ) logic2_junOut_res3_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junOut_res3_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junOut_res3_Medium_ThermodynamicState_copy(src,dst) logic2_junOut_res3_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junOut_res3_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_junOut_res3_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_junOut_res3_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junOut_res3_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_junOut_res3_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junOut_res3_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junOut_res3_Medium_ThermodynamicState_array;
#define alloc_logic2_junOut_res3_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junOut_res3_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junOut_res3_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junOut_res3_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junOut_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junOut_res3_Medium_ThermodynamicState))
#define logic2_junOut_res3_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junOut_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junOut_res3_Medium_ThermodynamicState))
#define logic2_junOut_res3_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junOut_res3_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junOut_res3_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junOut_res3_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junOut_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junOut_res3_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_junOut_vol_Medium_ThermodynamicState;
extern struct record_description logic2_junOut_vol_Medium_ThermodynamicState__desc;

void logic2_junOut_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junOut_vol_Medium_ThermodynamicState_construct(td, ths ) logic2_junOut_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junOut_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junOut_vol_Medium_ThermodynamicState_copy(src,dst) logic2_junOut_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junOut_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_junOut_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_junOut_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junOut_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_junOut_vol_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junOut_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junOut_vol_Medium_ThermodynamicState_array;
#define alloc_logic2_junOut_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junOut_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junOut_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junOut_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junOut_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junOut_vol_Medium_ThermodynamicState))
#define logic2_junOut_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junOut_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junOut_vol_Medium_ThermodynamicState))
#define logic2_junOut_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junOut_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junOut_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junOut_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junOut_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junOut_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_junOut_vol_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_junOut_vol_dynBal_Medium_ThermodynamicState__desc;

void logic2_junOut_vol_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junOut_vol_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_junOut_vol_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junOut_vol_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junOut_vol_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_junOut_vol_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junOut_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_junOut_vol_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_junOut_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junOut_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_junOut_vol_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junOut_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junOut_vol_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_junOut_vol_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junOut_vol_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junOut_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junOut_vol_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junOut_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junOut_vol_dynBal_Medium_ThermodynamicState))
#define logic2_junOut_vol_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junOut_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junOut_vol_dynBal_Medium_ThermodynamicState))
#define logic2_junOut_vol_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junOut_vol_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junOut_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junOut_vol_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junOut_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junOut_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_junRet_res1_Medium_ThermodynamicState;
extern struct record_description logic2_junRet_res1_Medium_ThermodynamicState__desc;

void logic2_junRet_res1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junRet_res1_Medium_ThermodynamicState_construct(td, ths ) logic2_junRet_res1_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junRet_res1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junRet_res1_Medium_ThermodynamicState_copy(src,dst) logic2_junRet_res1_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junRet_res1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_junRet_res1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_junRet_res1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junRet_res1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_junRet_res1_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junRet_res1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junRet_res1_Medium_ThermodynamicState_array;
#define alloc_logic2_junRet_res1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junRet_res1_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junRet_res1_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junRet_res1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junRet_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junRet_res1_Medium_ThermodynamicState))
#define logic2_junRet_res1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junRet_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junRet_res1_Medium_ThermodynamicState))
#define logic2_junRet_res1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junRet_res1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junRet_res1_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junRet_res1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junRet_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junRet_res1_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_junRet_res2_Medium_ThermodynamicState;
extern struct record_description logic2_junRet_res2_Medium_ThermodynamicState__desc;

void logic2_junRet_res2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junRet_res2_Medium_ThermodynamicState_construct(td, ths ) logic2_junRet_res2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junRet_res2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junRet_res2_Medium_ThermodynamicState_copy(src,dst) logic2_junRet_res2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junRet_res2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_junRet_res2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_junRet_res2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junRet_res2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_junRet_res2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junRet_res2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junRet_res2_Medium_ThermodynamicState_array;
#define alloc_logic2_junRet_res2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junRet_res2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junRet_res2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junRet_res2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junRet_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junRet_res2_Medium_ThermodynamicState))
#define logic2_junRet_res2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junRet_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junRet_res2_Medium_ThermodynamicState))
#define logic2_junRet_res2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junRet_res2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junRet_res2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junRet_res2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junRet_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junRet_res2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_junRet_res3_Medium_ThermodynamicState;
extern struct record_description logic2_junRet_res3_Medium_ThermodynamicState__desc;

void logic2_junRet_res3_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junRet_res3_Medium_ThermodynamicState_construct(td, ths ) logic2_junRet_res3_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junRet_res3_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junRet_res3_Medium_ThermodynamicState_copy(src,dst) logic2_junRet_res3_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junRet_res3_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_junRet_res3_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_junRet_res3_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junRet_res3_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_junRet_res3_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junRet_res3_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junRet_res3_Medium_ThermodynamicState_array;
#define alloc_logic2_junRet_res3_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junRet_res3_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junRet_res3_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junRet_res3_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junRet_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junRet_res3_Medium_ThermodynamicState))
#define logic2_junRet_res3_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junRet_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junRet_res3_Medium_ThermodynamicState))
#define logic2_junRet_res3_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junRet_res3_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junRet_res3_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junRet_res3_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junRet_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junRet_res3_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_junRet_vol_Medium_ThermodynamicState;
extern struct record_description logic2_junRet_vol_Medium_ThermodynamicState__desc;

void logic2_junRet_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junRet_vol_Medium_ThermodynamicState_construct(td, ths ) logic2_junRet_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junRet_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junRet_vol_Medium_ThermodynamicState_copy(src,dst) logic2_junRet_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junRet_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_junRet_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_junRet_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junRet_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_junRet_vol_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junRet_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junRet_vol_Medium_ThermodynamicState_array;
#define alloc_logic2_junRet_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junRet_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junRet_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junRet_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junRet_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junRet_vol_Medium_ThermodynamicState))
#define logic2_junRet_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junRet_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junRet_vol_Medium_ThermodynamicState))
#define logic2_junRet_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junRet_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junRet_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junRet_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junRet_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junRet_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_junRet_vol_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_junRet_vol_dynBal_Medium_ThermodynamicState__desc;

void logic2_junRet_vol_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junRet_vol_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_junRet_vol_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junRet_vol_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junRet_vol_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_junRet_vol_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junRet_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_junRet_vol_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_junRet_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junRet_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_junRet_vol_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junRet_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junRet_vol_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_junRet_vol_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junRet_vol_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junRet_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junRet_vol_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junRet_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junRet_vol_dynBal_Medium_ThermodynamicState))
#define logic2_junRet_vol_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junRet_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junRet_vol_dynBal_Medium_ThermodynamicState))
#define logic2_junRet_vol_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junRet_vol_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junRet_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junRet_vol_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junRet_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junRet_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_out_Medium_ThermodynamicState;
extern struct record_description logic2_out_Medium_ThermodynamicState__desc;

void logic2_out_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_out_Medium_ThermodynamicState_construct(td, ths ) logic2_out_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_out_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_out_Medium_ThermodynamicState_copy(src,dst) logic2_out_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_out_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_out_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_out_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_out_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_out_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_out_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_out_Medium_ThermodynamicState_array;
#define alloc_logic2_out_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_out_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_out_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_out_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_out_Medium_ThermodynamicState_copy_p, sizeof(logic2_out_Medium_ThermodynamicState))
#define logic2_out_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_out_Medium_ThermodynamicState_copy_p, sizeof(logic2_out_Medium_ThermodynamicState))
#define logic2_out_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_out_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_out_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_out_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_out_Medium_ThermodynamicState_copy_p, sizeof(logic2_out_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_vol_Medium_ThermodynamicState;
extern struct record_description logic2_vol_Medium_ThermodynamicState__desc;

void logic2_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_vol_Medium_ThermodynamicState_construct(td, ths ) logic2_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_vol_Medium_ThermodynamicState_copy(src,dst) logic2_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_vol_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_vol_Medium_ThermodynamicState_array;
#define alloc_logic2_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_vol_Medium_ThermodynamicState))
#define logic2_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_vol_Medium_ThermodynamicState))
#define logic2_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TAirSup_Medium_ThermodynamicState logic2_vol_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_vol_dynBal_Medium_ThermodynamicState__desc;

void logic2_vol_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_vol_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_vol_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_vol_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_vol_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_vol_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, real_array in_X);
#define logic2_vol_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T, in_X) logic2_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T, in_X)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, real_array* in_X);
// #define logic2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_vol_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_vol_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_vol_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_vol_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_vol_dynBal_Medium_ThermodynamicState))
#define logic2_vol_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_vol_dynBal_Medium_ThermodynamicState))
#define logic2_vol_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_vol_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_vol_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_TCHWChi1Out_Medium_ThermodynamicState;
extern struct record_description logic2_TCHWChi1Out_Medium_ThermodynamicState__desc;

void logic2_TCHWChi1Out_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_TCHWChi1Out_Medium_ThermodynamicState_construct(td, ths ) logic2_TCHWChi1Out_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_TCHWChi1Out_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_TCHWChi1Out_Medium_ThermodynamicState_copy(src,dst) logic2_TCHWChi1Out_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_TCHWChi1Out_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_TCHWChi1Out_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_TCHWChi1Out_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_TCHWChi1Out_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_TCHWChi1Out_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_TCHWChi1Out_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_TCHWChi1Out_Medium_ThermodynamicState_array;
#define alloc_logic2_TCHWChi1Out_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_TCHWChi1Out_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_TCHWChi1Out_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_TCHWChi1Out_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_TCHWChi1Out_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWChi1Out_Medium_ThermodynamicState))
#define logic2_TCHWChi1Out_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_TCHWChi1Out_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWChi1Out_Medium_ThermodynamicState))
#define logic2_TCHWChi1Out_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_TCHWChi1Out_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_TCHWChi1Out_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_TCHWChi1Out_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_TCHWChi1Out_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWChi1Out_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_TCHWChi2In_Medium_ThermodynamicState;
extern struct record_description logic2_TCHWChi2In_Medium_ThermodynamicState__desc;

void logic2_TCHWChi2In_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_TCHWChi2In_Medium_ThermodynamicState_construct(td, ths ) logic2_TCHWChi2In_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_TCHWChi2In_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_TCHWChi2In_Medium_ThermodynamicState_copy(src,dst) logic2_TCHWChi2In_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_TCHWChi2In_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_TCHWChi2In_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_TCHWChi2In_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_TCHWChi2In_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_TCHWChi2In_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_TCHWChi2In_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_TCHWChi2In_Medium_ThermodynamicState_array;
#define alloc_logic2_TCHWChi2In_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_TCHWChi2In_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_TCHWChi2In_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_TCHWChi2In_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_TCHWChi2In_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWChi2In_Medium_ThermodynamicState))
#define logic2_TCHWChi2In_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_TCHWChi2In_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWChi2In_Medium_ThermodynamicState))
#define logic2_TCHWChi2In_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_TCHWChi2In_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_TCHWChi2In_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_TCHWChi2In_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_TCHWChi2In_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWChi2In_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_TCHWChi2Out_Medium_ThermodynamicState;
extern struct record_description logic2_TCHWChi2Out_Medium_ThermodynamicState__desc;

void logic2_TCHWChi2Out_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_TCHWChi2Out_Medium_ThermodynamicState_construct(td, ths ) logic2_TCHWChi2Out_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_TCHWChi2Out_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_TCHWChi2Out_Medium_ThermodynamicState_copy(src,dst) logic2_TCHWChi2Out_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_TCHWChi2Out_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_TCHWChi2Out_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_TCHWChi2Out_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_TCHWChi2Out_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_TCHWChi2Out_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_TCHWChi2Out_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_TCHWChi2Out_Medium_ThermodynamicState_array;
#define alloc_logic2_TCHWChi2Out_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_TCHWChi2Out_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_TCHWChi2Out_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_TCHWChi2Out_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_TCHWChi2Out_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWChi2Out_Medium_ThermodynamicState))
#define logic2_TCHWChi2Out_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_TCHWChi2Out_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWChi2Out_Medium_ThermodynamicState))
#define logic2_TCHWChi2Out_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_TCHWChi2Out_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_TCHWChi2Out_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_TCHWChi2Out_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_TCHWChi2Out_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWChi2Out_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_TCHWEntChi_Medium_ThermodynamicState;
extern struct record_description logic2_TCHWEntChi_Medium_ThermodynamicState__desc;

void logic2_TCHWEntChi_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_TCHWEntChi_Medium_ThermodynamicState_construct(td, ths ) logic2_TCHWEntChi_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_TCHWEntChi_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_TCHWEntChi_Medium_ThermodynamicState_copy(src,dst) logic2_TCHWEntChi_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_TCHWEntChi_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_TCHWEntChi_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_TCHWEntChi_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_TCHWEntChi_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_TCHWEntChi_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_TCHWEntChi_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_TCHWEntChi_Medium_ThermodynamicState_array;
#define alloc_logic2_TCHWEntChi_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_TCHWEntChi_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_TCHWEntChi_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_TCHWEntChi_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_TCHWEntChi_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWEntChi_Medium_ThermodynamicState))
#define logic2_TCHWEntChi_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_TCHWEntChi_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWEntChi_Medium_ThermodynamicState))
#define logic2_TCHWEntChi_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_TCHWEntChi_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_TCHWEntChi_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_TCHWEntChi_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_TCHWEntChi_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWEntChi_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_TCHWLeaCoi_Medium_ThermodynamicState;
extern struct record_description logic2_TCHWLeaCoi_Medium_ThermodynamicState__desc;

void logic2_TCHWLeaCoi_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_TCHWLeaCoi_Medium_ThermodynamicState_construct(td, ths ) logic2_TCHWLeaCoi_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_TCHWLeaCoi_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_TCHWLeaCoi_Medium_ThermodynamicState_copy(src,dst) logic2_TCHWLeaCoi_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_TCHWLeaCoi_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_TCHWLeaCoi_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_TCHWLeaCoi_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_TCHWLeaCoi_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_TCHWLeaCoi_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_TCHWLeaCoi_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_TCHWLeaCoi_Medium_ThermodynamicState_array;
#define alloc_logic2_TCHWLeaCoi_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_TCHWLeaCoi_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_TCHWLeaCoi_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_TCHWLeaCoi_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_TCHWLeaCoi_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWLeaCoi_Medium_ThermodynamicState))
#define logic2_TCHWLeaCoi_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_TCHWLeaCoi_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWLeaCoi_Medium_ThermodynamicState))
#define logic2_TCHWLeaCoi_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_TCHWLeaCoi_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_TCHWLeaCoi_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_TCHWLeaCoi_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_TCHWLeaCoi_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCHWLeaCoi_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_TCWEntTow_Medium_ThermodynamicState;
extern struct record_description logic2_TCWEntTow_Medium_ThermodynamicState__desc;

void logic2_TCWEntTow_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_TCWEntTow_Medium_ThermodynamicState_construct(td, ths ) logic2_TCWEntTow_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_TCWEntTow_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_TCWEntTow_Medium_ThermodynamicState_copy(src,dst) logic2_TCWEntTow_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_TCWEntTow_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_TCWEntTow_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_TCWEntTow_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_TCWEntTow_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_TCWEntTow_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_TCWEntTow_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_TCWEntTow_Medium_ThermodynamicState_array;
#define alloc_logic2_TCWEntTow_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_TCWEntTow_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_TCWEntTow_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_TCWEntTow_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_TCWEntTow_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCWEntTow_Medium_ThermodynamicState))
#define logic2_TCWEntTow_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_TCWEntTow_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCWEntTow_Medium_ThermodynamicState))
#define logic2_TCWEntTow_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_TCWEntTow_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_TCWEntTow_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_TCWEntTow_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_TCWEntTow_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCWEntTow_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_TCWEntTow2_Medium_ThermodynamicState;
extern struct record_description logic2_TCWEntTow2_Medium_ThermodynamicState__desc;

void logic2_TCWEntTow2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_TCWEntTow2_Medium_ThermodynamicState_construct(td, ths ) logic2_TCWEntTow2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_TCWEntTow2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_TCWEntTow2_Medium_ThermodynamicState_copy(src,dst) logic2_TCWEntTow2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_TCWEntTow2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_TCWEntTow2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_TCWEntTow2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_TCWEntTow2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_TCWEntTow2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_TCWEntTow2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_TCWEntTow2_Medium_ThermodynamicState_array;
#define alloc_logic2_TCWEntTow2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_TCWEntTow2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_TCWEntTow2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_TCWEntTow2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_TCWEntTow2_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCWEntTow2_Medium_ThermodynamicState))
#define logic2_TCWEntTow2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_TCWEntTow2_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCWEntTow2_Medium_ThermodynamicState))
#define logic2_TCWEntTow2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_TCWEntTow2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_TCWEntTow2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_TCWEntTow2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_TCWEntTow2_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCWEntTow2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_TCWLeaTow_Medium_ThermodynamicState;
extern struct record_description logic2_TCWLeaTow_Medium_ThermodynamicState__desc;

void logic2_TCWLeaTow_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_TCWLeaTow_Medium_ThermodynamicState_construct(td, ths ) logic2_TCWLeaTow_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_TCWLeaTow_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_TCWLeaTow_Medium_ThermodynamicState_copy(src,dst) logic2_TCWLeaTow_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_TCWLeaTow_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_TCWLeaTow_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_TCWLeaTow_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_TCWLeaTow_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_TCWLeaTow_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_TCWLeaTow_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_TCWLeaTow_Medium_ThermodynamicState_array;
#define alloc_logic2_TCWLeaTow_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_TCWLeaTow_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_TCWLeaTow_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_TCWLeaTow_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_TCWLeaTow_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCWLeaTow_Medium_ThermodynamicState))
#define logic2_TCWLeaTow_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_TCWLeaTow_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCWLeaTow_Medium_ThermodynamicState))
#define logic2_TCWLeaTow_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_TCWLeaTow_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_TCWLeaTow_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_TCWLeaTow_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_TCWLeaTow_Medium_ThermodynamicState_copy_p, sizeof(logic2_TCWLeaTow_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_TWCLeaTow2_Medium_ThermodynamicState;
extern struct record_description logic2_TWCLeaTow2_Medium_ThermodynamicState__desc;

void logic2_TWCLeaTow2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_TWCLeaTow2_Medium_ThermodynamicState_construct(td, ths ) logic2_TWCLeaTow2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_TWCLeaTow2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_TWCLeaTow2_Medium_ThermodynamicState_copy(src,dst) logic2_TWCLeaTow2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_TWCLeaTow2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_TWCLeaTow2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_TWCLeaTow2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_TWCLeaTow2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_TWCLeaTow2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_TWCLeaTow2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_TWCLeaTow2_Medium_ThermodynamicState_array;
#define alloc_logic2_TWCLeaTow2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_TWCLeaTow2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_TWCLeaTow2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_TWCLeaTow2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_TWCLeaTow2_Medium_ThermodynamicState_copy_p, sizeof(logic2_TWCLeaTow2_Medium_ThermodynamicState))
#define logic2_TWCLeaTow2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_TWCLeaTow2_Medium_ThermodynamicState_copy_p, sizeof(logic2_TWCLeaTow2_Medium_ThermodynamicState))
#define logic2_TWCLeaTow2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_TWCLeaTow2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_TWCLeaTow2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_TWCLeaTow2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_TWCLeaTow2_Medium_ThermodynamicState_copy_p, sizeof(logic2_TWCLeaTow2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_chi_Medium1_ThermodynamicState;
extern struct record_description logic2_chi_Medium1_ThermodynamicState__desc;

void logic2_chi_Medium1_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_chi_Medium1_ThermodynamicState_construct(td, ths ) logic2_chi_Medium1_ThermodynamicState_construct_p(td, &ths )
void logic2_chi_Medium1_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_chi_Medium1_ThermodynamicState_copy(src,dst) logic2_chi_Medium1_ThermodynamicState_copy_p(&src, &dst)


void logic2_chi_Medium1_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_chi_Medium1_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_chi_Medium1_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_chi_Medium1_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_chi_Medium1_ThermodynamicState_copy_to_vars(src,...) logic2_chi_Medium1_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_chi_Medium1_ThermodynamicState_array;
#define alloc_logic2_chi_Medium1_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_chi_Medium1_ThermodynamicState_construct_p, ndims, sizeof(logic2_chi_Medium1_ThermodynamicState), __VA_ARGS__)
#define logic2_chi_Medium1_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_chi_Medium1_ThermodynamicState_copy_p, sizeof(logic2_chi_Medium1_ThermodynamicState))
#define logic2_chi_Medium1_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_chi_Medium1_ThermodynamicState_copy_p, sizeof(logic2_chi_Medium1_ThermodynamicState))
#define logic2_chi_Medium1_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_chi_Medium1_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_chi_Medium1_ThermodynamicState), __VA_ARGS__)))
#define logic2_chi_Medium1_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_chi_Medium1_ThermodynamicState_copy_p, sizeof(logic2_chi_Medium1_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_chi_Medium2_ThermodynamicState;
extern struct record_description logic2_chi_Medium2_ThermodynamicState__desc;

void logic2_chi_Medium2_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_chi_Medium2_ThermodynamicState_construct(td, ths ) logic2_chi_Medium2_ThermodynamicState_construct_p(td, &ths )
void logic2_chi_Medium2_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_chi_Medium2_ThermodynamicState_copy(src,dst) logic2_chi_Medium2_ThermodynamicState_copy_p(&src, &dst)


void logic2_chi_Medium2_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_chi_Medium2_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_chi_Medium2_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_chi_Medium2_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_chi_Medium2_ThermodynamicState_copy_to_vars(src,...) logic2_chi_Medium2_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_chi_Medium2_ThermodynamicState_array;
#define alloc_logic2_chi_Medium2_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_chi_Medium2_ThermodynamicState_construct_p, ndims, sizeof(logic2_chi_Medium2_ThermodynamicState), __VA_ARGS__)
#define logic2_chi_Medium2_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_chi_Medium2_ThermodynamicState_copy_p, sizeof(logic2_chi_Medium2_ThermodynamicState))
#define logic2_chi_Medium2_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_chi_Medium2_ThermodynamicState_copy_p, sizeof(logic2_chi_Medium2_ThermodynamicState))
#define logic2_chi_Medium2_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_chi_Medium2_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_chi_Medium2_ThermodynamicState), __VA_ARGS__)))
#define logic2_chi_Medium2_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_chi_Medium2_ThermodynamicState_copy_p, sizeof(logic2_chi_Medium2_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_chi_preDro1_Medium_ThermodynamicState;
extern struct record_description logic2_chi_preDro1_Medium_ThermodynamicState__desc;

void logic2_chi_preDro1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_chi_preDro1_Medium_ThermodynamicState_construct(td, ths ) logic2_chi_preDro1_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_chi_preDro1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_chi_preDro1_Medium_ThermodynamicState_copy(src,dst) logic2_chi_preDro1_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_chi_preDro1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_chi_preDro1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_chi_preDro1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_chi_preDro1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_chi_preDro1_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_chi_preDro1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_chi_preDro1_Medium_ThermodynamicState_array;
#define alloc_logic2_chi_preDro1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_chi_preDro1_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_chi_preDro1_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_chi_preDro1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_chi_preDro1_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_preDro1_Medium_ThermodynamicState))
#define logic2_chi_preDro1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_chi_preDro1_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_preDro1_Medium_ThermodynamicState))
#define logic2_chi_preDro1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_chi_preDro1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_chi_preDro1_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_chi_preDro1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_chi_preDro1_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_preDro1_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_chi_preDro2_Medium_ThermodynamicState;
extern struct record_description logic2_chi_preDro2_Medium_ThermodynamicState__desc;

void logic2_chi_preDro2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_chi_preDro2_Medium_ThermodynamicState_construct(td, ths ) logic2_chi_preDro2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_chi_preDro2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_chi_preDro2_Medium_ThermodynamicState_copy(src,dst) logic2_chi_preDro2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_chi_preDro2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_chi_preDro2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_chi_preDro2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_chi_preDro2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_chi_preDro2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_chi_preDro2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_chi_preDro2_Medium_ThermodynamicState_array;
#define alloc_logic2_chi_preDro2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_chi_preDro2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_chi_preDro2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_chi_preDro2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_chi_preDro2_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_preDro2_Medium_ThermodynamicState))
#define logic2_chi_preDro2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_chi_preDro2_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_preDro2_Medium_ThermodynamicState))
#define logic2_chi_preDro2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_chi_preDro2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_chi_preDro2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_chi_preDro2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_chi_preDro2_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_preDro2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_chi_vol1_Medium_ThermodynamicState;
extern struct record_description logic2_chi_vol1_Medium_ThermodynamicState__desc;

void logic2_chi_vol1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_chi_vol1_Medium_ThermodynamicState_construct(td, ths ) logic2_chi_vol1_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_chi_vol1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_chi_vol1_Medium_ThermodynamicState_copy(src,dst) logic2_chi_vol1_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_chi_vol1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_chi_vol1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_chi_vol1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_chi_vol1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_chi_vol1_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_chi_vol1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_chi_vol1_Medium_ThermodynamicState_array;
#define alloc_logic2_chi_vol1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_chi_vol1_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_chi_vol1_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_chi_vol1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_chi_vol1_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_vol1_Medium_ThermodynamicState))
#define logic2_chi_vol1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_chi_vol1_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_vol1_Medium_ThermodynamicState))
#define logic2_chi_vol1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_chi_vol1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_chi_vol1_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_chi_vol1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_chi_vol1_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_vol1_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_chi_vol1_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_chi_vol1_dynBal_Medium_ThermodynamicState__desc;

void logic2_chi_vol1_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_chi_vol1_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_chi_vol1_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_chi_vol1_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_chi_vol1_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_chi_vol1_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_chi_vol1_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_chi_vol1_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_chi_vol1_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_chi_vol1_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_chi_vol1_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_chi_vol1_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_chi_vol1_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_chi_vol1_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_chi_vol1_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_chi_vol1_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_chi_vol1_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_chi_vol1_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_vol1_dynBal_Medium_ThermodynamicState))
#define logic2_chi_vol1_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_chi_vol1_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_vol1_dynBal_Medium_ThermodynamicState))
#define logic2_chi_vol1_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_chi_vol1_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_chi_vol1_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_chi_vol1_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_chi_vol1_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_vol1_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_chi_vol2_Medium_ThermodynamicState;
extern struct record_description logic2_chi_vol2_Medium_ThermodynamicState__desc;

void logic2_chi_vol2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_chi_vol2_Medium_ThermodynamicState_construct(td, ths ) logic2_chi_vol2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_chi_vol2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_chi_vol2_Medium_ThermodynamicState_copy(src,dst) logic2_chi_vol2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_chi_vol2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_chi_vol2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_chi_vol2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_chi_vol2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_chi_vol2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_chi_vol2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_chi_vol2_Medium_ThermodynamicState_array;
#define alloc_logic2_chi_vol2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_chi_vol2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_chi_vol2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_chi_vol2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_chi_vol2_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_vol2_Medium_ThermodynamicState))
#define logic2_chi_vol2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_chi_vol2_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_vol2_Medium_ThermodynamicState))
#define logic2_chi_vol2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_chi_vol2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_chi_vol2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_chi_vol2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_chi_vol2_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_vol2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_chi_vol2_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_chi_vol2_dynBal_Medium_ThermodynamicState__desc;

void logic2_chi_vol2_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_chi_vol2_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_chi_vol2_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_chi_vol2_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_chi_vol2_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_chi_vol2_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_chi_vol2_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_chi_vol2_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_chi_vol2_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_chi_vol2_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_chi_vol2_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_chi_vol2_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_chi_vol2_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_chi_vol2_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_chi_vol2_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_chi_vol2_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_chi_vol2_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_chi_vol2_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_vol2_dynBal_Medium_ThermodynamicState))
#define logic2_chi_vol2_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_chi_vol2_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_vol2_dynBal_Medium_ThermodynamicState))
#define logic2_chi_vol2_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_chi_vol2_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_chi_vol2_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_chi_vol2_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_chi_vol2_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi_vol2_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_chi2_Medium1_ThermodynamicState;
extern struct record_description logic2_chi2_Medium1_ThermodynamicState__desc;

void logic2_chi2_Medium1_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_chi2_Medium1_ThermodynamicState_construct(td, ths ) logic2_chi2_Medium1_ThermodynamicState_construct_p(td, &ths )
void logic2_chi2_Medium1_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_chi2_Medium1_ThermodynamicState_copy(src,dst) logic2_chi2_Medium1_ThermodynamicState_copy_p(&src, &dst)


void logic2_chi2_Medium1_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_chi2_Medium1_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_chi2_Medium1_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_chi2_Medium1_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_chi2_Medium1_ThermodynamicState_copy_to_vars(src,...) logic2_chi2_Medium1_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_chi2_Medium1_ThermodynamicState_array;
#define alloc_logic2_chi2_Medium1_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_chi2_Medium1_ThermodynamicState_construct_p, ndims, sizeof(logic2_chi2_Medium1_ThermodynamicState), __VA_ARGS__)
#define logic2_chi2_Medium1_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_chi2_Medium1_ThermodynamicState_copy_p, sizeof(logic2_chi2_Medium1_ThermodynamicState))
#define logic2_chi2_Medium1_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_chi2_Medium1_ThermodynamicState_copy_p, sizeof(logic2_chi2_Medium1_ThermodynamicState))
#define logic2_chi2_Medium1_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_chi2_Medium1_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_chi2_Medium1_ThermodynamicState), __VA_ARGS__)))
#define logic2_chi2_Medium1_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_chi2_Medium1_ThermodynamicState_copy_p, sizeof(logic2_chi2_Medium1_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_chi2_Medium2_ThermodynamicState;
extern struct record_description logic2_chi2_Medium2_ThermodynamicState__desc;

void logic2_chi2_Medium2_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_chi2_Medium2_ThermodynamicState_construct(td, ths ) logic2_chi2_Medium2_ThermodynamicState_construct_p(td, &ths )
void logic2_chi2_Medium2_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_chi2_Medium2_ThermodynamicState_copy(src,dst) logic2_chi2_Medium2_ThermodynamicState_copy_p(&src, &dst)


void logic2_chi2_Medium2_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_chi2_Medium2_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_chi2_Medium2_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_chi2_Medium2_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_chi2_Medium2_ThermodynamicState_copy_to_vars(src,...) logic2_chi2_Medium2_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_chi2_Medium2_ThermodynamicState_array;
#define alloc_logic2_chi2_Medium2_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_chi2_Medium2_ThermodynamicState_construct_p, ndims, sizeof(logic2_chi2_Medium2_ThermodynamicState), __VA_ARGS__)
#define logic2_chi2_Medium2_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_chi2_Medium2_ThermodynamicState_copy_p, sizeof(logic2_chi2_Medium2_ThermodynamicState))
#define logic2_chi2_Medium2_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_chi2_Medium2_ThermodynamicState_copy_p, sizeof(logic2_chi2_Medium2_ThermodynamicState))
#define logic2_chi2_Medium2_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_chi2_Medium2_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_chi2_Medium2_ThermodynamicState), __VA_ARGS__)))
#define logic2_chi2_Medium2_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_chi2_Medium2_ThermodynamicState_copy_p, sizeof(logic2_chi2_Medium2_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_chi2_preDro1_Medium_ThermodynamicState;
extern struct record_description logic2_chi2_preDro1_Medium_ThermodynamicState__desc;

void logic2_chi2_preDro1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_chi2_preDro1_Medium_ThermodynamicState_construct(td, ths ) logic2_chi2_preDro1_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_chi2_preDro1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_chi2_preDro1_Medium_ThermodynamicState_copy(src,dst) logic2_chi2_preDro1_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_chi2_preDro1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_chi2_preDro1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_chi2_preDro1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_chi2_preDro1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_chi2_preDro1_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_chi2_preDro1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_chi2_preDro1_Medium_ThermodynamicState_array;
#define alloc_logic2_chi2_preDro1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_chi2_preDro1_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_chi2_preDro1_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_chi2_preDro1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_chi2_preDro1_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_preDro1_Medium_ThermodynamicState))
#define logic2_chi2_preDro1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_chi2_preDro1_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_preDro1_Medium_ThermodynamicState))
#define logic2_chi2_preDro1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_chi2_preDro1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_chi2_preDro1_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_chi2_preDro1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_chi2_preDro1_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_preDro1_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_chi2_preDro2_Medium_ThermodynamicState;
extern struct record_description logic2_chi2_preDro2_Medium_ThermodynamicState__desc;

void logic2_chi2_preDro2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_chi2_preDro2_Medium_ThermodynamicState_construct(td, ths ) logic2_chi2_preDro2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_chi2_preDro2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_chi2_preDro2_Medium_ThermodynamicState_copy(src,dst) logic2_chi2_preDro2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_chi2_preDro2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_chi2_preDro2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_chi2_preDro2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_chi2_preDro2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_chi2_preDro2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_chi2_preDro2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_chi2_preDro2_Medium_ThermodynamicState_array;
#define alloc_logic2_chi2_preDro2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_chi2_preDro2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_chi2_preDro2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_chi2_preDro2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_chi2_preDro2_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_preDro2_Medium_ThermodynamicState))
#define logic2_chi2_preDro2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_chi2_preDro2_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_preDro2_Medium_ThermodynamicState))
#define logic2_chi2_preDro2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_chi2_preDro2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_chi2_preDro2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_chi2_preDro2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_chi2_preDro2_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_preDro2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_chi2_vol1_Medium_ThermodynamicState;
extern struct record_description logic2_chi2_vol1_Medium_ThermodynamicState__desc;

void logic2_chi2_vol1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_chi2_vol1_Medium_ThermodynamicState_construct(td, ths ) logic2_chi2_vol1_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_chi2_vol1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_chi2_vol1_Medium_ThermodynamicState_copy(src,dst) logic2_chi2_vol1_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_chi2_vol1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_chi2_vol1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_chi2_vol1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_chi2_vol1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_chi2_vol1_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_chi2_vol1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_chi2_vol1_Medium_ThermodynamicState_array;
#define alloc_logic2_chi2_vol1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_chi2_vol1_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_chi2_vol1_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_chi2_vol1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_chi2_vol1_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_vol1_Medium_ThermodynamicState))
#define logic2_chi2_vol1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_chi2_vol1_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_vol1_Medium_ThermodynamicState))
#define logic2_chi2_vol1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_chi2_vol1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_chi2_vol1_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_chi2_vol1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_chi2_vol1_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_vol1_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_chi2_vol1_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_chi2_vol1_dynBal_Medium_ThermodynamicState__desc;

void logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_chi2_vol1_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_vol1_dynBal_Medium_ThermodynamicState))
#define logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_vol1_dynBal_Medium_ThermodynamicState))
#define logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_chi2_vol1_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_chi2_vol1_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_vol1_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_chi2_vol2_Medium_ThermodynamicState;
extern struct record_description logic2_chi2_vol2_Medium_ThermodynamicState__desc;

void logic2_chi2_vol2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_chi2_vol2_Medium_ThermodynamicState_construct(td, ths ) logic2_chi2_vol2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_chi2_vol2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_chi2_vol2_Medium_ThermodynamicState_copy(src,dst) logic2_chi2_vol2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_chi2_vol2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_chi2_vol2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_chi2_vol2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_chi2_vol2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_chi2_vol2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_chi2_vol2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_chi2_vol2_Medium_ThermodynamicState_array;
#define alloc_logic2_chi2_vol2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_chi2_vol2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_chi2_vol2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_chi2_vol2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_chi2_vol2_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_vol2_Medium_ThermodynamicState))
#define logic2_chi2_vol2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_chi2_vol2_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_vol2_Medium_ThermodynamicState))
#define logic2_chi2_vol2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_chi2_vol2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_chi2_vol2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_chi2_vol2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_chi2_vol2_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_vol2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_chi2_vol2_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_chi2_vol2_dynBal_Medium_ThermodynamicState__desc;

void logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_chi2_vol2_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_vol2_dynBal_Medium_ThermodynamicState))
#define logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_vol2_dynBal_Medium_ThermodynamicState))
#define logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_chi2_vol2_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_chi2_vol2_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_chi2_vol2_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_cooCoi_Medium1_ThermodynamicState;
extern struct record_description logic2_cooCoi_Medium1_ThermodynamicState__desc;

void logic2_cooCoi_Medium1_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooCoi_Medium1_ThermodynamicState_construct(td, ths ) logic2_cooCoi_Medium1_ThermodynamicState_construct_p(td, &ths )
void logic2_cooCoi_Medium1_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooCoi_Medium1_ThermodynamicState_copy(src,dst) logic2_cooCoi_Medium1_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooCoi_Medium1_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_cooCoi_Medium1_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_cooCoi_Medium1_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooCoi_Medium1_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_cooCoi_Medium1_ThermodynamicState_copy_to_vars(src,...) logic2_cooCoi_Medium1_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooCoi_Medium1_ThermodynamicState_array;
#define alloc_logic2_cooCoi_Medium1_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooCoi_Medium1_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooCoi_Medium1_ThermodynamicState), __VA_ARGS__)
#define logic2_cooCoi_Medium1_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooCoi_Medium1_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_Medium1_ThermodynamicState))
#define logic2_cooCoi_Medium1_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooCoi_Medium1_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_Medium1_ThermodynamicState))
#define logic2_cooCoi_Medium1_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooCoi_Medium1_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooCoi_Medium1_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooCoi_Medium1_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooCoi_Medium1_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_Medium1_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_cooCoi_ele_Medium1_ThermodynamicState;
extern struct record_description logic2_cooCoi_ele_Medium1_ThermodynamicState__desc;

void logic2_cooCoi_ele_Medium1_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooCoi_ele_Medium1_ThermodynamicState_construct(td, ths ) logic2_cooCoi_ele_Medium1_ThermodynamicState_construct_p(td, &ths )
void logic2_cooCoi_ele_Medium1_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooCoi_ele_Medium1_ThermodynamicState_copy(src,dst) logic2_cooCoi_ele_Medium1_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooCoi_ele_Medium1_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_cooCoi_ele_Medium1_ThermodynamicState_copy_to_vars(src,...) logic2_cooCoi_ele_Medium1_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooCoi_ele_Medium1_ThermodynamicState_array;
#define alloc_logic2_cooCoi_ele_Medium1_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooCoi_ele_Medium1_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooCoi_ele_Medium1_ThermodynamicState), __VA_ARGS__)
#define logic2_cooCoi_ele_Medium1_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooCoi_ele_Medium1_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_Medium1_ThermodynamicState))
#define logic2_cooCoi_ele_Medium1_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooCoi_ele_Medium1_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_Medium1_ThermodynamicState))
#define logic2_cooCoi_ele_Medium1_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooCoi_ele_Medium1_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooCoi_ele_Medium1_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooCoi_ele_Medium1_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooCoi_ele_Medium1_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_Medium1_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState;
extern struct record_description logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState__desc;

void logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_construct(td, ths ) logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_copy(src,dst) logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_array;
#define alloc_logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState))
#define logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState))
#define logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_cooCoi_ele_vol1_Medium_ThermodynamicState;
extern struct record_description logic2_cooCoi_ele_vol1_Medium_ThermodynamicState__desc;

void logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_construct(td, ths ) logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_copy(src,dst) logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_array;
#define alloc_logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooCoi_ele_vol1_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_vol1_Medium_ThermodynamicState))
#define logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_vol1_Medium_ThermodynamicState))
#define logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooCoi_ele_vol1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooCoi_ele_vol1_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_vol1_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState__desc;

void logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState))
#define logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState))
#define logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_cooCoi_temSen__1_Medium_ThermodynamicState;
extern struct record_description logic2_cooCoi_temSen__1_Medium_ThermodynamicState__desc;

void logic2_cooCoi_temSen__1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooCoi_temSen__1_Medium_ThermodynamicState_construct(td, ths ) logic2_cooCoi_temSen__1_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_cooCoi_temSen__1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooCoi_temSen__1_Medium_ThermodynamicState_copy(src,dst) logic2_cooCoi_temSen__1_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooCoi_temSen__1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_cooCoi_temSen__1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_cooCoi_temSen__1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooCoi_temSen__1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_cooCoi_temSen__1_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_cooCoi_temSen__1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooCoi_temSen__1_Medium_ThermodynamicState_array;
#define alloc_logic2_cooCoi_temSen__1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooCoi_temSen__1_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooCoi_temSen__1_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_cooCoi_temSen__1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooCoi_temSen__1_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_temSen__1_Medium_ThermodynamicState))
#define logic2_cooCoi_temSen__1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooCoi_temSen__1_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_temSen__1_Medium_ThermodynamicState))
#define logic2_cooCoi_temSen__1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooCoi_temSen__1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooCoi_temSen__1_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooCoi_temSen__1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooCoi_temSen__1_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooCoi_temSen__1_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_cooTow_Medium_ThermodynamicState;
extern struct record_description logic2_cooTow_Medium_ThermodynamicState__desc;

void logic2_cooTow_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooTow_Medium_ThermodynamicState_construct(td, ths ) logic2_cooTow_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_cooTow_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooTow_Medium_ThermodynamicState_copy(src,dst) logic2_cooTow_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooTow_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_cooTow_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_cooTow_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooTow_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_cooTow_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_cooTow_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooTow_Medium_ThermodynamicState_array;
#define alloc_logic2_cooTow_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooTow_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooTow_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_cooTow_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooTow_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow_Medium_ThermodynamicState))
#define logic2_cooTow_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooTow_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow_Medium_ThermodynamicState))
#define logic2_cooTow_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooTow_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooTow_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooTow_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooTow_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_cooTow_Water_ThermodynamicState;
extern struct record_description logic2_cooTow_Water_ThermodynamicState__desc;

void logic2_cooTow_Water_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooTow_Water_ThermodynamicState_construct(td, ths ) logic2_cooTow_Water_ThermodynamicState_construct_p(td, &ths )
void logic2_cooTow_Water_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooTow_Water_ThermodynamicState_copy(src,dst) logic2_cooTow_Water_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooTow_Water_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_cooTow_Water_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_cooTow_Water_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooTow_Water_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_cooTow_Water_ThermodynamicState_copy_to_vars(src,...) logic2_cooTow_Water_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooTow_Water_ThermodynamicState_array;
#define alloc_logic2_cooTow_Water_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooTow_Water_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooTow_Water_ThermodynamicState), __VA_ARGS__)
#define logic2_cooTow_Water_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooTow_Water_ThermodynamicState_copy_p, sizeof(logic2_cooTow_Water_ThermodynamicState))
#define logic2_cooTow_Water_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooTow_Water_ThermodynamicState_copy_p, sizeof(logic2_cooTow_Water_ThermodynamicState))
#define logic2_cooTow_Water_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooTow_Water_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooTow_Water_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooTow_Water_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooTow_Water_ThermodynamicState_copy_p, sizeof(logic2_cooTow_Water_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_cooTow_preDro_Medium_ThermodynamicState;
extern struct record_description logic2_cooTow_preDro_Medium_ThermodynamicState__desc;

void logic2_cooTow_preDro_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooTow_preDro_Medium_ThermodynamicState_construct(td, ths ) logic2_cooTow_preDro_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_cooTow_preDro_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooTow_preDro_Medium_ThermodynamicState_copy(src,dst) logic2_cooTow_preDro_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooTow_preDro_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_cooTow_preDro_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_cooTow_preDro_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooTow_preDro_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_cooTow_preDro_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_cooTow_preDro_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooTow_preDro_Medium_ThermodynamicState_array;
#define alloc_logic2_cooTow_preDro_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooTow_preDro_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooTow_preDro_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_cooTow_preDro_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooTow_preDro_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow_preDro_Medium_ThermodynamicState))
#define logic2_cooTow_preDro_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooTow_preDro_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow_preDro_Medium_ThermodynamicState))
#define logic2_cooTow_preDro_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooTow_preDro_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooTow_preDro_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooTow_preDro_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooTow_preDro_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow_preDro_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_cooTow_vol_Medium_ThermodynamicState;
extern struct record_description logic2_cooTow_vol_Medium_ThermodynamicState__desc;

void logic2_cooTow_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooTow_vol_Medium_ThermodynamicState_construct(td, ths ) logic2_cooTow_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_cooTow_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooTow_vol_Medium_ThermodynamicState_copy(src,dst) logic2_cooTow_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooTow_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_cooTow_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_cooTow_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooTow_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_cooTow_vol_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_cooTow_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooTow_vol_Medium_ThermodynamicState_array;
#define alloc_logic2_cooTow_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooTow_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooTow_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_cooTow_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooTow_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow_vol_Medium_ThermodynamicState))
#define logic2_cooTow_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooTow_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow_vol_Medium_ThermodynamicState))
#define logic2_cooTow_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooTow_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooTow_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooTow_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooTow_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_cooTow_vol_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_cooTow_vol_dynBal_Medium_ThermodynamicState__desc;

void logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooTow_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow_vol_dynBal_Medium_ThermodynamicState))
#define logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow_vol_dynBal_Medium_ThermodynamicState))
#define logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooTow_vol_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooTow_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_cooTow2_Medium_ThermodynamicState;
extern struct record_description logic2_cooTow2_Medium_ThermodynamicState__desc;

void logic2_cooTow2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooTow2_Medium_ThermodynamicState_construct(td, ths ) logic2_cooTow2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_cooTow2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooTow2_Medium_ThermodynamicState_copy(src,dst) logic2_cooTow2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooTow2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_cooTow2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_cooTow2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooTow2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_cooTow2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_cooTow2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooTow2_Medium_ThermodynamicState_array;
#define alloc_logic2_cooTow2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooTow2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooTow2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_cooTow2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooTow2_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow2_Medium_ThermodynamicState))
#define logic2_cooTow2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooTow2_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow2_Medium_ThermodynamicState))
#define logic2_cooTow2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooTow2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooTow2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooTow2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooTow2_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_cooTow2_Water_ThermodynamicState;
extern struct record_description logic2_cooTow2_Water_ThermodynamicState__desc;

void logic2_cooTow2_Water_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooTow2_Water_ThermodynamicState_construct(td, ths ) logic2_cooTow2_Water_ThermodynamicState_construct_p(td, &ths )
void logic2_cooTow2_Water_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooTow2_Water_ThermodynamicState_copy(src,dst) logic2_cooTow2_Water_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooTow2_Water_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_cooTow2_Water_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_cooTow2_Water_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooTow2_Water_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_cooTow2_Water_ThermodynamicState_copy_to_vars(src,...) logic2_cooTow2_Water_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooTow2_Water_ThermodynamicState_array;
#define alloc_logic2_cooTow2_Water_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooTow2_Water_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooTow2_Water_ThermodynamicState), __VA_ARGS__)
#define logic2_cooTow2_Water_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooTow2_Water_ThermodynamicState_copy_p, sizeof(logic2_cooTow2_Water_ThermodynamicState))
#define logic2_cooTow2_Water_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooTow2_Water_ThermodynamicState_copy_p, sizeof(logic2_cooTow2_Water_ThermodynamicState))
#define logic2_cooTow2_Water_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooTow2_Water_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooTow2_Water_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooTow2_Water_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooTow2_Water_ThermodynamicState_copy_p, sizeof(logic2_cooTow2_Water_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_cooTow2_preDro_Medium_ThermodynamicState;
extern struct record_description logic2_cooTow2_preDro_Medium_ThermodynamicState__desc;

void logic2_cooTow2_preDro_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooTow2_preDro_Medium_ThermodynamicState_construct(td, ths ) logic2_cooTow2_preDro_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_cooTow2_preDro_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooTow2_preDro_Medium_ThermodynamicState_copy(src,dst) logic2_cooTow2_preDro_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooTow2_preDro_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_cooTow2_preDro_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_cooTow2_preDro_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooTow2_preDro_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_cooTow2_preDro_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_cooTow2_preDro_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooTow2_preDro_Medium_ThermodynamicState_array;
#define alloc_logic2_cooTow2_preDro_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooTow2_preDro_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooTow2_preDro_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_cooTow2_preDro_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooTow2_preDro_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow2_preDro_Medium_ThermodynamicState))
#define logic2_cooTow2_preDro_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooTow2_preDro_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow2_preDro_Medium_ThermodynamicState))
#define logic2_cooTow2_preDro_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooTow2_preDro_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooTow2_preDro_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooTow2_preDro_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooTow2_preDro_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow2_preDro_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_cooTow2_vol_Medium_ThermodynamicState;
extern struct record_description logic2_cooTow2_vol_Medium_ThermodynamicState__desc;

void logic2_cooTow2_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooTow2_vol_Medium_ThermodynamicState_construct(td, ths ) logic2_cooTow2_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_cooTow2_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooTow2_vol_Medium_ThermodynamicState_copy(src,dst) logic2_cooTow2_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooTow2_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_cooTow2_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_cooTow2_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooTow2_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_cooTow2_vol_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_cooTow2_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooTow2_vol_Medium_ThermodynamicState_array;
#define alloc_logic2_cooTow2_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooTow2_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooTow2_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_cooTow2_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooTow2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow2_vol_Medium_ThermodynamicState))
#define logic2_cooTow2_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooTow2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow2_vol_Medium_ThermodynamicState))
#define logic2_cooTow2_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooTow2_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooTow2_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooTow2_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooTow2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow2_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState__desc;

void logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState))
#define logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState))
#define logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_expVesCHW_Medium_ThermodynamicState;
extern struct record_description logic2_expVesCHW_Medium_ThermodynamicState__desc;

void logic2_expVesCHW_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_expVesCHW_Medium_ThermodynamicState_construct(td, ths ) logic2_expVesCHW_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_expVesCHW_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_expVesCHW_Medium_ThermodynamicState_copy(src,dst) logic2_expVesCHW_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_expVesCHW_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_expVesCHW_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_expVesCHW_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_expVesCHW_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_expVesCHW_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_expVesCHW_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_expVesCHW_Medium_ThermodynamicState_array;
#define alloc_logic2_expVesCHW_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_expVesCHW_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_expVesCHW_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_expVesCHW_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_expVesCHW_Medium_ThermodynamicState_copy_p, sizeof(logic2_expVesCHW_Medium_ThermodynamicState))
#define logic2_expVesCHW_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_expVesCHW_Medium_ThermodynamicState_copy_p, sizeof(logic2_expVesCHW_Medium_ThermodynamicState))
#define logic2_expVesCHW_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_expVesCHW_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_expVesCHW_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_expVesCHW_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_expVesCHW_Medium_ThermodynamicState_copy_p, sizeof(logic2_expVesCHW_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_expVesChi_Medium_ThermodynamicState;
extern struct record_description logic2_expVesChi_Medium_ThermodynamicState__desc;

void logic2_expVesChi_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_expVesChi_Medium_ThermodynamicState_construct(td, ths ) logic2_expVesChi_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_expVesChi_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_expVesChi_Medium_ThermodynamicState_copy(src,dst) logic2_expVesChi_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_expVesChi_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_expVesChi_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_expVesChi_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_expVesChi_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_expVesChi_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_expVesChi_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_expVesChi_Medium_ThermodynamicState_array;
#define alloc_logic2_expVesChi_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_expVesChi_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_expVesChi_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_expVesChi_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_expVesChi_Medium_ThermodynamicState_copy_p, sizeof(logic2_expVesChi_Medium_ThermodynamicState))
#define logic2_expVesChi_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_expVesChi_Medium_ThermodynamicState_copy_p, sizeof(logic2_expVesChi_Medium_ThermodynamicState))
#define logic2_expVesChi_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_expVesChi_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_expVesChi_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_expVesChi_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_expVesChi_Medium_ThermodynamicState_copy_p, sizeof(logic2_expVesChi_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_expVesChi2_Medium_ThermodynamicState;
extern struct record_description logic2_expVesChi2_Medium_ThermodynamicState__desc;

void logic2_expVesChi2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_expVesChi2_Medium_ThermodynamicState_construct(td, ths ) logic2_expVesChi2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_expVesChi2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_expVesChi2_Medium_ThermodynamicState_copy(src,dst) logic2_expVesChi2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_expVesChi2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_expVesChi2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_expVesChi2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_expVesChi2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_expVesChi2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_expVesChi2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_expVesChi2_Medium_ThermodynamicState_array;
#define alloc_logic2_expVesChi2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_expVesChi2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_expVesChi2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_expVesChi2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_expVesChi2_Medium_ThermodynamicState_copy_p, sizeof(logic2_expVesChi2_Medium_ThermodynamicState))
#define logic2_expVesChi2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_expVesChi2_Medium_ThermodynamicState_copy_p, sizeof(logic2_expVesChi2_Medium_ThermodynamicState))
#define logic2_expVesChi2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_expVesChi2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_expVesChi2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_expVesChi2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_expVesChi2_Medium_ThermodynamicState_copy_p, sizeof(logic2_expVesChi2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWRet_res1_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWRet_res1_Medium_ThermodynamicState__desc;

void logic2_junCHWRet_res1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWRet_res1_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWRet_res1_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWRet_res1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWRet_res1_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWRet_res1_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWRet_res1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWRet_res1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWRet_res1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWRet_res1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWRet_res1_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWRet_res1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWRet_res1_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWRet_res1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWRet_res1_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWRet_res1_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWRet_res1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWRet_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet_res1_Medium_ThermodynamicState))
#define logic2_junCHWRet_res1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWRet_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet_res1_Medium_ThermodynamicState))
#define logic2_junCHWRet_res1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWRet_res1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWRet_res1_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWRet_res1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWRet_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet_res1_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWRet_res2_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWRet_res2_Medium_ThermodynamicState__desc;

void logic2_junCHWRet_res2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWRet_res2_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWRet_res2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWRet_res2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWRet_res2_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWRet_res2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWRet_res2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWRet_res2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWRet_res2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWRet_res2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWRet_res2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWRet_res2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWRet_res2_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWRet_res2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWRet_res2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWRet_res2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWRet_res2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWRet_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet_res2_Medium_ThermodynamicState))
#define logic2_junCHWRet_res2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWRet_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet_res2_Medium_ThermodynamicState))
#define logic2_junCHWRet_res2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWRet_res2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWRet_res2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWRet_res2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWRet_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet_res2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWRet_res3_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWRet_res3_Medium_ThermodynamicState__desc;

void logic2_junCHWRet_res3_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWRet_res3_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWRet_res3_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWRet_res3_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWRet_res3_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWRet_res3_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWRet_res3_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWRet_res3_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWRet_res3_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWRet_res3_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWRet_res3_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWRet_res3_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWRet_res3_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWRet_res3_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWRet_res3_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWRet_res3_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWRet_res3_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWRet_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet_res3_Medium_ThermodynamicState))
#define logic2_junCHWRet_res3_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWRet_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet_res3_Medium_ThermodynamicState))
#define logic2_junCHWRet_res3_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWRet_res3_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWRet_res3_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWRet_res3_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWRet_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet_res3_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWRet_vol_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWRet_vol_Medium_ThermodynamicState__desc;

void logic2_junCHWRet_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWRet_vol_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWRet_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWRet_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWRet_vol_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWRet_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWRet_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWRet_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWRet_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWRet_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWRet_vol_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWRet_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWRet_vol_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWRet_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWRet_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWRet_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWRet_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWRet_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet_vol_Medium_ThermodynamicState))
#define logic2_junCHWRet_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWRet_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet_vol_Medium_ThermodynamicState))
#define logic2_junCHWRet_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWRet_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWRet_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWRet_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWRet_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState__desc;

void logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState))
#define logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState))
#define logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWRet2_res1_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWRet2_res1_Medium_ThermodynamicState__desc;

void logic2_junCHWRet2_res1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWRet2_res1_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWRet2_res1_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWRet2_res1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWRet2_res1_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWRet2_res1_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWRet2_res1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWRet2_res1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWRet2_res1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWRet2_res1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWRet2_res1_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWRet2_res1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWRet2_res1_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWRet2_res1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWRet2_res1_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWRet2_res1_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWRet2_res1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWRet2_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet2_res1_Medium_ThermodynamicState))
#define logic2_junCHWRet2_res1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWRet2_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet2_res1_Medium_ThermodynamicState))
#define logic2_junCHWRet2_res1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWRet2_res1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWRet2_res1_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWRet2_res1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWRet2_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet2_res1_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWRet2_res2_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWRet2_res2_Medium_ThermodynamicState__desc;

void logic2_junCHWRet2_res2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWRet2_res2_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWRet2_res2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWRet2_res2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWRet2_res2_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWRet2_res2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWRet2_res2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWRet2_res2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWRet2_res2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWRet2_res2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWRet2_res2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWRet2_res2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWRet2_res2_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWRet2_res2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWRet2_res2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWRet2_res2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWRet2_res2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWRet2_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet2_res2_Medium_ThermodynamicState))
#define logic2_junCHWRet2_res2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWRet2_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet2_res2_Medium_ThermodynamicState))
#define logic2_junCHWRet2_res2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWRet2_res2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWRet2_res2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWRet2_res2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWRet2_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet2_res2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWRet2_res3_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWRet2_res3_Medium_ThermodynamicState__desc;

void logic2_junCHWRet2_res3_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWRet2_res3_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWRet2_res3_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWRet2_res3_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWRet2_res3_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWRet2_res3_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWRet2_res3_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWRet2_res3_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWRet2_res3_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWRet2_res3_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWRet2_res3_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWRet2_res3_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWRet2_res3_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWRet2_res3_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWRet2_res3_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWRet2_res3_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWRet2_res3_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWRet2_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet2_res3_Medium_ThermodynamicState))
#define logic2_junCHWRet2_res3_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWRet2_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet2_res3_Medium_ThermodynamicState))
#define logic2_junCHWRet2_res3_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWRet2_res3_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWRet2_res3_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWRet2_res3_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWRet2_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet2_res3_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWRet2_vol_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWRet2_vol_Medium_ThermodynamicState__desc;

void logic2_junCHWRet2_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWRet2_vol_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWRet2_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWRet2_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWRet2_vol_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWRet2_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWRet2_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWRet2_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWRet2_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWRet2_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWRet2_vol_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWRet2_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWRet2_vol_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWRet2_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWRet2_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWRet2_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWRet2_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWRet2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet2_vol_Medium_ThermodynamicState))
#define logic2_junCHWRet2_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWRet2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet2_vol_Medium_ThermodynamicState))
#define logic2_junCHWRet2_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWRet2_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWRet2_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWRet2_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWRet2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet2_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState__desc;

void logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState))
#define logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState))
#define logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWSup_res1_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWSup_res1_Medium_ThermodynamicState__desc;

void logic2_junCHWSup_res1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWSup_res1_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWSup_res1_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWSup_res1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWSup_res1_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWSup_res1_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWSup_res1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWSup_res1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWSup_res1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWSup_res1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWSup_res1_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWSup_res1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWSup_res1_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWSup_res1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWSup_res1_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWSup_res1_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWSup_res1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWSup_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup_res1_Medium_ThermodynamicState))
#define logic2_junCHWSup_res1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWSup_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup_res1_Medium_ThermodynamicState))
#define logic2_junCHWSup_res1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWSup_res1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWSup_res1_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWSup_res1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWSup_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup_res1_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWSup_res2_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWSup_res2_Medium_ThermodynamicState__desc;

void logic2_junCHWSup_res2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWSup_res2_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWSup_res2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWSup_res2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWSup_res2_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWSup_res2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWSup_res2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWSup_res2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWSup_res2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWSup_res2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWSup_res2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWSup_res2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWSup_res2_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWSup_res2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWSup_res2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWSup_res2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWSup_res2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWSup_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup_res2_Medium_ThermodynamicState))
#define logic2_junCHWSup_res2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWSup_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup_res2_Medium_ThermodynamicState))
#define logic2_junCHWSup_res2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWSup_res2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWSup_res2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWSup_res2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWSup_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup_res2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWSup_res3_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWSup_res3_Medium_ThermodynamicState__desc;

void logic2_junCHWSup_res3_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWSup_res3_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWSup_res3_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWSup_res3_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWSup_res3_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWSup_res3_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWSup_res3_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWSup_res3_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWSup_res3_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWSup_res3_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWSup_res3_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWSup_res3_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWSup_res3_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWSup_res3_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWSup_res3_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWSup_res3_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWSup_res3_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWSup_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup_res3_Medium_ThermodynamicState))
#define logic2_junCHWSup_res3_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWSup_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup_res3_Medium_ThermodynamicState))
#define logic2_junCHWSup_res3_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWSup_res3_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWSup_res3_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWSup_res3_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWSup_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup_res3_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWSup_vol_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWSup_vol_Medium_ThermodynamicState__desc;

void logic2_junCHWSup_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWSup_vol_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWSup_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWSup_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWSup_vol_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWSup_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWSup_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWSup_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWSup_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWSup_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWSup_vol_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWSup_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWSup_vol_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWSup_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWSup_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWSup_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWSup_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWSup_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup_vol_Medium_ThermodynamicState))
#define logic2_junCHWSup_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWSup_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup_vol_Medium_ThermodynamicState))
#define logic2_junCHWSup_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWSup_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWSup_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWSup_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWSup_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState__desc;

void logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState))
#define logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState))
#define logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWSup2_res1_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWSup2_res1_Medium_ThermodynamicState__desc;

void logic2_junCHWSup2_res1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWSup2_res1_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWSup2_res1_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWSup2_res1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWSup2_res1_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWSup2_res1_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWSup2_res1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWSup2_res1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWSup2_res1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWSup2_res1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWSup2_res1_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWSup2_res1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWSup2_res1_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWSup2_res1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWSup2_res1_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWSup2_res1_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWSup2_res1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWSup2_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup2_res1_Medium_ThermodynamicState))
#define logic2_junCHWSup2_res1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWSup2_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup2_res1_Medium_ThermodynamicState))
#define logic2_junCHWSup2_res1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWSup2_res1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWSup2_res1_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWSup2_res1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWSup2_res1_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup2_res1_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWSup2_res2_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWSup2_res2_Medium_ThermodynamicState__desc;

void logic2_junCHWSup2_res2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWSup2_res2_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWSup2_res2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWSup2_res2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWSup2_res2_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWSup2_res2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWSup2_res2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWSup2_res2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWSup2_res2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWSup2_res2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWSup2_res2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWSup2_res2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWSup2_res2_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWSup2_res2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWSup2_res2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWSup2_res2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWSup2_res2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWSup2_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup2_res2_Medium_ThermodynamicState))
#define logic2_junCHWSup2_res2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWSup2_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup2_res2_Medium_ThermodynamicState))
#define logic2_junCHWSup2_res2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWSup2_res2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWSup2_res2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWSup2_res2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWSup2_res2_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup2_res2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWSup2_res3_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWSup2_res3_Medium_ThermodynamicState__desc;

void logic2_junCHWSup2_res3_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWSup2_res3_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWSup2_res3_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWSup2_res3_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWSup2_res3_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWSup2_res3_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWSup2_res3_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWSup2_res3_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWSup2_res3_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWSup2_res3_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWSup2_res3_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWSup2_res3_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWSup2_res3_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWSup2_res3_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWSup2_res3_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWSup2_res3_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWSup2_res3_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWSup2_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup2_res3_Medium_ThermodynamicState))
#define logic2_junCHWSup2_res3_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWSup2_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup2_res3_Medium_ThermodynamicState))
#define logic2_junCHWSup2_res3_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWSup2_res3_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWSup2_res3_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWSup2_res3_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWSup2_res3_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup2_res3_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWSup2_vol_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWSup2_vol_Medium_ThermodynamicState__desc;

void logic2_junCHWSup2_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWSup2_vol_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWSup2_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWSup2_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWSup2_vol_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWSup2_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWSup2_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWSup2_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWSup2_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWSup2_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWSup2_vol_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWSup2_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWSup2_vol_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWSup2_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWSup2_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWSup2_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWSup2_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWSup2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup2_vol_Medium_ThermodynamicState))
#define logic2_junCHWSup2_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWSup2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup2_vol_Medium_ThermodynamicState))
#define logic2_junCHWSup2_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWSup2_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWSup2_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWSup2_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWSup2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup2_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState__desc;

void logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState))
#define logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState))
#define logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_pumCHW_Medium_ThermodynamicState;
extern struct record_description logic2_pumCHW_Medium_ThermodynamicState__desc;

void logic2_pumCHW_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_pumCHW_Medium_ThermodynamicState_construct(td, ths ) logic2_pumCHW_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_pumCHW_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_pumCHW_Medium_ThermodynamicState_copy(src,dst) logic2_pumCHW_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_pumCHW_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_pumCHW_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_pumCHW_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_pumCHW_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_pumCHW_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_pumCHW_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_pumCHW_Medium_ThermodynamicState_array;
#define alloc_logic2_pumCHW_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_pumCHW_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_pumCHW_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_pumCHW_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_pumCHW_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW_Medium_ThermodynamicState))
#define logic2_pumCHW_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_pumCHW_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW_Medium_ThermodynamicState))
#define logic2_pumCHW_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_pumCHW_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_pumCHW_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_pumCHW_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_pumCHW_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_pumCHW_preSou_Medium_ThermodynamicState;
extern struct record_description logic2_pumCHW_preSou_Medium_ThermodynamicState__desc;

void logic2_pumCHW_preSou_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_pumCHW_preSou_Medium_ThermodynamicState_construct(td, ths ) logic2_pumCHW_preSou_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_pumCHW_preSou_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_pumCHW_preSou_Medium_ThermodynamicState_copy(src,dst) logic2_pumCHW_preSou_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_pumCHW_preSou_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_pumCHW_preSou_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_pumCHW_preSou_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_pumCHW_preSou_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_pumCHW_preSou_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_pumCHW_preSou_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_pumCHW_preSou_Medium_ThermodynamicState_array;
#define alloc_logic2_pumCHW_preSou_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_pumCHW_preSou_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_pumCHW_preSou_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_pumCHW_preSou_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_pumCHW_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW_preSou_Medium_ThermodynamicState))
#define logic2_pumCHW_preSou_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_pumCHW_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW_preSou_Medium_ThermodynamicState))
#define logic2_pumCHW_preSou_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_pumCHW_preSou_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_pumCHW_preSou_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_pumCHW_preSou_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_pumCHW_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW_preSou_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_pumCHW_vol_Medium_ThermodynamicState;
extern struct record_description logic2_pumCHW_vol_Medium_ThermodynamicState__desc;

void logic2_pumCHW_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_pumCHW_vol_Medium_ThermodynamicState_construct(td, ths ) logic2_pumCHW_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_pumCHW_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_pumCHW_vol_Medium_ThermodynamicState_copy(src,dst) logic2_pumCHW_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_pumCHW_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_pumCHW_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_pumCHW_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_pumCHW_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_pumCHW_vol_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_pumCHW_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_pumCHW_vol_Medium_ThermodynamicState_array;
#define alloc_logic2_pumCHW_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_pumCHW_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_pumCHW_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_pumCHW_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_pumCHW_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW_vol_Medium_ThermodynamicState))
#define logic2_pumCHW_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_pumCHW_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW_vol_Medium_ThermodynamicState))
#define logic2_pumCHW_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_pumCHW_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_pumCHW_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_pumCHW_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_pumCHW_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState__desc;

void logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState))
#define logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState))
#define logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_pumCHW2_Medium_ThermodynamicState;
extern struct record_description logic2_pumCHW2_Medium_ThermodynamicState__desc;

void logic2_pumCHW2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_pumCHW2_Medium_ThermodynamicState_construct(td, ths ) logic2_pumCHW2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_pumCHW2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_pumCHW2_Medium_ThermodynamicState_copy(src,dst) logic2_pumCHW2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_pumCHW2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_pumCHW2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_pumCHW2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_pumCHW2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_pumCHW2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_pumCHW2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_pumCHW2_Medium_ThermodynamicState_array;
#define alloc_logic2_pumCHW2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_pumCHW2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_pumCHW2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_pumCHW2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_pumCHW2_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW2_Medium_ThermodynamicState))
#define logic2_pumCHW2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_pumCHW2_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW2_Medium_ThermodynamicState))
#define logic2_pumCHW2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_pumCHW2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_pumCHW2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_pumCHW2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_pumCHW2_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_pumCHW2_preSou_Medium_ThermodynamicState;
extern struct record_description logic2_pumCHW2_preSou_Medium_ThermodynamicState__desc;

void logic2_pumCHW2_preSou_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_pumCHW2_preSou_Medium_ThermodynamicState_construct(td, ths ) logic2_pumCHW2_preSou_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_pumCHW2_preSou_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_pumCHW2_preSou_Medium_ThermodynamicState_copy(src,dst) logic2_pumCHW2_preSou_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_pumCHW2_preSou_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_pumCHW2_preSou_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_pumCHW2_preSou_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_pumCHW2_preSou_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_pumCHW2_preSou_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_pumCHW2_preSou_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_pumCHW2_preSou_Medium_ThermodynamicState_array;
#define alloc_logic2_pumCHW2_preSou_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_pumCHW2_preSou_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_pumCHW2_preSou_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_pumCHW2_preSou_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_pumCHW2_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW2_preSou_Medium_ThermodynamicState))
#define logic2_pumCHW2_preSou_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_pumCHW2_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW2_preSou_Medium_ThermodynamicState))
#define logic2_pumCHW2_preSou_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_pumCHW2_preSou_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_pumCHW2_preSou_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_pumCHW2_preSou_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_pumCHW2_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW2_preSou_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_pumCHW2_vol_Medium_ThermodynamicState;
extern struct record_description logic2_pumCHW2_vol_Medium_ThermodynamicState__desc;

void logic2_pumCHW2_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_pumCHW2_vol_Medium_ThermodynamicState_construct(td, ths ) logic2_pumCHW2_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_pumCHW2_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_pumCHW2_vol_Medium_ThermodynamicState_copy(src,dst) logic2_pumCHW2_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_pumCHW2_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_pumCHW2_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_pumCHW2_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_pumCHW2_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_pumCHW2_vol_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_pumCHW2_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_pumCHW2_vol_Medium_ThermodynamicState_array;
#define alloc_logic2_pumCHW2_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_pumCHW2_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_pumCHW2_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_pumCHW2_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_pumCHW2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW2_vol_Medium_ThermodynamicState))
#define logic2_pumCHW2_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_pumCHW2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW2_vol_Medium_ThermodynamicState))
#define logic2_pumCHW2_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_pumCHW2_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_pumCHW2_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_pumCHW2_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_pumCHW2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW2_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState__desc;

void logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState))
#define logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState))
#define logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_pumCW_Medium_ThermodynamicState;
extern struct record_description logic2_pumCW_Medium_ThermodynamicState__desc;

void logic2_pumCW_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_pumCW_Medium_ThermodynamicState_construct(td, ths ) logic2_pumCW_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_pumCW_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_pumCW_Medium_ThermodynamicState_copy(src,dst) logic2_pumCW_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_pumCW_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_pumCW_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_pumCW_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_pumCW_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_pumCW_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_pumCW_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_pumCW_Medium_ThermodynamicState_array;
#define alloc_logic2_pumCW_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_pumCW_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_pumCW_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_pumCW_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_pumCW_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW_Medium_ThermodynamicState))
#define logic2_pumCW_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_pumCW_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW_Medium_ThermodynamicState))
#define logic2_pumCW_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_pumCW_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_pumCW_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_pumCW_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_pumCW_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_pumCW_preSou_Medium_ThermodynamicState;
extern struct record_description logic2_pumCW_preSou_Medium_ThermodynamicState__desc;

void logic2_pumCW_preSou_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_pumCW_preSou_Medium_ThermodynamicState_construct(td, ths ) logic2_pumCW_preSou_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_pumCW_preSou_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_pumCW_preSou_Medium_ThermodynamicState_copy(src,dst) logic2_pumCW_preSou_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_pumCW_preSou_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_pumCW_preSou_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_pumCW_preSou_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_pumCW_preSou_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_pumCW_preSou_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_pumCW_preSou_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_pumCW_preSou_Medium_ThermodynamicState_array;
#define alloc_logic2_pumCW_preSou_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_pumCW_preSou_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_pumCW_preSou_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_pumCW_preSou_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_pumCW_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW_preSou_Medium_ThermodynamicState))
#define logic2_pumCW_preSou_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_pumCW_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW_preSou_Medium_ThermodynamicState))
#define logic2_pumCW_preSou_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_pumCW_preSou_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_pumCW_preSou_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_pumCW_preSou_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_pumCW_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW_preSou_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_pumCW_vol_Medium_ThermodynamicState;
extern struct record_description logic2_pumCW_vol_Medium_ThermodynamicState__desc;

void logic2_pumCW_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_pumCW_vol_Medium_ThermodynamicState_construct(td, ths ) logic2_pumCW_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_pumCW_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_pumCW_vol_Medium_ThermodynamicState_copy(src,dst) logic2_pumCW_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_pumCW_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_pumCW_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_pumCW_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_pumCW_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_pumCW_vol_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_pumCW_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_pumCW_vol_Medium_ThermodynamicState_array;
#define alloc_logic2_pumCW_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_pumCW_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_pumCW_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_pumCW_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_pumCW_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW_vol_Medium_ThermodynamicState))
#define logic2_pumCW_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_pumCW_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW_vol_Medium_ThermodynamicState))
#define logic2_pumCW_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_pumCW_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_pumCW_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_pumCW_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_pumCW_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_pumCW_vol_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_pumCW_vol_dynBal_Medium_ThermodynamicState__desc;

void logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_pumCW_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW_vol_dynBal_Medium_ThermodynamicState))
#define logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW_vol_dynBal_Medium_ThermodynamicState))
#define logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_pumCW_vol_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_pumCW_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_pumCW2_Medium_ThermodynamicState;
extern struct record_description logic2_pumCW2_Medium_ThermodynamicState__desc;

void logic2_pumCW2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_pumCW2_Medium_ThermodynamicState_construct(td, ths ) logic2_pumCW2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_pumCW2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_pumCW2_Medium_ThermodynamicState_copy(src,dst) logic2_pumCW2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_pumCW2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_pumCW2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_pumCW2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_pumCW2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_pumCW2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_pumCW2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_pumCW2_Medium_ThermodynamicState_array;
#define alloc_logic2_pumCW2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_pumCW2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_pumCW2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_pumCW2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_pumCW2_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW2_Medium_ThermodynamicState))
#define logic2_pumCW2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_pumCW2_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW2_Medium_ThermodynamicState))
#define logic2_pumCW2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_pumCW2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_pumCW2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_pumCW2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_pumCW2_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_pumCW2_preSou_Medium_ThermodynamicState;
extern struct record_description logic2_pumCW2_preSou_Medium_ThermodynamicState__desc;

void logic2_pumCW2_preSou_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_pumCW2_preSou_Medium_ThermodynamicState_construct(td, ths ) logic2_pumCW2_preSou_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_pumCW2_preSou_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_pumCW2_preSou_Medium_ThermodynamicState_copy(src,dst) logic2_pumCW2_preSou_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_pumCW2_preSou_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_pumCW2_preSou_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_pumCW2_preSou_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_pumCW2_preSou_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_pumCW2_preSou_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_pumCW2_preSou_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_pumCW2_preSou_Medium_ThermodynamicState_array;
#define alloc_logic2_pumCW2_preSou_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_pumCW2_preSou_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_pumCW2_preSou_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_pumCW2_preSou_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_pumCW2_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW2_preSou_Medium_ThermodynamicState))
#define logic2_pumCW2_preSou_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_pumCW2_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW2_preSou_Medium_ThermodynamicState))
#define logic2_pumCW2_preSou_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_pumCW2_preSou_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_pumCW2_preSou_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_pumCW2_preSou_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_pumCW2_preSou_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW2_preSou_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_pumCW2_vol_Medium_ThermodynamicState;
extern struct record_description logic2_pumCW2_vol_Medium_ThermodynamicState__desc;

void logic2_pumCW2_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_pumCW2_vol_Medium_ThermodynamicState_construct(td, ths ) logic2_pumCW2_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_pumCW2_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_pumCW2_vol_Medium_ThermodynamicState_copy(src,dst) logic2_pumCW2_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_pumCW2_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_pumCW2_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_pumCW2_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_pumCW2_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_pumCW2_vol_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_pumCW2_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_pumCW2_vol_Medium_ThermodynamicState_array;
#define alloc_logic2_pumCW2_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_pumCW2_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_pumCW2_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_pumCW2_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_pumCW2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW2_vol_Medium_ThermodynamicState))
#define logic2_pumCW2_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_pumCW2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW2_vol_Medium_ThermodynamicState))
#define logic2_pumCW2_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_pumCW2_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_pumCW2_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_pumCW2_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_pumCW2_vol_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW2_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState;
extern struct record_description logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState__desc;

void logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_construct(td, ths ) logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_copy(src,dst) logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_array;
#define alloc_logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState))
#define logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState))
#define logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_val1_Medium_ThermodynamicState;
extern struct record_description logic2_val1_Medium_ThermodynamicState__desc;

void logic2_val1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_val1_Medium_ThermodynamicState_construct(td, ths ) logic2_val1_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_val1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_val1_Medium_ThermodynamicState_copy(src,dst) logic2_val1_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_val1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_val1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_val1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_val1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_val1_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_val1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_val1_Medium_ThermodynamicState_array;
#define alloc_logic2_val1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_val1_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_val1_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_val1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_val1_Medium_ThermodynamicState_copy_p, sizeof(logic2_val1_Medium_ThermodynamicState))
#define logic2_val1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_val1_Medium_ThermodynamicState_copy_p, sizeof(logic2_val1_Medium_ThermodynamicState))
#define logic2_val1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_val1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_val1_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_val1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_val1_Medium_ThermodynamicState_copy_p, sizeof(logic2_val1_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_val5_Medium_ThermodynamicState;
extern struct record_description logic2_val5_Medium_ThermodynamicState__desc;

void logic2_val5_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_val5_Medium_ThermodynamicState_construct(td, ths ) logic2_val5_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_val5_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_val5_Medium_ThermodynamicState_copy(src,dst) logic2_val5_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_val5_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_val5_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_val5_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_val5_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_val5_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_val5_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_val5_Medium_ThermodynamicState_array;
#define alloc_logic2_val5_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_val5_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_val5_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_val5_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_val5_Medium_ThermodynamicState_copy_p, sizeof(logic2_val5_Medium_ThermodynamicState))
#define logic2_val5_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_val5_Medium_ThermodynamicState_copy_p, sizeof(logic2_val5_Medium_ThermodynamicState))
#define logic2_val5_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_val5_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_val5_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_val5_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_val5_Medium_ThermodynamicState_copy_p, sizeof(logic2_val5_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_val6_Medium_ThermodynamicState;
extern struct record_description logic2_val6_Medium_ThermodynamicState__desc;

void logic2_val6_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_val6_Medium_ThermodynamicState_construct(td, ths ) logic2_val6_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_val6_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_val6_Medium_ThermodynamicState_copy(src,dst) logic2_val6_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_val6_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_val6_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_val6_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_val6_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_val6_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_val6_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_val6_Medium_ThermodynamicState_array;
#define alloc_logic2_val6_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_val6_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_val6_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_val6_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_val6_Medium_ThermodynamicState_copy_p, sizeof(logic2_val6_Medium_ThermodynamicState))
#define logic2_val6_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_val6_Medium_ThermodynamicState_copy_p, sizeof(logic2_val6_Medium_ThermodynamicState))
#define logic2_val6_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_val6_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_val6_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_val6_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_val6_Medium_ThermodynamicState_copy_p, sizeof(logic2_val6_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_val7_Medium_ThermodynamicState;
extern struct record_description logic2_val7_Medium_ThermodynamicState__desc;

void logic2_val7_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_val7_Medium_ThermodynamicState_construct(td, ths ) logic2_val7_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_val7_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_val7_Medium_ThermodynamicState_copy(src,dst) logic2_val7_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_val7_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_val7_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_val7_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_val7_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_val7_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_val7_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_val7_Medium_ThermodynamicState_array;
#define alloc_logic2_val7_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_val7_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_val7_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_val7_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_val7_Medium_ThermodynamicState_copy_p, sizeof(logic2_val7_Medium_ThermodynamicState))
#define logic2_val7_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_val7_Medium_ThermodynamicState_copy_p, sizeof(logic2_val7_Medium_ThermodynamicState))
#define logic2_val7_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_val7_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_val7_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_val7_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_val7_Medium_ThermodynamicState_copy_p, sizeof(logic2_val7_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_val8_Medium_ThermodynamicState;
extern struct record_description logic2_val8_Medium_ThermodynamicState__desc;

void logic2_val8_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_val8_Medium_ThermodynamicState_construct(td, ths ) logic2_val8_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_val8_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_val8_Medium_ThermodynamicState_copy(src,dst) logic2_val8_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_val8_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_val8_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_val8_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_val8_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_val8_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_val8_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_val8_Medium_ThermodynamicState_array;
#define alloc_logic2_val8_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_val8_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_val8_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_val8_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_val8_Medium_ThermodynamicState_copy_p, sizeof(logic2_val8_Medium_ThermodynamicState))
#define logic2_val8_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_val8_Medium_ThermodynamicState_copy_p, sizeof(logic2_val8_Medium_ThermodynamicState))
#define logic2_val8_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_val8_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_val8_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_val8_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_val8_Medium_ThermodynamicState_copy_p, sizeof(logic2_val8_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_val8__2_Medium_ThermodynamicState;
extern struct record_description logic2_val8__2_Medium_ThermodynamicState__desc;

void logic2_val8__2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_val8__2_Medium_ThermodynamicState_construct(td, ths ) logic2_val8__2_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_val8__2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_val8__2_Medium_ThermodynamicState_copy(src,dst) logic2_val8__2_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_val8__2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_val8__2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_val8__2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_val8__2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_val8__2_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_val8__2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_val8__2_Medium_ThermodynamicState_array;
#define alloc_logic2_val8__2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_val8__2_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_val8__2_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_val8__2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_val8__2_Medium_ThermodynamicState_copy_p, sizeof(logic2_val8__2_Medium_ThermodynamicState))
#define logic2_val8__2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_val8__2_Medium_ThermodynamicState_copy_p, sizeof(logic2_val8__2_Medium_ThermodynamicState))
#define logic2_val8__2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_val8__2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_val8__2_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_val8__2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_val8__2_Medium_ThermodynamicState_copy_p, sizeof(logic2_val8__2_Medium_ThermodynamicState), __VA_ARGS__)

typedef logic2_TCHWChi1In_Medium_ThermodynamicState logic2_valByp_Medium_ThermodynamicState;
extern struct record_description logic2_valByp_Medium_ThermodynamicState__desc;

void logic2_valByp_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define logic2_valByp_Medium_ThermodynamicState_construct(td, ths ) logic2_valByp_Medium_ThermodynamicState_construct_p(td, &ths )
void logic2_valByp_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define logic2_valByp_Medium_ThermodynamicState_copy(src,dst) logic2_valByp_Medium_ThermodynamicState_copy_p(&src, &dst)


void logic2_valByp_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define logic2_valByp_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) logic2_valByp_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void logic2_valByp_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define logic2_valByp_Medium_ThermodynamicState_copy_to_vars(src,...) logic2_valByp_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t logic2_valByp_Medium_ThermodynamicState_array;
#define alloc_logic2_valByp_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, logic2_valByp_Medium_ThermodynamicState_construct_p, ndims, sizeof(logic2_valByp_Medium_ThermodynamicState), __VA_ARGS__)
#define logic2_valByp_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, logic2_valByp_Medium_ThermodynamicState_copy_p, sizeof(logic2_valByp_Medium_ThermodynamicState))
#define logic2_valByp_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, logic2_valByp_Medium_ThermodynamicState_copy_p, sizeof(logic2_valByp_Medium_ThermodynamicState))
#define logic2_valByp_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(logic2_valByp_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(logic2_valByp_Medium_ThermodynamicState), __VA_ARGS__)))
#define logic2_valByp_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, logic2_valByp_Medium_ThermodynamicState_copy_p, sizeof(logic2_valByp_Medium_ThermodynamicState), __VA_ARGS__)

DLLDirection
modelica_string omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3(threadData_t *threadData, modelica_string _filNam, modelica_string _start, modelica_string _name, modelica_integer _position);
DLLDirection
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3(threadData_t *threadData, modelica_metatype _filNam, modelica_metatype _start, modelica_metatype _name, modelica_metatype _position);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3,2,0) {(void*) boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3,0}};
#define boxvar_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3 MMC_REFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3)


DLLDirection
modelica_real omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData_t *threadData, modelica_string _filNam);
DLLDirection
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData_t *threadData, modelica_metatype _filNam);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3,2,0) {(void*) boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3,0}};
#define boxvar_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3 MMC_REFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3)


DLLDirection
modelica_real omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData_t *threadData, modelica_string _filNam);
DLLDirection
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData_t *threadData, modelica_metatype _filNam);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3,2,0) {(void*) boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3,0}};
#define boxvar_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3 MMC_REFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3)


DLLDirection
real_array omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData_t *threadData, modelica_string _filNam, modelica_string _tabNam);
DLLDirection
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData_t *threadData, modelica_metatype _filNam, modelica_metatype _tabNam);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3,2,0) {(void*) boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3,0}};
#define boxvar_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3 MMC_REFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void getTimeSpan(const char* (*_filNam*), const char* (*_tabNam*), double* (*_timeSpan*));
 */


DLLDirection
modelica_real omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData_t *threadData, modelica_string _filNam);
DLLDirection
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData_t *threadData, modelica_metatype _filNam);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3,2,0) {(void*) boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3,0}};
#define boxvar_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3 MMC_REFSTRUCTLIT(boxvar_lit_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3)


DLLDirection
modelica_real omc_Buildings_Fluid_Actuators_BaseClasses_equalPercentage(threadData_t *threadData, modelica_real _y, modelica_real _R, modelica_real _l, modelica_real _delta);
DLLDirection
modelica_metatype boxptr_Buildings_Fluid_Actuators_BaseClasses_equalPercentage(threadData_t *threadData, modelica_metatype _y, modelica_metatype _R, modelica_metatype _l, modelica_metatype _delta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Actuators_BaseClasses_equalPercentage,2,0) {(void*) boxptr_Buildings_Fluid_Actuators_BaseClasses_equalPercentage,0}};
#define boxvar_Buildings_Fluid_Actuators_BaseClasses_equalPercentage MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Actuators_BaseClasses_equalPercentage)


DLLDirection
modelica_real omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData_t *threadData, modelica_real _y, modelica_real _a, modelica_real _b, real_array _cL, real_array _cU, modelica_real _yL, modelica_real _yU);
DLLDirection
modelica_metatype boxptr_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData_t *threadData, modelica_metatype _y, modelica_metatype _a, modelica_metatype _b, modelica_metatype _cL, modelica_metatype _cU, modelica_metatype _yL, modelica_metatype _yU);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper,2,0) {(void*) boxptr_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper,0}};
#define boxvar_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper)


DLLDirection
modelica_real omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData_t *threadData, modelica_real _dp, modelica_real _k, modelica_real _m_flow_turbulent);
DLLDirection
modelica_metatype boxptr_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData_t *threadData, modelica_metatype _dp, modelica_metatype _k, modelica_metatype _m_flow_turbulent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp,2,0) {(void*) boxptr_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp,0}};
#define boxvar_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp)


DLLDirection
modelica_real omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData_t *threadData, modelica_real _m_flow, modelica_real _k, modelica_real _m_flow_turbulent);
DLLDirection
modelica_metatype boxptr_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData_t *threadData, modelica_metatype _m_flow, modelica_metatype _k, modelica_metatype _m_flow_turbulent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow,2,0) {(void*) boxptr_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow,0}};
#define boxvar_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow)


DLLDirection
modelica_integer omc_Buildings_Fluid_Chillers_BaseClasses_warnIfPerformanceOutOfBounds(threadData_t *threadData, modelica_real _x, modelica_string _msg, modelica_string _curveName);
DLLDirection
modelica_metatype boxptr_Buildings_Fluid_Chillers_BaseClasses_warnIfPerformanceOutOfBounds(threadData_t *threadData, modelica_metatype _x, modelica_metatype _msg, modelica_metatype _curveName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Chillers_BaseClasses_warnIfPerformanceOutOfBounds,2,0) {(void*) boxptr_Buildings_Fluid_Chillers_BaseClasses_warnIfPerformanceOutOfBounds,0}};
#define boxvar_Buildings_Fluid_Chillers_BaseClasses_warnIfPerformanceOutOfBounds MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Chillers_BaseClasses_warnIfPerformanceOutOfBounds)


DLLDirection
Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan (threadData_t *threadData, real_array omc_r_V, real_array omc_r_P);

DLLDirection
modelica_metatype boxptr_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan(threadData_t *threadData, modelica_metatype _r_V, modelica_metatype _r_P);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan,2,0) {(void*) boxptr_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan,0}};
#define boxvar_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan)


DLLDirection
modelica_real omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData_t *threadData, Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan _per, modelica_real _r_V, real_array _d);
DLLDirection
modelica_metatype boxptr_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData_t *threadData, modelica_metatype _per, modelica_metatype _r_V, modelica_metatype _d);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower,2,0) {(void*) boxptr_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower,0}};
#define boxvar_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower)


DLLDirection
modelica_real omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData_t *threadData, modelica_real _TRan, modelica_real _TWetBul, modelica_real _FRWat, modelica_real _FRAir);
DLLDirection
modelica_metatype boxptr_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData_t *threadData, modelica_metatype _TRan, modelica_metatype _TWetBul, modelica_metatype _FRWat, modelica_metatype _FRAir);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc,2,0) {(void*) boxptr_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc,0}};
#define boxvar_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc)


DLLDirection
modelica_real omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData_t *threadData, Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters _per, modelica_real _V_flow, real_array _d, modelica_real _r_N, modelica_real _delta);
DLLDirection
modelica_metatype boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData_t *threadData, modelica_metatype _per, modelica_metatype _V_flow, modelica_metatype _d, modelica_metatype _r_N, modelica_metatype _delta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency,2,0) {(void*) boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency,0}};
#define boxvar_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency)


DLLDirection
Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters (threadData_t *threadData, real_array omc_V_flow, real_array omc_eta);

DLLDirection
modelica_metatype boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters(threadData_t *threadData, modelica_metatype _V_flow, modelica_metatype _eta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters,2,0) {(void*) boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters,0}};
#define boxvar_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters)


DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_biquadratic(threadData_t *threadData, real_array _a, modelica_real _x1, modelica_real _x2);
DLLDirection
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_biquadratic(threadData_t *threadData, modelica_metatype _a, modelica_metatype _x1, modelica_metatype _x2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_biquadratic,2,0) {(void*) boxptr_Buildings_Utilities_Math_Functions_biquadratic,0}};
#define boxvar_Buildings_Utilities_Math_Functions_biquadratic MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_biquadratic)


DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d);
DLLDirection
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation,2,0) {(void*) boxptr_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation,0}};
#define boxvar_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation)


DLLDirection
modelica_boolean omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData_t *threadData, real_array _x, modelica_boolean _strict);
DLLDirection
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_isMonotonic(threadData_t *threadData, modelica_metatype _x, modelica_metatype _strict);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_isMonotonic,2,0) {(void*) boxptr_Buildings_Utilities_Math_Functions_isMonotonic,0}};
#define boxvar_Buildings_Utilities_Math_Functions_isMonotonic MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_isMonotonic)


DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData_t *threadData, modelica_real _x, modelica_real _n, modelica_real _delta);
DLLDirection
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData_t *threadData, modelica_metatype _x, modelica_metatype _n, modelica_metatype _delta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_regNonZeroPower,2,0) {(void*) boxptr_Buildings_Utilities_Math_Functions_regNonZeroPower,0}};
#define boxvar_Buildings_Utilities_Math_Functions_regNonZeroPower MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_regNonZeroPower)


DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_regStep(threadData_t *threadData, modelica_real _x, modelica_real _y1, modelica_real _y2, modelica_real _x_small);
DLLDirection
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_regStep(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _x_small);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_regStep,2,0) {(void*) boxptr_Buildings_Utilities_Math_Functions_regStep,0}};
#define boxvar_Buildings_Utilities_Math_Functions_regStep MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_regStep)


DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_smoothLimit(threadData_t *threadData, modelica_real _x, modelica_real _l, modelica_real _u, modelica_real _deltaX);
DLLDirection
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_smoothLimit(threadData_t *threadData, modelica_metatype _x, modelica_metatype _l, modelica_metatype _u, modelica_metatype _deltaX);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_smoothLimit,2,0) {(void*) boxptr_Buildings_Utilities_Math_Functions_smoothLimit,0}};
#define boxvar_Buildings_Utilities_Math_Functions_smoothLimit MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_smoothLimit)


DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_smoothMax(threadData_t *threadData, modelica_real _x1, modelica_real _x2, modelica_real _deltaX);
DLLDirection
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_smoothMax(threadData_t *threadData, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _deltaX);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_smoothMax,2,0) {(void*) boxptr_Buildings_Utilities_Math_Functions_smoothMax,0}};
#define boxvar_Buildings_Utilities_Math_Functions_smoothMax MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_smoothMax)


DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_smoothMin(threadData_t *threadData, modelica_real _x1, modelica_real _x2, modelica_real _deltaX);
DLLDirection
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_smoothMin(threadData_t *threadData, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _deltaX);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_smoothMin,2,0) {(void*) boxptr_Buildings_Utilities_Math_Functions_smoothMin,0}};
#define boxvar_Buildings_Utilities_Math_Functions_smoothMin MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_smoothMin)


DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData_t *threadData, modelica_real _pos, modelica_real _neg, modelica_real _x, modelica_real _deltax);
DLLDirection
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_spliceFunction(threadData_t *threadData, modelica_metatype _pos, modelica_metatype _neg, modelica_metatype _x, modelica_metatype _deltax);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_spliceFunction,2,0) {(void*) boxptr_Buildings_Utilities_Math_Functions_spliceFunction,0}};
#define boxvar_Buildings_Utilities_Math_Functions_spliceFunction MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_spliceFunction)


DLLDirection
real_array omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData_t *threadData, real_array _x, real_array _y, modelica_boolean _ensureMonotonicity);
DLLDirection
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_splineDerivatives(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y, modelica_metatype _ensureMonotonicity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_splineDerivatives,2,0) {(void*) boxptr_Buildings_Utilities_Math_Functions_splineDerivatives,0}};
#define boxvar_Buildings_Utilities_Math_Functions_splineDerivatives MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_splineDerivatives)


DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData_t *threadData, modelica_real _x, modelica_real _delta, modelica_real _deltaInv, modelica_real _a, modelica_real _b, modelica_real _c, modelica_real _d, modelica_real _e, modelica_real _f);
DLLDirection
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData_t *threadData, modelica_metatype _x, modelica_metatype _delta, modelica_metatype _deltaInv, modelica_metatype _a, modelica_metatype _b, modelica_metatype _c, modelica_metatype _d, modelica_metatype _e, modelica_metatype _f);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition,2,0) {(void*) boxptr_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition,0}};
#define boxvar_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition)


DLLDirection
modelica_real omc_Buildings_Utilities_Psychrometrics_Functions_sublimationPressureIce(threadData_t *threadData, modelica_real _TSat);
DLLDirection
modelica_metatype boxptr_Buildings_Utilities_Psychrometrics_Functions_sublimationPressureIce(threadData_t *threadData, modelica_metatype _TSat);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Psychrometrics_Functions_sublimationPressureIce,2,0) {(void*) boxptr_Buildings_Utilities_Psychrometrics_Functions_sublimationPressureIce,0}};
#define boxvar_Buildings_Utilities_Psychrometrics_Functions_sublimationPressureIce MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Psychrometrics_Functions_sublimationPressureIce)


DLLDirection
modelica_real omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData_t *threadData, modelica_complex _tableID);
DLLDirection
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData_t *threadData, modelica_metatype _tableID);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax,2,0) {(void*) boxptr_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax,0}};
#define boxvar_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax)

extern double ModelicaStandardTables_CombiTable1D_maximumAbscissa(void * /*_tableID*/);


DLLDirection
modelica_real omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData_t *threadData, modelica_complex _tableID);
DLLDirection
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData_t *threadData, modelica_metatype _tableID);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin,2,0) {(void*) boxptr_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin,0}};
#define boxvar_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin)

extern double ModelicaStandardTables_CombiTable1D_minimumAbscissa(void * /*_tableID*/);


DLLDirection
modelica_real omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData_t *threadData, modelica_complex _tableID, modelica_integer _icol, modelica_real _u);
DLLDirection
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData_t *threadData, modelica_metatype _tableID, modelica_metatype _icol, modelica_metatype _u);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable1DValue,2,0) {(void*) boxptr_Modelica_Blocks_Tables_Internal_getTable1DValue,0}};
#define boxvar_Modelica_Blocks_Tables_Internal_getTable1DValue MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable1DValue)

extern double ModelicaStandardTables_CombiTable1D_getValue(void * /*_tableID*/, int /*_icol*/, double /*_u*/);


DLLDirection
modelica_complex omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData_t *threadData, modelica_string _tableName, modelica_string _fileName, real_array _table, integer_array _columns, modelica_integer _smoothness, modelica_integer _extrapolation, modelica_boolean _verboseRead);
DLLDirection
modelica_metatype boxptr_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData_t *threadData, modelica_metatype _tableName, modelica_metatype _fileName, modelica_metatype _table, modelica_metatype _columns, modelica_metatype _smoothness, modelica_metatype _extrapolation, modelica_metatype _verboseRead);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTable1D_constructor,2,0) {(void*) boxptr_Modelica_Blocks_Types_ExternalCombiTable1D_constructor,0}};
#define boxvar_Modelica_Blocks_Types_ExternalCombiTable1D_constructor MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTable1D_constructor)

extern void * ModelicaStandardTables_CombiTable1D_init2(const char* /*_fileName*/, const char* /*_tableName*/, const double* /*_table*/, size_t, size_t, const int* /*_columns*/, size_t, int /*_smoothness*/, int /*_extrapolation*/, int /*_verboseRead*/);


DLLDirection
void omc_Modelica_Blocks_Types_ExternalCombiTable1D_destructor(threadData_t *threadData, modelica_complex _externalCombiTable1D);
DLLDirection
void boxptr_Modelica_Blocks_Types_ExternalCombiTable1D_destructor(threadData_t *threadData, modelica_metatype _externalCombiTable1D);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTable1D_destructor,2,0) {(void*) boxptr_Modelica_Blocks_Types_ExternalCombiTable1D_destructor,0}};
#define boxvar_Modelica_Blocks_Types_ExternalCombiTable1D_destructor MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTable1D_destructor)

extern void ModelicaStandardTables_CombiTable1D_close(void * /*_externalCombiTable1D*/);


DLLDirection
void omc_Modelica_Fluid_Utilities_checkBoundary(threadData_t *threadData, modelica_string _mediumName, string_array _substanceNames, modelica_boolean _singleState, modelica_boolean _define_p, real_array _X_boundary, modelica_string _modelName);
DLLDirection
void boxptr_Modelica_Fluid_Utilities_checkBoundary(threadData_t *threadData, modelica_metatype _mediumName, modelica_metatype _substanceNames, modelica_metatype _singleState, modelica_metatype _define_p, modelica_metatype _X_boundary, modelica_metatype _modelName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_checkBoundary,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_checkBoundary,0}};
#define boxvar_Modelica_Fluid_Utilities_checkBoundary MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_checkBoundary)


DLLDirection
modelica_real omc_Modelica_Fluid_Utilities_cubicHermite(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d);
DLLDirection
modelica_metatype boxptr_Modelica_Fluid_Utilities_cubicHermite(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_cubicHermite,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_cubicHermite,0}};
#define boxvar_Modelica_Fluid_Utilities_cubicHermite MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_cubicHermite)


DLLDirection
modelica_real omc_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_real _x, modelica_real _y1, modelica_real _y2, modelica_real _x_small);
DLLDirection
modelica_metatype boxptr_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _x_small);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regStep,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_regStep,0}};
#define boxvar_Modelica_Fluid_Utilities_regStep MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regStep)


DLLDirection
modelica_real omc_Modelica_SIunits_Conversions_to__degC(threadData_t *threadData, modelica_real _Kelvin);
DLLDirection
modelica_metatype boxptr_Modelica_SIunits_Conversions_to__degC(threadData_t *threadData, modelica_metatype _Kelvin);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_SIunits_Conversions_to__degC,2,0) {(void*) boxptr_Modelica_SIunits_Conversions_to__degC,0}};
#define boxvar_Modelica_SIunits_Conversions_to__degC MMC_REFSTRUCTLIT(boxvar_lit_Modelica_SIunits_Conversions_to__degC)


DLLDirection
void omc_Modelica_Utilities_Streams_error(threadData_t *threadData, modelica_string _string);
#define boxptr_Modelica_Utilities_Streams_error omc_Modelica_Utilities_Streams_error
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_error,2,0) {(void*) boxptr_Modelica_Utilities_Streams_error,0}};
#define boxvar_Modelica_Utilities_Streams_error MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_error)

extern void ModelicaError(const char* /*_string*/);


DLLDirection
void omc_Modelica_Utilities_Streams_print(threadData_t *threadData, modelica_string _string, modelica_string _fileName);
#define boxptr_Modelica_Utilities_Streams_print omc_Modelica_Utilities_Streams_print
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_print,2,0) {(void*) boxptr_Modelica_Utilities_Streams_print,0}};
#define boxvar_Modelica_Utilities_Streams_print MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_print)

extern void ModelicaInternal_print(const char* /*_string*/, const char* /*_fileName*/);


DLLDirection
modelica_string omc_Modelica_Utilities_Streams_readLine(threadData_t *threadData, modelica_string _fileName, modelica_integer _lineNumber, modelica_boolean *out_endOfFile);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Streams_readLine(threadData_t *threadData, modelica_metatype _fileName, modelica_metatype _lineNumber, modelica_metatype *out_endOfFile);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_readLine,2,0) {(void*) boxptr_Modelica_Utilities_Streams_readLine,0}};
#define boxvar_Modelica_Utilities_Streams_readLine MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_readLine)

extern const char* ModelicaInternal_readLine(const char* /*_fileName*/, int /*_lineNumber*/, int* /*_endOfFile*/);


DLLDirection
modelica_integer omc_Modelica_Utilities_Strings_compare(threadData_t *threadData, modelica_string _string1, modelica_string _string2, modelica_boolean _caseSensitive);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_compare(threadData_t *threadData, modelica_metatype _string1, modelica_metatype _string2, modelica_metatype _caseSensitive);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_compare,2,0) {(void*) boxptr_Modelica_Utilities_Strings_compare,0}};
#define boxvar_Modelica_Utilities_Strings_compare MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_compare)

extern int ModelicaStrings_compare(const char* /*_string1*/, const char* /*_string2*/, int /*_caseSensitive*/);


DLLDirection
modelica_integer omc_Modelica_Utilities_Strings_find(threadData_t *threadData, modelica_string _string, modelica_string _searchString, modelica_integer _startIndex, modelica_boolean _caseSensitive);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_find(threadData_t *threadData, modelica_metatype _string, modelica_metatype _searchString, modelica_metatype _startIndex, modelica_metatype _caseSensitive);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_find,2,0) {(void*) boxptr_Modelica_Utilities_Strings_find,0}};
#define boxvar_Modelica_Utilities_Strings_find MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_find)


DLLDirection
modelica_boolean omc_Modelica_Utilities_Strings_isEmpty(threadData_t *threadData, modelica_string _string);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_isEmpty(threadData_t *threadData, modelica_metatype _string);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_isEmpty,2,0) {(void*) boxptr_Modelica_Utilities_Strings_isEmpty,0}};
#define boxvar_Modelica_Utilities_Strings_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_isEmpty)


DLLDirection
modelica_boolean omc_Modelica_Utilities_Strings_isEqual(threadData_t *threadData, modelica_string _string1, modelica_string _string2, modelica_boolean _caseSensitive);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_isEqual(threadData_t *threadData, modelica_metatype _string1, modelica_metatype _string2, modelica_metatype _caseSensitive);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_isEqual,2,0) {(void*) boxptr_Modelica_Utilities_Strings_isEqual,0}};
#define boxvar_Modelica_Utilities_Strings_isEqual MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_isEqual)


DLLDirection
modelica_integer omc_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_string _string);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_metatype _string);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_length,2,0) {(void*) boxptr_Modelica_Utilities_Strings_length,0}};
#define boxvar_Modelica_Utilities_Strings_length MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_length)

extern int ModelicaStrings_length(const char* /*_string*/);


DLLDirection
modelica_string omc_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_integer _endIndex);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _endIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_substring,2,0) {(void*) boxptr_Modelica_Utilities_Strings_substring,0}};
#define boxvar_Modelica_Utilities_Strings_substring MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_substring)

extern const char* ModelicaStrings_substring(const char* /*_string*/, int /*_startIndex*/, int /*_endIndex*/);


DLLDirection
modelica_integer omc_Modelica_Utilities_Strings_Advanced_scanReal(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_boolean _unsigned, modelica_real *out_number);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_Advanced_scanReal(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _unsigned, modelica_metatype *out_number);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_Advanced_scanReal,2,0) {(void*) boxptr_Modelica_Utilities_Strings_Advanced_scanReal,0}};
#define boxvar_Modelica_Utilities_Strings_Advanced_scanReal MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_Advanced_scanReal)

extern void ModelicaStrings_scanReal(const char* /*_string*/, int /*_startIndex*/, int /*_unsigned*/, int* /*_nextIndex*/, double* /*_number*/);


DLLDirection
modelica_integer omc_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex);
DLLDirection
modelica_metatype boxptr_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_Advanced_skipWhiteSpace,2,0) {(void*) boxptr_Modelica_Utilities_Strings_Advanced_skipWhiteSpace,0}};
#define boxvar_Modelica_Utilities_Strings_Advanced_skipWhiteSpace MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_Advanced_skipWhiteSpace)

extern int ModelicaStrings_skipWhiteSpace(const char* /*_string*/, int /*_startIndex*/);

DLLDirection
logic2_TAirSup_Medium_ThermodynamicState omc_logic2_TAirSup_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_TAirSup_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TAirSup_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_TAirSup_Medium_ThermodynamicState,0}};
#define boxvar_logic2_TAirSup_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_TAirSup_Medium_ThermodynamicState)


DLLDirection
logic2_TCHWChi1In_Medium_ThermodynamicState omc_logic2_TCHWChi1In_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_TCHWChi1In_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWChi1In_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_TCHWChi1In_Medium_ThermodynamicState,0}};
#define boxvar_logic2_TCHWChi1In_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWChi1In_Medium_ThermodynamicState)


DLLDirection
logic2_TCHWChi1In_Medium_ThermodynamicState omc_logic2_TCHWChi1In_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_TCHWChi1In_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWChi1In_Medium_setState__phX,2,0) {(void*) boxptr_logic2_TCHWChi1In_Medium_setState__phX,0}};
#define boxvar_logic2_TCHWChi1In_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWChi1In_Medium_setState__phX)


DLLDirection
modelica_real omc_logic2_TCHWChi1In_Medium_temperature(threadData_t *threadData, logic2_TCHWChi1In_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_TCHWChi1In_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWChi1In_Medium_temperature,2,0) {(void*) boxptr_logic2_TCHWChi1In_Medium_temperature,0}};
#define boxvar_logic2_TCHWChi1In_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWChi1In_Medium_temperature)


DLLDirection
logic2_TCHWChi1Out_Medium_ThermodynamicState omc_logic2_TCHWChi1Out_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_TCHWChi1Out_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWChi1Out_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_TCHWChi1Out_Medium_ThermodynamicState,0}};
#define boxvar_logic2_TCHWChi1Out_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWChi1Out_Medium_ThermodynamicState)


DLLDirection
logic2_TCHWChi1Out_Medium_ThermodynamicState omc_logic2_TCHWChi1Out_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_TCHWChi1Out_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWChi1Out_Medium_setState__phX,2,0) {(void*) boxptr_logic2_TCHWChi1Out_Medium_setState__phX,0}};
#define boxvar_logic2_TCHWChi1Out_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWChi1Out_Medium_setState__phX)


DLLDirection
modelica_real omc_logic2_TCHWChi1Out_Medium_temperature(threadData_t *threadData, logic2_TCHWChi1Out_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_TCHWChi1Out_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWChi1Out_Medium_temperature,2,0) {(void*) boxptr_logic2_TCHWChi1Out_Medium_temperature,0}};
#define boxvar_logic2_TCHWChi1Out_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWChi1Out_Medium_temperature)


DLLDirection
logic2_TCHWChi2In_Medium_ThermodynamicState omc_logic2_TCHWChi2In_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_TCHWChi2In_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWChi2In_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_TCHWChi2In_Medium_ThermodynamicState,0}};
#define boxvar_logic2_TCHWChi2In_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWChi2In_Medium_ThermodynamicState)


DLLDirection
logic2_TCHWChi2In_Medium_ThermodynamicState omc_logic2_TCHWChi2In_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_TCHWChi2In_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWChi2In_Medium_setState__phX,2,0) {(void*) boxptr_logic2_TCHWChi2In_Medium_setState__phX,0}};
#define boxvar_logic2_TCHWChi2In_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWChi2In_Medium_setState__phX)


DLLDirection
modelica_real omc_logic2_TCHWChi2In_Medium_temperature(threadData_t *threadData, logic2_TCHWChi2In_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_TCHWChi2In_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWChi2In_Medium_temperature,2,0) {(void*) boxptr_logic2_TCHWChi2In_Medium_temperature,0}};
#define boxvar_logic2_TCHWChi2In_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWChi2In_Medium_temperature)


DLLDirection
logic2_TCHWChi2Out_Medium_ThermodynamicState omc_logic2_TCHWChi2Out_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_TCHWChi2Out_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWChi2Out_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_TCHWChi2Out_Medium_ThermodynamicState,0}};
#define boxvar_logic2_TCHWChi2Out_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWChi2Out_Medium_ThermodynamicState)


DLLDirection
logic2_TCHWChi2Out_Medium_ThermodynamicState omc_logic2_TCHWChi2Out_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_TCHWChi2Out_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWChi2Out_Medium_setState__phX,2,0) {(void*) boxptr_logic2_TCHWChi2Out_Medium_setState__phX,0}};
#define boxvar_logic2_TCHWChi2Out_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWChi2Out_Medium_setState__phX)


DLLDirection
modelica_real omc_logic2_TCHWChi2Out_Medium_temperature(threadData_t *threadData, logic2_TCHWChi2Out_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_TCHWChi2Out_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWChi2Out_Medium_temperature,2,0) {(void*) boxptr_logic2_TCHWChi2Out_Medium_temperature,0}};
#define boxvar_logic2_TCHWChi2Out_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWChi2Out_Medium_temperature)


DLLDirection
logic2_TCHWEntChi_Medium_ThermodynamicState omc_logic2_TCHWEntChi_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_TCHWEntChi_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWEntChi_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_TCHWEntChi_Medium_ThermodynamicState,0}};
#define boxvar_logic2_TCHWEntChi_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWEntChi_Medium_ThermodynamicState)


DLLDirection
logic2_TCHWEntChi_Medium_ThermodynamicState omc_logic2_TCHWEntChi_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_TCHWEntChi_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWEntChi_Medium_setState__phX,2,0) {(void*) boxptr_logic2_TCHWEntChi_Medium_setState__phX,0}};
#define boxvar_logic2_TCHWEntChi_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWEntChi_Medium_setState__phX)


DLLDirection
modelica_real omc_logic2_TCHWEntChi_Medium_temperature(threadData_t *threadData, logic2_TCHWEntChi_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_TCHWEntChi_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWEntChi_Medium_temperature,2,0) {(void*) boxptr_logic2_TCHWEntChi_Medium_temperature,0}};
#define boxvar_logic2_TCHWEntChi_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWEntChi_Medium_temperature)


DLLDirection
logic2_TCHWLeaCoi_Medium_ThermodynamicState omc_logic2_TCHWLeaCoi_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_TCHWLeaCoi_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWLeaCoi_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_TCHWLeaCoi_Medium_ThermodynamicState,0}};
#define boxvar_logic2_TCHWLeaCoi_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWLeaCoi_Medium_ThermodynamicState)


DLLDirection
logic2_TCHWLeaCoi_Medium_ThermodynamicState omc_logic2_TCHWLeaCoi_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_TCHWLeaCoi_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWLeaCoi_Medium_setState__phX,2,0) {(void*) boxptr_logic2_TCHWLeaCoi_Medium_setState__phX,0}};
#define boxvar_logic2_TCHWLeaCoi_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWLeaCoi_Medium_setState__phX)


DLLDirection
modelica_real omc_logic2_TCHWLeaCoi_Medium_temperature(threadData_t *threadData, logic2_TCHWLeaCoi_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_TCHWLeaCoi_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCHWLeaCoi_Medium_temperature,2,0) {(void*) boxptr_logic2_TCHWLeaCoi_Medium_temperature,0}};
#define boxvar_logic2_TCHWLeaCoi_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCHWLeaCoi_Medium_temperature)


DLLDirection
logic2_TCWEntTow_Medium_ThermodynamicState omc_logic2_TCWEntTow_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_TCWEntTow_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCWEntTow_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_TCWEntTow_Medium_ThermodynamicState,0}};
#define boxvar_logic2_TCWEntTow_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCWEntTow_Medium_ThermodynamicState)


DLLDirection
logic2_TCWEntTow_Medium_ThermodynamicState omc_logic2_TCWEntTow_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_TCWEntTow_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCWEntTow_Medium_setState__phX,2,0) {(void*) boxptr_logic2_TCWEntTow_Medium_setState__phX,0}};
#define boxvar_logic2_TCWEntTow_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCWEntTow_Medium_setState__phX)


DLLDirection
modelica_real omc_logic2_TCWEntTow_Medium_temperature(threadData_t *threadData, logic2_TCWEntTow_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_TCWEntTow_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCWEntTow_Medium_temperature,2,0) {(void*) boxptr_logic2_TCWEntTow_Medium_temperature,0}};
#define boxvar_logic2_TCWEntTow_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCWEntTow_Medium_temperature)


DLLDirection
logic2_TCWEntTow2_Medium_ThermodynamicState omc_logic2_TCWEntTow2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_TCWEntTow2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCWEntTow2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_TCWEntTow2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_TCWEntTow2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCWEntTow2_Medium_ThermodynamicState)


DLLDirection
logic2_TCWEntTow2_Medium_ThermodynamicState omc_logic2_TCWEntTow2_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_TCWEntTow2_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCWEntTow2_Medium_setState__phX,2,0) {(void*) boxptr_logic2_TCWEntTow2_Medium_setState__phX,0}};
#define boxvar_logic2_TCWEntTow2_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCWEntTow2_Medium_setState__phX)


DLLDirection
modelica_real omc_logic2_TCWEntTow2_Medium_temperature(threadData_t *threadData, logic2_TCWEntTow2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_TCWEntTow2_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCWEntTow2_Medium_temperature,2,0) {(void*) boxptr_logic2_TCWEntTow2_Medium_temperature,0}};
#define boxvar_logic2_TCWEntTow2_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCWEntTow2_Medium_temperature)


DLLDirection
logic2_TCWLeaTow_Medium_ThermodynamicState omc_logic2_TCWLeaTow_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_TCWLeaTow_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCWLeaTow_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_TCWLeaTow_Medium_ThermodynamicState,0}};
#define boxvar_logic2_TCWLeaTow_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCWLeaTow_Medium_ThermodynamicState)


DLLDirection
logic2_TCWLeaTow_Medium_ThermodynamicState omc_logic2_TCWLeaTow_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_TCWLeaTow_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCWLeaTow_Medium_setState__phX,2,0) {(void*) boxptr_logic2_TCWLeaTow_Medium_setState__phX,0}};
#define boxvar_logic2_TCWLeaTow_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCWLeaTow_Medium_setState__phX)


DLLDirection
modelica_real omc_logic2_TCWLeaTow_Medium_temperature(threadData_t *threadData, logic2_TCWLeaTow_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_TCWLeaTow_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TCWLeaTow_Medium_temperature,2,0) {(void*) boxptr_logic2_TCWLeaTow_Medium_temperature,0}};
#define boxvar_logic2_TCWLeaTow_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_logic2_TCWLeaTow_Medium_temperature)


DLLDirection
logic2_TWCLeaTow2_Medium_ThermodynamicState omc_logic2_TWCLeaTow2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_TWCLeaTow2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TWCLeaTow2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_TWCLeaTow2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_TWCLeaTow2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_TWCLeaTow2_Medium_ThermodynamicState)


DLLDirection
logic2_TWCLeaTow2_Medium_ThermodynamicState omc_logic2_TWCLeaTow2_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_TWCLeaTow2_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TWCLeaTow2_Medium_setState__phX,2,0) {(void*) boxptr_logic2_TWCLeaTow2_Medium_setState__phX,0}};
#define boxvar_logic2_TWCLeaTow2_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_TWCLeaTow2_Medium_setState__phX)


DLLDirection
modelica_real omc_logic2_TWCLeaTow2_Medium_temperature(threadData_t *threadData, logic2_TWCLeaTow2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_TWCLeaTow2_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_TWCLeaTow2_Medium_temperature,2,0) {(void*) boxptr_logic2_TWCLeaTow2_Medium_temperature,0}};
#define boxvar_logic2_TWCLeaTow2_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_logic2_TWCLeaTow2_Medium_temperature)


DLLDirection
logic2_chi_Medium1_ThermodynamicState omc_logic2_chi_Medium1_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_chi_Medium1_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_Medium1_ThermodynamicState,2,0) {(void*) boxptr_logic2_chi_Medium1_ThermodynamicState,0}};
#define boxvar_logic2_chi_Medium1_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_Medium1_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_chi_Medium1_density(threadData_t *threadData, logic2_chi_Medium1_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi_Medium1_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_Medium1_density,2,0) {(void*) boxptr_logic2_chi_Medium1_density,0}};
#define boxvar_logic2_chi_Medium1_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_Medium1_density)


DLLDirection
logic2_chi_Medium1_ThermodynamicState omc_logic2_chi_Medium1_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi_Medium1_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_Medium1_setState__phX,2,0) {(void*) boxptr_logic2_chi_Medium1_setState__phX,0}};
#define boxvar_logic2_chi_Medium1_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_Medium1_setState__phX)


DLLDirection
modelica_real omc_logic2_chi_Medium1_specificEnthalpy(threadData_t *threadData, logic2_chi_Medium1_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi_Medium1_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_Medium1_specificEnthalpy,2,0) {(void*) boxptr_logic2_chi_Medium1_specificEnthalpy,0}};
#define boxvar_logic2_chi_Medium1_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_Medium1_specificEnthalpy)


DLLDirection
modelica_real omc_logic2_chi_Medium1_temperature(threadData_t *threadData, logic2_chi_Medium1_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi_Medium1_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_Medium1_temperature,2,0) {(void*) boxptr_logic2_chi_Medium1_temperature,0}};
#define boxvar_logic2_chi_Medium1_temperature MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_Medium1_temperature)


DLLDirection
logic2_chi_Medium2_ThermodynamicState omc_logic2_chi_Medium2_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_chi_Medium2_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_Medium2_ThermodynamicState,2,0) {(void*) boxptr_logic2_chi_Medium2_ThermodynamicState,0}};
#define boxvar_logic2_chi_Medium2_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_Medium2_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_chi_Medium2_density(threadData_t *threadData, logic2_chi_Medium2_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi_Medium2_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_Medium2_density,2,0) {(void*) boxptr_logic2_chi_Medium2_density,0}};
#define boxvar_logic2_chi_Medium2_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_Medium2_density)


DLLDirection
logic2_chi_Medium2_ThermodynamicState omc_logic2_chi_Medium2_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi_Medium2_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_Medium2_setState__phX,2,0) {(void*) boxptr_logic2_chi_Medium2_setState__phX,0}};
#define boxvar_logic2_chi_Medium2_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_Medium2_setState__phX)


DLLDirection
modelica_real omc_logic2_chi_Medium2_specificEnthalpy(threadData_t *threadData, logic2_chi_Medium2_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi_Medium2_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_Medium2_specificEnthalpy,2,0) {(void*) boxptr_logic2_chi_Medium2_specificEnthalpy,0}};
#define boxvar_logic2_chi_Medium2_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_Medium2_specificEnthalpy)


DLLDirection
modelica_real omc_logic2_chi_Medium2_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi_Medium2_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_Medium2_specificEnthalpy__pTX,2,0) {(void*) boxptr_logic2_chi_Medium2_specificEnthalpy__pTX,0}};
#define boxvar_logic2_chi_Medium2_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_Medium2_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_logic2_chi_Medium2_temperature(threadData_t *threadData, logic2_chi_Medium2_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi_Medium2_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_Medium2_temperature,2,0) {(void*) boxptr_logic2_chi_Medium2_temperature,0}};
#define boxvar_logic2_chi_Medium2_temperature MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_Medium2_temperature)


DLLDirection
logic2_chi_preDro1_Medium_ThermodynamicState omc_logic2_chi_preDro1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_chi_preDro1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_preDro1_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_chi_preDro1_Medium_ThermodynamicState,0}};
#define boxvar_logic2_chi_preDro1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_preDro1_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_chi_preDro1_Medium_dynamicViscosity(threadData_t *threadData, logic2_chi_preDro1_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi_preDro1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_preDro1_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_chi_preDro1_Medium_dynamicViscosity,0}};
#define boxvar_logic2_chi_preDro1_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_preDro1_Medium_dynamicViscosity)


DLLDirection
logic2_chi_preDro2_Medium_ThermodynamicState omc_logic2_chi_preDro2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_chi_preDro2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_preDro2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_chi_preDro2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_chi_preDro2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_preDro2_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_chi_preDro2_Medium_dynamicViscosity(threadData_t *threadData, logic2_chi_preDro2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi_preDro2_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_preDro2_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_chi_preDro2_Medium_dynamicViscosity,0}};
#define boxvar_logic2_chi_preDro2_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_preDro2_Medium_dynamicViscosity)


DLLDirection
logic2_chi_vol1_Medium_ThermodynamicState omc_logic2_chi_vol1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_chi_vol1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_vol1_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_chi_vol1_Medium_ThermodynamicState,0}};
#define boxvar_logic2_chi_vol1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_vol1_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_chi_vol1_Medium_density(threadData_t *threadData, logic2_chi_vol1_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi_vol1_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_vol1_Medium_density,2,0) {(void*) boxptr_logic2_chi_vol1_Medium_density,0}};
#define boxvar_logic2_chi_vol1_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_vol1_Medium_density)


DLLDirection
modelica_real omc_logic2_chi_vol1_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi_vol1_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_vol1_Medium_temperature__phX,2,0) {(void*) boxptr_logic2_chi_vol1_Medium_temperature__phX,0}};
#define boxvar_logic2_chi_vol1_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_vol1_Medium_temperature__phX)


DLLDirection
logic2_chi_vol1_dynBal_Medium_ThermodynamicState omc_logic2_chi_vol1_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_chi_vol1_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_vol1_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_chi_vol1_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_chi_vol1_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_vol1_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_chi_vol1_dynBal_Medium_density(threadData_t *threadData, logic2_chi_vol1_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi_vol1_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_vol1_dynBal_Medium_density,2,0) {(void*) boxptr_logic2_chi_vol1_dynBal_Medium_density,0}};
#define boxvar_logic2_chi_vol1_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_vol1_dynBal_Medium_density)


DLLDirection
logic2_chi_vol1_dynBal_Medium_ThermodynamicState omc_logic2_chi_vol1_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi_vol1_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_vol1_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_chi_vol1_dynBal_Medium_setState__pTX,0}};
#define boxvar_logic2_chi_vol1_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_vol1_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_chi_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_vol1_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_logic2_chi_vol1_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_logic2_chi_vol1_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_vol1_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_logic2_chi_vol1_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_chi_vol1_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi_vol1_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_vol1_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_chi_vol1_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_chi_vol1_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_vol1_dynBal_Medium_specificInternalEnergy)


DLLDirection
logic2_chi_vol2_Medium_ThermodynamicState omc_logic2_chi_vol2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_chi_vol2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_vol2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_chi_vol2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_chi_vol2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_vol2_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_chi_vol2_Medium_density(threadData_t *threadData, logic2_chi_vol2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi_vol2_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_vol2_Medium_density,2,0) {(void*) boxptr_logic2_chi_vol2_Medium_density,0}};
#define boxvar_logic2_chi_vol2_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_vol2_Medium_density)


DLLDirection
modelica_real omc_logic2_chi_vol2_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi_vol2_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_vol2_Medium_temperature__phX,2,0) {(void*) boxptr_logic2_chi_vol2_Medium_temperature__phX,0}};
#define boxvar_logic2_chi_vol2_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_vol2_Medium_temperature__phX)


DLLDirection
logic2_chi_vol2_dynBal_Medium_ThermodynamicState omc_logic2_chi_vol2_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_chi_vol2_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_vol2_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_chi_vol2_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_chi_vol2_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_vol2_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_chi_vol2_dynBal_Medium_density(threadData_t *threadData, logic2_chi_vol2_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi_vol2_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_vol2_dynBal_Medium_density,2,0) {(void*) boxptr_logic2_chi_vol2_dynBal_Medium_density,0}};
#define boxvar_logic2_chi_vol2_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_vol2_dynBal_Medium_density)


DLLDirection
logic2_chi_vol2_dynBal_Medium_ThermodynamicState omc_logic2_chi_vol2_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi_vol2_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_vol2_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_chi_vol2_dynBal_Medium_setState__pTX,0}};
#define boxvar_logic2_chi_vol2_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_vol2_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_chi_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_vol2_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_logic2_chi_vol2_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_logic2_chi_vol2_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_vol2_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_logic2_chi_vol2_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_chi_vol2_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi_vol2_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi_vol2_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_chi_vol2_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_chi_vol2_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi_vol2_dynBal_Medium_specificInternalEnergy)


DLLDirection
logic2_chi2_Medium1_ThermodynamicState omc_logic2_chi2_Medium1_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_chi2_Medium1_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium1_ThermodynamicState,2,0) {(void*) boxptr_logic2_chi2_Medium1_ThermodynamicState,0}};
#define boxvar_logic2_chi2_Medium1_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium1_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_chi2_Medium1_density(threadData_t *threadData, logic2_chi2_Medium1_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi2_Medium1_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium1_density,2,0) {(void*) boxptr_logic2_chi2_Medium1_density,0}};
#define boxvar_logic2_chi2_Medium1_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium1_density)


DLLDirection
logic2_chi2_Medium1_ThermodynamicState omc_logic2_chi2_Medium1_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi2_Medium1_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium1_setState__phX,2,0) {(void*) boxptr_logic2_chi2_Medium1_setState__phX,0}};
#define boxvar_logic2_chi2_Medium1_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium1_setState__phX)


DLLDirection
modelica_real omc_logic2_chi2_Medium1_specificEnthalpy(threadData_t *threadData, logic2_chi2_Medium1_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi2_Medium1_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium1_specificEnthalpy,2,0) {(void*) boxptr_logic2_chi2_Medium1_specificEnthalpy,0}};
#define boxvar_logic2_chi2_Medium1_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium1_specificEnthalpy)


DLLDirection
modelica_real omc_logic2_chi2_Medium1_temperature(threadData_t *threadData, logic2_chi2_Medium1_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi2_Medium1_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium1_temperature,2,0) {(void*) boxptr_logic2_chi2_Medium1_temperature,0}};
#define boxvar_logic2_chi2_Medium1_temperature MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium1_temperature)


DLLDirection
logic2_chi2_Medium2_ThermodynamicState omc_logic2_chi2_Medium2_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_chi2_Medium2_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium2_ThermodynamicState,2,0) {(void*) boxptr_logic2_chi2_Medium2_ThermodynamicState,0}};
#define boxvar_logic2_chi2_Medium2_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium2_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_chi2_Medium2_density(threadData_t *threadData, logic2_chi2_Medium2_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi2_Medium2_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium2_density,2,0) {(void*) boxptr_logic2_chi2_Medium2_density,0}};
#define boxvar_logic2_chi2_Medium2_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium2_density)


DLLDirection
logic2_chi2_Medium2_ThermodynamicState omc_logic2_chi2_Medium2_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi2_Medium2_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium2_setState__phX,2,0) {(void*) boxptr_logic2_chi2_Medium2_setState__phX,0}};
#define boxvar_logic2_chi2_Medium2_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium2_setState__phX)


DLLDirection
modelica_real omc_logic2_chi2_Medium2_specificEnthalpy(threadData_t *threadData, logic2_chi2_Medium2_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi2_Medium2_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium2_specificEnthalpy,2,0) {(void*) boxptr_logic2_chi2_Medium2_specificEnthalpy,0}};
#define boxvar_logic2_chi2_Medium2_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium2_specificEnthalpy)


DLLDirection
modelica_real omc_logic2_chi2_Medium2_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi2_Medium2_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium2_specificEnthalpy__pTX,2,0) {(void*) boxptr_logic2_chi2_Medium2_specificEnthalpy__pTX,0}};
#define boxvar_logic2_chi2_Medium2_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium2_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_logic2_chi2_Medium2_temperature(threadData_t *threadData, logic2_chi2_Medium2_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi2_Medium2_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium2_temperature,2,0) {(void*) boxptr_logic2_chi2_Medium2_temperature,0}};
#define boxvar_logic2_chi2_Medium2_temperature MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_Medium2_temperature)


DLLDirection
logic2_chi2_preDro1_Medium_ThermodynamicState omc_logic2_chi2_preDro1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_chi2_preDro1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_preDro1_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_chi2_preDro1_Medium_ThermodynamicState,0}};
#define boxvar_logic2_chi2_preDro1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_preDro1_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_chi2_preDro1_Medium_dynamicViscosity(threadData_t *threadData, logic2_chi2_preDro1_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi2_preDro1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_preDro1_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_chi2_preDro1_Medium_dynamicViscosity,0}};
#define boxvar_logic2_chi2_preDro1_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_preDro1_Medium_dynamicViscosity)


DLLDirection
logic2_chi2_preDro2_Medium_ThermodynamicState omc_logic2_chi2_preDro2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_chi2_preDro2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_preDro2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_chi2_preDro2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_chi2_preDro2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_preDro2_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_chi2_preDro2_Medium_dynamicViscosity(threadData_t *threadData, logic2_chi2_preDro2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi2_preDro2_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_preDro2_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_chi2_preDro2_Medium_dynamicViscosity,0}};
#define boxvar_logic2_chi2_preDro2_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_preDro2_Medium_dynamicViscosity)


DLLDirection
logic2_chi2_vol1_Medium_ThermodynamicState omc_logic2_chi2_vol1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_chi2_vol1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_vol1_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_chi2_vol1_Medium_ThermodynamicState,0}};
#define boxvar_logic2_chi2_vol1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_vol1_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_chi2_vol1_Medium_density(threadData_t *threadData, logic2_chi2_vol1_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi2_vol1_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_vol1_Medium_density,2,0) {(void*) boxptr_logic2_chi2_vol1_Medium_density,0}};
#define boxvar_logic2_chi2_vol1_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_vol1_Medium_density)


DLLDirection
modelica_real omc_logic2_chi2_vol1_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi2_vol1_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_vol1_Medium_temperature__phX,2,0) {(void*) boxptr_logic2_chi2_vol1_Medium_temperature__phX,0}};
#define boxvar_logic2_chi2_vol1_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_vol1_Medium_temperature__phX)


DLLDirection
logic2_chi2_vol1_dynBal_Medium_ThermodynamicState omc_logic2_chi2_vol1_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_chi2_vol1_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_vol1_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_chi2_vol1_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_chi2_vol1_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_vol1_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_chi2_vol1_dynBal_Medium_density(threadData_t *threadData, logic2_chi2_vol1_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi2_vol1_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_vol1_dynBal_Medium_density,2,0) {(void*) boxptr_logic2_chi2_vol1_dynBal_Medium_density,0}};
#define boxvar_logic2_chi2_vol1_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_vol1_dynBal_Medium_density)


DLLDirection
logic2_chi2_vol1_dynBal_Medium_ThermodynamicState omc_logic2_chi2_vol1_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi2_vol1_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_vol1_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_chi2_vol1_dynBal_Medium_setState__pTX,0}};
#define boxvar_logic2_chi2_vol1_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_vol1_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_chi2_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi2_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_vol1_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_logic2_chi2_vol1_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_logic2_chi2_vol1_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_vol1_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_logic2_chi2_vol1_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_chi2_vol1_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi2_vol1_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_vol1_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_chi2_vol1_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_chi2_vol1_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_vol1_dynBal_Medium_specificInternalEnergy)


DLLDirection
logic2_chi2_vol2_Medium_ThermodynamicState omc_logic2_chi2_vol2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_chi2_vol2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_vol2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_chi2_vol2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_chi2_vol2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_vol2_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_chi2_vol2_Medium_density(threadData_t *threadData, logic2_chi2_vol2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi2_vol2_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_vol2_Medium_density,2,0) {(void*) boxptr_logic2_chi2_vol2_Medium_density,0}};
#define boxvar_logic2_chi2_vol2_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_vol2_Medium_density)


DLLDirection
modelica_real omc_logic2_chi2_vol2_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi2_vol2_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_vol2_Medium_temperature__phX,2,0) {(void*) boxptr_logic2_chi2_vol2_Medium_temperature__phX,0}};
#define boxvar_logic2_chi2_vol2_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_vol2_Medium_temperature__phX)


DLLDirection
logic2_chi2_vol2_dynBal_Medium_ThermodynamicState omc_logic2_chi2_vol2_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_chi2_vol2_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_vol2_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_chi2_vol2_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_chi2_vol2_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_vol2_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_chi2_vol2_dynBal_Medium_density(threadData_t *threadData, logic2_chi2_vol2_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi2_vol2_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_vol2_dynBal_Medium_density,2,0) {(void*) boxptr_logic2_chi2_vol2_dynBal_Medium_density,0}};
#define boxvar_logic2_chi2_vol2_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_vol2_dynBal_Medium_density)


DLLDirection
logic2_chi2_vol2_dynBal_Medium_ThermodynamicState omc_logic2_chi2_vol2_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi2_vol2_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_vol2_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_chi2_vol2_dynBal_Medium_setState__pTX,0}};
#define boxvar_logic2_chi2_vol2_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_vol2_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_chi2_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_chi2_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_vol2_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_logic2_chi2_vol2_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_logic2_chi2_vol2_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_vol2_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_logic2_chi2_vol2_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_chi2_vol2_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_chi2_vol2_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_chi2_vol2_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_chi2_vol2_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_chi2_vol2_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_chi2_vol2_dynBal_Medium_specificInternalEnergy)


DLLDirection
logic2_cooCoi_Medium1_ThermodynamicState omc_logic2_cooCoi_Medium1_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_cooCoi_Medium1_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_Medium1_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooCoi_Medium1_ThermodynamicState,0}};
#define boxvar_logic2_cooCoi_Medium1_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_Medium1_ThermodynamicState)


DLLDirection
logic2_cooCoi_Medium2_ThermodynamicState omc_logic2_cooCoi_Medium2_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_cooCoi_Medium2_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_Medium2_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooCoi_Medium2_ThermodynamicState,0}};
#define boxvar_logic2_cooCoi_Medium2_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_Medium2_ThermodynamicState)


DLLDirection
logic2_cooCoi_ele_Medium1_ThermodynamicState omc_logic2_cooCoi_ele_Medium1_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_cooCoi_ele_Medium1_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_Medium1_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooCoi_ele_Medium1_ThermodynamicState,0}};
#define boxvar_logic2_cooCoi_ele_Medium1_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_Medium1_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_cooCoi_ele_Medium1_density(threadData_t *threadData, logic2_cooCoi_ele_Medium1_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooCoi_ele_Medium1_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_Medium1_density,2,0) {(void*) boxptr_logic2_cooCoi_ele_Medium1_density,0}};
#define boxvar_logic2_cooCoi_ele_Medium1_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_Medium1_density)


DLLDirection
modelica_real omc_logic2_cooCoi_ele_Medium1_specificEnthalpy(threadData_t *threadData, logic2_cooCoi_ele_Medium1_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooCoi_ele_Medium1_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_Medium1_specificEnthalpy,2,0) {(void*) boxptr_logic2_cooCoi_ele_Medium1_specificEnthalpy,0}};
#define boxvar_logic2_cooCoi_ele_Medium1_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_Medium1_specificEnthalpy)


DLLDirection
logic2_cooCoi_ele_Medium2_ThermodynamicState omc_logic2_cooCoi_ele_Medium2_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_cooCoi_ele_Medium2_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_Medium2_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooCoi_ele_Medium2_ThermodynamicState,0}};
#define boxvar_logic2_cooCoi_ele_Medium2_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_Medium2_ThermodynamicState)


DLLDirection
logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState omc_logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState,0}};
#define boxvar_logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData_t *threadData, logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_preDro1_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_cooCoi_ele_preDro1_Medium_dynamicViscosity,0}};
#define boxvar_logic2_cooCoi_ele_preDro1_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_preDro1_Medium_dynamicViscosity)


DLLDirection
logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState omc_logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState)


DLLDirection
logic2_cooCoi_ele_vol1_Medium_ThermodynamicState omc_logic2_cooCoi_ele_vol1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_cooCoi_ele_vol1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol1_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooCoi_ele_vol1_Medium_ThermodynamicState,0}};
#define boxvar_logic2_cooCoi_ele_vol1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol1_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_cooCoi_ele_vol1_Medium_density(threadData_t *threadData, logic2_cooCoi_ele_vol1_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooCoi_ele_vol1_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol1_Medium_density,2,0) {(void*) boxptr_logic2_cooCoi_ele_vol1_Medium_density,0}};
#define boxvar_logic2_cooCoi_ele_vol1_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol1_Medium_density)


DLLDirection
modelica_real omc_logic2_cooCoi_ele_vol1_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_cooCoi_ele_vol1_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol1_Medium_temperature__phX,2,0) {(void*) boxptr_logic2_cooCoi_ele_vol1_Medium_temperature__phX,0}};
#define boxvar_logic2_cooCoi_ele_vol1_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol1_Medium_temperature__phX)


DLLDirection
logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState omc_logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_cooCoi_ele_vol1_dynBal_Medium_density(threadData_t *threadData, logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooCoi_ele_vol1_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol1_dynBal_Medium_density,2,0) {(void*) boxptr_logic2_cooCoi_ele_vol1_dynBal_Medium_density,0}};
#define boxvar_logic2_cooCoi_ele_vol1_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol1_dynBal_Medium_density)


DLLDirection
logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState omc_logic2_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol1_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_cooCoi_ele_vol1_dynBal_Medium_setState__pTX,0}};
#define boxvar_logic2_cooCoi_ele_vol1_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol1_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_logic2_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_logic2_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_logic2_cooCoi_ele_vol1_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooCoi_ele_vol1_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol1_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_cooCoi_ele_vol1_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_cooCoi_ele_vol1_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol1_dynBal_Medium_specificInternalEnergy)


DLLDirection
logic2_cooCoi_ele_vol2_Medium_ThermodynamicState omc_logic2_cooCoi_ele_vol2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_cooCoi_ele_vol2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooCoi_ele_vol2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_cooCoi_ele_vol2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol2_Medium_ThermodynamicState)


DLLDirection
logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState omc_logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState)


DLLDirection
logic2_cooCoi_temSen__1_Medium_ThermodynamicState omc_logic2_cooCoi_temSen__1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_cooCoi_temSen__1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_temSen__1_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooCoi_temSen__1_Medium_ThermodynamicState,0}};
#define boxvar_logic2_cooCoi_temSen__1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_temSen__1_Medium_ThermodynamicState)


DLLDirection
logic2_cooCoi_temSen__1_Medium_ThermodynamicState omc_logic2_cooCoi_temSen__1_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_cooCoi_temSen__1_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_temSen__1_Medium_setState__phX,2,0) {(void*) boxptr_logic2_cooCoi_temSen__1_Medium_setState__phX,0}};
#define boxvar_logic2_cooCoi_temSen__1_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_temSen__1_Medium_setState__phX)


DLLDirection
modelica_real omc_logic2_cooCoi_temSen__1_Medium_temperature(threadData_t *threadData, logic2_cooCoi_temSen__1_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooCoi_temSen__1_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_temSen__1_Medium_temperature,2,0) {(void*) boxptr_logic2_cooCoi_temSen__1_Medium_temperature,0}};
#define boxvar_logic2_cooCoi_temSen__1_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_temSen__1_Medium_temperature)


DLLDirection
logic2_cooCoi_temSen__2_Medium_ThermodynamicState omc_logic2_cooCoi_temSen__2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_cooCoi_temSen__2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooCoi_temSen__2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooCoi_temSen__2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_cooCoi_temSen__2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooCoi_temSen__2_Medium_ThermodynamicState)


DLLDirection
logic2_cooTow_Medium_ThermodynamicState omc_logic2_cooTow_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_cooTow_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooTow_Medium_ThermodynamicState,0}};
#define boxvar_logic2_cooTow_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_cooTow_Medium_density(threadData_t *threadData, logic2_cooTow_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooTow_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow_Medium_density,2,0) {(void*) boxptr_logic2_cooTow_Medium_density,0}};
#define boxvar_logic2_cooTow_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow_Medium_density)


DLLDirection
logic2_cooTow_Medium_ThermodynamicState omc_logic2_cooTow_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_cooTow_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_cooTow_Medium_setState__pTX,0}};
#define boxvar_logic2_cooTow_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_cooTow_Medium_specificEnthalpy(threadData_t *threadData, logic2_cooTow_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooTow_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow_Medium_specificEnthalpy,2,0) {(void*) boxptr_logic2_cooTow_Medium_specificEnthalpy,0}};
#define boxvar_logic2_cooTow_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow_Medium_specificEnthalpy)


DLLDirection
logic2_cooTow_Water_ThermodynamicState omc_logic2_cooTow_Water_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_cooTow_Water_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow_Water_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooTow_Water_ThermodynamicState,0}};
#define boxvar_logic2_cooTow_Water_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow_Water_ThermodynamicState)


DLLDirection
logic2_cooTow_Water_ThermodynamicState omc_logic2_cooTow_Water_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_cooTow_Water_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow_Water_setState__phX,2,0) {(void*) boxptr_logic2_cooTow_Water_setState__phX,0}};
#define boxvar_logic2_cooTow_Water_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow_Water_setState__phX)


DLLDirection
modelica_real omc_logic2_cooTow_Water_temperature(threadData_t *threadData, logic2_cooTow_Water_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooTow_Water_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow_Water_temperature,2,0) {(void*) boxptr_logic2_cooTow_Water_temperature,0}};
#define boxvar_logic2_cooTow_Water_temperature MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow_Water_temperature)


DLLDirection
logic2_cooTow_preDro_Medium_ThermodynamicState omc_logic2_cooTow_preDro_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_cooTow_preDro_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow_preDro_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooTow_preDro_Medium_ThermodynamicState,0}};
#define boxvar_logic2_cooTow_preDro_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow_preDro_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_cooTow_preDro_Medium_dynamicViscosity(threadData_t *threadData, logic2_cooTow_preDro_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooTow_preDro_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow_preDro_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_cooTow_preDro_Medium_dynamicViscosity,0}};
#define boxvar_logic2_cooTow_preDro_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow_preDro_Medium_dynamicViscosity)


DLLDirection
logic2_cooTow_vol_Medium_ThermodynamicState omc_logic2_cooTow_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_cooTow_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooTow_vol_Medium_ThermodynamicState,0}};
#define boxvar_logic2_cooTow_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow_vol_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_cooTow_vol_Medium_density(threadData_t *threadData, logic2_cooTow_vol_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooTow_vol_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow_vol_Medium_density,2,0) {(void*) boxptr_logic2_cooTow_vol_Medium_density,0}};
#define boxvar_logic2_cooTow_vol_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow_vol_Medium_density)


DLLDirection
modelica_real omc_logic2_cooTow_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_cooTow_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow_vol_Medium_temperature__phX,2,0) {(void*) boxptr_logic2_cooTow_vol_Medium_temperature__phX,0}};
#define boxvar_logic2_cooTow_vol_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow_vol_Medium_temperature__phX)


DLLDirection
logic2_cooTow_vol_dynBal_Medium_ThermodynamicState omc_logic2_cooTow_vol_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_cooTow_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow_vol_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooTow_vol_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_cooTow_vol_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow_vol_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_cooTow_vol_dynBal_Medium_density(threadData_t *threadData, logic2_cooTow_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooTow_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow_vol_dynBal_Medium_density,2,0) {(void*) boxptr_logic2_cooTow_vol_dynBal_Medium_density,0}};
#define boxvar_logic2_cooTow_vol_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow_vol_dynBal_Medium_density)


DLLDirection
logic2_cooTow_vol_dynBal_Medium_ThermodynamicState omc_logic2_cooTow_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_cooTow_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow_vol_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_cooTow_vol_dynBal_Medium_setState__pTX,0}};
#define boxvar_logic2_cooTow_vol_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow_vol_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_cooTow_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_cooTow_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow_vol_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_logic2_cooTow_vol_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_logic2_cooTow_vol_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow_vol_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_logic2_cooTow_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_cooTow_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooTow_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow_vol_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_cooTow_vol_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_cooTow_vol_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow_vol_dynBal_Medium_specificInternalEnergy)


DLLDirection
logic2_cooTow2_Medium_ThermodynamicState omc_logic2_cooTow2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_cooTow2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooTow2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_cooTow2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow2_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_cooTow2_Medium_density(threadData_t *threadData, logic2_cooTow2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooTow2_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow2_Medium_density,2,0) {(void*) boxptr_logic2_cooTow2_Medium_density,0}};
#define boxvar_logic2_cooTow2_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow2_Medium_density)


DLLDirection
logic2_cooTow2_Medium_ThermodynamicState omc_logic2_cooTow2_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_cooTow2_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow2_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_cooTow2_Medium_setState__pTX,0}};
#define boxvar_logic2_cooTow2_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow2_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_cooTow2_Medium_specificEnthalpy(threadData_t *threadData, logic2_cooTow2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooTow2_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow2_Medium_specificEnthalpy,2,0) {(void*) boxptr_logic2_cooTow2_Medium_specificEnthalpy,0}};
#define boxvar_logic2_cooTow2_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow2_Medium_specificEnthalpy)


DLLDirection
logic2_cooTow2_Water_ThermodynamicState omc_logic2_cooTow2_Water_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_cooTow2_Water_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow2_Water_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooTow2_Water_ThermodynamicState,0}};
#define boxvar_logic2_cooTow2_Water_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow2_Water_ThermodynamicState)


DLLDirection
logic2_cooTow2_Water_ThermodynamicState omc_logic2_cooTow2_Water_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_cooTow2_Water_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow2_Water_setState__phX,2,0) {(void*) boxptr_logic2_cooTow2_Water_setState__phX,0}};
#define boxvar_logic2_cooTow2_Water_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow2_Water_setState__phX)


DLLDirection
modelica_real omc_logic2_cooTow2_Water_temperature(threadData_t *threadData, logic2_cooTow2_Water_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooTow2_Water_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow2_Water_temperature,2,0) {(void*) boxptr_logic2_cooTow2_Water_temperature,0}};
#define boxvar_logic2_cooTow2_Water_temperature MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow2_Water_temperature)


DLLDirection
logic2_cooTow2_preDro_Medium_ThermodynamicState omc_logic2_cooTow2_preDro_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_cooTow2_preDro_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow2_preDro_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooTow2_preDro_Medium_ThermodynamicState,0}};
#define boxvar_logic2_cooTow2_preDro_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow2_preDro_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_cooTow2_preDro_Medium_dynamicViscosity(threadData_t *threadData, logic2_cooTow2_preDro_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooTow2_preDro_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow2_preDro_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_cooTow2_preDro_Medium_dynamicViscosity,0}};
#define boxvar_logic2_cooTow2_preDro_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow2_preDro_Medium_dynamicViscosity)


DLLDirection
logic2_cooTow2_vol_Medium_ThermodynamicState omc_logic2_cooTow2_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_cooTow2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow2_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooTow2_vol_Medium_ThermodynamicState,0}};
#define boxvar_logic2_cooTow2_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow2_vol_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_cooTow2_vol_Medium_density(threadData_t *threadData, logic2_cooTow2_vol_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooTow2_vol_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow2_vol_Medium_density,2,0) {(void*) boxptr_logic2_cooTow2_vol_Medium_density,0}};
#define boxvar_logic2_cooTow2_vol_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow2_vol_Medium_density)


DLLDirection
modelica_real omc_logic2_cooTow2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_cooTow2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow2_vol_Medium_temperature__phX,2,0) {(void*) boxptr_logic2_cooTow2_vol_Medium_temperature__phX,0}};
#define boxvar_logic2_cooTow2_vol_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow2_vol_Medium_temperature__phX)


DLLDirection
logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState omc_logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_cooTow2_vol_dynBal_Medium_density(threadData_t *threadData, logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooTow2_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow2_vol_dynBal_Medium_density,2,0) {(void*) boxptr_logic2_cooTow2_vol_dynBal_Medium_density,0}};
#define boxvar_logic2_cooTow2_vol_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow2_vol_dynBal_Medium_density)


DLLDirection
logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState omc_logic2_cooTow2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_cooTow2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow2_vol_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_cooTow2_vol_dynBal_Medium_setState__pTX,0}};
#define boxvar_logic2_cooTow2_vol_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow2_vol_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_cooTow2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_cooTow2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow2_vol_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_logic2_cooTow2_vol_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_logic2_cooTow2_vol_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow2_vol_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_logic2_cooTow2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_cooTow2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_cooTow2_vol_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_cooTow2_vol_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_cooTow2_vol_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_cooTow2_vol_dynBal_Medium_specificInternalEnergy)


DLLDirection
logic2_damEA_Medium_ThermodynamicState omc_logic2_damEA_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_damEA_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_damEA_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_damEA_Medium_ThermodynamicState,0}};
#define boxvar_logic2_damEA_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_damEA_Medium_ThermodynamicState)


DLLDirection
logic2_damOA_Medium_ThermodynamicState omc_logic2_damOA_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_damOA_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_damOA_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_damOA_Medium_ThermodynamicState,0}};
#define boxvar_logic2_damOA_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_damOA_Medium_ThermodynamicState)


DLLDirection
logic2_damRet_Medium_ThermodynamicState omc_logic2_damRet_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_damRet_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_damRet_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_damRet_Medium_ThermodynamicState,0}};
#define boxvar_logic2_damRet_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_damRet_Medium_ThermodynamicState)


DLLDirection
logic2_expVesCHW_Medium_ThermodynamicState omc_logic2_expVesCHW_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_expVesCHW_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_expVesCHW_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_expVesCHW_Medium_ThermodynamicState,0}};
#define boxvar_logic2_expVesCHW_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_expVesCHW_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_expVesCHW_Medium_density(threadData_t *threadData, logic2_expVesCHW_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_expVesCHW_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_expVesCHW_Medium_density,2,0) {(void*) boxptr_logic2_expVesCHW_Medium_density,0}};
#define boxvar_logic2_expVesCHW_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_expVesCHW_Medium_density)


DLLDirection
logic2_expVesCHW_Medium_ThermodynamicState omc_logic2_expVesCHW_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_expVesCHW_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_expVesCHW_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_expVesCHW_Medium_setState__pTX,0}};
#define boxvar_logic2_expVesCHW_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_expVesCHW_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_expVesCHW_Medium_specificInternalEnergy(threadData_t *threadData, logic2_expVesCHW_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_expVesCHW_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_expVesCHW_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_expVesCHW_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_expVesCHW_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_expVesCHW_Medium_specificInternalEnergy)


DLLDirection
logic2_expVesChi_Medium_ThermodynamicState omc_logic2_expVesChi_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_expVesChi_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_expVesChi_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_expVesChi_Medium_ThermodynamicState,0}};
#define boxvar_logic2_expVesChi_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_expVesChi_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_expVesChi_Medium_density(threadData_t *threadData, logic2_expVesChi_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_expVesChi_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_expVesChi_Medium_density,2,0) {(void*) boxptr_logic2_expVesChi_Medium_density,0}};
#define boxvar_logic2_expVesChi_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_expVesChi_Medium_density)


DLLDirection
logic2_expVesChi_Medium_ThermodynamicState omc_logic2_expVesChi_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_expVesChi_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_expVesChi_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_expVesChi_Medium_setState__pTX,0}};
#define boxvar_logic2_expVesChi_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_expVesChi_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_expVesChi_Medium_specificInternalEnergy(threadData_t *threadData, logic2_expVesChi_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_expVesChi_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_expVesChi_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_expVesChi_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_expVesChi_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_expVesChi_Medium_specificInternalEnergy)


DLLDirection
logic2_expVesChi2_Medium_ThermodynamicState omc_logic2_expVesChi2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_expVesChi2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_expVesChi2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_expVesChi2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_expVesChi2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_expVesChi2_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_expVesChi2_Medium_density(threadData_t *threadData, logic2_expVesChi2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_expVesChi2_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_expVesChi2_Medium_density,2,0) {(void*) boxptr_logic2_expVesChi2_Medium_density,0}};
#define boxvar_logic2_expVesChi2_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_expVesChi2_Medium_density)


DLLDirection
logic2_expVesChi2_Medium_ThermodynamicState omc_logic2_expVesChi2_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_expVesChi2_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_expVesChi2_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_expVesChi2_Medium_setState__pTX,0}};
#define boxvar_logic2_expVesChi2_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_expVesChi2_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_expVesChi2_Medium_specificInternalEnergy(threadData_t *threadData, logic2_expVesChi2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_expVesChi2_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_expVesChi2_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_expVesChi2_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_expVesChi2_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_expVesChi2_Medium_specificInternalEnergy)


DLLDirection
logic2_fanRet_Medium_ThermodynamicState omc_logic2_fanRet_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_fanRet_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_fanRet_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_fanRet_Medium_ThermodynamicState,0}};
#define boxvar_logic2_fanRet_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_fanRet_Medium_ThermodynamicState)


DLLDirection
logic2_fanRet_preSou_Medium_ThermodynamicState omc_logic2_fanRet_preSou_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_fanRet_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_fanRet_preSou_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_fanRet_preSou_Medium_ThermodynamicState,0}};
#define boxvar_logic2_fanRet_preSou_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_fanRet_preSou_Medium_ThermodynamicState)


DLLDirection
logic2_fanRet_vol_Medium_ThermodynamicState omc_logic2_fanRet_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_fanRet_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_fanRet_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_fanRet_vol_Medium_ThermodynamicState,0}};
#define boxvar_logic2_fanRet_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_fanRet_vol_Medium_ThermodynamicState)


DLLDirection
logic2_fanRet_vol_steBal_Medium_ThermodynamicState omc_logic2_fanRet_vol_steBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_fanRet_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_fanRet_vol_steBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_fanRet_vol_steBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_fanRet_vol_steBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_fanRet_vol_steBal_Medium_ThermodynamicState)


DLLDirection
logic2_fanSup_Medium_ThermodynamicState omc_logic2_fanSup_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_fanSup_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_fanSup_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_fanSup_Medium_ThermodynamicState,0}};
#define boxvar_logic2_fanSup_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_fanSup_Medium_ThermodynamicState)


DLLDirection
logic2_fanSup_preSou_Medium_ThermodynamicState omc_logic2_fanSup_preSou_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_fanSup_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_fanSup_preSou_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_fanSup_preSou_Medium_ThermodynamicState,0}};
#define boxvar_logic2_fanSup_preSou_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_fanSup_preSou_Medium_ThermodynamicState)


DLLDirection
logic2_fanSup_vol_Medium_ThermodynamicState omc_logic2_fanSup_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_fanSup_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_fanSup_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_fanSup_vol_Medium_ThermodynamicState,0}};
#define boxvar_logic2_fanSup_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_fanSup_vol_Medium_ThermodynamicState)


DLLDirection
logic2_fanSup_vol_steBal_Medium_ThermodynamicState omc_logic2_fanSup_vol_steBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_fanSup_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_fanSup_vol_steBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_fanSup_vol_steBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_fanSup_vol_steBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_fanSup_vol_steBal_Medium_ThermodynamicState)


DLLDirection
logic2_junCHWRet_res1_Medium_ThermodynamicState omc_logic2_junCHWRet_res1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWRet_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_res1_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWRet_res1_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWRet_res1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_res1_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWRet_res1_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWRet_res1_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet_res1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_res1_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_junCHWRet_res1_Medium_dynamicViscosity,0}};
#define boxvar_logic2_junCHWRet_res1_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_res1_Medium_dynamicViscosity)


DLLDirection
logic2_junCHWRet_res2_Medium_ThermodynamicState omc_logic2_junCHWRet_res2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWRet_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_res2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWRet_res2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWRet_res2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_res2_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWRet_res2_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWRet_res2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet_res2_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_res2_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_junCHWRet_res2_Medium_dynamicViscosity,0}};
#define boxvar_logic2_junCHWRet_res2_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_res2_Medium_dynamicViscosity)


DLLDirection
logic2_junCHWRet_res3_Medium_ThermodynamicState omc_logic2_junCHWRet_res3_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWRet_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_res3_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWRet_res3_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWRet_res3_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_res3_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWRet_res3_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWRet_res3_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet_res3_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_res3_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_junCHWRet_res3_Medium_dynamicViscosity,0}};
#define boxvar_logic2_junCHWRet_res3_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_res3_Medium_dynamicViscosity)


DLLDirection
logic2_junCHWRet_vol_Medium_ThermodynamicState omc_logic2_junCHWRet_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWRet_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWRet_vol_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWRet_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_vol_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWRet_vol_Medium_density(threadData_t *threadData, logic2_junCHWRet_vol_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet_vol_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_vol_Medium_density,2,0) {(void*) boxptr_logic2_junCHWRet_vol_Medium_density,0}};
#define boxvar_logic2_junCHWRet_vol_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_vol_Medium_density)


DLLDirection
modelica_real omc_logic2_junCHWRet_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_vol_Medium_temperature__phX,2,0) {(void*) boxptr_logic2_junCHWRet_vol_Medium_temperature__phX,0}};
#define boxvar_logic2_junCHWRet_vol_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_vol_Medium_temperature__phX)


DLLDirection
logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState omc_logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWRet_vol_dynBal_Medium_density(threadData_t *threadData, logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_vol_dynBal_Medium_density,2,0) {(void*) boxptr_logic2_junCHWRet_vol_dynBal_Medium_density,0}};
#define boxvar_logic2_junCHWRet_vol_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_vol_dynBal_Medium_density)


DLLDirection
logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState omc_logic2_junCHWRet_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_vol_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_junCHWRet_vol_dynBal_Medium_setState__pTX,0}};
#define boxvar_logic2_junCHWRet_vol_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_vol_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_junCHWRet_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_vol_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_logic2_junCHWRet_vol_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_logic2_junCHWRet_vol_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_vol_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_logic2_junCHWRet_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_vol_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_junCHWRet_vol_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_junCHWRet_vol_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet_vol_dynBal_Medium_specificInternalEnergy)


DLLDirection
logic2_junCHWRet2_res1_Medium_ThermodynamicState omc_logic2_junCHWRet2_res1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWRet2_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_res1_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWRet2_res1_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWRet2_res1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_res1_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWRet2_res1_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWRet2_res1_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet2_res1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_res1_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_junCHWRet2_res1_Medium_dynamicViscosity,0}};
#define boxvar_logic2_junCHWRet2_res1_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_res1_Medium_dynamicViscosity)


DLLDirection
logic2_junCHWRet2_res2_Medium_ThermodynamicState omc_logic2_junCHWRet2_res2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWRet2_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_res2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWRet2_res2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWRet2_res2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_res2_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWRet2_res2_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWRet2_res2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet2_res2_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_res2_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_junCHWRet2_res2_Medium_dynamicViscosity,0}};
#define boxvar_logic2_junCHWRet2_res2_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_res2_Medium_dynamicViscosity)


DLLDirection
logic2_junCHWRet2_res3_Medium_ThermodynamicState omc_logic2_junCHWRet2_res3_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWRet2_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_res3_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWRet2_res3_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWRet2_res3_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_res3_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWRet2_res3_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWRet2_res3_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet2_res3_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_res3_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_junCHWRet2_res3_Medium_dynamicViscosity,0}};
#define boxvar_logic2_junCHWRet2_res3_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_res3_Medium_dynamicViscosity)


DLLDirection
logic2_junCHWRet2_vol_Medium_ThermodynamicState omc_logic2_junCHWRet2_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWRet2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWRet2_vol_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWRet2_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_vol_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWRet2_vol_Medium_density(threadData_t *threadData, logic2_junCHWRet2_vol_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet2_vol_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_vol_Medium_density,2,0) {(void*) boxptr_logic2_junCHWRet2_vol_Medium_density,0}};
#define boxvar_logic2_junCHWRet2_vol_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_vol_Medium_density)


DLLDirection
modelica_real omc_logic2_junCHWRet2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_vol_Medium_temperature__phX,2,0) {(void*) boxptr_logic2_junCHWRet2_vol_Medium_temperature__phX,0}};
#define boxvar_logic2_junCHWRet2_vol_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_vol_Medium_temperature__phX)


DLLDirection
logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState omc_logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWRet2_vol_dynBal_Medium_density(threadData_t *threadData, logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet2_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_vol_dynBal_Medium_density,2,0) {(void*) boxptr_logic2_junCHWRet2_vol_dynBal_Medium_density,0}};
#define boxvar_logic2_junCHWRet2_vol_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_vol_dynBal_Medium_density)


DLLDirection
logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState omc_logic2_junCHWRet2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_vol_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_junCHWRet2_vol_dynBal_Medium_setState__pTX,0}};
#define boxvar_logic2_junCHWRet2_vol_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_vol_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_junCHWRet2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_vol_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_logic2_junCHWRet2_vol_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_logic2_junCHWRet2_vol_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_vol_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_logic2_junCHWRet2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWRet2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_vol_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_junCHWRet2_vol_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_junCHWRet2_vol_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWRet2_vol_dynBal_Medium_specificInternalEnergy)


DLLDirection
logic2_junCHWSup_res1_Medium_ThermodynamicState omc_logic2_junCHWSup_res1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWSup_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_res1_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWSup_res1_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWSup_res1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_res1_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWSup_res1_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWSup_res1_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup_res1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_res1_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_junCHWSup_res1_Medium_dynamicViscosity,0}};
#define boxvar_logic2_junCHWSup_res1_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_res1_Medium_dynamicViscosity)


DLLDirection
logic2_junCHWSup_res2_Medium_ThermodynamicState omc_logic2_junCHWSup_res2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWSup_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_res2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWSup_res2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWSup_res2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_res2_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWSup_res2_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWSup_res2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup_res2_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_res2_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_junCHWSup_res2_Medium_dynamicViscosity,0}};
#define boxvar_logic2_junCHWSup_res2_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_res2_Medium_dynamicViscosity)


DLLDirection
logic2_junCHWSup_res3_Medium_ThermodynamicState omc_logic2_junCHWSup_res3_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWSup_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_res3_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWSup_res3_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWSup_res3_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_res3_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWSup_res3_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWSup_res3_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup_res3_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_res3_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_junCHWSup_res3_Medium_dynamicViscosity,0}};
#define boxvar_logic2_junCHWSup_res3_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_res3_Medium_dynamicViscosity)


DLLDirection
logic2_junCHWSup_vol_Medium_ThermodynamicState omc_logic2_junCHWSup_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWSup_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWSup_vol_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWSup_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_vol_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWSup_vol_Medium_density(threadData_t *threadData, logic2_junCHWSup_vol_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup_vol_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_vol_Medium_density,2,0) {(void*) boxptr_logic2_junCHWSup_vol_Medium_density,0}};
#define boxvar_logic2_junCHWSup_vol_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_vol_Medium_density)


DLLDirection
modelica_real omc_logic2_junCHWSup_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_vol_Medium_temperature__phX,2,0) {(void*) boxptr_logic2_junCHWSup_vol_Medium_temperature__phX,0}};
#define boxvar_logic2_junCHWSup_vol_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_vol_Medium_temperature__phX)


DLLDirection
logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState omc_logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWSup_vol_dynBal_Medium_density(threadData_t *threadData, logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_vol_dynBal_Medium_density,2,0) {(void*) boxptr_logic2_junCHWSup_vol_dynBal_Medium_density,0}};
#define boxvar_logic2_junCHWSup_vol_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_vol_dynBal_Medium_density)


DLLDirection
logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState omc_logic2_junCHWSup_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_vol_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_junCHWSup_vol_dynBal_Medium_setState__pTX,0}};
#define boxvar_logic2_junCHWSup_vol_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_vol_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_junCHWSup_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_vol_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_logic2_junCHWSup_vol_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_logic2_junCHWSup_vol_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_vol_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_logic2_junCHWSup_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_vol_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_junCHWSup_vol_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_junCHWSup_vol_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup_vol_dynBal_Medium_specificInternalEnergy)


DLLDirection
logic2_junCHWSup2_res1_Medium_ThermodynamicState omc_logic2_junCHWSup2_res1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWSup2_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_res1_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWSup2_res1_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWSup2_res1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_res1_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWSup2_res1_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWSup2_res1_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup2_res1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_res1_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_junCHWSup2_res1_Medium_dynamicViscosity,0}};
#define boxvar_logic2_junCHWSup2_res1_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_res1_Medium_dynamicViscosity)


DLLDirection
logic2_junCHWSup2_res2_Medium_ThermodynamicState omc_logic2_junCHWSup2_res2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWSup2_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_res2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWSup2_res2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWSup2_res2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_res2_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWSup2_res2_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWSup2_res2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup2_res2_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_res2_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_junCHWSup2_res2_Medium_dynamicViscosity,0}};
#define boxvar_logic2_junCHWSup2_res2_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_res2_Medium_dynamicViscosity)


DLLDirection
logic2_junCHWSup2_res3_Medium_ThermodynamicState omc_logic2_junCHWSup2_res3_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWSup2_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_res3_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWSup2_res3_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWSup2_res3_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_res3_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWSup2_res3_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWSup2_res3_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup2_res3_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_res3_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_junCHWSup2_res3_Medium_dynamicViscosity,0}};
#define boxvar_logic2_junCHWSup2_res3_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_res3_Medium_dynamicViscosity)


DLLDirection
logic2_junCHWSup2_vol_Medium_ThermodynamicState omc_logic2_junCHWSup2_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWSup2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWSup2_vol_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWSup2_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_vol_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWSup2_vol_Medium_density(threadData_t *threadData, logic2_junCHWSup2_vol_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup2_vol_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_vol_Medium_density,2,0) {(void*) boxptr_logic2_junCHWSup2_vol_Medium_density,0}};
#define boxvar_logic2_junCHWSup2_vol_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_vol_Medium_density)


DLLDirection
modelica_real omc_logic2_junCHWSup2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_vol_Medium_temperature__phX,2,0) {(void*) boxptr_logic2_junCHWSup2_vol_Medium_temperature__phX,0}};
#define boxvar_logic2_junCHWSup2_vol_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_vol_Medium_temperature__phX)


DLLDirection
logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState omc_logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_junCHWSup2_vol_dynBal_Medium_density(threadData_t *threadData, logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup2_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_vol_dynBal_Medium_density,2,0) {(void*) boxptr_logic2_junCHWSup2_vol_dynBal_Medium_density,0}};
#define boxvar_logic2_junCHWSup2_vol_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_vol_dynBal_Medium_density)


DLLDirection
logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState omc_logic2_junCHWSup2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_vol_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_junCHWSup2_vol_dynBal_Medium_setState__pTX,0}};
#define boxvar_logic2_junCHWSup2_vol_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_vol_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_junCHWSup2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_vol_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_logic2_junCHWSup2_vol_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_logic2_junCHWSup2_vol_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_vol_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_logic2_junCHWSup2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_junCHWSup2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_vol_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_junCHWSup2_vol_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_junCHWSup2_vol_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_junCHWSup2_vol_dynBal_Medium_specificInternalEnergy)


DLLDirection
logic2_junOut_res1_Medium_ThermodynamicState omc_logic2_junOut_res1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_junOut_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junOut_res1_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junOut_res1_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junOut_res1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junOut_res1_Medium_ThermodynamicState)


DLLDirection
logic2_junOut_res2_Medium_ThermodynamicState omc_logic2_junOut_res2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_junOut_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junOut_res2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junOut_res2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junOut_res2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junOut_res2_Medium_ThermodynamicState)


DLLDirection
logic2_junOut_res3_Medium_ThermodynamicState omc_logic2_junOut_res3_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_junOut_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junOut_res3_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junOut_res3_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junOut_res3_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junOut_res3_Medium_ThermodynamicState)


DLLDirection
logic2_junOut_vol_Medium_ThermodynamicState omc_logic2_junOut_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_junOut_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junOut_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junOut_vol_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junOut_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junOut_vol_Medium_ThermodynamicState)


DLLDirection
logic2_junOut_vol_dynBal_Medium_ThermodynamicState omc_logic2_junOut_vol_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_junOut_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junOut_vol_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junOut_vol_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junOut_vol_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junOut_vol_dynBal_Medium_ThermodynamicState)


DLLDirection
logic2_junRet_res1_Medium_ThermodynamicState omc_logic2_junRet_res1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_junRet_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junRet_res1_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junRet_res1_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junRet_res1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junRet_res1_Medium_ThermodynamicState)


DLLDirection
logic2_junRet_res2_Medium_ThermodynamicState omc_logic2_junRet_res2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_junRet_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junRet_res2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junRet_res2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junRet_res2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junRet_res2_Medium_ThermodynamicState)


DLLDirection
logic2_junRet_res3_Medium_ThermodynamicState omc_logic2_junRet_res3_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_junRet_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junRet_res3_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junRet_res3_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junRet_res3_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junRet_res3_Medium_ThermodynamicState)


DLLDirection
logic2_junRet_vol_Medium_ThermodynamicState omc_logic2_junRet_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_junRet_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junRet_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junRet_vol_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junRet_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junRet_vol_Medium_ThermodynamicState)


DLLDirection
logic2_junRet_vol_dynBal_Medium_ThermodynamicState omc_logic2_junRet_vol_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_junRet_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_junRet_vol_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_junRet_vol_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_junRet_vol_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_junRet_vol_dynBal_Medium_ThermodynamicState)


DLLDirection
logic2_out_Medium_ThermodynamicState omc_logic2_out_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_out_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_out_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_out_Medium_ThermodynamicState,0}};
#define boxvar_logic2_out_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_out_Medium_ThermodynamicState)


DLLDirection
logic2_pumCHW_Medium_ThermodynamicState omc_logic2_pumCHW_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_pumCHW_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_pumCHW_Medium_ThermodynamicState,0}};
#define boxvar_logic2_pumCHW_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_pumCHW_Medium_specificEnthalpy(threadData_t *threadData, logic2_pumCHW_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW_Medium_specificEnthalpy,2,0) {(void*) boxptr_logic2_pumCHW_Medium_specificEnthalpy,0}};
#define boxvar_logic2_pumCHW_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW_Medium_specificEnthalpy)


DLLDirection
logic2_pumCHW_preSou_Medium_ThermodynamicState omc_logic2_pumCHW_preSou_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_pumCHW_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW_preSou_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_pumCHW_preSou_Medium_ThermodynamicState,0}};
#define boxvar_logic2_pumCHW_preSou_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW_preSou_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_pumCHW_preSou_Medium_density(threadData_t *threadData, logic2_pumCHW_preSou_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW_preSou_Medium_density,2,0) {(void*) boxptr_logic2_pumCHW_preSou_Medium_density,0}};
#define boxvar_logic2_pumCHW_preSou_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW_preSou_Medium_density)


DLLDirection
logic2_pumCHW_preSou_Medium_ThermodynamicState omc_logic2_pumCHW_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW_preSou_Medium_setState__phX,2,0) {(void*) boxptr_logic2_pumCHW_preSou_Medium_setState__phX,0}};
#define boxvar_logic2_pumCHW_preSou_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW_preSou_Medium_setState__phX)


DLLDirection
logic2_pumCHW_vol_Medium_ThermodynamicState omc_logic2_pumCHW_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_pumCHW_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_pumCHW_vol_Medium_ThermodynamicState,0}};
#define boxvar_logic2_pumCHW_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW_vol_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_pumCHW_vol_Medium_density(threadData_t *threadData, logic2_pumCHW_vol_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW_vol_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW_vol_Medium_density,2,0) {(void*) boxptr_logic2_pumCHW_vol_Medium_density,0}};
#define boxvar_logic2_pumCHW_vol_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW_vol_Medium_density)


DLLDirection
modelica_real omc_logic2_pumCHW_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW_vol_Medium_temperature__phX,2,0) {(void*) boxptr_logic2_pumCHW_vol_Medium_temperature__phX,0}};
#define boxvar_logic2_pumCHW_vol_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW_vol_Medium_temperature__phX)


DLLDirection
logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState omc_logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_pumCHW_vol_dynBal_Medium_density(threadData_t *threadData, logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW_vol_dynBal_Medium_density,2,0) {(void*) boxptr_logic2_pumCHW_vol_dynBal_Medium_density,0}};
#define boxvar_logic2_pumCHW_vol_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW_vol_dynBal_Medium_density)


DLLDirection
logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState omc_logic2_pumCHW_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW_vol_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_pumCHW_vol_dynBal_Medium_setState__pTX,0}};
#define boxvar_logic2_pumCHW_vol_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW_vol_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_pumCHW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW_vol_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_logic2_pumCHW_vol_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_logic2_pumCHW_vol_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW_vol_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_logic2_pumCHW_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW_vol_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_pumCHW_vol_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_pumCHW_vol_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW_vol_dynBal_Medium_specificInternalEnergy)


DLLDirection
logic2_pumCHW2_Medium_ThermodynamicState omc_logic2_pumCHW2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_pumCHW2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_pumCHW2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_pumCHW2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_pumCHW2_Medium_specificEnthalpy(threadData_t *threadData, logic2_pumCHW2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW2_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_Medium_specificEnthalpy,2,0) {(void*) boxptr_logic2_pumCHW2_Medium_specificEnthalpy,0}};
#define boxvar_logic2_pumCHW2_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_Medium_specificEnthalpy)


DLLDirection
logic2_pumCHW2_preSou_Medium_ThermodynamicState omc_logic2_pumCHW2_preSou_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_pumCHW2_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_preSou_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_pumCHW2_preSou_Medium_ThermodynamicState,0}};
#define boxvar_logic2_pumCHW2_preSou_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_preSou_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_pumCHW2_preSou_Medium_density(threadData_t *threadData, logic2_pumCHW2_preSou_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW2_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_preSou_Medium_density,2,0) {(void*) boxptr_logic2_pumCHW2_preSou_Medium_density,0}};
#define boxvar_logic2_pumCHW2_preSou_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_preSou_Medium_density)


DLLDirection
logic2_pumCHW2_preSou_Medium_ThermodynamicState omc_logic2_pumCHW2_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW2_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_preSou_Medium_setState__phX,2,0) {(void*) boxptr_logic2_pumCHW2_preSou_Medium_setState__phX,0}};
#define boxvar_logic2_pumCHW2_preSou_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_preSou_Medium_setState__phX)


DLLDirection
logic2_pumCHW2_vol_Medium_ThermodynamicState omc_logic2_pumCHW2_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_pumCHW2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_pumCHW2_vol_Medium_ThermodynamicState,0}};
#define boxvar_logic2_pumCHW2_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_vol_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_pumCHW2_vol_Medium_density(threadData_t *threadData, logic2_pumCHW2_vol_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW2_vol_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_vol_Medium_density,2,0) {(void*) boxptr_logic2_pumCHW2_vol_Medium_density,0}};
#define boxvar_logic2_pumCHW2_vol_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_vol_Medium_density)


DLLDirection
modelica_real omc_logic2_pumCHW2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_vol_Medium_temperature__phX,2,0) {(void*) boxptr_logic2_pumCHW2_vol_Medium_temperature__phX,0}};
#define boxvar_logic2_pumCHW2_vol_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_vol_Medium_temperature__phX)


DLLDirection
logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState omc_logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_pumCHW2_vol_dynBal_Medium_density(threadData_t *threadData, logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW2_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_vol_dynBal_Medium_density,2,0) {(void*) boxptr_logic2_pumCHW2_vol_dynBal_Medium_density,0}};
#define boxvar_logic2_pumCHW2_vol_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_vol_dynBal_Medium_density)


DLLDirection
logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState omc_logic2_pumCHW2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_vol_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_pumCHW2_vol_dynBal_Medium_setState__pTX,0}};
#define boxvar_logic2_pumCHW2_vol_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_vol_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_pumCHW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_vol_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_logic2_pumCHW2_vol_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_logic2_pumCHW2_vol_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_vol_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_logic2_pumCHW2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCHW2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_vol_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_pumCHW2_vol_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_pumCHW2_vol_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCHW2_vol_dynBal_Medium_specificInternalEnergy)


DLLDirection
logic2_pumCW_Medium_ThermodynamicState omc_logic2_pumCW_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_pumCW_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_pumCW_Medium_ThermodynamicState,0}};
#define boxvar_logic2_pumCW_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_pumCW_Medium_specificEnthalpy(threadData_t *threadData, logic2_pumCW_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCW_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW_Medium_specificEnthalpy,2,0) {(void*) boxptr_logic2_pumCW_Medium_specificEnthalpy,0}};
#define boxvar_logic2_pumCW_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW_Medium_specificEnthalpy)


DLLDirection
logic2_pumCW_preSou_Medium_ThermodynamicState omc_logic2_pumCW_preSou_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_pumCW_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW_preSou_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_pumCW_preSou_Medium_ThermodynamicState,0}};
#define boxvar_logic2_pumCW_preSou_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW_preSou_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_pumCW_preSou_Medium_density(threadData_t *threadData, logic2_pumCW_preSou_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCW_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW_preSou_Medium_density,2,0) {(void*) boxptr_logic2_pumCW_preSou_Medium_density,0}};
#define boxvar_logic2_pumCW_preSou_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW_preSou_Medium_density)


DLLDirection
logic2_pumCW_preSou_Medium_ThermodynamicState omc_logic2_pumCW_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_pumCW_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW_preSou_Medium_setState__phX,2,0) {(void*) boxptr_logic2_pumCW_preSou_Medium_setState__phX,0}};
#define boxvar_logic2_pumCW_preSou_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW_preSou_Medium_setState__phX)


DLLDirection
logic2_pumCW_vol_Medium_ThermodynamicState omc_logic2_pumCW_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_pumCW_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_pumCW_vol_Medium_ThermodynamicState,0}};
#define boxvar_logic2_pumCW_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW_vol_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_pumCW_vol_Medium_density(threadData_t *threadData, logic2_pumCW_vol_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCW_vol_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW_vol_Medium_density,2,0) {(void*) boxptr_logic2_pumCW_vol_Medium_density,0}};
#define boxvar_logic2_pumCW_vol_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW_vol_Medium_density)


DLLDirection
modelica_real omc_logic2_pumCW_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_pumCW_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW_vol_Medium_temperature__phX,2,0) {(void*) boxptr_logic2_pumCW_vol_Medium_temperature__phX,0}};
#define boxvar_logic2_pumCW_vol_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW_vol_Medium_temperature__phX)


DLLDirection
logic2_pumCW_vol_dynBal_Medium_ThermodynamicState omc_logic2_pumCW_vol_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_pumCW_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW_vol_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_pumCW_vol_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_pumCW_vol_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW_vol_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_pumCW_vol_dynBal_Medium_density(threadData_t *threadData, logic2_pumCW_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCW_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW_vol_dynBal_Medium_density,2,0) {(void*) boxptr_logic2_pumCW_vol_dynBal_Medium_density,0}};
#define boxvar_logic2_pumCW_vol_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW_vol_dynBal_Medium_density)


DLLDirection
logic2_pumCW_vol_dynBal_Medium_ThermodynamicState omc_logic2_pumCW_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_pumCW_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW_vol_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_pumCW_vol_dynBal_Medium_setState__pTX,0}};
#define boxvar_logic2_pumCW_vol_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW_vol_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_pumCW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_pumCW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW_vol_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_logic2_pumCW_vol_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_logic2_pumCW_vol_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW_vol_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_logic2_pumCW_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_pumCW_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCW_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW_vol_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_pumCW_vol_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_pumCW_vol_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW_vol_dynBal_Medium_specificInternalEnergy)


DLLDirection
logic2_pumCW2_Medium_ThermodynamicState omc_logic2_pumCW2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_pumCW2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_pumCW2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_pumCW2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW2_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_pumCW2_Medium_specificEnthalpy(threadData_t *threadData, logic2_pumCW2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCW2_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW2_Medium_specificEnthalpy,2,0) {(void*) boxptr_logic2_pumCW2_Medium_specificEnthalpy,0}};
#define boxvar_logic2_pumCW2_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW2_Medium_specificEnthalpy)


DLLDirection
logic2_pumCW2_preSou_Medium_ThermodynamicState omc_logic2_pumCW2_preSou_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_pumCW2_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW2_preSou_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_pumCW2_preSou_Medium_ThermodynamicState,0}};
#define boxvar_logic2_pumCW2_preSou_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW2_preSou_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_pumCW2_preSou_Medium_density(threadData_t *threadData, logic2_pumCW2_preSou_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCW2_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW2_preSou_Medium_density,2,0) {(void*) boxptr_logic2_pumCW2_preSou_Medium_density,0}};
#define boxvar_logic2_pumCW2_preSou_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW2_preSou_Medium_density)


DLLDirection
logic2_pumCW2_preSou_Medium_ThermodynamicState omc_logic2_pumCW2_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_pumCW2_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW2_preSou_Medium_setState__phX,2,0) {(void*) boxptr_logic2_pumCW2_preSou_Medium_setState__phX,0}};
#define boxvar_logic2_pumCW2_preSou_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW2_preSou_Medium_setState__phX)


DLLDirection
logic2_pumCW2_vol_Medium_ThermodynamicState omc_logic2_pumCW2_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_pumCW2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW2_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_pumCW2_vol_Medium_ThermodynamicState,0}};
#define boxvar_logic2_pumCW2_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW2_vol_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_pumCW2_vol_Medium_density(threadData_t *threadData, logic2_pumCW2_vol_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCW2_vol_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW2_vol_Medium_density,2,0) {(void*) boxptr_logic2_pumCW2_vol_Medium_density,0}};
#define boxvar_logic2_pumCW2_vol_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW2_vol_Medium_density)


DLLDirection
modelica_real omc_logic2_pumCW2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_pumCW2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW2_vol_Medium_temperature__phX,2,0) {(void*) boxptr_logic2_pumCW2_vol_Medium_temperature__phX,0}};
#define boxvar_logic2_pumCW2_vol_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW2_vol_Medium_temperature__phX)


DLLDirection
logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState omc_logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_pumCW2_vol_dynBal_Medium_density(threadData_t *threadData, logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCW2_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW2_vol_dynBal_Medium_density,2,0) {(void*) boxptr_logic2_pumCW2_vol_dynBal_Medium_density,0}};
#define boxvar_logic2_pumCW2_vol_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW2_vol_dynBal_Medium_density)


DLLDirection
logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState omc_logic2_pumCW2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_pumCW2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW2_vol_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_logic2_pumCW2_vol_dynBal_Medium_setState__pTX,0}};
#define boxvar_logic2_pumCW2_vol_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW2_vol_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_logic2_pumCW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_logic2_pumCW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW2_vol_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_logic2_pumCW2_vol_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_logic2_pumCW2_vol_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW2_vol_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_logic2_pumCW2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_pumCW2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_pumCW2_vol_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_logic2_pumCW2_vol_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_logic2_pumCW2_vol_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_logic2_pumCW2_vol_dynBal_Medium_specificInternalEnergy)


DLLDirection
logic2_val1_Medium_ThermodynamicState omc_logic2_val1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_val1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_val1_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_val1_Medium_ThermodynamicState,0}};
#define boxvar_logic2_val1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_val1_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_val1_Medium_dynamicViscosity(threadData_t *threadData, logic2_val1_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_val1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_val1_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_val1_Medium_dynamicViscosity,0}};
#define boxvar_logic2_val1_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_val1_Medium_dynamicViscosity)


DLLDirection
logic2_val5_Medium_ThermodynamicState omc_logic2_val5_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_val5_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_val5_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_val5_Medium_ThermodynamicState,0}};
#define boxvar_logic2_val5_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_val5_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_val5_Medium_dynamicViscosity(threadData_t *threadData, logic2_val5_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_val5_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_val5_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_val5_Medium_dynamicViscosity,0}};
#define boxvar_logic2_val5_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_val5_Medium_dynamicViscosity)


DLLDirection
logic2_val6_Medium_ThermodynamicState omc_logic2_val6_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_val6_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_val6_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_val6_Medium_ThermodynamicState,0}};
#define boxvar_logic2_val6_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_val6_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_val6_Medium_dynamicViscosity(threadData_t *threadData, logic2_val6_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_val6_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_val6_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_val6_Medium_dynamicViscosity,0}};
#define boxvar_logic2_val6_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_val6_Medium_dynamicViscosity)


DLLDirection
logic2_val7_Medium_ThermodynamicState omc_logic2_val7_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_val7_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_val7_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_val7_Medium_ThermodynamicState,0}};
#define boxvar_logic2_val7_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_val7_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_val7_Medium_dynamicViscosity(threadData_t *threadData, logic2_val7_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_val7_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_val7_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_val7_Medium_dynamicViscosity,0}};
#define boxvar_logic2_val7_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_val7_Medium_dynamicViscosity)


DLLDirection
logic2_val8_Medium_ThermodynamicState omc_logic2_val8_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_val8_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_val8_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_val8_Medium_ThermodynamicState,0}};
#define boxvar_logic2_val8_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_val8_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_val8_Medium_dynamicViscosity(threadData_t *threadData, logic2_val8_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_val8_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_val8_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_val8_Medium_dynamicViscosity,0}};
#define boxvar_logic2_val8_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_val8_Medium_dynamicViscosity)


DLLDirection
logic2_val8__2_Medium_ThermodynamicState omc_logic2_val8__2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_val8__2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_val8__2_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_val8__2_Medium_ThermodynamicState,0}};
#define boxvar_logic2_val8__2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_val8__2_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_val8__2_Medium_dynamicViscosity(threadData_t *threadData, logic2_val8__2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_val8__2_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_val8__2_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_val8__2_Medium_dynamicViscosity,0}};
#define boxvar_logic2_val8__2_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_val8__2_Medium_dynamicViscosity)


DLLDirection
logic2_valByp_Medium_ThermodynamicState omc_logic2_valByp_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_logic2_valByp_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_valByp_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_valByp_Medium_ThermodynamicState,0}};
#define boxvar_logic2_valByp_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_valByp_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_logic2_valByp_Medium_dynamicViscosity(threadData_t *threadData, logic2_valByp_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_logic2_valByp_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_valByp_Medium_dynamicViscosity,2,0) {(void*) boxptr_logic2_valByp_Medium_dynamicViscosity,0}};
#define boxvar_logic2_valByp_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_logic2_valByp_Medium_dynamicViscosity)


DLLDirection
logic2_vol_Medium_ThermodynamicState omc_logic2_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_vol_Medium_ThermodynamicState,0}};
#define boxvar_logic2_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_vol_Medium_ThermodynamicState)


DLLDirection
logic2_vol_dynBal_Medium_ThermodynamicState omc_logic2_vol_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X);

DLLDirection
modelica_metatype boxptr_logic2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_logic2_vol_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_logic2_vol_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_logic2_vol_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_logic2_vol_dynBal_Medium_ThermodynamicState)
#include "logic2_raw_model.h"


#ifdef __cplusplus
}
#endif
#endif
