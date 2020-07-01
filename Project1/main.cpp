#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	string name_;
	int age_;

public:
	
	Person(const string& name, int age);
	
	void ShowPersonInfo();
};

Person::Person(const string& name, int age)
{
	name_ = name;
	age_ = age;
}

class Student :public Person {
private:
	int student_id_;
public:
	Student(int sid, const string& name, int age);
};

int main(void) {

	Student hong(123123, "choi", 25);
	hong.ShowPersonInfo();
	return 0;
}



Student::Student(int sid, const string& name, int age) : Person(name, age)
{
	student_id_ = sid;
}

void Person::ShowPersonInfo()
{
	cout << name_ << "의 나이는 " << age_ << "살입니다." << endl;
}