#ifndef _GCOV_DUMP_CONFIG_H_
#define _GCOV_DUMP_CONFIG_H_

#define ATTRIBUTE_NORETURN
#define ATTRIBUTE_UNUSED
#define ATTRIBUTE_PRINTF_1
#define ATTRIBUTE_PRINTF_2

/**
 * this macro definition is for the following warning.
 * In file included from gcov.c:62:
 * gcov-io.c: In function ¡®gcov_allocate¡¯:
 * gcov-io.c:204: warning: implicit declaration of function ¡®xrealloc¡¯
 * gcov-io.c:204: warning: assignment makes pointer from integer without a cast
 */
#define xrealloc realloc

#include "auto-host.h"
#ifdef IN_GCC
/* # include "ansidecl.h" */
#endif
#endif /* _GCOV_DUMP_CONFIG_H_ */
