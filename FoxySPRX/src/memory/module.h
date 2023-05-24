#pragma once
#include "memory.h"

namespace memory {
	class moduleHandle {
	public:
		moduleHandle() {
			m_begin = 0x10200;
			m_end = 0x2269700;
			m_size = m_end.as<u64>() - m_begin.as<u64>();
		}
	public:
		mem m_begin{}, m_end{};
		s64 m_size{};
	};
}