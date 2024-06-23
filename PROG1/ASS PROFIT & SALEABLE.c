#include <stdio.h>
int main(){
	int choice;
	int profit, sales, expenses;
	int sold, bought, product;
		printf("Input to compute profit (1) or check if a product is saleable (2): ");
		scanf("%d", &choice);
	
	switch (choice){
		
		case 1:
			printf("\nThis program will compute the profit.");
			
			printf("\nInput sales: ");
			scanf("%d", &sales);
			printf("Input expenses: ");
			scanf("%d", &expenses);
			
			profit = sales - expenses;
				
				if (profit > 0){
					printf("\nThe business is earning.");
				}
				else if (profit < 0){
					printf("\nThe business is losing.");
				}
				else {
					printf("\nThe business is break even.");
				}
				
		return 0;
			
		case 2:
			
			printf("\nThis program will check if a product is saleable.");
		
			printf("\nInput quantity sold: ");
			scanf("%d", &sold);
			printf("Input quantity bought: ");
			scanf("%d", &bought);
			
				if (sold >= bought){
					printf("\nThe product is saleable.");
				}
				else{
					printf("\nThe product is not saleable.");
				}
			
			return 0;	
		
		default:
			printf("\nInvalid.");
			
	}

return 0;
}
2
