#include<stdio.h>

int main(){
    int i,n;
    int total=0;
    printf("This program will calculate the total and average of 5 digits/inputs.\n");
    for(i=0;i<=5;i++){
        printf("\nEnter n:");
        scanf("d%",&n);
        total+=n;
        print("\nTotal so far: %d",total);
    }printf("\nThe total now is: %d",total);
    printf("\nAverage is: %d", total/5);
    return 0;
}
