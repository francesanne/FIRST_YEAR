#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,x,*marks;

    printf("Enter number of marks: ");
    scanf("%d", &n);

    marks = (int*)malloc(n* sizeof (int));

    for(x=0;x<n;x++){
        printf("Enter mark no. %d: ", x+1);
        scanf("%d", &marks[x]);
    }

    for(x=0;x<n;x++){
        printf("%d", marks[x]);
        if(marks[x]<n){
            printf(", ");
        }
    }

    printf("\n");

    float ave;
    int sum=0;

    for(x=0;x<n;x++){
        sum = sum + marks[x];
    }

    ave = (float)sum/n;
    printf("Sum: %d\n", sum);
    printf("Average: %f", ave);
    

    return 0;
}