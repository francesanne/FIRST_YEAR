#include <stdio.h>
int main(){

    int arr[9] = {34,56,54,32,67,89,90,32,21};
    int x;

    for(x= 0; x<9; x++){
        printf("%d ", arr[x]);
    }
    
    printf("\n");

    for(x=8; x>=0; x--){
        printf("%d ", arr[x]);
    }

    return 0;
}