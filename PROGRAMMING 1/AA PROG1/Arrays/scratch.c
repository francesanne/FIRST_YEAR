#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, x, *arr;

    printf("Enter number of arrays: ");
    scanf("%d", &n);

    arr = (int*)malloc(n* sizeof (int));

    for (x=0;x<n;x++){
        printf("Enter number %d: ", x+1);
        scanf("%d", &arr[x]);
    }

    for(x=0;x<n;x++){
        printf("%d ", arr[x]);
    }

    return 0;
}