#include <iostream>

int& function() {
    int a = 2;
    return a;
}
// return하면서 function의 a는 사라진다.
int main() {
    int b = function();
    b = 3;
    std::cout << b << std::endl;
    return 0;
}
