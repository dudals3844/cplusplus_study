#include <iostream>

using std::cout;
using std::endl;
using std::cin;

// c������ ���
//int change_val(int* p) {
//	*p = 3;
//	return 0;
//}
//
//int main() {
//	int number = 5;
//	std::cout << number << endl;
//	change_val(&number);
//	std::cout << number << endl;
//	return 0;
//}

// c++ ���
int main() {
	int a = 3;
	// reference
	int& another_a = a;

	another_a = 5;
	std::cout << "a: " << a << std::endl;
	std::cout << "another_a: " << another_a << std::endl;
	return 0;
}
