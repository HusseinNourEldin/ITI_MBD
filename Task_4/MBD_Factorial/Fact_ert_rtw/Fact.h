/*
 * File: Fact.h
 *
 * Code generated for Simulink model 'Fact'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 22 01:33:02 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Fact_h_
#define RTW_HEADER_Fact_h_
#include <string.h>
#include <stddef.h>
#ifndef Fact_COMMON_INCLUDES_
#define Fact_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Fact_COMMON_INCLUDES_ */

#include "Fact_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<Root>/Factorial_For' */
typedef struct {
  uint32_T DotProduct;                 /* '<S4>/Dot Product' */
} B_Fac_For_T;

/* Block states (default storage) for system '<Root>/Factorial_For' */
typedef struct {
  uint32_T UnitDelay_DSTATE;           /* '<S4>/Unit Delay' */
} DW_Fac_For_T;

/* Block signals for system '<Root>/Factorial_Matlab' */
typedef struct {
  uint32_T y;                          /* '<Root>/Factorial_Matlab' */
} B_Fac_Matlab_T;

/* Block signals for system '<Root>/Subsystem' */
typedef struct {
  uint32_T DotProduct;                 /* '<S5>/Dot Product' */
} B_Fac_While_T;

/* Block states (default storage) for system '<Root>/Subsystem' */
typedef struct {
  uint32_T UnitDelay_DSTATE;           /* '<S5>/Unit Delay' */
} DW_Fac_While_T;

/* Block signals (default storage) */
typedef struct {
  B_Fac_While_T Subsystem;             /* '<Root>/Subsystem' */
  B_Fac_Matlab_T sf_Factorial_Matlab;  /* '<Root>/Factorial_Matlab' */
  B_Fac_For_T Factorial_For;           /* '<Root>/Factorial_For' */
} B_Fact_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  DW_Fac_While_T Subsystem;            /* '<Root>/Subsystem' */
  DW_Fac_For_T Factorial_For;          /* '<Root>/Factorial_For' */
} DW_Fact_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint32_T In1[5];                     /* '<Root>/In1' */
  uint32_T u;                          /* '<Root>/u' */
  uint32_T u1;                         /* '<Root>/u1' */
} ExtU_Fact_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint32_T Out1;                       /* '<Root>/Out1' */
  uint32_T y;                          /* '<Root>/y' */
  uint32_T Out2;                       /* '<Root>/Out2' */
} ExtY_Fact_T;

/* Real-time Model Data Structure */
struct tag_RTM_Fact_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_Fact_T Fact_B;

/* Block states (default storage) */
extern DW_Fact_T Fact_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Fact_T Fact_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Fact_T Fact_Y;

/* Model entry point functions */
extern void Fact_initialize(void);
extern void Fact_step(void);
extern void Fact_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Fact_T *const Fact_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Constant1' : Unused code path elimination
 * Block '<Root>/Constant2' : Unused code path elimination
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Fact'
 * '<S1>'   : 'Fact/Factorial_For'
 * '<S2>'   : 'Fact/Factorial_Matlab'
 * '<S3>'   : 'Fact/Subsystem'
 * '<S4>'   : 'Fact/Factorial_For/For Iterator Subsystem'
 * '<S5>'   : 'Fact/Subsystem/Factorial_While'
 */
#endif                                 /* RTW_HEADER_Fact_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
