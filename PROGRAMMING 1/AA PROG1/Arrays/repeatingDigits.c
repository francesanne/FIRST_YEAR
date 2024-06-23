#include <stdio.h>
int main(){

    int seen[10]={0};
    int n,rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n>0){
        rem = n % 10;
        if(seen[rem]==1){
            break;
        }
        seen[rem] = 1;
        n=n/10;
    }

    if(n>0){
        printf("Digit appears more than once.");
    }else{
        printf("Digit did not appear more than once.");
    }
    return 0;
}