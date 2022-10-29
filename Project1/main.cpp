#include <iostream>

int main() {
    int n = 5;
    // n의 주소를 받는다.
    // reference site: http://www.tcpschool.com/c/c_pointer_intro
    int *ptr = &n;

    std::cout << ptr << std::endl;
    std::cout << &n << std::endl;
    // ptr의 메로리 주소
    std::cout << &ptr << std::endl;
    std::cout << &n << std::endl;

    return 0;
}
