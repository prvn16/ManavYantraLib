/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: faceTrackingARMKernel_emxutil.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 18-Apr-2018 06:23:17
 */

#ifndef FACETRACKINGARMKERNEL_EMXUTIL_H
#define FACETRACKINGARMKERNEL_EMXUTIL_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "faceTrackingARMKernel_types.h"

/* Function Declarations */
extern void c_emxFreeStruct_vision_internal(vision_internal_cornerPoints_cg
  *pStruct);
extern void c_emxInitStruct_vision_internal(vision_internal_cornerPoints_cg
  *pStruct);
extern void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray, int
  oldNumel);
extern void emxEnsureCapacity_boolean_T1(emxArray_boolean_T *emxArray, int
  oldNumel);
extern void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int oldNumel);
extern void emxEnsureCapacity_int32_T1(emxArray_int32_T *emxArray, int oldNumel);
extern void emxEnsureCapacity_real32_T(emxArray_real32_T *emxArray, int oldNumel);
extern void emxEnsureCapacity_real32_T1(emxArray_real32_T *emxArray, int
  oldNumel);
extern void emxEnsureCapacity_real32_T2(emxArray_real32_T *emxArray, int
  oldNumel);
extern void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel);
extern void emxEnsureCapacity_real_T1(emxArray_real_T *emxArray, int oldNumel);
extern void emxEnsureCapacity_uint8_T(emxArray_uint8_T *emxArray, int oldNumel);
extern void emxFreeMatrix_cell_wrap_62(cell_wrap_62 pMatrix[2]);
extern void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);
extern void emxFree_real32_T(emxArray_real32_T **pEmxArray);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxFree_uint8_T(emxArray_uint8_T **pEmxArray);
extern void emxInitMatrix_cell_wrap_62(cell_wrap_62 pMatrix[2]);
extern void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int numDimensions);
extern void emxInit_boolean_T1(emxArray_boolean_T **pEmxArray, int numDimensions);
extern void emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions);
extern void emxInit_int32_T1(emxArray_int32_T **pEmxArray, int numDimensions);
extern void emxInit_real32_T(emxArray_real32_T **pEmxArray, int numDimensions);
extern void emxInit_real32_T1(emxArray_real32_T **pEmxArray, int numDimensions);
extern void emxInit_real32_T2(emxArray_real32_T **pEmxArray, int numDimensions);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);
extern void emxInit_real_T1(emxArray_real_T **pEmxArray, int numDimensions);
extern void emxInit_uint8_T(emxArray_uint8_T **pEmxArray, int numDimensions);

#endif

/*
 * File trailer for faceTrackingARMKernel_emxutil.h
 *
 * [EOF]
 */
