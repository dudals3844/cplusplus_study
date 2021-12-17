#include <iostream>


int main() {
    int arr_size = 10;
    int *list = new int[arr_size];
    std::cout << list << std::endl;
    for (int i = 0; i < arr_size; i++) {
        list[i] = i;
    }
    for (int i = 0; i < arr_size; i++) {
        std::cout << "Element of list: " << list[i] << std::endl;
    }

    delete[] list;
    return 0;
}
