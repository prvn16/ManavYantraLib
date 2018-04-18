/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: sqrt.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 18-Apr-2018 06:23:17
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "faceTrackingARMKernel.h"
#include "sqrt.h"

/* Function Definitions */

/*
 * Arguments    : emxArray_real32_T *x
 * Return Type  : void
 */
void b_sqrt(emxArray_real32_T *x)
{
  int nx;
  int k;
  nx = x->size[0] * x->size[1];
  for (k = 0; k < nx; k++) {
    x->data[k] = (float)sqrt(x->data[k]);
  }
}

/*
 * Arguments    : float *x
 * Return Type  : void
 */
void c_sqrt(float *x)
{
  *x = (float)sqrt(*x);
}

/*
 * File trailer for sqrt.c
 *
 * [EOF]
 */
