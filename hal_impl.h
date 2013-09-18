// This header belongs to HAL implementation.

// It includes hal_interface.h header and defines macros,
// describing which functions are provided by this HAL.

// This header is used for static build.

#ifndef HAL_IMPL_H
#define HAL_IMPL_H

#include "hal_interface.h"
#include <stdio.h>

//#define CV_HAL_HAS_HAMMING_DIST
#define CV_HAL_HAS_RESIZE
#define CV_HAL_HAS_ERODE

// This functions can be used only in static build as inlined

#ifndef CV_HAL_INLINE
#  if defined __cplusplus
#    define CV_HAL_INLINE static inline
#  elif defined _MSC_VER
#    define CV_HAL_INLINE __inline
#  else
#    define CV_HAL_INLINE static
#  endif
#endif

#define CV_HAL_HAS_ROUND
CV_HAL_INLINE int cvhal_round(double val)
{
    printf("round from HAL\n");
    return (int) (val + 0.5);
}

#endif
