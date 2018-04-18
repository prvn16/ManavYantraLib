/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: bbox2points.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 18-Apr-2018 06:23:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "faceTrackingARMKernel.h"
#include "bbox2points.h"

/* Function Definitions */

/*
 * Arguments    : const double bbox_data[]
 *                const int bbox_size[2]
 *                double points[8]
 * Return Type  : void
 */
void bbox2points(const double bbox_data[], const int bbox_size[2], double
                 points[8])
{
  points[0] = bbox_data[0];
  points[4] = bbox_data[bbox_size[0]];
  points[1] = bbox_data[0] + bbox_data[bbox_size[0] << 1];
  points[5] = bbox_data[bbox_size[0]];
  points[2] = bbox_data[0] + bbox_data[bbox_size[0] << 1];
  points[6] = bbox_data[bbox_size[0]] + bbox_data[bbox_size[0] * 3];
  points[3] = bbox_data[0];
  points[7] = bbox_data[bbox_size[0]] + bbox_data[bbox_size[0] * 3];
}

/*
 * File trailer for bbox2points.c
 *
 * [EOF]
 */
