#include <iostream>

int function(){
    int a = 2;
    return a;
}
// function이 종료되면 a는 사라진다.
int main() {
    int b = function();
    std::cout << b << std::endl;
    return 0;
}
