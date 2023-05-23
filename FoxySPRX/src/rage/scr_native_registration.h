#pragma once
#include <cstddef>

namespace rage {
	using scrCmd = void(*)(class scrNativeCallContext*);
	using scrNativeHash = unsigned int;
	class scrNativeRegistration {
	public:
		scrNativeRegistration* m_next;
		scrCmd m_handlers[7];
		uint32_t m_num_entries;
		scrNativeHash m_hashes[7];

		scrNativeRegistration* get_next_registration() {
			return m_next;
		}
		uint32_t get_num_entries() {
			return m_num_entries;
		}
		scrNativeHash get_hash(uint32_t index) {
			return m_hashes[index];
		}
	};
}