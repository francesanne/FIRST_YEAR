#include <stdio.h>
int main(){

    int num, rev;
    
    printf("Input integer: ");
    scanf("%d", &num);
    
    while(num > 0){
        rev = num % 10;
        printf("%d", rev);
        
        num /= 10;
    }
    return 0;
}