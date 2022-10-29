#include <iostream>

int change_val(int *p) {
    // 주소에 있는 값을 3으로 변경한다.
    *p = 3;
    return 0;
}

int main() {
    int number = 5;

    std::cout << number << std::endl;
    change_val(&number);
    std::cout << number << std::endl;
    return 0;
}
