#pragma once
#include "pch/pch.h"
#include "templates.h"
#include "defines.h"

template <typename t>
class vectorr { //why does vector math have a define to define it away? the fuck....
public:
	void reserve(s32 s) {
		preallocatedSize = s;
		table = (t*)malloc(sizeof(t) * preallocatedSize);
	}
	void clear() {
		free((void*)table);
		count = 0;
	}
	bool empty() {
		return !table && !count;
	}
	void push_back(t item) {
		t tmp{ item };
		if (size() > preallocatedSize || !preallocatedSize)
			realloc(size() + 1);
		table[count] = tmp;
		count++;
	}
	t get(s32 index) {
		if (index > size())
			return {};
		return data()[index];
	}
	s32 size() {
		return count;
	}
	t operator[](int index) {
		return get(index);
	}
	t* begin() { return data(); }
	t* end() { return data() + size(); }
	const t* begin() const { return data(); }
	const t* end() const { return data() + size(); }
	t* data() {
		return table;
	}
private:
	void realloc(s32 newSize) {
		t* tmp{ table };
		memcpy(tmp, table, size());
		table = (t*)malloc(sizeof(t) * newSize);
		for (u32 i{}; i != size(); ++i) {
			table[i] = tmp[i];
		}
	}
	t* table{};
	s32 count{};
	s32 preallocatedSize{};
};