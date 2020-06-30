#include <iostream>
#include <string.h>	

using namespace std;

static int var;
void Local(void);

int main(void) {
	cout << "Initial variable" << var << endl;
	int i = 5;
	int var = 10;
	cout << "Main function var is " << var << endl;

	if (i < 10) {
		Local();
		cout << "Now var is " << var << endl;

	}

	cout << var << endl;

	cout << "No more var in main function " << endl;
	return 0;
}

void Local(void) {
	var = 20;
	cout << "Local function var is " << var << endl;
}
