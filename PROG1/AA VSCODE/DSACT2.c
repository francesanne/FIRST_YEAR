/*Let variable Ave hold the average of X and Y, and display on screen the average accurate to 2 decimal places.
*/

#include <stdio.h>
int main(){
    float X,Y,ave;

    printf("Input first number X: ");
    scanf("%f", &X);
    printf("Input second number Y: ");
    scanf("%f", &Y);

    ave = (X+Y)/2;

    printf("Average: %.2f", ave);

    return 0;
}