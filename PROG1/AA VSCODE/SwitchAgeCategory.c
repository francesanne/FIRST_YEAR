#include <stdio.h>
int main(){

    char category;

    printf("Please enter age category: ");
    scanf("%c",&category);;

    switch (category){
        case 'B':
            printf("Baby = P0.00");
            break;
        case 'T':
            printf("Teenager = P2000.00");
            break;
        case 'A':
            printf("Adult = P15000.00");
            break;
        case 'S':
            printf("Senior Citizen = P4000.00");
            break;
        default:
            printf("Invalid input.");
    }
    return 0; 
}