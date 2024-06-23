#include <stdio.h>
int main(){

    int start, end;
    int sum=0;

    printf("Input lower limit: ");
    scanf("%d", &start);

    printf("Input upper limit: ");
    scanf("%d", &end);

    printf("Sum of natural numbers %d-%d:\n", start, end);
    for(;start<=end;start++){
        sum+=start;
        printf("%d\n", sum);
    }


    return 0;
}