#include <stdio.h>
void main(){
    int exam1, exam2;
    int act1, act2, act3, act4, act5;
    int t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;
    int perfect1, perfect2, perfect3;
    int final, ave1, ave2, ave3;

    
    printf("Scores for Exams");
    printf("\nEnter total score for the exams: ");
    scanf("%d", &perfect1);
    printf("\nEnter exam score: ");
    scanf("%d", &exam1);
    printf("Enter exam score: ");
    scanf("%d", &exam2);
    
    
    printf("\n\nScores for Activities");
    printf("\nEnter total score for the activities: ");
    scanf("%d", &perfect2);
    printf("\nEnter Activity 1 score: ");
    scanf("%d", &act1);
    printf("Enter Activity 2 score: ");
    scanf("%d", &act2);
    printf("Enter Activity 3 score: ");
    scanf("%d", &act3);
    printf("Enter Activity 4 score: ");
    scanf("%d", &act4);
    printf("Enter Activity 5 score: ");
    scanf("%d", &act5);
    
    
    printf("\n\nScores for Assigned Tasks");
    printf("\nEnter total score for the assigned tasks: ");
    scanf("%d", &perfect3);
    printf("\nEnter assigned task 1 score: ");
    scanf("%d", &t1);
    printf("Enter assigned task 2 score: ");
    scanf("%d", &t2);
    printf("Enter assigned task 3 score: ");
    scanf("%d", &t3);
    printf("Enter assigned task 4 score: ");
    scanf("%d", &t4);
    printf("Enter assigned task 5 score: ");
    scanf("%d", &t5);
    printf("Enter assigned task 6 score: ");
    scanf("%d", &t6);    
    printf("Enter assigned task 7 score: ");
    scanf("%d", &t7);
    printf("Enter assigned task 8 score: ");
    scanf("%d", &t8);
    printf("Enter assigned task 9 score: ");
    scanf("%d", &t9);    
    printf("Enter assigned task 10 score: ");
    scanf("%d", &t10);
    
    
    ave1 = 0.4 * (((exam1 + exam2) / 2)/ perfect1);
    ave2 = 0.3 * (((act1 + act2 + act3 + act4 + act5) / 5)/perfect2);
    ave3 = 0.3 * (((t1 + t2 + t3 + t4 + t5 + t6 + t7 + t8 + t9 + t10) / 10)/perfect3);
    
    final = ave1 + ave2 + ave3;
    
    if (final >= 90 && final < 100){
        printf("\nProficient");
    }else if (final >= 80 && final < 90 ){
        printf("\nAdvanced");
    }else if (final >= 75 && final < 80){
        printf("\nAverage");
    }else if (final < 75){
        printf("\nNeeds improvement");
    }

}
