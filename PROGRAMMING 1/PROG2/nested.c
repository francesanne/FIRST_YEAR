#include <stdio.h>
    struct complex{
        int imag;
        float real;
    };

    struct number{
        struct complex comp;
        int integer;
    };

int main(){
    
    struct number num1;

    num1.comp.imag = 8;
    num1.comp.real = 8.88;

    printf("%d\n", num1.comp.imag);
    printf("%.2f", num1.comp.real);

    return 0;
}