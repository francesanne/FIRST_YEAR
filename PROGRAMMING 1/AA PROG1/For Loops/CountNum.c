#include <stdio.h>
int main(){

    int n,x;
    int count = 0;

    printf("Input num: ");
    scanf("%d",&n);

    for(;n!=0;n/=10){
        count++;
    }

    printf("Number of digits: %d", count);
    return 0;
}