#include <stdio.h>

int main() {

    char character;
    printf("Enter a character: ");
    scanf("%c", &character);  

    if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) {
        if (character == 'a' || character == 'A' || character == 'e' || character == 'E' || character == 'i' ||
            character == 'I' || character == 'o' || character == 'O' || character == 'u' || character == 'U') {
            printf("This is a vowel letter.\n");
        } else {
            printf("This is a consonant letter.\n");
        }
    } else {
        printf("Character entered is a number/symbol.\n");
    }

    return 0;
}

