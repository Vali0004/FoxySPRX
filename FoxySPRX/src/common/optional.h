#pragma once
#include "pch/pch.h"
#include "defines.h"

struct nullopt_t {
    struct _Tag {};
    constexpr explicit nullopt_t(_Tag) {}
};
constexpr nullopt_t nullopt{ nullopt_t::_Tag{} };
template <typename t>
class optional {
public:
	optional(const t& value) : m_has_value(true), m_storage(new t(value)) {}
	optional(const optional& other) : m_has_value(other.m_has_value), m_storage(nullptr) {
		if (m_has_value) {
			m_storage = new t(*other.m_storage);
		}
	}
	optional() noexcept : m_has_value(false), m_storage(nullptr) {}
	optional(nullopt_t) noexcept : m_has_value(false), m_storage(nullptr) {}
	~optional() {
		reset();
	}
public:
	optional& operator=(const optional& other) {
		if (this == &other)
			return *this;
		reset();
		m_has_value = other.m_has_value;
		if (m_has_value) {
			m_storage = new t(*other.m_storage);
		}
		return *this;
	}
	operator bool() {
		return has_value();
	}
	const t& operator*() const {
		return value();
	}
	t& operator*() {
		return value();
	}
public:
	bool has_value() const {
		return m_has_value;
	}
	const t& value() const {
		return *m_storage;
	}
	t& value() {
		return *m_storage;
	}
	void reset() {
		if (m_has_value) {
			if (m_storage)
				m_storage = nullptr;
			m_has_value = false;
		}
	}
private:
	bool m_has_value{};
	t* m_storage{};
};