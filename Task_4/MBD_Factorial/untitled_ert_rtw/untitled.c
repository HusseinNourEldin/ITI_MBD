/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 22 01:26:24 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Block signals (default storage) */
B_untitled_T untitled_B;

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* External inputs (root inport signals with default storage) */
ExtU_untitled_T untitled_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_untitled_T untitled_Y;

/* Real-time model */
static RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;
void mul_wide_u32(uint32_T in0, uint32_T in1, uint32_T *ptrOutBitsHi, uint32_T
                  *ptrOutBitsLo)
{
  uint32_T in0Hi;
  uint32_T in0Lo;
  uint32_T in1Hi;
  uint32_T in1Lo;
  uint32_T outBitsLo;
  uint32_T productHiLo;
  uint32_T productLoHi;
  in0Hi = in0 >> 16U;
  in0Lo = in0 & 65535U;
  in1Hi = in1 >> 16U;
  in1Lo = in1 & 65535U;
  productHiLo = in0Hi * in1Lo;
  productLoHi = in0Lo * in1Hi;
  in0Lo *= in1Lo;
  in1Lo = 0U;
  outBitsLo = (productLoHi << /*MW:OvBitwiseOk*/ 16U) + /*MW:OvCarryOk*/ in0Lo;
  if (outBitsLo < in0Lo) {
    in1Lo = 1U;
  }

  in0Lo = outBitsLo;
  outBitsLo += /*MW:OvCarryOk*/ productHiLo << /*MW:OvBitwiseOk*/ 16U;
  if (outBitsLo < in0Lo) {
    in1Lo++;
  }

  *ptrOutBitsHi = (((productLoHi >> 16U) + (productHiLo >> 16U)) + in0Hi * in1Hi)
    + in1Lo;
  *ptrOutBitsLo = outBitsLo;
}

uint32_T mul_u32_sat(uint32_T a, uint32_T b)
{
  uint32_T result;
  uint32_T u32_chi;
  mul_wide_u32(a, b, &u32_chi, &result);
  if (u32_chi) {
    result = MAX_uint32_T;
  }

  return result;
}

/* System initialize for atomic system: '<Root>/Factorial_For' */
void Fac_For_Init(DW_Fac_For_T *localDW)
{
  /* SystemInitialize for Iterator SubSystem: '<S1>/For Iterator Subsystem' */
  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay' */
  localDW->UnitDelay_DSTATE = 1U;

  /* End of SystemInitialize for SubSystem: '<S1>/For Iterator Subsystem' */
}

/* Output and update for atomic system: '<Root>/Factorial_For' */
void Fac_For(const uint32_T rtu_In1[5], B_Fac_For_T *localB, DW_Fac_For_T
             *localDW)
{
  int32_T s4_iter;

  /* Outputs for Iterator SubSystem: '<S1>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S4>/For Iterator'
   */
  for (s4_iter = 0; s4_iter < 5; s4_iter++) {
    /* DotProduct: '<S4>/Dot Product' incorporates:
     *  MultiPortSwitch: '<S4>/Index Vector'
     *  UnitDelay: '<S4>/Unit Delay'
     */
    localB->DotProduct = rtu_In1[s4_iter] * localDW->UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S4>/Unit Delay' */
    localDW->UnitDelay_DSTATE = localB->DotProduct;
  }

  /* End of Outputs for SubSystem: '<S1>/For Iterator Subsystem' */
}

/* Output and update for atomic system: '<Root>/Factorial_Matlab' */
void Fac_Matlab(uint32_T rtu_u, B_Fac_Matlab_T *localB)
{
  uint32_T u;
  u = rtu_u;

  /* MATLAB Function 'Factorial_Matlab': '<S2>:1' */
  /* '<S2>:1:2' y = uint32(1); */
  localB->y = 1U;

  /* '<S2>:1:3' while u > 0 */
  while (u > 0U) {
    /* '<S2>:1:4' y = y .* u; */
    localB->y = mul_u32_sat(localB->y, u);

    /* '<S2>:1:5' u = u - 1; */
    u--;
  }
}

/* System initialize for atomic system: '<Root>/Subsystem' */
void Fac_While_Init(DW_Fac_While_T *localDW)
{
  /* SystemInitialize for Iterator SubSystem: '<S3>/Factorial_While' */
  /* InitializeConditions for UnitDelay: '<S5>/Unit Delay' */
  localDW->UnitDelay_DSTATE = 1U;

  /* End of SystemInitialize for SubSystem: '<S3>/Factorial_While' */
}

/* Output and update for atomic system: '<Root>/Subsystem' */
void Fac_While(uint32_T rtu_u1, uint32_T rtu_IC, B_Fac_While_T *localB,
               DW_Fac_While_T *localDW)
{
  int32_T s5_iter;
  boolean_T loopCond;

  /* Outputs for Iterator SubSystem: '<S3>/Factorial_While' incorporates:
   *  WhileIterator: '<S5>/While Iterator'
   */
  s5_iter = 1;
  loopCond = (rtu_IC != 0U);
  while (loopCond && (s5_iter <= 4)) {
    /* DotProduct: '<S5>/Dot Product' incorporates:
     *  MultiPortSwitch: '<S5>/Index Vector'
     *  UnitDelay: '<S5>/Unit Delay'
     */
    localB->DotProduct = rtu_u1 * localDW->UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S5>/Unit Delay' */
    localDW->UnitDelay_DSTATE = localB->DotProduct;
    s5_iter++;
  }

  /* End of Outputs for SubSystem: '<S3>/Factorial_While' */
}

/* Model step function */
void untitled_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Factorial_For' */

  /* Inport: '<Root>/In1' */
  Fac_For(untitled_U.In1, &untitled_B.Factorial_For, &untitled_DW.Factorial_For);

  /* End of Outputs for SubSystem: '<Root>/Factorial_For' */

  /* Outport: '<Root>/Out1' */
  untitled_Y.Out1 = untitled_B.Factorial_For.DotProduct;

  /* MATLAB Function: '<Root>/Factorial_Matlab' incorporates:
   *  Inport: '<Root>/u'
   */
  Fac_Matlab(untitled_U.u, &untitled_B.sf_Factorial_Matlab);

  /* Outport: '<Root>/y' */
  untitled_Y.y = untitled_B.sf_Factorial_Matlab.y;

  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */

  /* Inport: '<Root>/u1' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  Fac_While(untitled_U.u1, 1U, &untitled_B.Subsystem, &untitled_DW.Subsystem);

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */

  /* Outport: '<Root>/Out2' */
  untitled_Y.Out2 = untitled_B.Subsystem.DotProduct;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(untitled_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &untitled_B), 0,
                sizeof(B_untitled_T));

  /* states (dwork) */
  (void) memset((void *)&untitled_DW, 0,
                sizeof(DW_untitled_T));

  /* external inputs */
  (void)memset(&untitled_U, 0, sizeof(ExtU_untitled_T));

  /* external outputs */
  (void) memset((void *)&untitled_Y, 0,
                sizeof(ExtY_untitled_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/Factorial_For' */
  Fac_For_Init(&untitled_DW.Factorial_For);

  /* End of SystemInitialize for SubSystem: '<Root>/Factorial_For' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subsystem' */
  Fac_While_Init(&untitled_DW.Subsystem);

  /* End of SystemInitialize for SubSystem: '<Root>/Subsystem' */
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
