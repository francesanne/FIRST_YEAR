#include <stdio.h>
void revPlaceValue(int*);
int main(){

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    revPlaceValue(&num);
    return 0;
}

void revPlaceValue(int *number) {
    int n = *number;
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    *number = reversed;
    printf("Reversed digit: %d\n", *number);

}