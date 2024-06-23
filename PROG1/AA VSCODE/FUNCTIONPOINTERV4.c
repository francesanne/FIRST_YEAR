#include <stdio.h>
void max(int*, int*, int*);
void min(int*, int*, int*);

int main(){

    int num1,num2, num3, result;

    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    min(&num1, &num2, &result);
    max(&num1, &num2, &result);
    return 0; 
}

void min(int *num1, int *num2, int *result){
    if (*num1 > *num2){
        *result = *num2;
        printf("The smallest number is %d.\n", *result);
    }else{
        *result = *num1;
        printf("The smallest number is %d.\n", *result);
    }
}

void max(int *num1, int *num2, int *result){
    if (*num1>*num2){
        *result = *num1;
        printf("The largest number is %d.\n", *result);
    }else{
         *result = *num2;
        printf("The largest number is %d.\n", *result);
    }
}