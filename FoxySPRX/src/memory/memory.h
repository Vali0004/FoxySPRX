#pragma once
#include "include.h"

struct opd_s {
    u32 func;
    u32 toc;
};

struct importStub_s {
    int16_t ssize;
    int16_t header1;
    int16_t header2;
    int16_t imports;
    s32 zero1;
    s32 zero2;
    ccp name;
    u32* fnid;
    opd_s** stub;
    s32 zero3;
    s32 zero4;
    s32 zero5;
    s32 zero6;
};

struct exportStub_s {
    int16_t ssize;
    int16_t header1;
    int16_t header2;
    int16_t exports; // number of exports
    s32 zero1;
    s32 zero2;
    const char* name;
    u32* fnid;
    opd_s** stub;
};

extern u32 GetCurrentToc();
extern int WriteProcessMemory(u32 pid, void* address, const void* data, size_t size);
extern int ReadProcessMemory(u32 pid, void* address, void* data, size_t size);

template <typename ret, typename ...t>
__ALWAYS_INLINE ret call(u32 addr, t... args) {
    volatile opd_s opd{ addr, GetCurrentToc() };
    ret(*fn)(t...) = (ret(*)(t...)) & opd;
    return fn(args...);
}