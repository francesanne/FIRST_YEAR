#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,x;
	printf("Enter number of inputs: ");
	scanf("%d", &n);

	int *i = malloc (n*sizeof(int));

	for(x=0;x<n;x++){
		printf("Enter no. %d: ",x+1);
		scanf("%d", &i[x]);
	}
	
	for(x=0;x<n;x++){
		printf("%d", i[x]);
		if(x<n-1){
			printf(", ");
		}
	}

	printf("\n");

	for(x=n-1;x>=0;x--){
		printf("%d", i[x]);
		if(x!=0){
			printf(", ");
		}
	}
	return 0;
}
