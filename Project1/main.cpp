#include <iostream>


int main() {
    int a = 10;
    int *p = &a;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    return 0;
}
