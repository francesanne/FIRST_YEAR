/* Program 1: You are given a certain number of nickels and pennies and a desired sum of cents. Is it possible to select the exact change to reach that sum?
You will be given three numbers as input - nickels, pennies and sum. Return true if you can select coins to reach sum exactly, and false otherwise.
In this challenge, you can be given any number of nickels but only 0 to 4 pennies.

Note: A nickel is worth 5 cents. A penny is worth 1 cent.

The input starts with N, the number of cases.
N lines follow, which each contains 3 integers in order for the number of nickels, number of pennies, and the desired sum.
Print out true or false to the output for each case on its own line. 

Alright, imagine you have some nickels (worth 5 cents each) and pennies (worth 1 cent each). 
Someone tells you a number, and you need to figure out if you can use those nickels and pennies to make exactly that many cents.

They'll give you three numbers: how many nickels you have, how many pennies you have (but it can't be more than 4 pennies), 
and the total amount of cents you want to make.

For example, let's say they tell you that you have 2 nickels, 3 pennies, and you want to make 13 cents. 
You'd need to figure out if you can use those coins to make exactly 13 cents. In this case, you can because 2 nickels make 10 cents, and 3 pennies make 3 cents, which adds up to 13 cents.

But if they tell you that you have 1 nickel, 4 pennies, and you want to make 13 cents, 
you can't do it exactly because the most you can make with 1 nickel and 4 pennies is 9 cents.

So, the program is like a smart helper that takes these numbers and tells you if 
it's possible to make exactly the number of cents they asked for. If it's possible, it says "true"; if not, it says "false".
*/


#include <stdio.h>
int main() {

    int N;  
    int nickels, pennies, sum, totalCents;

    printf("Enter how many cases: ");
    scanf("%d", &N);

    while (N--) {
        printf("Enter the number of nickels, pennies, and desired sum: ");
        scanf("%d %d %d", &nickels, &pennies, &sum);

        if (pennies < 0 || pennies > 4) {
            printf("Invalid input for pennies. Please enter a value between 0 and 4.\n");
            continue;
            }

        totalCents = (nickels * 5) + pennies;

        if (totalCents == sum) {
            printf("True\n");
        } else {
            printf("False\n");
        }
    }
    return 0;
}

