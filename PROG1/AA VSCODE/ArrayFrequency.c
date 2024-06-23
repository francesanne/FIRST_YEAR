/*1. Write a program in C to count the frequency of each element of an array. 
Example:Input 1: 2
Input 2: 3
Input 3: 2
Input 4: 4
Input 5: 3
Expected Output : The frequency of all elements of an array : 2 can be found 2 times in the array 
3 can be found 2 times in the array 
4 can be found 1 time in the array*/

#include <stdio.h>
int main(){

    int array_size, i, j;

    printf("Input array size: ");
    scanf("%d", &array_size);

    int arr[array_size];
    for (i = 0; i < array_size; i++) {
        printf("Input %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Frequency of all elements in an array:\n");

    for (i = 0; i < array_size; i++) {

        if (arr[i] == -1) {
            continue;
        }

        int count = 1;

        for (j = i + 1; j < array_size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }

        printf("%d can be found %d times in the array\n", arr[i], count);
    }
    return 0;
}
