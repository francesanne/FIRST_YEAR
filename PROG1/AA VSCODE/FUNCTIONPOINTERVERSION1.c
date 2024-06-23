#include <stdio.h>

int min(int*, int*);
int max(int*, int*);

int main(){
    int num1, num2, result1, result2;


    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    result1 = min(&num1, &num2);
    result2 = max(&num1, &num2);

    printf("The smallest number is %d.\n", result1);
    printf("The largest number is %d.\n", result2);

    return 0;
}

int min(int *num1, int *num2){
    if(*num1 < *num2){
        return *num1;
    }else{
        return *num2;
    }
}

int max(int *num1,int *num2){
    if(*num1 < *num2){
        return *num2;
    }else{
        return *num1;
    }
}
















