#include <iostream>


int main() {
    int *p = new int;
    // p는 주소를 받고 *p는 값이다.
    *p = 10;
    std::cout << *p << std::endl;
    std::cout << p << std::endl;

    // 메모리 할당 해제
    delete p;
    // 밑에는 이상한 값이 나온다.
     std::cout << *p << std::endl;
    return 0;
}
