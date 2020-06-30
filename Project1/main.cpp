#include <iostream>
#include <string.h>	

using namespace std;

void Swap(int& x, int& y) {
	int temp;

	temp = x;
	x = y;
	y = temp;
}


int main(void) {
	int num1 = 3, num2 = 7;
	cout << num1 << ' ' << num2 << endl;

	Swap(num1, num2);

	cout << num1 << ' ' << num2 << endl;
	return 0;

}