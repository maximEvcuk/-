#ifndef  VEHICLE_H
#define  VEHICLE_H

#include<iostream>

class Engine {
public:
    virtual void start() {
		std::cout << "Engine started." << std::endl;
	}

};


class Wheels {
public:
	virtual void rotate() {
		std::cout << "Wheels are rotating." << std::endl;
	}

};

class Door {
public:
	virtual void open() {
		std::cout << "Doors opened." << std::endl;
	}

};

class Lights {
public:
	virtual void turnOn() {
		std::cout << "Lights are on." << std::endl;
	}

};

#include <iostream>

class Radio {
public:
	virtual void playMusic() {
		std::cout << "Music is playing." << std::endl;
	}
};

class GPS {
public:
	virtual void navigate() {
		std::cout << "Navigation activated." << std::endl;
	}
};

#endif // ! VEHICLE_H
