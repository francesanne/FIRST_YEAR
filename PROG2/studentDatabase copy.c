#include <stdio.h>
#define MAX_STUDENTS 100

struct Student{
    char name[10];
    int id;
    int age;
    float grade;
};

struct Student students[MAX_STUDENTS];
int numStudents = 0;

void addStudent(int id, char *name, int age, float grade) {
    students[numStudents].id = id;
    strcpy(students[numStudents].name, name);
    students[numStudents].age = age;
    students[numStudents].grade = grade;
    numStudents++;
    printf("\nStudent added\n\n");
}

void deleteStudent(int id) {
    int found = 0;
    for(int i = 0; i < numStudents; i++) {
        if(students[i].id == id) {
            for(int j = i; j < numStudents - 1; j++) {
                students[j] = students[j + 1];
            }
            numStudents--;
            found = 1;
            printf("\nStudent with ID %d deleted successfully\n\n", id);
            break;
        }
    }
    if (!found) {
        printf("\nStudent with ID %d not found\n\n", id);
    }
}

void searchStudentById(int id) {
    int found = 0;
    for(int i = 0; i < numStudents; i++) {
        if(students[i].id == id) {
            printf("ID: %d, Name: %s, Age: %d, Grade: %.2f\n\n", students[i].id, students[i].name, students[i].age, students[i].grade);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nStudent with ID %d not found\n\n", id);
    }
}

void displayAllStudents() {
    printf("ID\tName\t\tAge\tGrade\n");
    for(int i = 0; i < numStudents; i++) {
        printf("%d\t%s\t\t%d\t%.2f\n", students[i].id, students[i].name, students[i].age, students[i].grade);
    }
    printf("\n");
}

int main() {
    int choice;

    do {
        printf("Student Database\n\n");
        printf("1. Add student\n2. Delete student\n3. Search student\n4. Display all students\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int id, age;
                float grade;
                char name[10];
                printf("Enter student ID: ");
                scanf("%d", &id);
                printf("Enter student name: ");
                scanf("%s", name);
                printf("Enter student age: ");
                scanf("%d", &age);
                printf("Enter student grade: ");
                scanf("%f", &grade);
                addStudent(id, name, age, grade);
                break;
            }
            case 2: {
                int idToDelete;
                printf("Enter student ID to delete: ");
                scanf("%d", &idToDelete);
                deleteStudent(idToDelete);
                break;
            }
            case 3: {
                int idToSearch;
                printf("Enter student ID to search: ");
                scanf("%d", &idToSearch);
                searchStudentById(idToSearch);
                break;
            }
            case 4:
                displayAllStudents();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}