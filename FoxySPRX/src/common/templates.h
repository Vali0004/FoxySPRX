#pragma once
#include "pch/pch.h"

using st = size_t;
using u64 = uint64_t;
using ppu_thr_t = u64;
using s64 = int64_t;
using u32 = uint32_t;
using s32 = int32_t;
using u16 = uint16_t;
using s16 = int16_t;
using u8 = uint8_t;
using s8 = int8_t;
using cc = const char;
using ccp = cc*;
using buf_t = char*;
using fp = float;
using db = double;

template <typename t>
using fnptr = t(*);