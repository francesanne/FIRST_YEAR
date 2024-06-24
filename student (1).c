#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5

typedef char String[30];

typedef struct {
    String fname;
    String lname;
} Name, *NameList, NameArray[MAX];

typedef struct {
    int stud_id;
    Name stud_name;
    char sex; // m or f 
} Student;

void displayName(Name n);
void displayStudent(Student s);
void changeName(Student *s, String lname);

void main() {
    Name name1 = {"John Ivan", "Sumi"};
    Student stud1;

    stud1.stud_id = 1000;
    stud1.stud_name = name1;
    stud1.sex = 'M';
    
    displayName(name1);
    printf("\n\n");
    displayStudent(stud1);
    changeName(&stud1, "Ty");
    printf("\n\n");
    displayStudent(stud1);
}

void displayName(Name n) {
    printf("%s, %s", n.lname, n.fname);    
}

void displayStudent(Student s) {
    printf("ID: %d\n", s.stud_id);
    printf("NAME: ");
    displayName(s.stud_name);
    printf("\nSEX: %c", s.sex);
}

void changeName(Student *s, String lname) {
    strcpy(s->stud_name.lname, lname);
}