#include<iostream>
#include"Base.h"

template<typename T1, typename T2>
Base<T1, T2>::Base(T1 v1, T2 v2) : value1(v1), value2(v2) {
	std::cout << "Base constructor called." << std::endl;
}

template<typename T1, typename T2>
Base<T1, T2>::~Base() {
	std::cout << "Base destructor called," << std::endl;
}

template<typename T1, typename T2>
void Base<T1, T2>::display() const {
	std::cout << "Value 1: " << value1 << ", Value2: " << value2 << std::endl;
}