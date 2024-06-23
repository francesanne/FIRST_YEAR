#include <stdio.h> //library or preprocessor
//return type - function name - parameter
int main(){ //function header
	int num1,num2,i, hcf; //data type, variable names, semicolon
	
	printf("Input number 1: "); //statements or functions
	scanf("%d", &num1); /*format specifier (%d) - memory location (&num1)*/
	printf("Input number 2: ");
	scanf("%d", &num2);
	
	for (i = 1; i<=num1 && i<=num2; i++){ /*for loop (initialization; condition; increment)*/
		if (num1%i == 0 && num2%i == 0){ //if statement (condition)
			hcf = i; 
		}
	}
		printf("HCF = %d", hcf); //statement
		
	return 0; //return statement
}


