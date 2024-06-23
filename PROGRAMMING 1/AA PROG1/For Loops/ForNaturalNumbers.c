//C program to print all natural numbers from 1 to n

#include <stdio.h>
int main(){
	
	int range,i;
	
	printf("Input upper limit: ");
	scanf("%d", &range);
	
	for(i=1;i<=range;i++){
		printf("%d", i);
		if(i<range){
			printf(", ");
		}
	}
	return 0;
}
