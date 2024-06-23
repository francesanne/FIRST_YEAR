#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%s", &ch);

    // Check if the character is alphabetic
    if (isalpha(ch)) {
        printf("%c is an alphabet.\n", ch);
        // Convert the character to uppercase
        printf("Uppercase of %c is %c.\n", ch, toupper(ch));
        // Convert the character to lowercase
        printf("Lowercase of %c is %c.\n", ch, tolower(ch));
    }

    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    }

    // Check if the character is a punctuation mark
    if (ispunct(ch)) {
        printf("%c is a punctuation mark.\n", ch);
    }

    // Check if the character is a space
    if (isspace(ch)) {
        printf("%c is a whitespace character.\n", ch);
    }

    // Check if the character is uppercase
    if (isupper(ch)) {
        printf("%c is an uppercase letter.\n", ch);
    }

    // Check if the character is lowercase
    if (islower(ch)) {
        printf("%c is a lowercase letter.\n", ch);
    }

    return 0;
}
