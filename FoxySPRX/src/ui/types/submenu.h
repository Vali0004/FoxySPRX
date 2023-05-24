#pragma once
#include "include.h"
#include "abstract_option.h"
#define DEF_SUB_H(n) \
	class n : public submenu { \
	public: \
		n(); \
	};

class submenu {
public:
	submenu(ccp name = "", fnptr<void(submenu&)> action = nullptr) : m_name(name), m_action(action) {}
public:
	template <typename t>
	void add(t option) {
		m_options.push_back(new t(option));
	}
	void action(eActionType type) {
		switch (type) {
		case at_Up: {
			if (m_current > 0)
				m_current--;
			else
				m_current = m_options.size() - 1;
		} break;
		case at_Down: {
			if (m_current < m_options.size() - 1)
				m_current++;
			else
				m_current = 0;
		} break;
		}
		if (!m_options.empty())
			m_options[m_current]->action(type);
	}
	void reset() {
		m_options.clear();
	}
	void handle(fnptr<void()> onNoOptions) {
		m_action(*this);
		if (m_options.empty())
			onNoOptions();
		for (size_t i{}; i != m_options.size(); ++i) {
			auto&& opt = *m_options[i];
			opt.draw(m_current == i);
		}
		if (m_current >= m_options.size())
			m_current = 0;
	}
public:
	ccp m_name{};
	vectorr<abstractOption*> m_options{};
	u64 m_current{};
	fnptr<void(submenu&)> m_action{};
};