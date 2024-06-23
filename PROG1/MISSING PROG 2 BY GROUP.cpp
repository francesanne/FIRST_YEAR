#include <stdio.h>

int main() {
    int num;
    // Error: Missing semicolon at the end of the printf statement
    printf("Please enter an integer: ")
    // Error: Missing ampersand (&) before num in scanf
    scanf("%d", num);
    
    // Error: Missing parentheses around num % 2 == 0
    if num % 2 = 0 {
        // Error: Missing braces {} for if block
        printf("The number is even.\n");
    else
        // Error: Missing braces {} for else block
        printf("The number is odd.\n");
    
    int i;
    for (i = 0; i < 10; i++) {
        printf("The value of i is: %d\n", i);
    }
    
    char message[10];
    // Error: Missing #include <string.h> for strcpy
    strcpy(message, "Hello, World!");
    printf("%s\n", message);
    
    return 0;
}

