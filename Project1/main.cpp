#include <iostream>

// Call by address
void func(int* ptr){
    *ptr *= 2;
}

int main() {
    int n = 5;
//    이것도 사실 단순한 (주소)값의 복사이기 때문에 주소가 가리키는 공간에 접근할 수 있는 것 뿐이지 더블포인터를 쓰지 않는 이상 포인터가 가리키는 대상(주소) 자체를 변경할 순 없다.

            func(&n);
    std::cout << n << std::endl;
    return 0;
}
