#include"CircleInSquare.h"

template <typename T>
Square<T>::Square(T side_length) : side_length(side_length){}

template <typename T>
T Square<T>::area() const {
	return side_length * side_length;
}

template <typename T>
T Square<T>::perimeter() const {
	return 4 * side_length;
}

template <typename T>
Circle<T>::Circle(T radius) : radius(radius) {}

template <typename T>
T Circle<T>::area() const {
	return M_PI * radius * radius;
}

template <typename T>
T Circle<T>::circumference() const {
	return 2 * M_PI * radius;
}

template <typename T>
CircleInSquare<T>::CircleInSquare(T side_length) : Square<T>(side_length), Circle<T>(side_length / 2) {}

template <typename T>
void CircleInSquare<T>::display() const {
	std::cout << "Square Side Length: " << this->side_length << std::endl;
	std::cout << "Square Area: " << this->area() << std::endl;
	std::cout << "Circle Radius: " << this->radius << std::endl;
	std::cout << "Circle Area: " << this->area() << std::endl;
	std::cout << "Circle Circumference: " << this->circumference() << std::endl;

}

template class Square<double>;
template class Circle<double>;
template class CircleInSquare<double>;