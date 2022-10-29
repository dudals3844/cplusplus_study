#include <iostream>
#include <stdio.h>

using std::cout;
using std::endl;

int main() {
    char str[] = "sentence";
    char *pstr = "sentence";

    printf("str : %s \n", str);
    // 이상하다 setence는 주소값이 아니고 문자열인데 출력이 된다.
    printf("pstr : %s \n", pstr);

    return 0;
}
