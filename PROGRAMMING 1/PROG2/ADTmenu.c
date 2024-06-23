




#include <stdio.h>


struct myStack{
    int top;
    int size;
    char data[20];
};


struct myQueue{
    int tail;
    int size;
    char data[20];
};


struct mySet{
    int last;
    int size;
    char data[20];
};


struct myList{
    int last;
    int size;
    char data[20];
};








int main(){
    int n;
   
   
   printf("Enter menu (1-7): ");
   scanf("%d", &n);
   
   switch(n){
   		case 1:
   			
   			//stack function
   			break;
   			
   		case 2:
   			
   			//queue function
   			break;
   		case 3: 
   		
   			//list function
   			break;
   		case 4:
   			
   			//set function
   			break
   		case 5:
   			
   			//list  function
   			break:
   		case 6:
   			
   			//ordered list function
   			break:
   				
   		case 7:
   			
   			//exit
   			break
   		default:
   			printf("Enter numbers from 1-7 only. Please try again.");
   }
   
   return 0;
}



/*
Menu:
1. Stack
2. Queue
3. List
4. Set
5. List
6. Ordered List
7. Exit




SubMenu:
1. Insert/Push
2. Retrieve/Pop
3. Show Current Content
4. Exit


*/

