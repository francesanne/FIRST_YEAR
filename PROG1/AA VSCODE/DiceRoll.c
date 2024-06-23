#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int num1, num2, sum;
    srand(time(0));

    num1 = rand() % 6 + 1;
    num2 = rand() % 6 + 1;

    printf("First roll: %d\n", num1);
    printf("Second roll: %d\n", num2);

    sum = num1 + num2;

    if (num1 == num2){

       printf("Sum: %d\n", sum = sum * 2);
    }
    else{
        printf("Sum: %d\n", sum);
    }

}