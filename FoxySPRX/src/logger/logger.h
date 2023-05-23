#pragma once
#include "include.h"
#include "common/string.h"

struct logger {
	void create(ccp name);
	void destroy();
	void vasend(ccp type, ccp fmt, std::va_list args);
	void send(ccp type, ccp fmt, ...);
	ccp basePath{};
	ccp filename{};
	ccp path{};
};
extern logger g_logger;