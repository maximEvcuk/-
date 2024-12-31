#ifndef  CAR_H
#define CAR_H

#include<iostream>
#include"Wheels.h"
#include"Engine.h"
#include"Doors.h"
#include"Lights.h"
#include"Radio.h"
#include"GPS.h"

class Car : public Wheels, public Engine, public Door, public Lights, public Radio, public GPS {
public:
	void drive() {
		start();
		rotate();
		std::cout << "The car is driving." << std::endl;
	}
};

#endif
