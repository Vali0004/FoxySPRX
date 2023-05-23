#pragma once
#include "scr_value.h"
#include "scr_vector.h"
#include <cstddef>

namespace rage {
	class scrNativeCallContext {
	public:
		void reset() {
			ArgCount = 0;
		}
		template <typename t>
		t& getArg(std::size_t index) {
			static_assert(sizeof(t) <= sizeof(std::uint64_t));
			return *reinterpret_cast<t*>(reinterpret_cast<std::uint64_t*>(Args) + index);
		}
		template <typename t>
		t* getRetValue() {
			return reinterpret_cast<t*>(Return);
		}
	public:
		scrValue* Return; //0x0000
		uint32_t ArgCount; //0x0004
		scrValue* Args; //0x000C
	};
}