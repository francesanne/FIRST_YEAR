/*
Write a program in C to copy odd and even integers into separate arrays. 
Example:Input 1: 1
Input 2: 3
Input 3: 2
Input 4: 4
Input 5: 5
Expected Output : The elements inside the array : Numbers in the even array 2, 4
Numbers in the odd array 1, 3, 5
*/

#include <stdio.h>
int main(){
    int size, i, evencomma = 0, oddcomma = 0;

    printf("Input array size: ");
    scanf("%d", &size);

    int array[size];

    for (i = 0; i < size; i++) {
        printf("Input %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("The elements inside the array");
    printf("\nNumbers in the even array: ");

    for (i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            if (evencomma != 0) {
                printf(", ");
            }
            printf("%d", array[i]);
            evencomma = 1;
        }
    }

    printf("\nNumbers in the odd array: ");
    for (i = 0; i < size; i++) {
        if (array[i] % 2 != 0) {
            if (oddcomma != 0) {
                printf(", ");
            }
            printf("%d", array[i]);
            oddcomma = 1;
        }
    }
    return 0;
}
