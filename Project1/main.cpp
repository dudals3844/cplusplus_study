#include <iostream>
#include <stdio.h>

using std::cout;
using std::endl;

int main() {
    char str[] = "hello";
    char *pstr = "goodbye";

    str[1] = 'a';
    cout << str << endl;
//    pstr[1] = 'a';

    return 0;
}
