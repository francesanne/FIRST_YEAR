#include <stdio.h>
int main() {

    int digit, num, place;

    do {
        printf("Input number (1 to 3 digits): ");
        scanf("%d", &num);

        if (num < 1 || num > 999) {
            printf("Invalid input. Please enter a number between 1 and 999.\n");
        }
    } while (num < 1 || num > 999);

    place = 1;
    while (num > 0) {
        digit = num % 10;

        if (place == 1) {
            printf("Ones place: %d\n", digit);
        } else if (place == 10) {
            printf("Tens place: %d\n", digit);
        } else if (place == 100) {
            printf("Hundreds place: %d\n", digit);
        }

        num /= 10;
        place *= 10;
    }
    return 0;
}
