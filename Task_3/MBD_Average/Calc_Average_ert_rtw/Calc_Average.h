/*
 * File: Calc_Average.h
 *
 * Code generated for Simulink model 'Calc_Average'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 21 17:22:53 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Calc_Average_h_
#define RTW_HEADER_Calc_Average_h_
#include <string.h>
#include <stddef.h>
#ifndef Calc_Average_COMMON_INCLUDES_
#define Calc_Average_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Calc_Average_COMMON_INCLUDES_ */

#include "Calc_Average_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Array[10];                    /* '<Root>/Array' */
} ExtU_Calc_Average_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Sum;                          /* '<Root>/Sum' */
  real_T min;                          /* '<Root>/min' */
  real_T max;                          /* '<Root>/max' */
  real_T Average;                      /* '<Root>/Average' */
} ExtY_Calc_Average_T;

/* Real-time Model Data Structure */
struct tag_RTM_Calc_Average_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Calc_Average_T Calc_Average_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Calc_Average_T Calc_Average_Y;

/* Model entry point functions */
extern void Calc_Average_initialize(void);
extern void Calc_Average_step(void);
extern void Calc_Average_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Calc_Average_T *const Calc_Average_M;

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
 * '<Root>' : 'Calc_Average'
 * '<S1>'   : 'Calc_Average/ArrSum'
 * '<S2>'   : 'Calc_Average/Subsystem'
 */
#endif                                 /* RTW_HEADER_Calc_Average_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
