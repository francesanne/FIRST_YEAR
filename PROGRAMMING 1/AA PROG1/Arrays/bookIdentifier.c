#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void manageBookInventory() {
    char **bookIdentifiers = NULL;
    int numBooks = 0;
    char choice;

    do {
        printf("Enter book identifier: ");
        char buffer[100];
        scanf("%s", buffer);

        // Dynamically reallocate memory for book identifiers
        bookIdentifiers = realloc(bookIdentifiers, (numBooks + 1) * sizeof(char*));
        bookIdentifiers[numBooks] = malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(bookIdentifiers[numBooks], buffer);

        numBooks++;

        printf("Do you want to enter another book identifier? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    // Print book identifiers
    printf("Book identifiers stored in the array:\n");
    for (int i = 0; i < numBooks; i++) {
        printf("%s\n", bookIdentifiers[i]);
        free(bookIdentifiers[i]); // Free memory for each book identifier
    }
    free(bookIdentifiers); // Free memory for the array
}

int main() {
    manageBookInventory();
    return 0;
}
