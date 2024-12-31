#include "Child.h"
#include"Child2.h"

int main() {
	Child<int, double, std::string, char> obj1(1, 2.5, "Hello", 'A');
	Child<int, double, float, bool> obj2(2, 3.5, 1.5f, true);

	std::cout << "Displaying Child object: " << std::endl;
	obj1.display();

	std::cout << "Displaying Child2 object: " << std::endl;
	obj2.display();

	return 0;
}