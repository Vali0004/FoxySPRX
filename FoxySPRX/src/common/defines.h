#pragma once
#include "version.h"
#define MARK_AS_EXECUTABLE __attribute__((section(".text")))
#define SLEEP(t) sys_timer_sleep(t);
#define USLEEP(t) sys_timer_usleep(t * 1000);
#define CONVERT_TIME_VALUE(v) v * 1000
#define MICROS_TO_MS(v) CONVERT_TIME_VALUE(v)
#define ARRAYSIZE(a) (sizeof(a) / sizeof(*(a)))
#define STRINGIFY(v) #v
#define TRAMPOLINE_PAGE_SIZE 1024
#define printf _sys_printf
#define snprintf _sys_snprintf
#define sprintf _sys_sprintf
#define vsnprintf _sys_vsnprintf
#define strncasecmp _sys_strncasecmp
#define strncat _sys_strncat
#define strncpy _sys_strncpy
#define strncmp _sys_strncmp
#define malloc _sys_malloc
#define free _sys_free
#define memalign _sys_memalign
#define memcmp _sys_memcmp
#define memcpy _sys_memcpy
#define memmove _sys_memmove