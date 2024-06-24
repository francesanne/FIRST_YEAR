#include <stdio.h>
#define MAX 10

typedef char String[20];

typedef struct {
    int elems[MAX];
    int count;
} ArrayList; 

//void insertRear(int arr[], int *count, int item);
void insertRear(ArrayList *list, int item);
void insertFront(ArrayList *list, int item);
void insertAt(ArrayList *list, int item, int ndx);
void display(ArrayList list);

void removeRear(ArrayList *list);

void main() {
    String menu[5] = {"Add Front", "Delete Front", "Add Rear", "Delete Rear", "EXIT"};
    ArrayList myList;
    int choice, value;
    
    myList.count = 0;

    do {
        for(int i = 0; i < 5; ++i) {
            printf("[%2d]  %s\n", i+1, menu[i]);
        }
        printf("enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter item to be added: ");
                scanf("%d", &value);
                insertFront(&myList, value);
                display(myList);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                removeRear(&myList);
                display(myList);
                break;
            case 5:
                printf("Thank you.");
                break;
            deafult:
                printf("Invalid input!!!");
        }
        printf("\n");
    } while(choice != 5);
    
    
    
    
    
    
    
    // display(myList);
    // insertRear(&myList, 13);
    // display(myList);
    // insertRear(&myList, 5);
    // display(myList);
    // insertRear(&myList, 6);
    // display(myList);
    // removeRear(&myList);
    // display(myList);
    // removeRear(&myList);
    // display(myList);
    // insertRear(&myList, 100);
    // display(myList);
    // insertFront(&myList, 200);
    // display(myList);
    // insertFront(&myList, 69);
    // display(myList);
    // removeRear(&myList);
    // display(myList);
    // insertAt(&myList, 50, 1);
    // display(myList);
    
}

// void insertRear(int arr[], int *count, int item) {
//     if(*count < MAX) {
//         arr[(*count)++] = item;
//     }
// }

void insertRear(ArrayList *list, int item) {
    if(list->count < MAX) {
        list->elems[(list->count)++] = item;
    }
    // insertAt(list, item, list->count);
}

void insertFront(ArrayList *list, int item) {
    insertAt(list, item, 0);
}

void insertAt(ArrayList *list, int item, int ndx) {
    if(list->count < MAX) {
        for(int i = list->count; i > ndx; --i) {
            list->elems[i] = list->elems[i-1];
        }
        list->elems[ndx] = item;
        (list->count)++;
    }
}

void removeRear(ArrayList *list) {
    if(list->count > 0) {
        (list->count)--;
    }
}

void display(ArrayList list) {
    printf("{");
    for(int i = 0; i < list.count; ++i) {
        printf("%d", list.elems[i]);
        if(i < list.count - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}