
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5

typedef char String[30];

typedef struct {
    String fname;
    String lname;
} Name, *NameList, NameArray[MAX];

typedef struct{
    int stud_id;
    Name stude_name;
    char sex; // m or f
}Student, *StudentPtr, StudentList [MAX];

void dislayName(Name n);
void displayStudent(Student s);
void changeName(Student s, String lname);
Name createName(String fname, String lname);
Student createStudent (int id, Name name, char sex);

/*
Adds a student into the student list
*/

void addStudent (StudentList list, int *count, Student s);

/*
Return the number of female students in the list
*/

int countFemale (StudentList list, int count);

/*
Get the name of the female students and store into names from the...........
*/

void getFemaleNames (StudentList list, int count, NameArray name, int); //djsdhsjhjjs
