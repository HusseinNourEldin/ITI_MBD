/*
 * File: Calculator.h
 *
 * Code generated for Simulink model 'Calculator'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 21 14:45:07 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Calculator_h_
#define RTW_HEADER_Calculator_h_
#include <string.h>
#include <stddef.h>
#ifndef Calculator_COMMON_INCLUDES_
#define Calculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Calculator_COMMON_INCLUDES_ */

#include "Calculator_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<Root>/Caclulator' */
typedef struct {
  real_T Add;                          /* '<S1>/Add' */
  real_T Divide;                       /* '<S1>/Divide' */
  real_T DotProduct;                   /* '<S1>/Dot Product' */
  real_T Subtract;                     /* '<S1>/Subtract' */
  real_T Add1;                         /* '<S1>/Add1' */
  real_T Subtract1;                    /* '<S1>/Subtract1' */
  real_T UnaryMinus;                   /* '<S1>/Unary Minus' */
  boolean_T RelationalOperator;        /* '<S1>/Relational Operator' */
} B_SimpleCalculator_T;

/* Block signals (default storage) */
typedef struct {
  B_SimpleCalculator_T Caclulator;     /* '<Root>/Caclulator' */
} B_Calculator_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Num1;                         /* '<Root>/Num1' */
  real_T Num2;                         /* '<Root>/Num2' */
  real_T Num3;                         /* '<Root>/Num3' */
} ExtU_Calculator_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Addition;                     /* '<Root>/Addition' */
  real_T Subtraction;                  /* '<Root>/Subtraction' */
  real_T Multiplication;               /* '<Root>/Multiplication' */
  real_T Division;                     /* '<Root>/Division' */
  boolean_T Error;                     /* '<Root>/Error' */
  real_T Unaryminus;                   /* '<Root>/Unary minus' */
  real_T Increment;                    /* '<Root>/Increment' */
  real_T Decrement;                    /* '<Root>/Decrement' */
} ExtY_Calculator_T;

/* Real-time Model Data Structure */
struct tag_RTM_Calculator_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_Calculator_T Calculator_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_Calculator_T Calculator_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Calculator_T Calculator_Y;

/* Model entry point functions */
extern void Calculator_initialize(void);
extern void Calculator_step(void);
extern void Calculator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Calculator_T *const Calculator_M;

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
 * '<Root>' : 'Calculator'
 * '<S1>'   : 'Calculator/Caclulator'
 */
#endif                                 /* RTW_HEADER_Calculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
