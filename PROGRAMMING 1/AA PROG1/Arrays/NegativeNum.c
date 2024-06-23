#include <stdio.h>
void negativeElements();
int main(){
    
    int size = 5;
    int arr[size];
    int x;

    for(x=0;x<size;x++){
        scanf("%d", &arr[x]);
    }

    negativeElements(arr,size);
    return 0;

}

void negativeElements(int arr[], int size){
    printf("Arrays after processing: ");

    int x;

    for(x=0; x<size; x++){
        printf("%d\n", arr[x]);
    }

    for(x=0; x<size; x++){
        if(arr[x]<0){
        printf("Negative numbers: %d\n", arr[x]);
    }
    }


}