#pragma once

template <typename t1, typename t2> //Such complicated code that took so much effort.
class pair {
public:
	pair(t1 first, t2 second) : first(first), second(second) {}
	pair() = default;
	t1 first{};
	t2 second{};
};
//For those weirdos who actually use make_pair
template <typename t1, typename t2>
global pair<t1, t2> make_pair(t1 value1, t2 value2) {
	return pair<t1, t2>(value1, value2);
}