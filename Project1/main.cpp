#include <iostream>
#include <string.h>	

using namespace std;

class A {
	int num;

public:
	A(int num) {
		this->num = num;
	}

	int get_Num() {
		return num;
	}
};


int main(void) {
	A a(10);
	cout << a.get_Num() << endl;
	return 0;
}


