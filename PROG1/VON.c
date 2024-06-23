#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool is_trip_successful(int gold, int pirates) {
   if (gold + pirates <= 100) {
       printf("the ship was a success.\n");
       return true;
   } else {
       printf("the ship was a failure.\n");
       return false;
   }
}

int main(void) {
    int num;
	int a, b;
	char ch;
	int gold, pirate;
        
	
    printf("Choose program no. (1-3)\n");
    printf("Program no: ");
    scanf("%d", &num);

    switch (num) {
        case 1: // Program 1
            

            printf("Enter first number: ");
            scanf("%d", &a);

            printf("Enter second number: ");
            scanf("%d", &b);

            if (a == 11) {
                a = 1;
            }
            if (b == 11) {
                b = 1;
            }
            int sum = a + b;

            if (sum < 21) {
                printf("Sum of the two numbers: %d\n", sum);
            } else if (sum > 21) {
                return 0;
            }
            break;

        case 2: // Program 2

            printf("Press any key to roll a dice: ");
            scanf(" %c", &ch);

            srand(time(NULL));
            
            int roll = rand() % 6 + 1;
            
            printf("You rolled: %d\n", roll);
            int roll2 = rand() % 6 + 1;
            
            printf("You rolled: %d\n", roll2);

            int sum2;

            if (roll == roll2) {
                sum2= roll + roll2;
                sum2 *= 2;
            } else if ( roll != roll2){
                sum2= roll + roll2;
            }
            printf("Sum of the two rolls: %d\n", sum2);
            break;



        case 3: //program 3
       
        printf("how many golds?: ");
        scanf("%d", &gold);
        
        printf("how many pirates?: ");
        scanf("%d", &pirate);
        
        if(gold >= pirate && gold + pirate <= 100){
            printf("the trip was a success.\n");
        } else {
            printf("the trip was a failure.\n");
        }
        
        bool result = is_trip_successful(gold, pirate);
        
        
        break;
        default:
            printf("Not a valid program number.\n");
    }

    return 0;
}
