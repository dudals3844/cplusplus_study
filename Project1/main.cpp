#include <iostream>

int &function(int &a) {
    // parameter로 받은 메모리 주소가 온다.
    a = 5;
    std::cout << "a: " << &a << std::endl;
    return a;
}

int main() {
    int b = 2;
    std::cout << "b: " << &b << std::endl;
    // c에 할당되므로 메모리 주소가 변경된다.
    int c = function(b);
    std::cout << "c: " << &c << std::endl;
    return 0;
}
