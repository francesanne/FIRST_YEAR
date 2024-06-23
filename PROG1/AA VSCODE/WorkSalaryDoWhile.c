#include <stdio.h>
int main() {
    int years;
    char work;

    printf("Enter years of work: ");
    scanf("%d", &years);

    // Input validation loop
    do {
        printf("Enter kind of work (B or W): ");
        scanf(" %c", &work);

        // Check if the input is valid
        if (work != 'B' && work != 'W') {
            printf("Invalid input. Please enter either 'B' or 'W'.\n");
        }

    } while (work != 'B' && work != 'W');

    // Salary calculation based on years and work type
    if (years < 2) {
        if (work == 'B') {
            printf("Salary: 10,000");
        } else if (work == 'W') {
            printf("Salary: 20,000");
        }
    } else if (years < 5 && years >= 2) {
        if (work == 'B') {
            printf("Salary: 12,000");
        } else if (work == 'W') {
            printf("Salary: 40,000");
        }
    } else if (years <= 5) {
        if (work == 'B') {
            printf("Salary: 15,000");
        } else if (work == 'W') {
            printf("Salary: 75,000");
        }
    }

    return 0;
}
