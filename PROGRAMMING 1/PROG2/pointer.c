#include <stdio.h>
struct person {
    int age;
    float weight;
};

int main(){

    struct person *personptr, p1;
    personptr = &p1;

    printf("Enter age: ");
    scanf("%d", &(*personptr).age);

    printf("Enter weight: ");
    scanf("%f", &(*personptr).weight);


    printf("Age: %d\n", (*personptr).age);
    printf("Weight: %.2f\n", (*personptr).weight);
    
    printf("Enter new age: ");
    scanf("%d", &(*personptr).age);

    printf("Enter new weight: ");
    scanf("%f", &(*personptr).weight);

     printf("New age: %d\n", (*personptr).age);
    printf("New weight: %.2f\n", (*personptr).weight);
    return 0;
}