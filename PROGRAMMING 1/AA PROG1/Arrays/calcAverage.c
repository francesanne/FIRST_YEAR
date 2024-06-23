#include <stdio.h>
#include <stdlib.h>

float calculateAverageGrade(int grades[], int numStudents) {
    float sum = 0;
    for (int i = 0; i < numStudents; i++) {
        sum += grades[i];
    }
    return sum / numStudents;
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    int *grades = (int*)malloc(numStudents * sizeof(int));
    if (grades == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter grades for %d students:\n", numStudents);
    for (int i = 0; i < numStudents; i++) {
        printf("Enter grade for student %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    float averageGrade = calculateAverageGrade(grades, numStudents);
    printf("Average grade: %.2f\n", averageGrade);

    free(grades);

    return 0;
}
