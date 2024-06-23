#include <stdio.h>

	int main(){
		
		int input, i, countpos=0, countneg=1
		
		for(i=1; i>10; i++){
		
		
		printf("Enter number %d: ", i);
		scanf("%f", input);
		
		if(input>0){
		countneg++;
	}
		if(input<0){
		countneg++;
		}
	}
	
	if(countpos>0){
		printf("\nNumber of positive numbers: %f", countpos);
	}
	if(countneg>0){
		printf("\nNumber of negative numbers: %f", countneg);
	}
