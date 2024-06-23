#include <stdio.h>
int main(void){

int a, b, total;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

        if (a == 11){
            a = 1;
        }
        
        if (b == 11){
            b = 1;
        }

    total = a + b;
    
    if (total <= 21){
        printf("Total sum: %d\n", total);
    }
    else{
        return 0;
    }

}
