# include <stdio.h>
# include <stdlib.h>
# define MAX 50

typedef struct{
    char itemName[MAX];
    int itemID;
    int itemPrice;
    int itemQuan;
    char itemSupplier[MAX];
}item;

typedef struct{
    item * itemInfo;
    int count;
}itemtracker;

itemtracker* addItem(itemtracker *);
void searchItem(itemtracker **);
void display(itemtracker **);
void report(itemtracker **);

int main(){

    itemtracker itemtrack, *itemptr;
    int choice;
    
    itemtrack.count = 0;
    itemtrack.itemInfo = malloc(sizeof(item));
    
    printf("Inventory Management System\n");
    printf("1. Add new item\n2. Search item by ID\n3. Display inventory\n4. Generate report\n5. Exit\n");


    printf("Enter your choice: ");
    scanf("%d", &choice);

    while (choice != 5){
        
        switch(choice){
            case 1:
                itemptr = addItem(&itemtrack);
                break;  
            case 2:
                searchItem(&itemptr);
                break;
            case 3:
                display(&itemptr);
                break;
            case 4:
                report(&itemptr);
                break;
            case 5:
                break;
        }

        
        printf("Inventory Management System\n");
        printf("1. Add new item\n2. Search item by ID\n3. Display inventory\n4. Generate report\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
    }
    
    return 0;
}

itemtracker*addItem(itemtracker *itemtrack){

    printf("Enter the ID of the item: ");
    scanf("%d", &itemtrack->itemInfo[itemtrack->count].itemID);

    printf("Enter the name of the item: ");
    scanf(" %[^\n]s", itemtrack->itemInfo[itemtrack->count].itemName);

    printf("Enter the price of the item: ");
    scanf("%d", &itemtrack->itemInfo[itemtrack->count].itemPrice);

    printf("Enter the quantity of the item: ");
    scanf("%d", &itemtrack->itemInfo[itemtrack->count].itemQuan);

    printf("Enter the supplier of the item: ");
    scanf(" %[^\n]s", itemtrack->itemInfo[itemtrack->count].itemSupplier);

    printf("Item added to inventory.\n");

    (itemtrack->count)++;

    itemtrack->itemInfo = realloc(itemtrack->itemInfo, sizeof(item) * (itemtrack->count + 1) );

    return itemtrack;
    
}

void searchItem(itemtracker **itemtrack){

    int ID, i;
    
    printf("Enter the ID of the item to search: ");
    scanf("%d", &ID);

    for (i = 0; i < (*itemtrack)->count; i++){
        if (ID == (*itemtrack)->itemInfo[i].itemID){
            printf("ID: %d\n", (*itemtrack)->itemInfo[i].itemID);
            printf("Name: %s\n", (*itemtrack)->itemInfo[i].itemName);
            printf("Price: %d\n", (*itemtrack)->itemInfo[i].itemPrice);
            printf("Quantity: %d\n", (*itemtrack)->itemInfo[i].itemQuan);
            printf("Supplier: %s\n", (*itemtrack)->itemInfo[i].itemSupplier);
        }
    }
}

void display(itemtracker **itemtrack){
    int i;

    printf("Current inventory:\n");
    for (i = 0; i < (*itemtrack)->count; i++){
        printf("ID: %d\n", (*itemtrack)->itemInfo[i].itemID);
        printf("Name: %s\n", (*itemtrack)->itemInfo[i].itemName);
        printf("Price: %d.00\n",(*itemtrack)->itemInfo[i].itemID);
        printf("Quantity: %d\n", (*itemtrack)->itemInfo[i].itemQuan);
        printf("Supplier: %s\n", (*itemtrack)->itemInfo[i].itemSupplier);
        printf("\n");
    }
}

void report(itemtracker **itemtrack){
    int i, totalsales = 0, totalquan = 0, total = 0;

    for (i = 0; i < (*itemtrack)->count; i++){
        totalsales = (*itemtrack)->itemInfo[i].itemPrice * (*itemtrack)->itemInfo[i].itemQuan;
        total +=totalsales;
        totalquan += (*itemtrack)->itemInfo[i].itemQuan;
    }

    printf("Total sales: $%d.00\n", total);
    printf("Total quantity: %d\n", totalquan);
    
}


