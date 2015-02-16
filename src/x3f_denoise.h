#ifndef X3F_DENOISE_H
#define X3F_DENOISE_H

#include "x3f_io.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {X3F_DENOISE_STD=0, X3F_DENOISE_F20=1} x3f_denoise_type_t;

extern void x3f_denoise(x3f_area_t *image, x3f_denoise_type_t type);

#ifdef __cplusplus
}
#endif

#endif
