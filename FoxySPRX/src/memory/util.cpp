#include "util.h"

namespace memory {
	namespace util {
		optional<u8> charToHex(char const c) {
			if (c >= 'a' && c <= 'f')
				return static_cast<u8>(c) - u8(87);
			else if (c >= 'A' && c <= 'F')
				return static_cast<u8>(c) - u8(55);
			else if (c >= '0' && c <= '9')
				return static_cast<u8>(c) - u8(48);
			return nullopt;
		}
		vectorr<optional<u8>> toBytes(string str) {
			vectorr<optional<u8>> bytes{};
			for (st i{}; i != str.size() - 1; ++i) {
				if (str[i] == ' ')
					continue;
				if (str[i] != '?') {
					optional<u8> c1{ charToHex(str[i]) };
					optional<u8> c2{ charToHex(str[i + 1]) };
					if (c1 && c2)
						bytes.push_back(static_cast<u8>((*c1 * 0x10) + *c2));
				}
				else {
					bytes.push_back({});
				}
			}
			return bytes;
		}
		bool memoryCmp(u8* addr, optional<u8>* sig, st size) {
			for (st i{}; i != size; ++i) {
				if (sig[i] && addr[i] != *sig[i]) {
					return false;
				}
			}
			return true;
		}
		u64 findPattern(vectorr<optional<u8>> bytes, moduleHandle handle) {
			for (u64 i{}; i != handle.m_size; ++i) {
				if (memoryCmp(handle.m_begin.add(i).as<u8*>(), bytes.data(), bytes.size()))
					return handle.m_begin.as<u64>() + i;
			}
			return NULL;
		}
	}
}