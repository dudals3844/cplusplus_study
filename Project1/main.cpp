#include <iostream>

int main() {
//    선언도 하지 않는 값의 주소값 참조 불가스 레퍼런스 배열
//    int a, b;
//    int& arr[2] = {a, b};

    int arr[3] = {1,2,3};
// 배열의 레퍼런스
    int (&ref)[3] = arr;
    ref[0] = 2;
    ref[1] = 3;
    ref[2] = 1;
    std::cout << arr[0] << arr[1]<< arr[2]<< std::endl;
    std::cout << &arr[1] << std::endl;
    std::cout << &arr << std::endl;
    return 0;
}
