#include<stdio.h>
#include<stdlib.h>

#define MAX 10

typedef int *numPtr, numList[MAX];
typedef struct{
   int nums[MAX];
   int count;
}numArrayList;

void insertNum(numList L, int num, int *count); 
void insertNumArray(numArrayList *L, int num);

void displayNumList(numList L, int count);
void displayNumArrayList(numArrayList L);

int findNum(numList L, int num, int count);

void main(){
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
}


void insertNum(numList L, int num, int *count){
	if(*count<MAX){
    	L[*count] = num;
    	(*count)++;
   	}
}
void insertNumArray(numArrayList *L, int num){
   if(L->count<MAX){
      L->nums[L->count] = num;
      L->count++;
   }
}

void displayNumList(numList L, int count){
	int x;
	printf("numList contains: { ");
	for(x=0;x<count;x++){
		printf("%d",L[x]);
		if(x+1<count) printf(", "); else printf("");
	}
	printf(" }\n");
}
void displayNumArrayList(numArrayList L){
	int x;
	printf("numArrayList contains: { ");
	for(x=0;x<L.count;x++){
		printf("%d",L.nums[x]);
		if(x+1<L.count) printf(", "); else printf("");
	}
	printf(" }\n");
}

int findNum(numList L, int num, int count){
//	int i;
// 	for(i=0; i<count; i++){
// 		if(L[i] == num){
//  			return i;
//    	}
//	}
//   	return -1;

	int i, ret=-1;
	for(i=0; i<count && L[i] != num; i++){}
	return (i<count) ? i : -1;
}

//1a. Inserts a number at the end of a given numList with a given number of elements present.
//1b. Inserts a number at the end of a given numArrayList.
//2a. Finds a given number in a given numList, and returns the position (index) in the given array if it exists or -1 if it does not exist.
//2b. Returns the number of even numbers in a given numList.

// ASSIGNMENTS BELOW

//3a. Returns a numArrayList of even numbers from a given numArrayList.
//3b. Returns an array of even numbers from a given numList. Use index 0 of the array to store the count of elements to be returned.
//4. Given a numArrayList and a number, remove the given number from the list, and return 1 if the number was successfully removed and 0 if not.
//5. Given a numArrayList and a number, insert the given number on its SORTED POSITION in the numArrayList.
