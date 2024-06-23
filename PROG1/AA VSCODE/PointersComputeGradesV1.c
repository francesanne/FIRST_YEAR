#include <stdio.h>
float ComputeGrades(int*, int*, int*);

int main(){
    
    int projectGrade;
    int ass1, ass2, ass3, ass4, ass5, ass6, ass7, ass8, ass9, ass10;
    int exam1, exam2, exam3;
    
    int totalAss, totalExam;
    
    // Project Grade
    printf("Score for Project Grade\n");
    
    printf("Project Score Grade: ");
    scanf("%d", &projectGrade);
    
    // Assignments Score
    printf("\nScores for 10 assignments\n");
    
    printf("Assignment 1: ");
    scanf("%d", &ass1);
    
    printf("Assignment 2: ");
    scanf("%d", &ass2);
    
    printf("Assignment 3: ");
    scanf("%d", &ass3);
    
    printf("Assignment 4: ");
    scanf("%d", &ass4);
    
    printf("Assignment 5: ");
    scanf("%d", &ass5);
    
    printf("Assignment 6: ");
    scanf("%d", &ass6);
    
    printf("Assignment 7: ");
    scanf("%d", &ass7);
    
    printf("Assignment 8: ");
    scanf("%d", &ass8);
    
    printf("Assignment 9: ");
    scanf("%d", &ass9);
    
    printf("Assignment 10: ");
    scanf("%d", &ass10);
    
    // Exam Scores
    
    printf("\nScores for Major Exams\n");
    
    printf("Exam 1: ");
    scanf("%d", &exam1);
    
    printf("Exam 2: ");
    scanf("%d", &exam2);
    
    printf("Exam 3: ");
    scanf("%d", &exam3);
    
    totalAss = ass1 + ass2 + ass3 + ass4 + ass5 + ass6 + ass7 + ass8 + ass9 + ass10;
    totalExam = exam1 + exam2 + exam3;
    
    float finalGrade = ComputeGrades(&projectGrade, &totalAss, &totalExam);
    printf("\nFinal Grade: %.2f", finalGrade);
    
    return 0;
}

float ComputeGrades(int* projectGrade, int* totalAss, int* totalExam) {
    
    float ave_projectGrade, ave_assignments, ave_majorExams;
    float max_projectGrade, max_ass, max_exam;
    
    // Total Scores
    printf("\nEnter maximum score for Project Grade: ");
    scanf("%f", &max_projectGrade);
    
    printf("Enter maximum score for assignments: ");
    scanf("%f", &max_ass);
    
    printf("Enter maximum score for major exams: ");
    scanf("%f", &max_exam);
    
    // Average
    ave_projectGrade = (*projectGrade / max_projectGrade) * 100;
    ave_assignments = (*totalAss / max_ass) * 100;
    ave_majorExams = (*totalExam / max_exam) * 100;
    
    return (0.40 * ave_projectGrade) + (0.30 * ave_assignments) + (0.30 * ave_majorExams);
}
