/*
 * File: Grading_System.c
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

#include "Grading_System.h"
#include "Grading_System_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Grading_System_T Grading_System_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Grading_System_T Grading_System_Y;

/* Real-time model */
static RT_MODEL_Grading_System_T Grading_System_M_;
RT_MODEL_Grading_System_T *const Grading_System_M = &Grading_System_M_;

/* Model step function */
void Grading_System_step(void)
{
  /* If: '<S1>/If' incorporates:
   *  Inport: '<Root>/In1'
   *  Outport: '<Root>/Out1'
   *  StringConstant: '<S2>/String Constant'
   *  StringConstant: '<S3>/String Constant'
   *  StringConstant: '<S4>/String Constant'
   *  StringConstant: '<S5>/String Constant'
   *  StringConstant: '<S6>/String Constant'
   */
  if (Grading_System_U.In1 >= 85.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&Grading_System_Y.Out1[0],
            &Grading_System_ConstP.StringConstant_String[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    Grading_System_Y.Out1[255] = '\x00';
  } else if (Grading_System_U.In1 >= 75.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&Grading_System_Y.Out1[0],
            &Grading_System_ConstP.StringConstant_String_g[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    Grading_System_Y.Out1[255] = '\x00';
  } else if (Grading_System_U.In1 >= 65.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    strncpy(&Grading_System_Y.Out1[0],
            &Grading_System_ConstP.StringConstant_String_e[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
    Grading_System_Y.Out1[255] = '\x00';
  } else if (Grading_System_U.In1 >= 55.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    strncpy(&Grading_System_Y.Out1[0],
            &Grading_System_ConstP.StringConstant_String_o[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem3' */
    Grading_System_Y.Out1[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    strncpy(&Grading_System_Y.Out1[0],
            &Grading_System_ConstP.StringConstant_String_m[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem4' */
    Grading_System_Y.Out1[255] = '\x00';
  }

  /* End of If: '<S1>/If' */
}

/* Model initialize function */
void Grading_System_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Grading_System_M, (NULL));

  /* external inputs */
  Grading_System_U.In1 = 0.0;

  /* external outputs */
  (void) memset(&Grading_System_Y.Out1[0], 0,
                256U*sizeof(char_T));
}

/* Model terminate function */
void Grading_System_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
