/*
Write a C program to input any number from user and check whether the Least Significant Bit (LSB) 
of the given number is set (1) or not (0). How to check whether the least significant bit of a 
number is set or unset using bitwise operator in C programming. C program to get the status of 
least significant bit of a number.
*/

#include <stdio.h>
int main(){
    int num, lsb;

    printf("Input number: ");
    scanf("%d", &num);
    
    lsb = num & 1;

    if(num&1){
        printf("LSB of %d is set (1).", num);
    }else{
         printf("LSB of %d is unset (0).", num);
    }

return 0;

}