/*
 * File: Calc_Average.c
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

#include "Calc_Average.h"
#include "Calc_Average_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Calc_Average_T Calc_Average_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Calc_Average_T Calc_Average_Y;

/* Real-time model */
static RT_MODEL_Calc_Average_T Calc_Average_M_;
RT_MODEL_Calc_Average_T *const Calc_Average_M = &Calc_Average_M_;

/* Model step function */
void Calc_Average_step(void)
{
  real_T minV;
  real_T rtb_SumofElements;
  real_T u1;
  int32_T sigIdx;

  /* Sum: '<S1>/Sum of Elements' incorporates:
   *  Inport: '<Root>/Array'
   */
  rtb_SumofElements = -0.0;
  for (sigIdx = 0; sigIdx < 10; sigIdx++) {
    rtb_SumofElements += Calc_Average_U.Array[sigIdx];
  }

  /* End of Sum: '<S1>/Sum of Elements' */

  /* Outport: '<Root>/Sum' */
  Calc_Average_Y.Sum = rtb_SumofElements;

  /* MinMax: '<S1>/MinMax' incorporates:
   *  Inport: '<Root>/Array'
   */
  minV = Calc_Average_U.Array[0];
  for (sigIdx = 0; sigIdx < 9; sigIdx++) {
    u1 = Calc_Average_U.Array[sigIdx + 1];
    if ((!(minV < u1)) && (!rtIsNaN(u1))) {
      minV = u1;
    }
  }

  /* Outport: '<Root>/min' incorporates:
   *  MinMax: '<S1>/MinMax'
   */
  Calc_Average_Y.min = minV;

  /* MinMax: '<S1>/MinMax1' incorporates:
   *  Inport: '<Root>/Array'
   */
  minV = Calc_Average_U.Array[0];
  for (sigIdx = 0; sigIdx < 9; sigIdx++) {
    u1 = Calc_Average_U.Array[sigIdx + 1];
    if ((!(minV > u1)) && (!rtIsNaN(u1))) {
      minV = u1;
    }
  }

  /* Outport: '<Root>/max' incorporates:
   *  MinMax: '<S1>/MinMax1'
   */
  Calc_Average_Y.max = minV;

  /* Outport: '<Root>/Average' incorporates:
   *  Constant: '<S2>/Constant'
   *  Product: '<S2>/Divide'
   */
  Calc_Average_Y.Average = rtb_SumofElements / 10.0;
}

/* Model initialize function */
void Calc_Average_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(Calc_Average_M, (NULL));

  /* external inputs */
  (void)memset(&Calc_Average_U, 0, sizeof(ExtU_Calc_Average_T));

  /* external outputs */
  (void) memset((void *)&Calc_Average_Y, 0,
                sizeof(ExtY_Calc_Average_T));
}

/* Model terminate function */
void Calc_Average_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
