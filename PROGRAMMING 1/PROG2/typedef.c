#include <stdio.h>

typedef struct Person {
    char name[50];
    int age;
}person;

int main(){


    person s1;

    strcpy(s1.name, "France");
    s1.age = 19;

    printf("Name: %s\n", s1.name);
    printf("Age:%d", s1.age);

    return 0;

}