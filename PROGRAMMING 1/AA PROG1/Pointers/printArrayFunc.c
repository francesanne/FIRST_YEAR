#include<stdio.h>
void printArray(int *arr[], int size);
int main(){
    int arr[5];
    printArray(arr, 5);
    return 0;
}

void printArray(int *arr[], int size){
    int x;
    printf("Array elements are:\n");
    for(x=0;x<size;x++){
        printf("%d\n", arr[x]);
    }
}   