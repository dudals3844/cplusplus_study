#include <iostream>


int main() {
    // Heap 공간을 해제하려고 해서 오류가 난다.
    int a = 5;
    delete &a;
    return 0;
}
