#include <iostream>
#include <string.h>	

using namespace std;

void Local(int&);

int main() {
	int var = 10;
	cout << "Initail variable" << var << endl;

	Local(var);

	cout << var << endl;

	return 0;
}

void Local(int& num) {
	num += 10;
}
