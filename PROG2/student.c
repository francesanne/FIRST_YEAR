#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int id;
    int age;
    float grade;
};

struct student students[100];
int count = 0;

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
    int studId;
    printf("Enter student ID to delete: ");
    scanf("%d", &studId);

    for (int x = 0; x < count; x++)
    {
        if (studId == students[x].id)
        {
            students[x] = students[count - 1];
            count--;
            break;
        }
    }

    printf("Student ID %d deleted successfully\n\n", studId);
}

void searchStudent()
{
    int studId;

    printf("Enter student ID to search: ");
    scanf("%d", &studId);
    for (int x = 0; x < count; x++)
    {
        if (studId == students[x].id)
        {
            printf("ID: %d, Name: %s, Age: %d, Grade: %.2f\n", students[x].id, students[x].name, students[x].age, students[x].grade);
        }

        printf("\n\n");
    }
}

void displayAllStudents()
{
    int x;
    printf("ID\tName\tAge\tGrade\n");
    for (x = 0; x < count; x++)
    {
        printf("%d\t%s\t%d\t%.2f\n", students[x].id, students[x].name, students[x].age, students[x].grade);
    }
}

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
            printf("Exiting...");
            break;
        }
    }while(count != 5);

    return 0;
}
