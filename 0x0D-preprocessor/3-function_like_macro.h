#ifndef _FUNCTION_LIKE_MACRO_H
#define _FUNCTION_LIKE_MACRO_H

#include <stdlib.h>

int abs(int j);
int abs(int i);

#define ABS(x) (((x) >= 0) ? (x) : -(x))

#endif /* _FUNCTION_LIKE_MACRO_H */
