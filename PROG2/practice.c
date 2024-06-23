#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[20];
    int id;
    int age;
    int grade;
};

struct Student students[100];
int count = 0;

void addStudent(int id, char *name, int age, float grade){
    students[count].id = id;
    strcpy(students[count].name,name);
    students[count].age=age;
    students[count].grade=age;
    count++;
}

void deleteStudent(int id){
    for(int x=0;x<count;x++){
        if(id == students[x].id){
            students[x]=students[count-1];
            count--;
        }
    }
}

void searchStudentById(int id){

}

void displayAllStudents(){

}

int main(){
    int choice;
    do{
        printf("Student Database\n\n");
        printf("1. Add student\n2. Delete student\n3. Search student\n4. Display all students\n5. Exit");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice){
            case 1:
            {
                int id,age;
                float grade;
                char name[20];
                printf("Enter student ID: ");
                scanf("%d", &id);
                printf("Enter student name: ");
                scanf(" %[^\n], name");
                printf("Enter student age: ");
                scanf("%d", &age);
                printf("Enter student grade: ");
                scanf("%f", &grade);
                addStudent(id,name,age,grade);
            }
                break;
            case 2:{
                int deleteID;
                printf("Enter student ID to delete: ");
                scanf("%d", &deleteID);
                deleteStudent(deleteID);
                break;
            }
            break;
            case 3:

            break;

            case 4:
        }

    }while(choice!=5);
}