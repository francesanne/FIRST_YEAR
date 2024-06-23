#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100
void findLongestWord(char phrase[])

int main() {
    char phrase[MAX_LENGTH];
    printf("Enter a phrase: ");
    fgets(phrase, sizeof(phrase), stdin);

    findLongestWord(phrase);

    return 0;
}


// Function to find the longest word in a phrase
void findLongestWord(char phrase[]) {
    char longestWord[MAX_LENGTH] = ""; // Initialize longest word as an empty string
    char currentWord[MAX_LENGTH] = ""; // Buffer to store the current word being processed
    int maxLength = 0;

    int i = 0;
    while (phrase[i] != '\0') {
        // Ignore leading spaces
        while (isspace(phrase[i])) {
            i++;
        }

        // Extract current word
        int j = 0;
        while (phrase[i] != '\0' && !isspace(phrase[i])) {
            currentWord[j++] = phrase[i++];
        }
        currentWord[j] = '\0'; // Null-terminate the current word

        // Check if current word is longer than the longest word found so far
        if (j > maxLength) {
            maxLength = j;
            strcpy(longestWord, currentWord);
        }

        // Reset current word buffer
        currentWord[0] = '\0';
    }

    printf("The longest word in the phrase is: %s\n", longestWord);
}
