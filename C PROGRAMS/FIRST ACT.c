#include <stdio.h>
#include <string.h>
int main()
{
char frstName[50];
char lastname[50];
int age;
int yrLevel;
char schlName[50];

printf("First Name: \n");
scanf("%s", &frstName);

printf("Last Name: \n");
scanf("%s", &lastname);

printf("Age: \n");
scanf("%d", &age);

printf("Year Level: \n");
scanf("%d", &yrLevel);

printf("School Name: \n");
scanf("%s", &schlName);

printf("First Name: %s\n", frstName);
printf("Last Name: %s\n", lastname);
printf("Age: %d\n", age);
printf("Year Level: %d\n", yrLevel);
printf("Year Level: %s\n", schlName);

return 0;


}

