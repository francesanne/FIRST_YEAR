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
} Student, *StudentPtr, StudentList[MAX];

void displayName(Name n);
void displayStudent(Student s);
void changeName(Student *s, String lname);
Name createName(String fname, String lname);
Student createStudent(int id, Name name, char sex);
/**
 *   Adds a student into the student list.
**/
void addStudent(StudentList list, int *count, Student s);

/**
 *   Return the number of female students in the list.
**/
int countFemale(StudenList list, int count);

/**
 *   Get the name of the female students and store into names from the list of students
**/
void getFemaleNames(StudentList list, int count, NameArray names, int *femaleCount);

void main() {
    Name name1 = {"John Ivan", "Sumi"};
    Name name2 = createName("Maria", "Luissa");
    Student stud1;
    Student stud2 = createStudent(1001, createName("Mario", "Luis"), 'M');

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

Name createName(String fname, String lname) {
    Name n;

    strcpy(n.fname, fname);
    strcpy(n.lname, lname);
    
    return n;
}

Student createStudent(int id, Name name, char sex) {
    Student s;

    s.stud_id = id;
    s.stud_name = name;
    s.sex = sex;
    
    return s;
}