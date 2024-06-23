#include <stdio.h>
int main(){
    float num1, num2;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("num 1 is bigger than num 2.\n");
    } else if (num2 > num1) {
        printf("num 2 is bigger than num 1.\n");
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}

