#pragma once
#include "logger/logger.h"

template <typename t>
class stack {
public:
    stack() {
    }
    ~stack() {
        clear();
        delete m_data;
    }

    void push(const t& value) {
        if (m_size == m_capacity) {
            resize(m_capacity ? m_capacity * 2 : 1);
        }
        new (m_data + m_size) t(value);
        ++m_size;
    }
    void pop() {
        if (m_size > 0) {
            --m_size;
           m_data[m_size].~t();
        }
    }
    t& top() {
        return m_data[m_size - 1];
    }
    const t& top() const {
        return m_data[m_size - 1];
    }
    bool empty() const {
        return !m_size;
    }
    size_t size() const {
        return m_size;
    }
    void clear() {
        while (!empty()) {
            pop();
        }
    }
private:
    void resize(size_t capacity) {
        t* data = static_cast<t*>(operator new(capacity * sizeof(t)));
        for (size_t i{}; i != m_size; ++i) {
            new (data + i) t(m_data[i]);
            m_data[i].~t();
        }
        delete m_data;
        m_data = data;
        m_capacity = capacity;
    }

    size_t m_capacity;
    size_t m_size;
    t* m_data;
};