#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertend(struct Node** node, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    struct Node* temp = *node;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertstart(struct Node** node, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *node;
    *node = newNode;
}

void insertsorted(struct Node** node, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*node == NULL || (*node)->data >= data) {
        newNode->next = *node;
        *node = newNode;
    } else {
        struct Node* current = *node;
        while (current->next != NULL && current->next->data < data) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void updatevalue(struct Node* node, int old, int newval) {
    while (node != NULL) {
        if (node->data == old) {
            node->data = newval;
            return;
        }
        node = node->next;
    }
    printf("Value not found!\n");
}

void updateposition(struct Node* node, int position, int newval) {
    int count = 1;
    while (node != NULL) {
        if (count == position) {
            node->data = newval;
            return;
        }
        node = node->next;
        count++;
    }
    printf("Position out of range!\n");
}

void deleteByValue(struct Node** node, int data) {
    struct Node* temp = *node;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == data) {
        *node = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value not found!\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void deleteByPosition(struct Node** node, int position) {
    struct Node* temp = *node;

    if (position == 1) {
        *node = temp->next;
        free(temp);
        return;
    }

    int count = 1;
    struct Node* prev = NULL;
    while (temp != NULL && count < position) {
        prev = temp;
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("Position out of range!\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL; 
    int choice, data, old, newval, position;

    do {
        printf("\nMenu:\n");
        printf("1. Insert at the end\n");
        printf("2. Insert at the start\n");
        printf("3. Insert sorted\n");
        printf("4. Update by value\n");
        printf("5. Update by position\n");
        printf("6. Delete by value\n");
        printf("7. Delete by position\n");
        printf("8. Print list\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Insert at the end: ");
                scanf("%d", &data);
                insertend(&head, data);
                printList(head);
                break;
            case 2:
                printf("Insert at the start: ");
                scanf("%d", &data);
                insertstart(&head, data);
                printList(head);
                break;
            case 3:
                printf("Insert sorted: ");
                scanf("%d", &data);
                insertsorted(&head, data);
                printList(head);
                break;
            case 4:
                printf("Old value to update: ");
                scanf("%d", &old);
                printf("New value: ");
                scanf("%d", &newval);
                updatevalue(head, old, newval);
                printList(head);
                break;
            case 5:
                printf("Position to update: ");
                scanf("%d", &position);
                printf("New value: ");
                scanf("%d", &newval);
                updateposition(head, position, newval);
                printList(head);
                break;
            case 6:
                printf("Value to delete: ");
                scanf("%d", &data);
                deleteByValue(&head, data);
                printList(head);
                break;
            case 7:
                printf("Position to delete: ");
                scanf("%d", &position);
                deleteByPosition(&head, position);
                printList(head);
                break;
            case 8:
                printList(head);
                break;
            case 9:
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 9);

    return 0;
}