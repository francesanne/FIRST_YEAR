#include <stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int x;
    int *a;
    
    a = &arr;

    for(x=0;x<5;x++){
        printf("%d\t", *(a+x));
    }printf("\n");

    for(x=0;x<5;x++){
        printf("%d\t", *(a));
        a++;
    }printf("\n");

    for(x=0;x<5;x++){
        printf("%d\t", arr[x]);
        a++;
    }printf("\n");

    return 0;
}