/* Allow user to input from the keyboard 2 integers X and Y. Make the program user friendly by indicating to the user to input the first number X, then the second number Y.
Let variable Ave hold the average of X and Y, and display on screen the average accurate to 2 decimal places.
Determine if the whole number part of the average is odd or even and display on screen if it is odd or even.
*/

#include <stdio.h>
int main(){
    int X,Y;
    float ave;

    printf("Input first number X: ");
    scanf("%d", &X);
    printf("Input second number Y: ");
    scanf("%d", &Y);

    ave = (X+Y)/2;

    printf("Average: %.2f\n", ave);

     if ((int)ave % 2 == 0) {
        printf("The whole number part of the average is even.\n");
    } else {
        printf("The whole number part of the average is odd.\n");
    }

    return 0;
}