#include <stdio.h>

int main() { 
	int num1 = 5; 
	int num2 = 10; 
	int sum; 
	int i;
	
	sum = num1 + num2;
	
	if (sum > 0) {
		printf("Sum is positive\n"); 
	}else {
		printf("Sum is non-positive\n"); 
	}

	for (int i = 0; i < 5; i++){
		printf("Iteration: %d\n", i); 
	} 
		
	return 0;
}
