#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

typedef struct{
    char lname[MAX];
    char fname[MAX];
}nameType;

typedef enum{
   CS, IS, IT, ICT, Math
}courseType;

typedef struct{
   char ID[8];
   nameType name;
   courseType course;
   float GPA;
}studType;

typedef struct{
  studType studs[100];
  int studCount;
}studList;


typedef struct{
  studList lists[3]; //CS, IS, IT
                     //use the enum equivalents
}studRecord;

// 0. Initialize a studRecord to reflect an empty record, then return.

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
