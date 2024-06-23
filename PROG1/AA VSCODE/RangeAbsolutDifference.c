/* Ask the user to input integers x , y, and z. In all test cases, it is guaranteed that x is lesser than y.
Check if z is within x and y (inclusive). If it is, then print the message "{z} is just within {x} and {y}".
Otherwise compute for the absolute difference between x and z and the absolute difference between z and y.
If the absolute difference between x and z is greater than the absolute difference between z and y, then print "{z} is farther from {x}".
However, if it's the other way around, print "{z} is farther from {y}".
*/

#include <stdio.h>
int main(){
    int x,y,z;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);

    if(z >= x && z <= y){
        printf("%d is just within %d and %d", z,x,y);
    } else{
        int diff_x_z = (x > z) ? (x-z) : (z-x);
        int diff_y_z = (y > z) ? (y-z) : (z-y);

        if (diff_x_z > diff_y_Z){
            printf("%d is farther from %d", z,x);
        } else{
            printf("%d is farther from %d", z,y);
        }
    }
    return 0;
}