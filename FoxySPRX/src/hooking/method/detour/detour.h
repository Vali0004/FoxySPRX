#pragma once
#include "include.h"

struct hookInformation {
	sys_prx_module_info_t moduleInfo{};
	uint32_t bytes[4]{};
};
struct detour {
	detour() = default;
	detour(uint64_t address, uint64_t callback);
	virtual ~detour();
	virtual void createHook(uint64_t address, uint64_t callback, uint64_t tocOverride = 0);
	virtual bool removeHook();
	template<typename ret, typename ...t>
	ret callOriginal(t... args) {
		auto fn = (fnptr<ret(t...)>)(m_trampolineOpd);
		return fn(args...);
	}
private:
	size_t jump(void* destination, const void* branchTarget, bool linked, bool preserveRegister);
	size_t jumpWithOptions(void* destination, const void* branchTarget, bool linked, bool preserveRegister, uint32_t branchOptions, uint8_t conditionRegisterBit, uint8_t registerIndex);
	size_t relocateBranch(uint32_t* destination, uint32_t* source);
	size_t relocateCode(uint32_t* destination, uint32_t* source);
	size_t getHookSize(const void* branchTarget, bool linked, bool preserveRegister);
	bool getHookInfo(uint64_t address, hookInformation& info);
protected:
	const void* m_targetAddress{};
	void* m_functionAddress{};
	uint8_t* m_trampolineAddress{};
	uint32_t m_trampolineOpd[2]{};
	uint8_t m_instructions[30]{};
	size_t m_instructionBufferSize{};
	MARK_AS_EXECUTABLE static uint8_t m_trampoline[TRAMPOLINE_PAGE_SIZE];
	static size_t m_trampolineSize;
};