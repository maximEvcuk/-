#ifndef BASE_H
#define BASE_H

template<typename T1, typename T2>
class Base {
protected:
	T1 value1;
	T2 value2;

public:
	Base(T1 v1, T2 v2);
	virtual ~Base();
	void display() const;
};
#include "Base.cpp"
#endif // BASE_H

