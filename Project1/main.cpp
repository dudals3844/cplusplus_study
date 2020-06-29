#include <iostream>

int main() {
	int a = 5;

	int* p = new int;
	*p = 10;

	std::cout << *p << std::endl;

	std::cout << p << std::endl;

	std::cout << &a << std::endl;
	//errors
	//delete& a;
	delete p;
	return 0;
}