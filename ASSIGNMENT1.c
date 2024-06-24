#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

typedef struct{
    char lname[MAX];
    char fname[MAX];
} nameType;

typedef enum{
   CS, IS, IT, ICT, Math
} courseType;

typedef struct{
   char ID[8];
   nameType name;
   courseType course;
   float GPA;
} studType;

typedef struct{
  studType studs[100];
  int studCount;
} studList;


typedef struct{
  studList lists[3]; // CS, IS, IT
                     // use the enum equivalents
} studRecord;

// Function prototypes
studRecord initializeRecord();
int countCS(studList list);
int isSorted(studList list);
int findRecord(studList list, char ID[]);
void insertRecord(studList *list, studType newStudent);
studType* findByLastName(studList list, char lname[]);
studList removeFailingStudents(studList *list);
studList getCS(studList *list);
studList removeCS(studList *list);
studRecord splitByCourse(studList *list);
studRecord splitByCourseAndRemove(studList *list);

int main(){
    studList list;
    list.studCount = 0;

    // Adding sample data
    studType student1 = {"001", {"Doe", "John"}, CS, 3.5};
    insertRecord(&list, student1);
    studType student2 = {"002", {"Smith", "Alice"}, IS, 2.9};
    insertRecord(&list, student2);
    studType student3 = {"003", {"Johnson", "Emily"}, IT, 2.7};
    insertRecord(&list, student3);
    studType student4 = {"004", {"Brown", "Michael"}, CS, 2.3};
    insertRecord(&list, student4);
    studType student5 = {"005", {"Wilson", "David"}, CS, 3.8};
    insertRecord(&list, student5);

    // 0. Initialize a studRecord to reflect an empty record, then return.
    studRecord record = initializeRecord();

    // 1. Given a studList, Count the number of CS and return to calling function
    int csCount = countCS(list);
    printf("Number of CS students: %d\n", csCount);

    // 2. Given a studList, Check if the list is sorted
    int sorted = isSorted(list);
    printf("Is the list sorted? %s\n", sorted ? "Yes" : "No");

    // 3. Given a studList, Check if the record with given ID is found in the list.
    int index = findRecord(list, "003");
    if (index != -1) {
        printf("Record found at index: %d\n", index);
    } else {
        printf("Record not found.\n");
    }

    // 4. Insert a given student record in the given studList (at its proper sorted position - ID)
    studType newStudent = {"006", {"Garcia", "Maria"}, IT, 3.9};
    insertRecord(&list, newStudent);

    // 5. Given a studList, Return an array of studType bearing a given last name.
    studType* foundStudents = findByLastName(list, "Wilson");
    printf("Students with last name Wilson:\n");
    for (int i = 0; i < list.studCount; ++i) {
        printf("%s %s\n", foundStudents[i].name.fname, foundStudents[i].name.lname);
    }
    free(foundStudents);

    // 6. Given a studList, Remove the items with failing GPAs and transfer them in a new array of studTypes
    // which will be returned to the calling function.
    studList removedStudents = removeFailingStudents(&list);
    printf("Students with passing GPAs:\n");
    for (int i = 0; i < removedStudents.studCount; ++i) {
        printf("%s %s\n", removedStudents.studs[i].name.fname, removedStudents.studs[i].name.lname);
    }

    // 7: Given a studList, get only the CS, copy them and return in a new studList (sorted by last name)
    studList csStudents = getCS(&list);
    printf("CS students:\n");
    for (int i = 0; i < csStudents.studCount; ++i) {
        printf("%s %s\n", csStudents.studs[i].name.fname, csStudents.studs[i].name.lname);
    }

    // 8. Given a studList, remove the CS from the old list and place them in a new studList (sorted by last name)
    studList removedCS = removeCS(&list);
    printf("Removed CS students:\n");
    for (int i = 0; i < removedCS.studCount; ++i) {
        printf("%s %s\n", removedCS.studs[i].name.fname, removedCS.studs[i].name.lname);
    }

    // 9. Given a studList (nothing is ordered), copy the CS, IS, and IT students and place them in the appropriate 
    //    sublist in a studRecord structure which will be returned to the calling function. The students in each studList in the new structure must be sorted in increasing order of last name.
    studRecord courseRecord = splitByCourse(&list);
    printf("CS students in courseRecord:\n");
    for (int i = 0; i < courseRecord.lists[CS].studCount; ++i) {
        printf("%s %s\n", courseRecord.lists[CS].studs[i].name.fname, courseRecord.lists[CS].studs[i].name.lname);
    }

    // 10: Same as #9, but instead of just copying, remove the items from the original studList.
    studRecord removedCourseRecord = splitByCourseAndRemove(&list);
    printf("Removed CS students from original list:\n");
    for (int i = 0; i < removedCourseRecord.lists[CS].studCount; ++i) {
        printf("%s %s\n", removedCourseRecord.lists[CS].studs[i].name.fname, removedCourseRecord.lists[CS].studs[i].name.lname);
    }

    return 0;
}



// 1. Given a studList, Count the number of CS and return to calling function


// 2. Given a studList, Check if the list is sorted


// 3. Given a studList, Check if the record with given ID is found n the list. If found, return index, otherwise return -1.


// 4. Insert a given student record in the given studList (at its proper sorted position - ID)


// 5. Given a studList, Return an array of studType bearing a given last name.


// 6. Given a studList, Remove the items with failing GPAs and transfer them in a new array of studTypes which will be 
//    returned to the calling function.


// 7: Given a studList, get only the CS, copy them and return in a new studList (sorted by last name)


// 8. Given a studList, remove the CS from the old list and place them in a new studList (sorted by last name)


// 9. Given a studList (nothing is ordered), copy the CS, IS, and IT students and place them in the appropriate
 
//    sublist in a studRecord structure which will be returned to the calling function. The students in each studList in the new structure must be sorted in increasing order of last name.


// 10: Same as #9, but instead of just copying, remove the items from the original studList.