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
int change_val(int& p) {
	p = 3;
	return 0;
}

int main() {
	int number = 5;

	std::cout << number << std::endl;
	change_val(number);
	std::cout << number << std::endl;
	return 0;
}

