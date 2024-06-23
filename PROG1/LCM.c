#include <stdio.h> //library or preprocessor

//Return type - function name - parameter
int main(){ //function header
    int _num1, num2; //data type, variable name, semicolon
    int lcm, max; //data type, variable name, semicolon


    printf("Enter number 1: "); //statement or function
    scanf("%d", &_num1); //format specifier (%d) - memory location (&num)
    printf("Enter number 2: ");
    scanf("%d", &num2);

    max = (_num1 > num2) ? _num1 : num2;  //ternary operator

    while (1) { //while loop (condition)
        if (max % _num1 == 0 && max % num2 == 0) { /*if statement (condition)*/
            lcm = max; //statement
            break; //break statement
        }
        max++; //increment
    }
    printf("LCM = %d", lcm);
    
    return 0; //return statement
}

