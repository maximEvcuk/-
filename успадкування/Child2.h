#ifndef CHILD2_H
#define CHILD2_H

#include"Base.h"

template<typename T1, typename T2, typename T5, typename T6>
class Child2 : public Base<T1, T2> {
protected:
	T5 value5;
	T6 value6;

public:
	Child2(T1 v1, T2 v2, T5 v5, T6 v6);
	~Child2();
	void display() const;
};
#endif // CHILD2_H

