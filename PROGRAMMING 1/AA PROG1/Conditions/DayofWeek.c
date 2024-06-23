/*enter week number and print day of week*/

#include <stdio.h>
int main(){

    int num;

    printf("Input week number: ");
    scanf("%d", &num);

    if(num==1){
        printf("MONDAY");
    }else if(num==2){
        printf("TUESDAY");
    }else if(num==3){
        printf("WEDNESDAY");
    }else if(num==4){
        printf("THURSDAY");
    }else if(num==5){
        printf("FRIDAY");
    }else if(num==6){
        printf("SATURDAY");
    }else if(num==7){
        printf("SUNDAY");
    }else{
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;
}