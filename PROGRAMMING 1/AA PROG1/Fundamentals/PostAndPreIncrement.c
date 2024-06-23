#include <stdio.h>

int main()
{
    int a, b, c;

    a = 10;   // a = 10
    b = ++a;  // a=11, b=11
    c = a++;  // a=12, c=11

    printf("a=%d, b=%d, c=%d", a, b, c);

    return 0;
}
