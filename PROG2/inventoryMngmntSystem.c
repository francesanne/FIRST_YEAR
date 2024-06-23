#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct item{
        char name[50];
        int id;
        float price;
        int quantity;
        char supplier [50];
    };

    struct item items[100];
    int count = 0;

    void addNewItem(){
        printf("Enter the ID of the item: ");
        scanf("%d", &items[count].id);
        printf("Enter the name of the item: ");
        scanf("%s", items[count].name);
        printf("Enter the price of the item: ");
        scanf("%f", &items[count].price);
        printf("Enter the quantity of the item: ");
        scanf("%d", &items[count].quantity);
        printf("Enter the supplier of the item: ");
        scanf("%s", items[count].supplier);
        printf("Item added to inventory.\n\n");
        count++;
    }

    void searchItem(){
        int itemId;
        printf("Enter the ID of the item to search: ");
        scanf("%d", &itemId);

        for(int x=0; x<count;x++){
            if(itemId == items[x].id){
                printf("ID: %d\n", items[x].id);
                printf("Name: %s\n", items[x].name);
                printf("Price: %.2f\n", items[x].price);
                printf("Quantity: %d\n", items[x].quantity);
                printf("Supplier: %s\n",items[x].supplier);
                printf("\n");
            }
        }
    }

    void displayInventory(){
        printf("Current inventory:\n");
        for(int x=0; x<count; x++){
            printf("ID: %d\n", items[x].id);
            printf("Name: %s\n", items[x].name);
            printf("Price: %.2f\n", (items[x].price));
            printf("Quantity: %d\n", items[x].quantity);
            printf("Supplier: %s\n\n", items[x].supplier);
            
        }

        printf("\n");
    }

    void generateReport(){
    float totalSales = 0.0;
    int totalQuantity = 0;

    for(int x = 0; x < count; x++){
        float itemSales = items[x].price * items[x].quantity;
        totalSales += itemSales;
        totalQuantity += items[x].quantity;
    }

    printf("Total sales: $%.2f\n", totalSales);
    printf("Total quantity: %d\n\n", totalQuantity);
}

int main(){

    int choice;

    do{

        printf("Inventory Management System\n");
        printf("1. Add new item\n");
        printf("2. Search item by ID\n");
        printf("3. Display inventory\n");
        printf("4. Generate report\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                addNewItem();
                break;
            case 2:
                searchItem();
                break;
            case 3:
                displayInventory();
                break;
            case 4:
                generateReport();
                break;
            case 5:
                printf("Exiting program.");     
        }
    }while (choice != 5);


    return 0;
}