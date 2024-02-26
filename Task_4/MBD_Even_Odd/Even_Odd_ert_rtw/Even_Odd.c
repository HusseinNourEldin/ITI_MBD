/*
 * File: Even_Odd.c
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

#include "Even_Odd.h"
#include "Even_Odd_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Even_Odd_T Even_Odd_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Even_Odd_T Even_Odd_Y;

/* Real-time model */
static RT_MODEL_Even_Odd_T Even_Odd_M_;
RT_MODEL_Even_Odd_T *const Even_Odd_M = &Even_Odd_M_;

/* Model step function */
void Even_Odd_step(void)
{
  /* If: '<S1>/If' incorporates:
   *  Inport: '<Root>/In1'
   *  Outport: '<Root>/Out1'
   *  S-Function (sfix_bitop): '<S1>/Bitwise Operator'
   *  StringConstant: '<S2>/String Constant'
   *  StringConstant: '<S3>/String Constant'
   */
  if ((Even_Odd_U.In1 & 1U) == 0U) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&Even_Odd_Y.Out1[0], &Even_Odd_ConstP.StringConstant_String[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
    Even_Odd_Y.Out1[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&Even_Odd_Y.Out1[0], &Even_Odd_ConstP.StringConstant_String_o[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    Even_Odd_Y.Out1[255] = '\x00';
  }

  /* End of If: '<S1>/If' */
}

/* Model initialize function */
void Even_Odd_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Even_Odd_M, (NULL));

  /* external inputs */
  Even_Odd_U.In1 = 0U;

  /* external outputs */
  (void) memset(&Even_Odd_Y.Out1[0], 0,
                256U*sizeof(char_T));
}

/* Model terminate function */
void Even_Odd_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
