#include <stdio.h>
#include <stdlib.h>
struct person{
    int age;
    float weight;
    char name[50];
};


int main(){
    struct person *personPtr;
    int x,n;

    printf("Enter number of persons: ");
    scanf("%d", &n);

    personPtr = (struct person*) malloc (n * sizeof(struct person));



    for (x=0; x<n; x++){
        printf("Enter name: ");
        scanf("%s", (personPtr + x)->name); //no & for strings
        printf("Enter age: ");
        scanf("%d", &(personPtr + x)->age);
        printf("Enter weight: ");
        scanf("%f", &(personPtr + x)->weight);
    }

    for(x=0;x<n;x++){
        printf("%s\n", (personPtr+x)->name);
        printf("%d\n", (personPtr+x)->age);
        printf("%.2f\n", (personPtr+x)->weight);
    }
    return 0;
}