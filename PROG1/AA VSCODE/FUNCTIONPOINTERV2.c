#include <stdio.h>

void findMin(int*);

int main(){
 int min = 0;
 findMin(&min);
}

void findMin(int *min){
    int num1, num2;

    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    if (num1<num2){
        *min = num2;
        printf("The largest number is %d.", *min);
    }else {
        *min = num1;
        printf("The largest number is %d.", *min);
    }
}