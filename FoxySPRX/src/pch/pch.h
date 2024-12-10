#pragma once
#define __SCE_LIB_DECLARE_BY_C
#define __SCE_MODULE_LINK_TRIGGER_BY_C
#include <xstddef>
#include <new>
#include <cstdlib>
#include <math.h>
#include <typeinfo>
#include <ppu_asm_intrinsics.h>
#include <pthread.h>
#include <locale.h>
#include <time.h>
#include <cellstatus.h>
#include <wchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <assert.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <yvals.h>
#include <cell/error.h>
#include <cell/cell_fs.h>
#include <cell/fs/cell_fs_file_api.h>
#include <cell/sysmodule.h>
#include <cell/atomic.h>
#include <sysutil/sysutil_oskdialog.h>
#include <sysutil/sysutil_msgdialog.h>
#include <cell/rtc.h>
#include <sys/socket.h>
#include <sys/prx.h>
#include <sys/syscall.h>
#include <sys/ppu_thread.h>
#include <sys/sys_time.h>
#include <sys/time_util.h>
#include <sys/types.h> 
#include <sys/stat.h>
#include <sys/process.h>
#include <sys/memory.h>
#include <sys/timer.h>
#include <sys/return_code.h>
#include <sys/paths.h>
#include <sys/fs.h>
#include <sys/fs_external.h>
#include <net/if_dl.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h> 
#include <np.h>

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
	int _sys_memcmp(const void* dset, const void* src, size_t size);
	void* _sys_memchr(const void* dest, int value, size_t size);
	void* _sys_memcpy(void* dest, const void* src, size_t size);
	void* _sys_memmove(void* dest, const void* src, size_t size);
	char* _sys_strrchr(const char* str, int c);
	char* _sys_strcat(char* dest, const char* src);
	char* _sys_strchr(const char* dest, int c);
	int _sys_strcmp(const char* str, const char* str2);
	char* _sys_strcpy(char* dest, const char* src);
	size_t _sys_strlen(const char* str);
	int _sys_tolower(int c);
	int _sys_toupper(int c);
}