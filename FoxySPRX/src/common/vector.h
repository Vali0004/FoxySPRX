#pragma once
#include "pch/pch.h"
#include "templates.h"
#include "defines.h"

template <typename t>
class vectorr {
public:
	void create(s32 s) {
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
	void realloc(s32 newSize) {
		t* tmp{ table };
		memcpy(tmp, table, count);
		table = (t*)malloc(sizeof(t) * newSize);
		for (u32 i{}; i != count; ++i) {
			table[i] = tmp[i];
		}
	}
	void add(t item) {
		t tmp{ item };
		if (count > preallocatedSize || !preallocatedSize)
			realloc(count + 1);
		table[count] = tmp;
		count++;
	}
	t get(s32 index) {
		if (index > count)
			return NULL;
		return table[index];
	}
	s32 size() {
		return count;
	}
	t operator[](int index) {
		return get(index);
	}
	t* table{};
	s32 count{};
	s32 preallocatedSize{};
};