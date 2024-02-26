/*
 * File: untitled_private.h
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

#ifndef RTW_HEADER_untitled_private_h_
#define RTW_HEADER_untitled_private_h_
#include "rtwtypes.h"
#include "untitled.h"

extern void mul_wide_u32(uint32_T in0, uint32_T in1, uint32_T *ptrOutBitsHi,
  uint32_T *ptrOutBitsLo);
extern uint32_T mul_u32_sat(uint32_T a, uint32_T b);
extern void Fac_For_Init(DW_Fac_For_T *localDW);
extern void Fac_For(const uint32_T rtu_In1[5], B_Fac_For_T *localB, DW_Fac_For_T
                    *localDW);
extern void Fac_Matlab(uint32_T rtu_u, B_Fac_Matlab_T *localB);
extern void Fac_While_Init(DW_Fac_While_T *localDW);
extern void Fac_While(uint32_T rtu_u1, uint32_T rtu_IC, B_Fac_While_T *localB,
                      DW_Fac_While_T *localDW);

#endif                                 /* RTW_HEADER_untitled_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
