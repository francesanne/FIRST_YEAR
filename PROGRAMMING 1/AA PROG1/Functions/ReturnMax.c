#include <stdio.h>
int max( int num1, int num2);
int main(){

    int n1, n2, maximum;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    maximum = max(n1, n2);

    printf("Maximum: %d", maximum);
    return 0;
}
int max(int num1, int num2){
    int maximum;

    if(num1>num2){
        maximum = num1;
    }else{
        maximum = num2;
    }
    return maximum;
}
