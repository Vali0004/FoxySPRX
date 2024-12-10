#pragma once

namespace rage {
	union scrValue {
		int Int;
		unsigned Uns;
		float Float;
		const char* String;
		scrValue* Reference;
		size_t Any;
		bool operator==(const scrValue& val) {
			return Int == val.Int;
		}
	};
}