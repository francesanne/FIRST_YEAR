/*Implement a function called processTotals, which takes two integers xand y. 
An integer variable total is initialized to 0 in the code editor. 
Repeatedly add the value of y to total and print total's value every line until total as reached or exceeded the value of x.
Use while loop in solving this problem.
Enter x: 6
Enter y: 3
Total: 3
Total: 6*/

#include <stdio.h>
int main(){
    int x,y;
    int total=0;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    while(total < x){
        total+=y;
        printf("Total: %d\n", total);
    }

    return 0;
}