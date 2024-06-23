#include <stdio.h>
int main(){
	int num1,num2,i, hcf;
	
	printf("Input number 1: ");
	scanf("%d", &num1);
	printf("Input number 2: ");
	scanf("%d", &num2);
	
	for (i = 1; i<=num1 && i<=num2; i++){
		if (num1%i == 0 && num2%i == 0){
			i = hcf;
		}
		print("HCF = %d", hcf);
	}
	return 0;
}

