#include <iostream>


int main() {
    int arr[10];

    int length = sizeof(arr) / sizeof(int);

    for (int i = 0; i < length; ++i) {
        arr[i] = i;
    }


    for (int i = 0; i < length; ++i) {
        std::cout << arr[i] << std::endl;
    }

    delete arr;

    return 0;
}
