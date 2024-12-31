#include"Child.h"
#include<iostream>

template<typename T1, typename T2, typename T3, typename T4>
Child<T1, T2, T3, T4>::Child(T1 v1, T2 v2, T3 v3, T4 v4) : Base<T1, T2>(v1, v2), value3(v3), value4(v4) {
	std::cout << :"Child constructor called. " << std::endl;
}

template<typename T1, typename T2, typename T3, typename T4>
Child<T1, T2, T3, T4>::~Child() {
	std::cout << :"Child destructor called. " << std::endl;
}

template<typename T1, typename T2, typename T3, typename T4>
void Child<T1, T2, T3, T4>::display() const {
	Base<T1, T2>::display();
	std::cout << "Value 3: " << value3 << ", Value4: " << value4 << std::endl;

}
