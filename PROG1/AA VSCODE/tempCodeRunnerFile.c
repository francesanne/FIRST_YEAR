
#include <stdio.h>

int OddEven (int *);
int main(){

    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    OddEven(&a);

    if(OddEven(&a)){
        printf("It is an even number.\n");
        printf("Even: %d", a);
    } else {
        printf("It is an odd number.\n");
        printf("Odd: %d", a);
    }
    return 0;
}

int OddEven(int* b){
    return ((*b) % 2 == 0);
}

