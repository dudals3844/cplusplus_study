#include <iostream>


int main() {
    int a = 10;
    int &p = a;
    p += 1;
    std::cout << p << std::endl;
    a += 1;
    std::cout << p << std::endl;
    return 0;
}
