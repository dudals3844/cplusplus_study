#include <iostream>

// 상수를 참조할 수 없다.
int main() {
    int &ref = 4;
    std::cout << ref <<std::endl;
    return 0;
}
