#pragma once

#define TYPE(t) t,
enum eOptionTypes {
	TYPE(Abstract)
	TYPE(Regular)
	TYPE(Submenu)
};
enum eActionType {
	at_Enter,
	at_Up,
	at_Down,
	at_Left,
	at_Right
};
class abstractOption {
public:
	abstractOption(ccp name, ccp description) : m_name(name), m_description(description) {}
	virtual ~abstractOption() = default;
	virtual void draw(bool selected) {}
	virtual void action(eActionType type) {}
	virtual u32 type() { return eOptionTypes::Abstract; }
public:
	ccp m_name{}, m_description{};
};