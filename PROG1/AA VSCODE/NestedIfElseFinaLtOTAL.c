/* An integer variable, total, is initialized to 10 in the code editor. Ask the user to input an integer and check if it is positive, negative, or zero.
if positive: check if it is even or odd. if it is even, add its square to total, otherwise add its cube to total
if negative: ask the user to input another integer as an exponent to this negative number and add the result to total.
if zero: print "Nothing happened."
Lastly, only print the value of total if the inputted integer is positive or negative.
*/


#include <stdio.h>
#include <math.h>
int main(){
    int total = 10;
    int integer, num, exponent;

    printf("Enter an integer: ");
    scanf("%d", &integer);

    if (integer > 0){
        if (integer % 2 == 0){
            printf("%d", (integer*integer)+total);
        }else{
            printf("%d", (integer*integer*integer)+total);
        }
    }else if (integer < 0 ){
        printf("Enter another integer: ");
        scanf("%d", &exponent);
        printf("%.0f", pow(integer, exponent)+total);

    }else{
        printf("Nothing happened.");
    }
    return 0;
}