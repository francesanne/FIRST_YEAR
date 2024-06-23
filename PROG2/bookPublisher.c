#include <stdio.h>
#include <string.h>

#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100
#define MAX_PUBLISHER_LENGTH 100

struct Book {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int publicationYear;
    char publisher[MAX_PUBLISHER_LENGTH];
};

struct Book addPublisher(struct Book book);

int main(){
    struct Book book;
    printf("Enter Book Title: ");
    fgets(book.title,sizeof(book.title),stdin);
    printf("Enter Book Author: ");
    fgets(book.author, sizeof(book.author),stdin);
    printf("Publication Year: ");
    scanf("%d", &book.publicationYear);

    book = addPublisher(book);

    printf("\nTitle: %s", book.title);
    printf("Author: %s", book.author);
    printf("Publication Year: %d\n", book.publicationYear);
    printf("Publisher: %s", book.publisher);
    
    return 0;
}

struct Book addPublisher(struct Book book){
    printf("Enter Publisher Name: ");
    scanf(" %[^\n]", book.publisher);
    return book;
}