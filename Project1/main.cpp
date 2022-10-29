#include <iostream>


int main() {
    int a = 3;
    // 참조자다. 즉 변수 a의 다른 이름이 another_a라고 알려 주는 것이다.
    int &another_a = a;

    another_a = 5;
    std::cout << "a : " << a << std::endl;
    std::cout << "another_a : " << another_a << std::endl;
    return 0;
}
