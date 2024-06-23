/*Special Name, or Age, or Birthyear?
Ask the user to input their name.
If their name ends with a vowel, ask them to input their age as well.
If their age is even, print "Wow, you're special!". Otherwise, if their age is odd, ask them to input their birth year.
If their birth year is even, print "Oh, you're still special!". Otherwise, print "You will be special next year.".
If their name ends with a consonant though, print "You're awesome!" .*/

#include <stdio.h>
#include <string.h>
int main(){

    char name [50];
    int age, birthyear;

    printf("Enter name: ");
    scanf("%99[^\n]", name);
    
    int length = strlen (name);
    char last = name [length - 1];

    if (last == 'a' || last == 'e' || last == 'i' || last == 'o' || last == 'u' ){
        printf("Enter age: ");
        scanf("%d", &age);

        if (age % 2 == 0){
            printf("Wow, you're special!");
        } else{
            printf("Enter birth year: ");
            scanf("%d", &birthyear);

                if (birthyear % 10 == 7){
                    printf("You will be special next year.");
                } else{
                    printf("Oh, you're still special!");
                }
        }
        }
    else {
        printf("You're awesome!");
    }
    return 0;
}