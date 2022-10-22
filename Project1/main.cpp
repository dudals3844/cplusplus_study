#include <iostream>

// Call by reference
void func(int& ptr){
    ptr *= 2;
}

int main() {
    int n = 5;
//    레퍼런스로 전달 시(call by reference) 다음과 같이 매개변수를 참조형 변수로 주고 함수 호출 시 lvalue를 전달한다.

    func(n);
    std::cout << n << std::endl;
    return 0;
}
