#include <iostream>

int function() {
    int a = 5;
    return a;
}

int main() {
    // 이게 오류나는 이유는 &c는 메모리 주소를 계속 참조하고 있어야 된느데 function은 reference로 리턴을 안하기 때문에
    // function은 return후 메모리 주소가 바로 삭제된다.
    int& c = function();
    std::cout << "c: " << c << std::endl;
    return 0;
}
