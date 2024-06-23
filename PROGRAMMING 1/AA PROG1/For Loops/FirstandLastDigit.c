#include <stdio.h>
int main(){
    int n, last, first;

    printf("Input a number: ");
    scanf("%d", &n);

    first = n;
    for(;first>10;){
        first/=10;
    }
    printf("First digit: %d\n", first);


    last = n%10;
    printf("Last digit: %d", last);

    return 0;
}