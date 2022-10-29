#include <iostream>

using std::cout;
using std::endl;

int main() {
    int x;
    int &y = x;
    int &z = y;

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    x = 1;
    cout << "x: " << x << " y: " << y << " z: " << z << endl;

    y = 2;
    cout << "x: " << x << " y: " << y << " z: " << z << endl;

    z = 3;
    cout << "x: " << x << " y: " << y << " z: " << z << endl;



    return 0;
}
