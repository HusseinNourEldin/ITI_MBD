/*
 * File: Calculator.c
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

#include "Calculator.h"
#include "Calculator_private.h"

/* Block signals (default storage) */
B_Calculator_T Calculator_B;

/* External inputs (root inport signals with default storage) */
ExtU_Calculator_T Calculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Calculator_T Calculator_Y;

/* Real-time model */
static RT_MODEL_Calculator_T Calculator_M_;
RT_MODEL_Calculator_T *const Calculator_M = &Calculator_M_;

/* Output and update for atomic system: '<Root>/Caclulator' */
void SimpleCalculator(real_T rtu_In1, real_T rtu_In2, real_T rtu_In3,
                      B_SimpleCalculator_T *localB)
{
  /* Sum: '<S1>/Add' */
  localB->Add = rtu_In1 + rtu_In2;

  /* Product: '<S1>/Divide' */
  localB->Divide = rtu_In1 / rtu_In2;

  /* DotProduct: '<S1>/Dot Product' */
  localB->DotProduct = rtu_In1 * rtu_In2;

  /* RelationalOperator: '<S1>/Relational Operator' incorporates:
   *  Constant: '<S1>/Constant'
   */
  localB->RelationalOperator = (rtu_In2 == 0.0);

  /* Sum: '<S1>/Subtract' */
  localB->Subtract = rtu_In1 - rtu_In2;

  /* Sum: '<S1>/Add1' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  localB->Add1 = rtu_In3 + 1.0;

  /* Sum: '<S1>/Subtract1' incorporates:
   *  Constant: '<S1>/Constant1'
   */
  localB->Subtract1 = rtu_In3 - 1.0;

  /* UnaryMinus: '<S1>/Unary Minus' */
  localB->UnaryMinus = -rtu_In3;
}

/* Model step function */
void Calculator_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Caclulator' */

  /* Inport: '<Root>/Num1' incorporates:
   *  Inport: '<Root>/Num2'
   *  Inport: '<Root>/Num3'
   */
  SimpleCalculator(Calculator_U.Num1, Calculator_U.Num2, Calculator_U.Num3,
                   &Calculator_B.Caclulator);

  /* End of Outputs for SubSystem: '<Root>/Caclulator' */

  /* Outport: '<Root>/Addition' */
  Calculator_Y.Addition = Calculator_B.Caclulator.Add;

  /* Outport: '<Root>/Subtraction' */
  Calculator_Y.Subtraction = Calculator_B.Caclulator.Subtract;

  /* Outport: '<Root>/Multiplication' */
  Calculator_Y.Multiplication = Calculator_B.Caclulator.DotProduct;

  /* Outport: '<Root>/Division' */
  Calculator_Y.Division = Calculator_B.Caclulator.Divide;

  /* Outport: '<Root>/Error' */
  Calculator_Y.Error = Calculator_B.Caclulator.RelationalOperator;

  /* Outport: '<Root>/Unary minus' */
  Calculator_Y.Unaryminus = Calculator_B.Caclulator.UnaryMinus;

  /* Outport: '<Root>/Increment' */
  Calculator_Y.Increment = Calculator_B.Caclulator.Add1;

  /* Outport: '<Root>/Decrement' */
  Calculator_Y.Decrement = Calculator_B.Caclulator.Subtract1;
}

/* Model initialize function */
void Calculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Calculator_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Calculator_B), 0,
                sizeof(B_Calculator_T));

  /* external inputs */
  (void)memset(&Calculator_U, 0, sizeof(ExtU_Calculator_T));

  /* external outputs */
  (void) memset((void *)&Calculator_Y, 0,
                sizeof(ExtY_Calculator_T));
}

/* Model terminate function */
void Calculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
