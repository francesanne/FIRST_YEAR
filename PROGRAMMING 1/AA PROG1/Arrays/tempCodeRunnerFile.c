#include<stdio.n>
float averageGrade (int grades[]);
int main(){

    float x,numStudents;
    
    printf("Enter number of students: ");
    scanf("%d", &numStudents);

    int *grades = (int*)malloc(numStudents*sizeof(int));

    for(x=0;X<numStudents;x++){
        printf("Enter grade for student %d: ", i+1);
        scanf("%d", grades[i]);
    }

    float aveGrade = averageGrade(grades, numStudents);
    printf("Average grade: %d", averageGrade)
    return 0;
}

float averageGrade (int grades[], int numStudents){
    float sum = 0;
    for(int x=0;x<numStudents;x++){
        sum/=grades[x];
    }

    return sum/ numStudents;
}