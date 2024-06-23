#include <stdio.h>
int cube(int num);
int main(){
    int n,c;

    printf("Enter a number: ");
    scanf("%d", &n);
    c = cube(n);
    printf("Cube of %d = %d",n,c );

    return 0;
}

int cube(int num){
    return (num*num*num);
}