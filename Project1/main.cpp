#include <iostream>

// *는 포인터가 가르캬는 주소값으로 사용된다.
int change_val(int *p) {
    *p = 3;
    return 0;
}

int main() {
    int number = 5;
    // &는 주소값을 넘겨준다.
    std::cout << "a: " << number << std::endl;
    change_val(&number);
    std::cout << "a: " << number << std::endl;
    return 0;
}
