#include"Child2.h"
#include<iostream>

template<typename T1, typename T2, typename T5, typename T6>
Child2<T1, T2, T5, T6>::Child2(T1 v1, T2 v2, T5 v5, T6 v6) : Base<T1, T2>(v1, v2), value5(v5), value6(v6) {
	std::cout << :"Child2 constructor called. " << std::endl;
}

template<typename T1, typename T2, typename T5, typename T6>
Child2<T1, T2, T5, T6>::~Child2() {
	std::cout << :"Child2 destructor called. " << std::endl;
}

template<typename T1, typename T2, typename T5, typename T6>
void Child2<T1, T2, T5, T6>::display() const {
	Base<T1, T2>::display();
	std::cout << "Value 5: " << value5 << ", Value6: " << value6 << std::endl;

}