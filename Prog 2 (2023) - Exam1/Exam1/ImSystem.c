#include <stdio.h>

typedef struct{
	char name[20];
	int id;
	int price;
	int quantity;
	char supplier[20];
	
}item;

void addItem(){
	
	item newItem;
	printf("Enter the ID of the item: ");
	scanf("%d", &newItem.id);
	printf("Enter the name of the item: ");
	scanf("%d", &newItem.name);
	printf("Enter the price of the item: ");
	scanf("%d", &newItem.price);
	printf("Enter the quantity of the item: ");
	scanf("%d", &newItem.quantity);
	printf("Enter the supplier of the item: ");
	scanf("%d", newItem.supplier);
	printf("Item added to inventory");
	
}




void searchItem(){
}
void displayItem(){
}
void generateReport(){
}


int main(){
	
	printf("Inventory Management System\n");
	printf("1. Add new item\n");
	printf("2. Search item by ID\n");
	printf("3. Display inventory\n");
	printf("4. Generate report\n");
	printf("5. Exit/n");
	
	
	int choice;
	
	printf("Enter your choice: ");
	scanf("%d", &choice);
	
	switch (choice){
		case 1:
			addItem();
			break;
			
		case 2:
			searchItem();
			break;
		
		case 3:
			displayItem();
			break;
			
		case 4:
			generateReport();
			break;
			
		case 5:
			printf("Exiting program");
			break;
			
		default:
			printf("Invalid choice.");
	}
		
	return 0;
}

