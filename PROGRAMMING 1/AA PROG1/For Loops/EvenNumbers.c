#include<stdio.h>
int main(){
    int end,x;

    printf("Input upper range: ");
    scanf("%d", &end);

    printf("Even numbers between 1 to %d:\n", end);
    for(x=0;x<=end;x++){
        if(x%2==0 && x!=0){
            printf("%d",x);
            
            if(x<end){
                if(x%2==0){
                    printf(", ");
                }
            }
        }
    }

    return 0;
}