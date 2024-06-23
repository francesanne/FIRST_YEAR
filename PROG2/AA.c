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


// Function definitions...
studRecord initializeRecord(){
	studRecord record;
	for (int i = 0; i < 3; i++) {
        record.lists[i].studCount = 0; 
    }
    return record;
}
int countCS(studList list){
	int count = 0;
    for (int i = 0; i < list.studCount; i++) {
        if (list.studs[i].course == CS) {
            count++;
        }
    }
    return count;
}
int isSorted(studList list){
	for (int i = 1; i < list.studCount; i++) {
        if (strcmp(list.studs[i - 1].ID, list.studs[i].ID) > 0) {
            return 0; 
        }
    }
    return 1; 
}
int findRecord(studList list, char ID[]){
    for (int i = 0; i < list.studCount; i++) {
        if (strcmp(list.studs[i].ID, ID) == 0) {
            return i; 
        }
    }
    return -1; 
}
void insertRecord(studList *list, studType newStudent){
	int i;
	for(i=0; i<list->studCount && strcmp(list->studs[i].ID,newStudent.ID)<0; i++){}
	memcpy(list->studs+i+1, list->studs+i, (list->studCount-i)*sizeof(list->studs[0]));
	list->studs[i] = newStudent;
	list->studCount++;

//	int i = list->studCount - 1;
//    while (i >= 0 && strcmp(list->studs[i].ID, newRecord.ID) > 0) {
//        list->studs[i + 1] = list->studs[i];
//        i--;
//    }
//    list->studs[i + 1] = newRecord;
//    list->studCount++;
}
studType* findByLastName(studList list, char lname[], int *count){
    studType *resultArray = (studType *)malloc(sizeof(studType) * list.studCount);
    *count = 0;
    for (int i = 0; i < list.studCount; i++) {
        if (strcmp(list.studs[i].name.lname, lname) == 0) {
            resultArray[(*count)++] = list.studs[i];
        }
    }
    return resultArray;	
}
studList removeFailingStudents(studList *list){
	studList f = {{},0};
	int i;
	for(i=0; i<list->studCount; ){
	    if (list->studs[i].GPA > 3.0) {
	    	f.studs[f.studCount++] = list->studs[i];
	        memcpy(list->studs+i, list->studs+i+1, (list->studCount-i-1)*sizeof(list->studs[0]));
	        list->studCount--;
	    }else{
	        i++;
	    }
	}
	return f;
}
studList getCS(studList *list){
    studList csStudents;
    csStudents.studCount = 0;
    int i;
    for (i = 0; i < list->studCount; i++) {
        if (list->studs[i].course == CS) {
            insertRecord(&csStudents, list->studs[i]);
        }
    }
    return csStudents;
}
studList removeCS(studList *list){
    studList csStudents;
    csStudents.studCount = 0;
    int i;
    for(i = 0; i < list->studCount; ) {
        if (list->studs[i].course == CS) {
            insertRecord(&csStudents, list->studs[i]);
            memcpy(list->studs+i, list->studs+i+1, (list->studCount-i-1)*sizeof(list->studs[0]));
            list->studCount--;
        } else {
            i++;
        }
    }
    return csStudents;
}
studRecord splitByCourse(studList *list){
	studRecord record = initializeRecord();
	int i;
	for (i = 0; i < list->studCount; i++) {
		if (list->studs[i].course == CS || list->studs[i].course == IT || list->studs[i].course == IS) {
			insertRecord(&record.lists[list->studs[i].course], list->studs[i]);
		}
	}
	return record;
}
studRecord splitByCourseAndRemove(studList *list){
	studRecord record = initializeRecord();
	int i;
	for (int i = 0; i < list->studCount; ) {
		if (list->studs[i].course == CS || list->studs[i].course == IT || list->studs[i].course == IS) {
			insertRecord(&record.lists[list->studs[i].course], list->studs[i]);
			memcpy(list->studs+i, list->studs+i+1, (list->studCount-i-1)*sizeof(list->studs[0]));
			list->studCount--;
        } else {
            i++;
        }
	}	
	return record;
}


