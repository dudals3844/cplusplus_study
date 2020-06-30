#include <iostream>
#include <string.h>	

using namespace std;

class A {

public:
	int num = 10;
	void print_This() {
		cout << this << endl;
	}
	
	A& return_This() {
		return *this;
	}
};


int main(void) {
	A a;
	a.print_This();
	A& ref = a.return_This();
	ref.print_This();
	printf("a狼 林家 蔼 %d\n", &a);
	printf("ref狼 林家 蔼 %d\n", &ref);
	return 0;
}


