/*
 * File: eye.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 23-Feb-2017 16:43:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "BayesCurFit.h"
#include "eye.h"
#include "BayesCurFit_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : float varargin_1
 *                emxArray_real_T *I
 * Return Type  : void
 */
void eye(float varargin_1, emxArray_real_T *I)
{
  int k;
  int loop_ub;
  k = I->size[0] * I->size[1];
  I->size[0] = (int)varargin_1;
  I->size[1] = (int)varargin_1;
  emxEnsureCapacity((emxArray__common *)I, k, (int)sizeof(double));
  loop_ub = (int)varargin_1 * (int)varargin_1;
  for (k = 0; k < loop_ub; k++) {
    I->data[k] = 0.0;
  }

  if ((int)varargin_1 > 0) {
    for (k = 0; k + 1 <= (int)varargin_1; k++) {
      I->data[k + I->size[0] * k] = 1.0;
    }
  }
}

/*
 * File trailer for eye.c
 *
 * [EOF]
 */
