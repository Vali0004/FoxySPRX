#pragma once
#include "memory/memory.h"
#include "memory/module.h"

namespace memory {
	namespace util {
		extern optional<u8> charToHex(char const c);
		extern vectorr<optional<u8>> toBytes(string str);
		extern bool memoryCmp(u8* addr, optional<u8>* sig, st size);
		extern u64 findPattern(vectorr<optional<u8>> bytes, moduleHandle handle = {});
	}
}