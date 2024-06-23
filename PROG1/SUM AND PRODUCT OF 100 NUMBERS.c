#include <stdio.h>
int main(){
    int i, n;
    int sum_even = 0;
    long long product_odd = 1;

    printf("\nEnter either negative or positive integers. Enter 0 to finish.\n");

    for (i = 0; i < 100; i++) {
        printf("\nEnter number %d: ", i + 1);
        scanf("%d", &n);
        
        if (n == 0) {
            break;
        }
        
        if (n % 2 == 0) {
            // Even number
            sum_even += n;
        } else {
            // Odd number
            product_odd *= n;
        }

        printf("Sum of even numbers so far: %d\n", sum_even);
        printf("Product of odd numbers so far: %lld\n", product_odd);
    }

    if (i == 0) {
        printf("No numbers entered.\n");
    } else {
        printf("\nFinal Sum of even numbers: %d\n", sum_even);
        printf("Final Product of odd numbers: %lld\n", product_odd);
    }

    printf("That's the end of this program.\n");

    return 0;
}

