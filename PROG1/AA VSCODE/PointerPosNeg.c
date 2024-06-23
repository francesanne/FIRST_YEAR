#include <stdio.h>
int posNeg(int *);
int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (posNeg(&num)) {
        printf("%d is a positive number.\n", num);
    } else if (num < 0) {
        printf("%d is a negative number.\n", num);
    } else {
        printf("Number is equal to zero.\n");
    }
    return 0;
}

int posNeg(int *x) {
    return (*x > 0);
}
