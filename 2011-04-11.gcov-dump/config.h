#ifndef _GCOV_DUMP_CONFIG_H_
#define _GCOV_DUMP_CONFIG_H_

#define ATTRIBUTE_NORETURN
#define ATTRIBUTE_UNUSED
#define ATTRIBUTE_PRINTF_1
#define ATTRIBUTE_PRINTF_2

#define xrealloc realloc

#include "auto-host.h"
#ifdef IN_GCC
/* # include "ansidecl.h" */
#endif
#endif /* _GCOV_DUMP_CONFIG_H_ */
