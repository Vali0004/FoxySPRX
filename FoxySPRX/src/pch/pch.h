#pragma once
#define __SCE_LIB_DECLARE_BY_C
#define __SCE_MODULE_LINK_TRIGGER_BY_C
#include <cellstatus.h>
#include <sys/prx.h>
#include <sys/memory.h>
#include <sys/process.h>
#include <sys/ppu_thread.h>
#include <sys/timer.h>
#include <cell/cell_fs.h>
#include <cell/sysmodule.h>
#include <cell/rtc.h>
#include <ppu_asm_intrinsics.h> // __ALWAYS_INLINE
#include <stdint.h>
#include <string.h>
#include <yvals.h>
#include <xstddef>
#include <new>

extern "C" {
	int _sys_printf(const char* fmt, ...);
	int _sys_snprintf(char* buffer, size_t len, const char* fmt, ...);
	int _sys_sprintf(char* buffer, const char* fmt, ...);
	int _sys_vsnprintf(char* buffer, size_t buf_size, const char* format, va_list arg);
	int _sys_strncasecmp(const char* dest, const char* src, size_t size);
	char*_sys_strncat(char* dest, const char* src, size_t size);
	int	_sys_strncmp(const char* dest, const char* src, size_t size);
	char* _sys_strncpy(char* dest, const char* src, size_t size);
	void* _sys_malloc(size_t size);
	void _sys_free(void* ptr);
	void* _sys_memalign(size_t boundary, size_t size);
	int _sys_memcmp(const void* s1, const void* s2, size_t size);
	void* _sys_memcpy(void* dest, const void* src, size_t size);
	void* _sys_memmove(void* dest, const void* src, size_t size);
}
#pragma hdrstop