/*
 C program to find maximum between three numbers
 */

#include <stdio.h>
int main(){

    int n1,n2,n3;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    if(n1>n2){
        if(n1>n3){
            printf("Num1 is max");
        }else{
            printf("Num3 is max");
        }
    }else{
        if(n2>n3){
            printf("Num2 is max");
        }else{
            printf("Num3 is max");
        }
    }
    return 0;
}