int main(){
    studList list;
    list.studCount = 0;

    // Adding sample data
    studType student1 = {"005", {"Doe", "John"}, CS, 3.5};
    insertRecord(&list, student1);
    studType student2 = {"002", {"Wilson", "Alice"}, IS, 2.9};
    insertRecord(&list, student2);
    studType student3 = {"001", {"Johnson", "Emily"}, IT, 2.7};
    insertRecord(&list, student3);
    studType student4 = {"004", {"Brown", "Michael"}, CS, 2.3};
    insertRecord(&list, student4);
    studType student5 = {"007", {"Wilson", "David"}, CS, 3.8};
    insertRecord(&list, student5);
    studType student6 = {"003", {"Wilson", "Josh"}, ICT, 3.8};
    insertRecord(&list, student6);

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
    int count = 0;
    studType* foundStudents = findByLastName(list, "Wilson", &count);
    printf("Students with last name Wilson:\n");
    for (int i = 0; i < count; ++i) {
        printf("%s %s\n", foundStudents[i].name.fname, foundStudents[i].name.lname);
    }
    free(foundStudents);

    // 6. Given a studList, Remove the items with failing GPAs and transfer them in a new array of studTypes
    // which will be returned to the calling function.
// COMMENTED TO RETAIN THE FULL LIST
//    studList removedStudents = removeFailingStudents(&list);
//    printf("Students with failing GPAs:\n");
//    for (int i = 0; i < removedStudents.studCount; ++i) {
//        printf("%s %s %.1f\n", removedStudents.studs[i].name.fname, removedStudents.studs[i].name.lname, removedStudents.studs[i].GPA);
//    }

    // 7: Given a studList, get only the CS, copy them and return in a new studList (sorted by last name)
    studList csStudents = getCS(&list);
    printf("CS students:\n");
    for (int i = 0; i < csStudents.studCount; ++i) {
        printf("%s %s\n", csStudents.studs[i].name.fname, csStudents.studs[i].name.lname);
    }

    // 8. Given a studList, remove the CS from the old list and place them in a new studList (sorted by last name)
// COMMENTED TO RETAIN THE LIST
//    studList removedCS = removeCS(&list);
//    printf("Removed CS students:\n");
//    for (int i = 0; i < removedCS.studCount; ++i) {
//        printf("%s %s\n", removedCS.studs[i].name.fname, removedCS.studs[i].name.lname);
//    }

    // 9. Given a studList (nothing is ordered), copy the CS, IS, and IT students and place them in the appropriate 
    //    sublist in a studRecord structure which will be returned to the calling function. The students in each studList in the new structure must be sorted in increasing order of last name.
    studRecord courseRecord = splitByCourse(&list);
    printf("CS students in courseRecord:\n");
    for (int i = 0; i < courseRecord.lists[CS].studCount; ++i) {
        printf("%s %s\n", courseRecord.lists[CS].studs[i].name.fname, courseRecord.lists[CS].studs[i].name.lname);
    }
    printf("IT students in courseRecord:\n");
    for (int i = 0; i < courseRecord.lists[IT].studCount; ++i) {
        printf("%s %s\n", courseRecord.lists[IT].studs[i].name.fname, courseRecord.lists[IT].studs[i].name.lname);
    }
    printf("IS students in courseRecord:\n");
    for (int i = 0; i < courseRecord.lists[IS].studCount; ++i) {
        printf("%s %s\n", courseRecord.lists[IS].studs[i].name.fname, courseRecord.lists[IS].studs[i].name.lname);
    }


    // 10: Same as #9, but instead of just copying, remove the items from the original studList.
    studRecord removedCourseRecord = splitByCourseAndRemove(&list);
    printf("Remaining students in original list:\n");
    for (int i = 0; i < list.studCount; ++i) {
        printf("%s %s\n", list.studs[i].name.fname, list.studs[i].name.lname);
    }

    return 0;
}
