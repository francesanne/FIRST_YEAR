#include<stdio.h>
int main(){
    int seen[10] = {0};
    int n, rem;

    printf("Input: ");
    scanf("%d", &n);

    while(n>0){
        rem = n%10;
        if(seen[rem] == 1){
            break;
        }
        seen[rem]=1;

        n = n/10;
    }

    if(n>0){
        printf("Yes.");
    }else{
        printf("No.");
    }

    return 0;
}