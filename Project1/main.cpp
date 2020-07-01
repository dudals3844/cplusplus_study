#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	string name_;
	int age_;

public:
	static int person_count_;
	static int person_count();
	Person(const string& name, int age);
	~Person() { person_count_--; }
	void ShowPersonInfo();
};

int Person::person_count_ = 0;
int Person::person_count()
{
	return person_count_;
}



int main(void) {
	Person hong("choi", 25);
	Person lee("young", 22);
	cout << Person::person_count() << endl;


	return 0;
}

Person::Person(const string& name, int age)
{
	name_ = name;
	age_ = age;
	cout << ++person_count_ << " ��° ����� �����Ǿ����ϴ�." << endl;
}

void Person::ShowPersonInfo()
{
	cout << "�� ����� �̸��� " << name_ << "�̰�, ���̴� " << age_ << "���Դϴ�." << endl;
}
