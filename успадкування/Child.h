#ifndef CHILD_H
#define CHILD_H

#include"Base.h"

template<typename T1, typename T2, typename T3, typename T4>
class Child : public Base<T1, T2> {
protected:
	T3 value3;
	T4 value4;

public:
	Child(T1 v1, T2 v2, T3 v3, T4 v4);
	 ~Child();
	void display() const;
};
#endif // CHILD_H

