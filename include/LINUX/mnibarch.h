#include <opencbm.h>
#include <unistd.h>

#define delay(x)  usleep((x) * 1000)
#define msleep(x) delay(x)

#define ARCH_MAINDECL
#define ARCH_SIGNALDECL

typedef unsigned char BYTE;

// __int32 and min() are needed for bitshifter.c (included by fileio.c)
typedef int32_t __int32;

#ifndef min
#define min(x, y) ((x) > (y) ? (y) : (x))
#endif
