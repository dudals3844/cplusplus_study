#include <iostream>
#include <string.h>	

using namespace std;

class A {
	int num;
	public:
		void print_This() {
			cout << "Class A��  this �ּ�:" << this << endl;
		}

		A* return_A() {
			return this;
		}
};

int main(void) {
	A a;

	cout << "a�� �ּҰ�" << &a << endl;
	a.print_This();
	cout << "a.return_A()" << a.return_A() << endl;
	return 0;
}


