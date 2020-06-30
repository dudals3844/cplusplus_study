#include <iostream>
#include <string.h>	

using namespace std;

int main() {

	string dog;
	cout << "dog str length " << dog.length() << endl;

	dog = "Navi";
	cout << "dog str length " << dog.length() << endl;

	string str1 = "C++ is very nice!";

	string str2 = "ava";

	string str3 = "awesome";

	string::size_type index = str1.find(str2);
	cout << string::npos << endl;
	if (index != string::npos) {
		str1.replace(index, str2.length(), str3);
	}

	return 0;
}

