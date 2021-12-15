#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    int user_input;
    cin >> user_input;

    switch (user_input) {
        case 1:
            cout << "Choi" << endl;
            break;
        case 2:
            cout << "Young" << endl;
            break;
        default:
            cout << "궁금한게 없다" << endl;
            break;
    }
    return 0;
}
