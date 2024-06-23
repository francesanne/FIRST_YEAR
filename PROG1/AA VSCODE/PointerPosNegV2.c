#include <stdio.h>

void posNeg(int*, int*);
int main(){

    int a, num = 0;

    printf("Enter a number: ");
    scanf("%d", &a);
   
    int *value = &num;
    posNeg(&a, value);

    printf("Value: %d", num);
    return 0;
}

void posNeg(int* x, int* y){
    if (*x > 0){
        printf("The number entered is positive.\n");
        *y = *x;
    } else if(*x < 0){
        printf("The number entered is negative.\n");
        *y = *x;
    } else {
        printf("The number entered is zero\n");
        *y = *x;
    }
}
