#include <stdio.h>

int main() {
    char gender;
    float num1, num2;

    printf("Enter your gender (B for boy, G for girl): ");
    scanf(" %c", &gender);

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    if (gender == 'B' || gender == 'b') {
        printf("You are a boy.\n");
    } else if (gender == 'G' || gender == 'g') {
        printf("You are a girl.\n");
    } else {
        printf("Invalid gender input. Please enter 'B' or 'G'.\n");
    }

    if (num1 > num2) {
        printf("num 1 is bigger than num 2.\n");
    } else if (num2 > num1) {
        printf("num 2 is bigger than num 1.\n");
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}

