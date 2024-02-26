/*
 * File: Bitwise_Calc.c
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

#include "Bitwise_Calc.h"
#include "Bitwise_Calc_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Bitwise_Calc_T Bitwise_Calc_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Bitwise_Calc_T Bitwise_Calc_Y;

/* Real-time model */
static RT_MODEL_Bitwise_Calc_T Bitwise_Calc_M_;
RT_MODEL_Bitwise_Calc_T *const Bitwise_Calc_M = &Bitwise_Calc_M_;

/* Model step function */
void Bitwise_Calc_step(void)
{
  uint32_T rtb_XOR;

  /* Outport: '<Root>/Num1 NOT' incorporates:
   *  Inport: '<Root>/In1'
   *  S-Function (sfix_bitop): '<S1>/num1 NOT'
   */
  Bitwise_Calc_Y.Num1NOT = ~Bitwise_Calc_U.In1;

  /* Outport: '<Root>/Num2 NOT' incorporates:
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<S1>/num2 NOT1'
   */
  Bitwise_Calc_Y.Num2NOT = ~Bitwise_Calc_U.In2;

  /* Outport: '<Root>/AND_OUT' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<S1>/AND'
   */
  Bitwise_Calc_Y.AND_OUT = Bitwise_Calc_U.In1 & Bitwise_Calc_U.In2;

  /* Outport: '<Root>/OR_OUT' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<S1>/OR'
   */
  Bitwise_Calc_Y.OR_OUT = Bitwise_Calc_U.In1 | Bitwise_Calc_U.In2;

  /* S-Function (sfix_bitop): '<S1>/XOR' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   */
  rtb_XOR = Bitwise_Calc_U.In1 ^ Bitwise_Calc_U.In2;

  /* Outport: '<Root>/XNOR OUT' incorporates:
   *  S-Function (sfix_bitop): '<S1>/XNOR'
   */
  Bitwise_Calc_Y.XNOROUT = ~rtb_XOR;

  /* Outport: '<Root>/XOR OUT' */
  Bitwise_Calc_Y.XOROUT = rtb_XOR;
}

/* Model initialize function */
void Bitwise_Calc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Bitwise_Calc_M, (NULL));

  /* external inputs */
  (void)memset(&Bitwise_Calc_U, 0, sizeof(ExtU_Bitwise_Calc_T));

  /* external outputs */
  (void) memset((void *)&Bitwise_Calc_Y, 0,
                sizeof(ExtY_Bitwise_Calc_T));
}

/* Model terminate function */
void Bitwise_Calc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
