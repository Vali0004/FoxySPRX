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
extern sys_prx_id_t GetModuleHandle(ccp moduleName);
extern sys_prx_module_info_t GetModuleInfo(sys_prx_id_t handle);

namespace memory {
    class mem {
    public:
        template <typename ptr_t = u64>
        mem* set_ptr(ptr_t p) {
            m_ptr = (u64)p;
            return this;
        }
        mem(void* p) { set_ptr(p); }
        mem(u64 p) { set_ptr(p); }
        mem() { set_ptr(nullptr); }
    public:
        template <typename t>
        t as() { return reinterpret_cast<t>(m_ptr); }
        mem add(u64 offset) { return mem(as<u64>() + offset); }
        mem sub(u64 offset) { return mem(as<u64>() - offset); }
        template <typename t>
        t deref() { return *reinterpret_cast<t*>(m_ptr); }
        //What the fuck is this shit? PowerPC moment
        mem ripClass(u64 offset = 0) { return mem((add(2).deref<u16>() << 16) + add(offset).deref<s16>()); }
        mem ripFn(u64 offset = 0) { return mem(add(offset).deref<s32>() & 0xFFFFFE); }
    public:
        operator bool() noexcept { return m_ptr; }
    private:
        u64 m_ptr{};
    };
    template <typename ret, typename ...t>
    __ALWAYS_INLINE ret call(u32 addr, t... args) {
        volatile opd_s opd{ addr, GetCurrentToc() };
        ret(*fn)(t...) = (ret(*)(t...)) & opd;
        return fn(args...);
    }
}