#pragma once
#include "memory/memory.h"
#include "memory/util.h"

namespace memory {
	class scanner {
	public:
		scanner(ccp name, ccp pattern, moduleHandle mod = {}) :
			m_name(name), m_pattern(pattern), m_module(mod), m_elements(util::toBytes(m_pattern))
		{
		}
	public:
		mem get() {
			mem res{ util::findPattern(m_elements, m_module) };
			if (res) {
				g_logger.send("Info", "Found %s at 0x%lX", m_name, (u32)res.as<u32*>());
			}
			else {
				g_logger.send("Info", "Failed to find %s", m_name);
			}
			return res;
		}
	private:
		string m_name{};
		string m_pattern{};
		moduleHandle m_module{};
		vectorr<optional<u8>> m_elements{};
	};
}