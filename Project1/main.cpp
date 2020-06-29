#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
	int user_input;
	cout << "Input information" << endl;
	cout << "1, name " << endl;
	cout << "2, age " << endl;
	cout << "3. sex " << endl;
	cin >> user_input;

	switch (user_input)
	{
	case 1:
		cout << "psy" << endl;
		break;

	case 2:
		cout << "24" << endl;
		break;
		
	case 3:
		cout << "male" << endl;
		break;

	default:
		break;
	}
	return 0;
}