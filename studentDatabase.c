#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[50];
    int age;
    float grade;
};

struct student students[100];
int count = 0;

void addStudent();
void deleteStudent();
void searchStudent();
void displayAllStudents();

int main()
{
    int choice;

    do
    {
        printf("Student Database\n\n");
        printf("1. Add student\n");
        printf("2. Delete student\n");
        printf("3. Search student\n");
        printf("4. Display all students\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            deleteStudent();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            displayAllStudents();
            break;
        case 5:
            printf("Exiting...\n");
            break;
        }
    } while (choice != 5);

    return 0;
}

void addStudent()
{

    printf("Enter student ID: ");
    scanf("%d", &students[count].id);
    printf("Enter student name: ");
    scanf("%s", students[count].name);
    printf("Enter student age: ");
    scanf("%d", &students[count].age);
    printf("Enter student grade: ");
    scanf("%f", &students[count].grade);

    count++;

    printf("\n\n");
}

void deleteStudent()
{
    int id, i;
    printf("Enter student ID to delete: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (students[i].id == id)
        {
            students[i] = students[count - 1];
            count--;
            printf("Student with ID %d deleted successfully\n", id);
            break;
        }
    }

    printf("\n\n");
}

void searchStudent()
{
    int id, i;

    printf("Enter student ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (students[i].id == id)
        {
            printf("ID: %d, Name: %s, Age: %d, Grade: %.2f\n", students[i].id, students[i].name, students[i].age, students[i].grade);
            break;
        }
    }
    printf("\n\n");
}

void displayAllStudents()
{

    printf("ID\tName\t\tAge\tGrade\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d\t%s\t\t%d\t%.2f\n", students[i].id, students[i].name, students[i].age, students[i].grade);
    }

    printf("\n\n");
}
