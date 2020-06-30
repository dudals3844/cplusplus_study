#include <iostream>
#include <string.h>	

using namespace std;

void Local(void);
void StaticVar(void);

int main(void) {
	for (int i = 0; i < 3; i++) {
		Local();
		StaticVar();
	}
	return 0;
}

void Local(void) {
	int count = 1;
	cout << "Local" << count << endl;
	count++;
}

void StaticVar(void) {
	static int static_count = 1;
	cout << "Static Var" << static_count << endl;
	static_count++;
}