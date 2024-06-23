/*  Ask the user to input an integer remaining_value.
While the value of remaining_value is greater than 0, 
continuously ask the user for an integer input named,subtrahend, and subtract this to the remaining_value.
Print the remaining_value using this format: {remaining_value} - {subtrahend} = {new_remaining_value}

Enter a value: 10

Enter subtrahend: 5
10 - 5 = 5
Enter subtrahend: 2
5 - 2 = 3
Enter subtrahend: 3
3 - 3 = 0

Enter a value: 6

Enter subtrahend: 0
6 - 0 = 6
Enter subtrahend: 5
6 - 5 = 1
Enter subtrahend: 0
1 - 0 = 1
Enter subtrahend: 3
1 - 3 = -2
*/

#include <stdio.h>
int main(){
    int remaining_value, subtrahend;

    printf("Enter a value: ");
    scanf("%d", &remaining_value);

    while (remaining_value > 0){
        printf("\nEnter subtrahend: ");
        scanf("%d", &subtrahend);
        remaining_value -= subtrahend;
        printf("%d - %d = %d", remaining_value, subtrahend);
    }
    return 0;
