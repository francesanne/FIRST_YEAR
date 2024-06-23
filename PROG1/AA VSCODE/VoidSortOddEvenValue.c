#include <stdio.h>
void sortOddEvenPlaceValue(int*);
int main(){ 

    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    sortOddEvenPlaceValue(&num);
    return 0;
}

void sortOddEvenPlaceValue(int* number) {
    int n = *number;
    int oddCount = 0, evenCount = 0;

    int place = 1;
    int digit;

    while (n > 0) {
        digit = n % 10;

        if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        n /= 10;
        place *= 10;
    }
    printf("Odd: %d\n", oddCount);
    printf("Even: %d\n", evenCount);
}
