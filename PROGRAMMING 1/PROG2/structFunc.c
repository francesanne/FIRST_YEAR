#include <stdio.h>

struct student{
	char name[50];
	int age;
};

void display (struct student s);

int main(){
	
	struct student s1;
	
	printf("Enter student name: ");
	scanf("%[^\n]%*c", &s1.name);
	
	printf("Enter student age: ");
	scanf("%d", &s1.age);
	
	display(s1);
	
	return 0;
}

void display (struct student s){
	printf("%s\n",s.name);
	printf("%d", s.age);
}
	
