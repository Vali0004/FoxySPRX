#pragma once
#include "pch/pch.h"
#include "common/opcodes.h"
#include "common/defines.h"
#include "common/templates.h"
#include "common/enums.h"
#include "common/map.h"
#include "common/vector.h"
#include "common/stack.h"
#include "common/string.h"
#include "common/timer.h"
#include "syscalls/syscalls.h"
extern class string;

extern void* operator new(st size) _THROW1(_XSTD bad_alloc);
extern void* operator new(st size, const _STD nothrow_t&) _THROW0();
extern void* operator new(st size, st align);
extern void* operator new(st size, st align, const _STD nothrow_t&);
extern void* operator new[](st size);
extern void* operator new[](st size, const _STD nothrow_t&);
extern void* operator new[](st size, st align);
extern void* operator new[](st size, st align, const _STD nothrow_t&);
extern void operator delete(void* mem);
extern void operator delete(void* mem, const _STD nothrow_t&);
extern void operator delete(void* ptr, void* prt2);
extern void operator delete(void* ptr, st align);
extern void operator delete(void* ptr, st align, const _STD nothrow_t&);
extern void operator delete(void* ptr, st align, void* prt2);
extern void operator delete[](void* mem) _THROW0();
extern void operator delete[](void* mem, const _STD nothrow_t&);
extern void operator delete[](void* ptr, void* prt2);
extern void operator delete[](void* ptr, st align);
extern void operator delete[](void* ptr, st align, const _STD nothrow_t&);
extern void operator delete[](void* ptr, st align, void* prt2);
extern void reverse(buf_t str, s32 length);
extern void itoa(s32 value, buf_t str);
extern string itos(s32 n);
extern string dtos(db n);
extern string ftos(fp n);
extern s32 lenstr(ccp str);
extern void concat_str(buf_t dest, ccp src, u64 count);
extern ccp string_combine(ccp str1, ccp str2);
extern ccp substr(ccp str, s32 start, s32 end = 0);
extern s32 find_last_of(ccp str, char c);
extern CellFsErrno createFile(ccp loc);
extern CellFsErrno writeToFile(ccp file, char buf[] = NULL, s32 size = 0, bool append = true);