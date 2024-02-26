/*
 * File: Even_Odd.h
 *
 * Code generated for Simulink model 'Even_Odd'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 22 02:16:55 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Even_Odd_h_
#define RTW_HEADER_Even_Odd_h_
#include <string.h>
#include <stddef.h>
#ifndef Even_Odd_COMMON_INCLUDES_
#define Even_Odd_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Even_Odd_COMMON_INCLUDES_ */

#include "Even_Odd_types.h"

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
   * Referenced by: '<S3>/String Constant'
   */
  char_T StringConstant_String[256];

  /* Computed Parameter: StringConstant_String_o
   * Referenced by: '<S2>/String Constant'
   */
  char_T StringConstant_String_o[256];
} ConstP_Even_Odd_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T In1;                         /* '<Root>/In1' */
} ExtU_Even_Odd_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
} ExtY_Even_Odd_T;

/* Real-time Model Data Structure */
struct tag_RTM_Even_Odd_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Even_Odd_T Even_Odd_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Even_Odd_T Even_Odd_Y;

/* Constant parameters (default storage) */
extern const ConstP_Even_Odd_T Even_Odd_ConstP;

/* Model entry point functions */
extern void Even_Odd_initialize(void);
extern void Even_Odd_step(void);
extern void Even_Odd_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Even_Odd_T *const Even_Odd_M;

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
 * '<Root>' : 'Even_Odd'
 * '<S1>'   : 'Even_Odd/Subsystem'
 * '<S2>'   : 'Even_Odd/Subsystem/If Action Subsystem1'
 * '<S3>'   : 'Even_Odd/Subsystem/If Action Subsystem2'
 */
#endif                                 /* RTW_HEADER_Even_Odd_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
