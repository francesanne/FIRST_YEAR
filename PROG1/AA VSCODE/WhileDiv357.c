/*Ask the user to input an integer n.
Print its initial value on a new line and increment the integer by 1 until it is divisible by 3, 5, and 7.

Enter a number: 1
Final value of n: 3

Enter a number: 11
Final value of n: 12*/

#include <stdio.h>

int main() {
    int num1;

    printf("Enter a number: ");
    scanf("%d", &num1);

    while (num1 % 3 != 0 && num1 % 5 != 0  &&num1 % 7 != 0) {
        num1++;
    }

    printf("Final value of n: %d", num1);

    return 0;
}
