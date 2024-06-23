#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item{
    char name[20];
    int id;
    float price;
    int quantity;
    char supplier[20];
};


struct item items[10];
int count = 0;

void addNewItem(){
    printf("Enter the ID of the item: ");
    scanf("%d", &items[count].id);
    printf("Enter the name of the item: ");
    scanf(" %s", &items[count].name);
    printf("Enter the price of thhe item: ");
    scanf("%f", &items[count].price);
    printf("Enter the quantity of the item: ");
    scanf("%d", &items[count].quantity);
    printf("Enter the supplier of the item: ");
    scanf("%s", &items[count].supplier);
    count++;
}

void searchItemById(){
    int id,x;
    printf("Enter the ID of the item to search: ");
    scanf("%d", &id);
    for(x=0;x<count;x++){
        if(id==items[x].id){
            printf("ID: %d\n", items[x].id);
            printf("Name: %s\n", items[x].name);
            printf("Price: %.2f\n", items[x].price);
            printf("Quantity: %d", items[x].quantity);
            printf("Supplier: %s", items[x].supplier);
        }
    }

}

void displayInventory(){
    int x;
    printf("Current inventory:\n");
    for(x=0;x<count;x++){
        printf("ID: %d\n", items[x].id);
        printf("Price: %.2f\n", items[x].price);
        printf("Quantity: %d\n", items[x].quantity);
        printf("Supplier: %s\n\n", items[x].supplier);
        
    }
}

void generateReport(){
    int x;
    float totalSales=0;
    int totalQuantity=0;
    for(x=0;x<count;x++){
        totalSales+=items[x].price*items[x].quantity;
        totalQuantity+= items[x].quantity;
    }
    printf("Total sales: $%.2f\n", totalSales);
    printf("Total quantity: %d\n", totalQuantity);
}

int main(){
    int choice;
    do{
        printf("Inventory Management System\n1. Add new item\n2. Search item by ID\n3. Display inventory\n4. Generate report\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            
            case 1:
                addNewItem();
                break;
            case 2:
                searchItemById();
                break;
            case 3:
                displayInventory();
                break;
            case 4: 
                generateReport();
                break;
            case 5:
                printf("Exiting program.");
                break;
        }

    }while( choice !=5);

    return 0;
}