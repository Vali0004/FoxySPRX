#pragma once
#include "defines.h"
#include "templates.h"

template <typename t>
class element {
public:
	template <typename p>
	p ptr() {
		return p(pointer);
	}
	void set(ccp name, t value) {
		key = name;
		item = value;
		pointer = (t*)value;
	}
	t item{};
	t* pointer{};
	ccp key{};
};
template <typename t>
class map {
public:
	void create(u32 s) {
		preallocatedSize = s;
		table = (element<t>*)malloc(sizeof(element<t>) * preallocatedSize);
	}
	void destory() {
		free((void*)table);
		size = 0;
	}
	void realloc(st newSize) {
		element<t>* tmp{ table };
		memcpy(tmp, table, size);
		table = (element<t>*)malloc(sizeof(element<t>) * newSize);
		for (u32 i{}; i != size; ++i) {
			table[i] = tmp[i];
		}
	}
	void add(ccp key, t item) {
		element<t> tmp{};
		tmp.set(key, item);
		if (size > preallocatedSize || !preallocatedSize)
			realloc(size + 1);
		table[size] = tmp;
		size++;
	}
	t get(ccp key) {
		return getElement(key)->item;
	}
	element<t>* getElement(ccp key) {
		for (u32 i{}; i != size; ++i) {
			if (table[i].key == key) {
				return &table[i];
			}
		}
		return nullptr;
	}
	element<t>* table{};
	u32 size{};
	u32 preallocatedSize{};
};