#include <stdio.h>

void OddEven(int *, int *);
int main(){

    int a, num = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    OddEven(&a, &num);

    if (a % 2 == 0) {
        printf("Even: %d\n", num);
    } else {
        printf("Odd: %d\n", num);
    }
    return 0;
}

void OddEven(int *x, int *y) {
    if (*x % 2 == 0) {
        printf("It is an even number.\n");
        *y = *x;
    } else {
        printf("It is an odd number.\n");
        *y = *x;
    }
}
