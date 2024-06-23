#include <stdio.h>

int main() {
    char firstName[50];
    char lastName[50];
    int age;
    int yearLevel;
    char schoolName[50];

    printf("Enter First Name: ");
    scanf("%s", &firstName);
   
    printf("Enter Last Name: ");
    scanf("%s", &lastName);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Year Level: ");
    scanf("%d", &yearLevel);
   
    printf("Enter School Name: ");
    scanf("%s", &schoolName);
    return 0;
   
}
