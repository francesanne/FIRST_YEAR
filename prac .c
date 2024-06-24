#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*stnode;


void createNodeList(int n){
    struct node *temp, *newNode;
    int i, num;
    stnode = (struct node *)malloc(sizeof(struct node));

    printf("Input data from Node 1: ");
    scanf("%d", &num);
    stnode->data=num;
    stnode->next = NULL;
    temp = stnode;

    for(i=2;i<=n;i++){
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Input data from node %d: ", i);
        scanf("%d", &num);
        newNode->data=num;
        newNode->next=NULL;

        temp->next = newNode; //link headnode to new node
        temp = newNode;
    }

}

int main(){
    int n;
    printf("Enter no. of nodes: ");
    scanf("%d");

    createNodeList(n);
    displayNodeList();
    return 0;
}