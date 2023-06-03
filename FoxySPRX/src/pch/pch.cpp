#include "pch.h"
#include "rage/scr_native_registration.h"
#include "common/string.h"
#include "common/math.h"

namespace rage {
	char toLower(const char c) {
		return (c >= 'A' && c <= 'Z') ? c + ('a' - 'A') : c;
	}
  	unsigned int joaat(const char* str) {
		unsigned int hash{};
		while (*str) {
			hash += toLower(*str++);
			hash += (hash << 10);
			hash ^= (hash >> 6);
		}
		hash += (hash << 3);
		hash ^= (hash >> 11);
		hash += (hash << 15);
		return hash;
	}
}

void reverse(buf_t str, s32 length) {
	s32 start = 0;
	s32 end = length - 1;
	while (start < end) {
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
void itoa(s32 value, buf_t str) {
	s32 i{};
	bool isNegative{};
	if (value < 0) {
		isNegative = true;
		value = -value;
	}
	do {
		str[i++] = value % 10 + '0';
		value = value / 10;
	} while (value != 0);
	if (isNegative)
		str[i++] = '-';
	str[i] = '\0';
	reverse(str, i);
}
string itos(s32 n) {
	char str[2]{};
	itoa(n, str);
	return str;
}
//Percision can just eat dick ig, no real choice because anything eats memory like a motherfucker
string dtos(db n) {
	char str[32]{};
	s32 wholenumber{ (int)n };
	n -= wholenumber;
	n *= 100;
	sprintf(str, "%d.%d", wholenumber, (int)n);
	return str;
}
string ftos(fp n) {
	return dtos(static_cast<db>(n));
}
ccp string_combine(ccp str1, ccp str2) {
	s32 len1 = strlen(str1), len2 = strlen(str2);
	buf_t result = new char[len1 + len2 + 1];
	strncpy(result, str1, len1 + len2 + 1);
	strncat(result, str2, len2);
	result[len1 + len2] = '\0';
	return result;
}
ccp substr(ccp str, s32 start, s32 end) {
	buf_t tmp{};
	strncpy(tmp, str, strlen(str));
	if (end) {
		return &tmp[start];
	}
	else if (start) {
		strncpy(tmp, (ccp)(str + (end - 1)), strlen(str));
		return tmp;
	}
	return str;
}
s32 find_last_of(ccp str, char c) {
	s32 len = strlen(str);
	for (s32 i = len - 1; i >= 0; i--) {
		if (str[i] == c) {
			return i;
		}
	}
	return -1;
}
void mset(void* ptr, s32 value, u64 num) {
	u8* p = static_cast<u8*>(ptr);
	u8 byteValue = static_cast<u8>(value);
	for (u64 i{}; i != num; ++i) {
		*p++ = byteValue;
	}
}
CellFsErrno createFile(ccp loc) {
	s32 fd;
	CellFsErrno err{};
	err = cellFsOpen(loc, CELL_FS_O_CREAT | CELL_FS_O_RDWR | CELL_FS_O_TRUNC, &fd, NULL, 0);
	cellFsClose(fd);
	if (!err) {
		cellFsClose(fd);
	}
	return err;
}
CellFsErrno writeToFile(ccp file, char buf[], s32 size, bool append) {
	CellFsErrno err{};
	s32 fd{};
	u64 nwrite{};
	err = cellFsOpen(file, CELL_FS_O_RDWR | CELL_FS_O_APPEND | CELL_FS_O_CREAT, &fd, NULL, 0);
	if (!append)
		cellFsTruncate(file, 0);
	if (size != 0)
		err = cellFsWrite(fd, (const void*)buf, (u64)size, &nwrite);
	err = cellFsClose(fd);
	return err;
}

void* operator new(st size) _THROW1(_XSTD bad_alloc) {
    return malloc(size);
}
void* operator new(st size, const _STD nothrow_t&) _THROW0() {
    return malloc(size);
}
void* operator new(st size, st align) {
    return memalign(align, size);
}
void* operator new(st size, st align, const _STD nothrow_t&) _THROW0() {
    return memalign(align, size);
}
void* operator new[](st size) _THROW1(_XSTD bad_alloc) {
    return malloc(size);
}
void* operator new[](st size, const _STD nothrow_t&) _THROW0() {
    return malloc(size);
}
void* operator new[](st size, st align) {
    return operator new(size, align);
}
void* operator new[](st size, st align, const _STD nothrow_t&) _THROW0() {
    return operator new(size, align);
}
void operator delete(void* mem) _THROW0() {
    free(mem);
}
void operator delete(void* mem, const _STD nothrow_t&) _THROW0() {
    free(mem);
}
void operator delete(void* ptr, void* prt2) {
    return operator delete(ptr);
}
void operator delete(void* ptr, st align) {
    return operator delete(ptr);
}
void operator delete(void* ptr, st align, const _STD nothrow_t&) _THROW0() {
    return operator delete(ptr);
}
void operator delete(void* ptr, st align, void* prt2) {
    return operator delete(ptr);
}
void operator delete[](void* mem) _THROW0() {
    free(mem);
}
void operator delete[](void* mem, const _STD nothrow_t&) _THROW0() {
    free(mem);
}
void operator delete[](void* ptr, void* prt2) {
    return operator delete(ptr, prt2);
}
void operator delete[](void* ptr, st align) {
    return operator delete(ptr, align);
}
void operator delete[](void* ptr, st align, const _STD nothrow_t&) _THROW0() {
    return operator delete(ptr, align);
}
void operator delete[](void* ptr, st align, void* prt2) {
    return operator delete(ptr, align);
}

//I fucking hate the PS3 SDK, stg. This hurts
string::string() {
	data_ = new char[1];
	data_[0] = '\0';
	size_ = 0;
}
string::string(ccp str) {
	size_ = strlen(str);
	data_ = new char[size_ + 1];
	strncpy(data_, str, size_ + 1);
}
string::string(const string& other) {
	size_ = other.size_;
	data_ = new char[size_ + 1];
	memcpy(data_, other.data_, size_);
	data_[size_] = '\0';
}
string::string(u64 size) : string(size, '\0') {}
string::string(u64 size, char initValue) {
	size_ = size;
	data_ = new char[size + 1];
	mset(data_, initValue, size_);
	data_[size_] = '\0';
}
string::~string() {
	delete[] data_;
}
void string::insert(u64 pos, ccp str) {
	if (pos > size_) {
		return;
	}
	u64 str_len = strlen(str);
	buf_t new_data = new char[size_ + str_len + 1];
	strncpy(new_data, data_, pos);
	strncpy(new_data + pos, str, str_len);
	strncpy(new_data + pos + str_len, data_ + pos, size_ - pos + 1);
	delete[] data_;
	data_ = new_data;
	size_ += str_len;
}
void string::insert(u64 pos, char c) {
	if (pos > size_) {
		return;
	}
	buf_t new_data = new char[size_ + 2];
	strncpy(new_data, data_, pos);
	new_data[pos] = c;
	strncpy(new_data + pos + 1, data_ + pos, size_ - pos + 1);
	delete[] data_;
	data_ = new_data;
	size_ += 1;
}
template <u64 s>
void string::append(const char(&str)[s]) {
	strncat(data_, str, s);
}
void string::append(string str) {
	strncat(data_, str.str(), str.size());
	str.clear();
}
void string::append(char c) {
	char str[2] = { c, '\0' };
	strncat(data_, str, 2);
	delete[] str;
}
string& string::operator+(s32 value) {
	string lhs{};
	char tmp[11]{};
	itoa(value, tmp);
	lhs.append(tmp);
	delete[] tmp;
	return lhs;
}
string& string::operator+(db value) {
	string& lhs = *this;
	lhs.append(dtos(value).str());
	return lhs;
}
string& string::operator+(fp value) {
	string lhs{};
	lhs.append(ftos(value));
	return lhs;
}
string& string::operator+(const string& other) {
	string lhs{};
	lhs.append(other);
	return lhs;
}
string& string::operator=(const string& other) {
	if (this != &other) {
		clear();
		size_ = other.size_;
		buf_t tmpAlloc = new char[size_ + 1];
		strncpy(tmpAlloc, other.data_, size_ + 1);
		data_ = tmpAlloc;
		delete tmpAlloc;
	}
	return *this;
}
