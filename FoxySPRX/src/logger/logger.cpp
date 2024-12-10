#include "logger.h"

logger g_logger{};

void logger::create(ccp name) {
	basePath = "/dev_hdd0/tmp/";
	filename = name;
	path = string_combine(basePath, filename);
	createFile(path);
	writeToFile(path, (char*)"Logger created\n", 15, false);
}
void logger::destroy() {
	basePath = "";
	filename = "";
	path = "";
}
void logger::vasend(ccp type, ccp fmt, std::va_list args) {
	u32 strSize{ strlen(fmt) + sizeof(args) + 50 };
	buf_t fmtMessage = new char[strSize];
	vsnprintf(fmtMessage, strSize, fmt, args);
	buf_t message = new char[strlen(type) + strlen(fmtMessage) + 3];
	snprintf(message, strSize - 1, "%s | %s\n", type, fmtMessage);
	delete fmtMessage;
	writeToFile(path, message, strlen(message));
	printf(message);
	delete message;
}
void logger::send(ccp type, ccp fmt, ...) {
	std::va_list args{};
	va_start(args, fmt);
	vasend(type, fmt, args);
	va_end(args);
}