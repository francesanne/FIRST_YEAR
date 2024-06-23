#include <stdio.h>

int hasVowel(char word[]);
int main() {
    char s[100];
    int i = 0;
    char word[20];

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && i < sizeof(word) - 1) {
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n') {
            word[i] = '\0';
            if (!hasVowel(word)) {
                printf("%s\n", word);
            }
            i = 0;
        } else {
            word[i] = s[i];
        }
        i++;
    }

    return 0;
}

int hasVowel(char word[]) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            return 1;
        }
    }

    return 0;
}
