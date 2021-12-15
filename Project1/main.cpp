#include <iostream>

int main() {
    int lucky_number = 3;
    std::cout << "숫자를 맞춰보세요." << std::endl;

    int user_input;

    while (1) {
        std::cout << "Input: ";
        std::cin >> user_input;
        if (lucky_number == user_input) {
            std::cout << "정답!!" << std::endl;
            break;
        } else {
            std::cout << "오답입니다." << std::endl;
        }
    }
    return 0;
}
