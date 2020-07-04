#include <iostream>
#include <string>

using namespace std;

template <typename T>

class Data {
private:
	T data_;
public:
	Data(T dt);
	T get_data();
};

// Data에서 double형 데이터 타입일때만 특별한 동작 실행
template <> class Data<double>
{
private:
	double data_;
public:
	Data(double dt) {
		data_ = dt;	
	}
	double get_data()
	{
		cout << "double data print" << endl;
		return data_;
	}
};

int main(void) {
	Data<string> str_data("C++ class");
	Data<double> double_data(3.15);

	cout << "str_data" << str_data.get_data() << endl;
	cout << "double_data" << double_data.get_data() << endl;
	return 0;
}


template <typename T>
Data<T>::Data(T dt) {
	data_ = dt;
}

template <typename T>
T Data<T>::get_data() {
	return data_;
}
