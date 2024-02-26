/*
 * File: Grading_System.h
 *
 * Code generated for Simulink model 'Grading_System'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 22 01:54:02 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Grading_System_h_
#define RTW_HEADER_Grading_System_h_
#include <string.h>
#include <stddef.h>
#ifndef Grading_System_COMMON_INCLUDES_
#define Grading_System_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Grading_System_COMMON_INCLUDES_ */

#include "Grading_System_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: StringConstant_String
   * Referenced by: '<S2>/String Constant'
   */
  char_T StringConstant_String[256];

  /* Computed Parameter: StringConstant_String_g
   * Referenced by: '<S3>/String Constant'
   */
  char_T StringConstant_String_g[256];

  /* Computed Parameter: StringConstant_String_e
   * Referenced by: '<S4>/String Constant'
   */
  char_T StringConstant_String_e[256];

  /* Computed Parameter: StringConstant_String_o
   * Referenced by: '<S5>/String Constant'
   */
  char_T StringConstant_String_o[256];

  /* Computed Parameter: StringConstant_String_m
   * Referenced by: '<S6>/String Constant'
   */
  char_T StringConstant_String_m[256];
} ConstP_Grading_System_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_Grading_System_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
} ExtY_Grading_System_T;

/* Real-time Model Data Structure */
struct tag_RTM_Grading_System_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Grading_System_T Grading_System_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Grading_System_T Grading_System_Y;

/* Constant parameters (default storage) */
extern const ConstP_Grading_System_T Grading_System_ConstP;

/* Model entry point functions */
extern void Grading_System_initialize(void);
extern void Grading_System_step(void);
extern void Grading_System_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Grading_System_T *const Grading_System_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Display' : Unused code path elimination
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
 * '<Root>' : 'Grading_System'
 * '<S1>'   : 'Grading_System/Grading_Sys'
 * '<S2>'   : 'Grading_System/Grading_Sys/If Action Subsystem'
 * '<S3>'   : 'Grading_System/Grading_Sys/If Action Subsystem1'
 * '<S4>'   : 'Grading_System/Grading_Sys/If Action Subsystem2'
 * '<S5>'   : 'Grading_System/Grading_Sys/If Action Subsystem3'
 * '<S6>'   : 'Grading_System/Grading_Sys/If Action Subsystem4'
 */
#endif                                 /* RTW_HEADER_Grading_System_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
