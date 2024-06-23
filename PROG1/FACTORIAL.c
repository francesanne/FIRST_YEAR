
#include <stdio.h>   //library or preprocessor
//Return type (int) - function name (main) - parameter ()
int main() { //function header
    int num, i; //data type (int) - variable name (num,i) - semicolon (;)
    unsigned long long factorial = 1;  /*data type (unsigned long long) - variable name (factorial) - operator (=) - initial value (1) */
    
    printf("Input a number: "); //statement/function
    scanf("%d", &num); //format specifier (%d) - memory location (&num)


    if (num < 0) { //if statement - condition
        printf("Factorial is not defined for negative numbers."); 
    } else {
       
        for (i = 1; i <= num; i++) {  //for loop (initialization; condition; increment)
            factorial *= i; //statement
        }
        printf("%d! = %llu", num, factorial);
    }

    return 0; //return statement
}


