#pragma once
#include "pch/pch.h"
#include "defines.h"
#include "templates.h"

class string {
public:
	string();
	string(ccp str);
	string(const string& other);
	string(size_t size);
	string(size_t size, char initValue);
	~string();

	size_t size() const {
		return size_;
	}
	ccp str() const {
		return data_;
	}
	buf_t data() const {
		return data_;
	}
	bool empty() const {
		return size_;
	}
	void clear() {
		delete[] data_;
		size_ = 0;
	}
	buf_t begin() {
		return &data_[0];
	}
	buf_t end() {
		return &data_[size()];
	}
	string substr(s32 startIdx, s32 endIdx = -1) {
		if (endIdx == -1) {
			return &begin()[startIdx];
		}
		s32 len = endIdx - startIdx;
		buf_t dest = new char[len]();
		strncpy(dest, (begin() + startIdx), len);
		delete dest;
		return dest;
	}
	void insert(size_t pos, ccp str);
	void insert(size_t pos, char c);
	template <size_t s>
	void append(const char(&str)[s]);
	void append(string str);
	void append(char c);
	string& operator+(s32 value);
	string& operator+(db value);
	string& operator+(fp value);
	string& operator+(const string& other);
	string& operator=(const string& other);
	char operator[](size_t index) {
		return begin()[index];
	}
private:
	buf_t data_{};
	size_t size_{};
};