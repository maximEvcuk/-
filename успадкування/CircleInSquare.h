#ifndef  CIRCLEINSQUARE_H
#define  CIRCLEINSQUARE_H

#include<iostream>
#include<cmath>

template <typename T>
class Square {
public:
	Square(T side_length);
	T area() const;
	T perimeter() const;

protected:
	T side_length;
};

template <typename T>
class Circle {
public:
	Circle(T radius);
	T area() const;
	T circumference() const;

protected:
	T radius;
};

template <typename T>
class CircleInSquare : public Square<T>, public Circle<T> {
public: 
	CircleInSquare(T side_length);
	void display() const;
};

#endif // CIRCLEINSQUARE_H
