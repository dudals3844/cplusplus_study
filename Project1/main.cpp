#include <iostream>

int main(){
    // 메모리 주소로 생성
    int *arr_size = new int;

    std::cout << "array size :";
    // 메모리 주소에 10을 할당
    *arr_size = 10;
    // 주소에 있는 값을 출력
    std::cout << *arr_size;

}