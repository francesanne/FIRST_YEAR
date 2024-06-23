#include<stdio.h>
void swap(int n1,int n2);
int main(){

    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    printf("Numbers before swapping: %d %d\n", n1,n2);

    swap(n1,n2);

    printf("Numbers after swapping outside the function: %d %d\n", n1, n2);

    return 0;
}

void swap(int n1,int n2){
    int temp;
    printf("Numbers before swapping inside the function: %d %d\n", n1,n2);
    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("Numbers after swapping inside the function: %d %d\n", n1,n2);
}