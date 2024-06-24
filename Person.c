#include <stdio.h>
#include <string.h>

#define MAX 10

typedef char String[20];
typedef struct {
    String fname;
    String lname;
} Name, *NamePtr, NameListArray[MAX];

typedef struct {
    //name, age, sex, address
} Person;

bool addPerson(Person list[], int *count, Person p);
void displayAllPerson(Person list[], int count);
int countFemale(Person list[], int count);
void getNames(Person list[], int count, Name name[], int *name_count, String city);

Name createName(String fname, String lname);
void displayName(Name n);
// void changeName(NamePtr name, String lname);
void changeName(Name *name, String lname);
Name changeName2(Name name, String lname);

void main() {
    Name name = createName("Gio", "Delgado");
    
    displayName(name);
    // changeName(&name, "Choi");
    name = changeName2(name, "George");
    printf("\n");
    displayName(name);

    NameListArray myList;
    Name list[MAX];

    list[0] = name;
    list[1] = createName("Gio", "Delgado");

    myList[0] = createName("Josh", "Delgado");

    printf("\n%s", myList[0].fname);
}

Name createName(String fname, String lname) {
    Name n;

    strcpy(n.fname, fname);
    strcpy(n.lname, lname);

    return n;
}

void displayName(Name n) {
    printf("%s, %s", n.lname, n.fname);
}

void changeName(Name *name, String lname) {
    strcpy(name->lname, lname);    
}

Name changeName2(Name name, String lname) {
    Name n = name;

    strcpy(n.lname, lname);

    return n;
}