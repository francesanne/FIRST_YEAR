/*Write a simple calculator program that asks the user to input two decimal numbers and an arithmetic operator (one line per input).
Using a switch-case statement, perform the inputted arithmetic operation and print the answer in two decimal places on the next line. 
If the operation inputted is invalid, print "-999.99" instead.

Enter first number: 3.5
Enter second number: 4.25
Enter operation (+, -, *, or /): +
Result: 7.75

 */

#include <stdio.h>
int main(){

    float num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter operation (+, -, *, or /): ");
    scanf(" %c", &operator);

    switch (operator){
        case '+':
            result = num1+num2;
            printf("Result: %.2f", result);
            break;
        case '-':
            result = num1-num2;
            printf("Result: %.2f", result);
            break;
        case '*':
            result = num1*num2;
            printf("Result: %.2f", result);
            break;
        case '/':
            result = num1/num2;
            printf("Result: %.2f", result);
            break;
        default:
            printf("Result: -999.99");
    }
    return 0;
}