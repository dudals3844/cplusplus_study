#include <iostream>
#include <string>

using namespace std;

class A
{
public:
	virtual void Print() {
		cout << "A class Print function" << endl;
	}

};

class B : public A
{
	virtual void Print() {
		cout << "B class Print function" << endl;
	}
};


int main(void) {
	A* ptr;
	A obj_a;
	B obj_b;

	ptr = &obj_a;
	ptr->Print();
	//B Ŭ������ Ÿ���� ����ȴ�.
	ptr = &obj_b;
	ptr->Print();

	
	return 0;
}


