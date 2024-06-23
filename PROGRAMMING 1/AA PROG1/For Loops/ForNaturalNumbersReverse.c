//C program to print natural numbers in reverse from n to 1

#include<stdio.h>
int main(){
	int count,i;
	
	printf("Input N: ");
	scanf("%d", &count);
	
	for(i=count; i>0; i--){
		printf("%d",i);
		if(i>1){
			printf(", ");
		}
	}
	return 0;
}
