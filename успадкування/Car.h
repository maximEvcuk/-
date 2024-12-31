#ifndef  CAR_H
#define CAR_H

#include<iostream>
#include "Vehicle.h"

class Car : public Wheels, public Engine, public Door, public Lights, public Radio, public GPS {
public:
	void drive() {
		start();
		rotate();
		std::cout << "The car is driving." << std::endl;
	}
};

#endif
