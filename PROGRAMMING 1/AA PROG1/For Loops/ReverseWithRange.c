// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int n,x, range;
    
    printf("Input N: ");
    scanf("%d", &n);
    printf("Enter end value: ");
    scanf("%d", &range);
    printf("Natural numbers from %d-1 in reverse: ", n);
    
    for(x=n; x>=range; x--){
        printf("%d" ,x);
        if(x>range){
            printf(", ");
        }
    }
    
    return 0;
}