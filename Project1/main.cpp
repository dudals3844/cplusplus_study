#include <iostream>

void print(int a) {
    std::cout << a << std::endl;
}

void print(double a) {
    std::cout << a << std::endl;
}

int main() {
    int a =1;
    char b = 'c';
    double c = 3.2f;
    print(a);
    print(b);
    print(c);
    return 0;
}
