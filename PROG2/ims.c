#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item{
    char name[20];
    int id;
    int price;
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
    scanf("%d", &items[count].price);
    printf("Enter the quantity of the item: ");
    scanf("%d", &items[count].quantity);
    printf("Enter the supplier of the item: ");
    scanf("%s", &items[count].supplier);
    count++;
}

void searchItemById(){

}

void displayInventory(){
    int x;
    printf("Current inventory:\n");
    for(x=0;x<count;x++){
        printf("ID: %d\n", items[x].id);
        printf("Price: %d\n", items[x].price);
        printf("Quantity: %d\n", items[x].quantity);
        printf("Supplier: %s\n\n", items[x].supplier);
        
    }
}

void generateReport(){

}

int main(){
    int choice;
    do{
        switch(choice){
            printf("Inventory Management System\n1. Add new item\n2. Search item by ID\n3. Display inventory\n4. Generate report\n5. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            
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