#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
struct Student{
    char name[10];
    int id;
    int age;
    float grade;
};

struct Student students [MAX_STUDENTS];
int numStudents = 0;

void addStudent(int id, char *name, int age, float grade){
    students[numStudents].id = id;
    strcpy(students[numStudents].name, name);
    students[numStudents].age = age;
    students[numStudents].grade = grade;
    numStudents++;
    }

void deleteStudent(int id){
    for(int x=0; x<numStudents;x++){
        if (id == students[x].id){
            students[x]=students[numStudents-1];
            numStudents--;
        }
    }
    printf("Student with ID %d deleted successfully\n\n");
}
void searchStudentById(int id){

    for(int x=0; x<numStudents; x++){
        if(id == students[x].id){
            printf("ID: %d, Name: %s, Age: %d, Grade: %.2f", students[x].id, students[x].name, students[x].age, students[x].grade);
        }
    }
    printf("\n\n");
}
void displayAllStudents(){
    printf("ID\tName\t\tAge\tGrade\n");
    for(int x=0; x<numStudents; x++){
        printf("%d\t%s\t\t%d\t%.2f\n", students[x].id, students[x].name, students[x].age, students[x].grade);
    }
    printf("\n");
}

int main(){

    int choice;

    do{
        printf("Student Database\n\n");
        printf("1. Add student\n2. Delete student\n3. Search student\n4. Display all students\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                {
                int id;
                int age;
                char name[50];
                float grade;

                printf("Enter student ID: ");
                scanf("%d", &id);
                printf("Enter student name: ");
                scanf(" %[^\n]", name);
                printf("Enter student age: ");
                scanf("%d", &age);
                printf("Enter student grade: ");
                scanf("%f", &grade);
                addStudent(id, name, age, grade);
                break;
                }
                
            case 2:{
                int deleteId;
                printf("Enter student ID to delete: ");
                scanf("%d", &deleteId);
                deleteStudent(deleteId);
                break;
            }
                
            case 3:{
                int searchId;
                printf("Enter student ID to search: ");
                scanf("%d",&searchId);
                searchStudentById(searchId);
                break;
            }
            case 4:
                displayAllStudents();
                break;
            case 5:
                printf("Exiting...");
                break;
        }
    }while (choice != 5);
    return 0;
}


