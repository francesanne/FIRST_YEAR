#include <stdio.h>
int main(){
    int i, n;
    float total = 0;

    printf("\nEnter either negative or positive integers.");

    for (i = 0; i < 100; i++) { // Removed the semicolon and corrected the loop condition
        printf("\nEnter number %d: ", i + 1);
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        total += n;
        printf("\nTotal so far: %.0f\n", total);
        printf("Enter 0 to finish the program and show average\n");
    }

    printf("\nThe total is: %.0f\n", total);
    if (i == 0) {
        printf("No numbers entered, cannot calculate average.\n");
    } else {
        printf("The average is: %.2f\n", total / i);
    }
    printf("That's the end of this program\n");

    return 0;
}

