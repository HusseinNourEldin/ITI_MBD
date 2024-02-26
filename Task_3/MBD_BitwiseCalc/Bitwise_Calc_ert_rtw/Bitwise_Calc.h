/*
 * File: Bitwise_Calc.h
 *
 * Code generated for Simulink model 'Bitwise_Calc'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 21 17:46:46 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Bitwise_Calc_h_
#define RTW_HEADER_Bitwise_Calc_h_
#include <string.h>
#include <stddef.h>
#ifndef Bitwise_Calc_COMMON_INCLUDES_
#define Bitwise_Calc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Bitwise_Calc_COMMON_INCLUDES_ */

#include "Bitwise_Calc_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint32_T In1;                        /* '<Root>/In1' */
  uint32_T In2;                        /* '<Root>/In2' */
} ExtU_Bitwise_Calc_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint32_T Num1NOT;                    /* '<Root>/Num1 NOT' */
  uint32_T Num2NOT;                    /* '<Root>/Num2 NOT' */
  uint32_T AND_OUT;                    /* '<Root>/AND_OUT' */
  uint32_T OR_OUT;                     /* '<Root>/OR_OUT' */
  uint32_T XNOROUT;                    /* '<Root>/XNOR OUT' */
  uint32_T XOROUT;                     /* '<Root>/XOR OUT' */
} ExtY_Bitwise_Calc_T;

/* Real-time Model Data Structure */
struct tag_RTM_Bitwise_Calc_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Bitwise_Calc_T Bitwise_Calc_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Bitwise_Calc_T Bitwise_Calc_Y;

/* Model entry point functions */
extern void Bitwise_Calc_initialize(void);
extern void Bitwise_Calc_step(void);
extern void Bitwise_Calc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Bitwise_Calc_T *const Bitwise_Calc_M;

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
 * '<Root>' : 'Bitwise_Calc'
 * '<S1>'   : 'Bitwise_Calc/BitwiseCalc'
 */
#endif                                 /* RTW_HEADER_Bitwise_Calc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
