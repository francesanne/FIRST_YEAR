#include <stdio.h>
#include <stdbool.h>

bool isTripSuccessful(int gold, int pirates) {
    return (gold >= pirates && gold + pirates <= 100);
}

int main(){
    int pirates, gold;
    
    printf("Enter number of pirates: ");
    scanf("%d", &pirates);
    printf("Enter number of gold: ");
    scanf("%d", &gold);

    bool success = isTripSuccessful(gold, pirates);

    if (success) {
        printf("The pirate trip was a success.\n");
        return true;
    } else {
        printf("The pirate trip was a failure.\n");
        return false;
    }
}
