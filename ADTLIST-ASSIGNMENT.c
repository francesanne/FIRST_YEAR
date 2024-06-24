#include<stdio.h>
#include<stdlib.h>

#define MAX 10

typedef int *numPtr, numList[MAX];
typedef struct{
   int nums[MAX];
   int count;
}numArrayList;

// Function prototypes
void insertNum(numList L, int num, int *count); 
void insertNumArray(numArrayList *L, int num);
void displayNumList(numList L, int count);
void displayNumArrayList(numArrayList L);
int findNum(numList L, int num, int count);
numArrayList evenNumArrayList(numArrayList L); // task 3a
numPtr evenNumList(numList L); //  task 3b
int removeNumber(numArrayList *L, int num); //  task 4
void insertSorted(numArrayList *L, int num); //  task 5

int main(){
   numList list = {1,3,10};
   int count = 3;
   displayNumList(list, count); 
   insertNum(list, 7, &count);
   displayNumList(list, count);
   
   numArrayList list2 = {{1,3,10},3};
   displayNumArrayList(list2);
   insertNumArray(&list2, 7);
   displayNumArrayList(list2);
   
   int pos = findNum(list, 3, count);
   printf("\nPosition of 3 in the numList? (%d)", pos);
   pos = findNum(list, 5, count);
   printf("\nPosition of 5 in the numList? (%d)", pos);
   
   numArrayList evenList = evenNumArrayList(list2); // task 3a
   printf("\nEven numbers in numArrayList: ");
   displayNumArrayList(evenList);

   numPtr evenNumbers = evenNumList(list); //  task 3b
   printf("\nEven numbers in numList: ");
   for (int i = 1; i <= evenNumbers[0]; ++i) {
      printf("%d ", evenNumbers[i]);
   }
   
   int removed = removeNumber(&list2, 3); //  task 4
   printf("\nRemoved 3 from numArrayList? %d\n", removed);
   displayNumArrayList(list2);

   insertSorted(&list2, 5); //  task 5
   printf("\nAfter inserting 5 in sorted position: ");
   displayNumArrayList(list2);

   return 0;
}

//  insert a number into the numList
void insertNum(numList L, int num, int *count){
	if(*count<MAX){
    	L[*count] = num;
    	(*count)++;
   	}
}

// insert a number into the numArrayList
void insertNumArray(numArrayList *L, int num){
   if(L->count<MAX){
      L->nums[L->count] = num;
      L->count++;
   }
}

// display the elements of numList
void displayNumList(numList L, int count){
	int x;
	printf("numList contains: { ");
	for(x=0;x<count;x++){
		printf("%d",L[x]);
		if(x+1<count) printf(", "); else printf("");
	}
	printf(" }\n");
}

// display the elements of numArrayList
void displayNumArrayList(numArrayList L){
	int x;
	printf("numArrayList contains: { ");
	for(x=0;x<L.count;x++){
		printf("%d",L.nums[x]);
		if(x+1<L.count) printf(", "); else printf("");
	}
	printf(" }\n");
}

//  find the position of a number in numList
int findNum(numList L, int num, int count){
	int i, ret=-1;
	for(i=0; i<count && L[i] != num; i++){}
	return (i<count) ? i : -1;
}

// get a numArrayList of even numbers from a given numArrayList (task 3a)
numArrayList evenNumArrayList(numArrayList L) {
    numArrayList evenList = {{0}, 0};
    for (int i = 0; i < L.count; ++i) {
        if (L.nums[i] % 2 == 0) {
            evenList.nums[evenList.count] = L.nums[i];
            evenList.count++;
        }
    }
    return evenList;
}

// get an array of even numbers from a given numList (task 3b)
numPtr evenNumList(numList L) {
    numPtr evenNumbers = (numPtr) malloc(MAX * sizeof(int));
    evenNumbers[0] = 0; // Storing the count of even numbers at index 0
    for (int i = 0; i < MAX; ++i) {
        if (L[i] % 2 == 0) {
            evenNumbers[++evenNumbers[0]] = L[i];
        }
    }
    return evenNumbers;
}

// remove a specified number from the numArrayList (task 4)
int removeNumber(numArrayList *L, int num) {
    for (int i = 0; i < L->count; ++i) {
        if (L->nums[i] == num) {
            for (int j = i; j < L->count - 1; ++j) {
                L->nums[j] = L->nums[j + 1];
            }
            L->count--;
            return 1;
        }
    }
    return 0;
}

// insert a number into the numArrayList while maintaining sorted order (task 5)
void insertSorted(numArrayList *L, int num) {
    int i = L->count - 1;
    while (i >= 0 && L->nums[i] > num) {
        L->nums[i + 1] = L->nums[i];
        i--;
    }
    L->nums[i + 1] = num;
    L->count++;
}

