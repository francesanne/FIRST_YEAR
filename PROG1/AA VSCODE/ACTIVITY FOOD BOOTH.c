#include <stdio.h>
int main(){
	
	float orange_price = 16.50;
	float potato_price = 21.23;
	float pork_price = 160.00;
	
	int oranges_per_box = 50;
	int potatoes_per_box = 60;
	
	int sold_orange, sold_potato;
	float sold_pork;
	
	float total_orange_sold, total_potato_sold, total_pork_sold, total_sales;
	
	printf("Enter number of boxes of oranges sold: ");
	scanf("%d", &sold_orange);
	printf("Enter number of boxes of potatoes sold: ");
	scanf("%d", &sold_potato);
	printf("Enter kilos of pork sold: ");
	scanf("%f", &sold_pork);
	
	total_orange_sold = orange_price * oranges_per_box *sold_orange;
	total_potato_sold = potato_price * potatoes_per_box *sold_potato;
	total_pork_sold = pork_price * sold_pork;
	
	
	printf("\n\nTotal sales of oranges sold: %.2f", total_orange_sold);
	printf("\nTotal sales of potato sold: %.2f", total_potato_sold);
	printf("\nTotal sales of pork sold: %.2f", total_pork_sold);
	
	total_sales = (0.30 * total_orange_sold) + (0.30 * total_potato_sold) + (0.40 * total_pork_sold);
	
	printf("\n\nTotal Sales = %.2f", total_sales);
	
	if (total_sales > 1000){
		printf("\nHigh Demand");
	}else if(total_sales >= 500 && total_sales <= 1000){
		printf("\nAverage Demand");
	}else if (total_sales < 500){
		printf("\nLow Demand");
	}
	 
	return 0;
}
