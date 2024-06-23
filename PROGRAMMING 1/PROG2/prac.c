#include <stdio.h>
struct myStruct{
	int num;
	char letter;
	char sentence[30]; //dont forget to put number of elements in string
};
int main(){
	
	struct myStruct s1;
	struct myStruct s2;
	
	//first method
	s1.num = 10;
	s2.num = 12;
	s1.letter = 'A';
	s2.letter = 'B';
	strcpy(s1.sentence, "Hello World!");
	strcpy(s2.sentence, "Hi mega!");
	
	//another method
	//there's no need to use strcpy for this method
	struct myStruct s3 = {18, 'C', "Frances Anne"};
	struct myStruct s4 = {1, 'D', "Riconalla"};
	 
	//can copy structures
	s3=s4;
	
	
	//print outputs
	printf("%d %c\n", s1.num, s1.letter);
	printf("%d %c\n", s2.num, s2.letter);
	printf("%s\n", s1.sentence);
	printf("%s\n", s2.sentence);
	printf("%c %d %s\n", s3.letter, s3.num, s3.sentence);
	printf("%c %d %s\n", s4.letter, s4.num, s4.sentence);
	
	return 0;
}
