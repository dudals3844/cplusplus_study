#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	virtual ~Animal(){}
	virtual void Cry() = 0;
};


class Dog : public Animal {
public:
	virtual void Cry() {
		cout << "crying" << endl;
	}
};

class Cat : public Animal
{
public:
	virtual void Cry() {
		cout << "ya ong" << endl;
	}
};


int main(void) {
	Dog my_dog;
	my_dog.Cry();
	Cat my_cat;
	my_cat.Cry();
	
	return 0;
}


