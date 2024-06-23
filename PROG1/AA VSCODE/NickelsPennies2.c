/* Program 2: You are (again) given three numbers as input: nickels, pennies and sum. Can you select the exact change from your coins to reach a sum of cents? Return true if you can, and false otherwise.
In this challenge, you can be given any number of nickels and pennies.
Guideline: You do not need any loops to solve this challenge. You can build on your code from the previous challenge to solve this one.
The input starts with N, the number of cases.
N lines follow, which each contains 3 integers in order for nickels, pennies and sum.
Print out true or false to the output for each case on its own line.

Alright, imagine you have a bunch of nickels (each worth 5 cents) and pennies (each worth 1 cent). 
Someone tells you a number, and you have to figure out if you can use those nickels and pennies to make exactly that many cents.
Now, they're giving you a challenge with different cases. 
Each case has three numbers: how many nickels you have, how many pennies you have (but no more than 4 pennies), and the total amount of cents you want to make. 
Your task is to decide if you can use those coins to make exactly that many cents. If you can, you say "true"; if not, you say "false."
For example, let's say they tell you that you have 2 nickels, 3 pennies, and you want to make 13 cents. 
You'd need to figure out if you can use those coins to make exactly 13 cents. In this case, you can because 2 nickels make 10 cents, and 3 pennies make 3 cents, 
which adds up to 13 cents.
The guideline is interesting: you don't need to use a loop to solve this challenge! You can use what you've already written in the first program and just build on it. 
It's like solving a bunch of little puzzles where you see if your coins can make the exact amount of cents they're asking for.
So, you read the number of cases, and for each case, you check if your coins can make the desired sum. 
Then, you print out "true" or "false" for each case on its own line. It's like being a coin superhero, figuring out if you can save the day 
by making the exact change they need!
*/

/* #include <stdio.h>

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

        // Check if the total cents match the desired sum
        if (totalCents == sum) {
            printf("true\n");
        } else {
            printf("false\n");
        }
    }

    return 0;
} */
#include <stdio.h>
int main(){
    
    int N;  
    int nickels, pennies, sum;

    printf("Enter how many cases: ");
    scanf("%d", &N);

    while (N--) {
        
        printf("Enter the number of nickels, pennies, and desired sum: ");
        scanf("%d %d %d", &nickels, &pennies, &sum);

        if ((nickels * 5) + pennies >= sum) {
            printf("true\n");
        } else {
            printf("false\n");
        }
    }
    return 0;
}

