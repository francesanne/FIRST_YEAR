#include <stdio.h>
int main(){
	
	int exam1, exam2;
    int act1, act2, act3, act4, act5;
    int t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;
    
    int max_exam, max_act, max_task;
    float percentage_exam1, percentage_exam2;
    float percentage_act1, percentage_act2, percentage_act3, percentage_act4, percentage_act5;
    float percentage_t1, percentage_t2, percentage_t3, percentage_t4, percentage_t5, percentage_t6, percentage_t7, percentage_t8, percentage_t9, percentage_t10;
    
    float final_grade, ave1, ave2, ave3;
    

	printf("Scores for Exams");
	
	printf("\nEnter maximum score for exam: ");
	scanf("%d", &max_exam);
	
    printf("Exam 1: ");
    scanf("%d", &exam1);
    printf("Exam 2: ");
    scanf("%d", &exam2);

    printf("\n\nScores for Activities");
    
    printf("\nEnter Maximum score for activities: ");
    scanf("%d", &max_act);
    
    printf("Activity 1: ");
    scanf("%d", &act1);
    printf("Activity 2: ");
    scanf("%d", &act2);
    printf("Activity 3: ");
    scanf("%d", &act3);
    printf("Activity 4: ");
    scanf("%d", &act4);
    printf("Activity 5: ");
    scanf("%d", &act5);

    printf("\n\nScores for Assigned Tasks");
    
    printf("\nEnter maximum score for the assigned tasks: ");
    scanf("%d", &max_task);
    
    printf("Assigned task 1: ");
    scanf("%d", &t1);
    printf("Assigned task 2: ");
    scanf("%d", &t2);
    printf("Assigned task 3: ");
    scanf("%d", &t3);
    printf("Assigned task 4: ");
    scanf("%d", &t4);
    printf("Assigned task 5: ");
    scanf("%d", &t5);
    printf("Assigned task 6: ");
    scanf("%d", &t6);
    printf("Assigned task 7: ");
    scanf("%d", &t7);
    printf("Assigned task 8: ");
    scanf("%d", &t8);
    printf("Assigned task 9: ");
    scanf("%d", &t9);
    printf("Assigned task 10: "); 
    scanf("%d", &t10);

    percentage_exam1 = (exam1/max_exam) * 100;
    percentage_exam2 = (exam2/max_exam) * 100;
    
    percentage_act1 = (act1/max_act) * 100;
    percentage_act2 = (act2/max_act) * 100;
    percentage_act3 = (act3/max_act) * 100;
    percentage_act4 = (act4/max_act) * 100;
    percentage_act5 = (act5/max_act) * 100;
    
    percentage_t1 = (t1/max_task) * 100;
    percentage_t2 = (t2/max_task) * 100;
    percentage_t3 = (t3/max_task) * 100;
    percentage_t4 = (t4/max_task) * 100;
    percentage_t5 = (t5/max_task) * 100;
    percentage_t6 = (t6/max_task) * 100;
    percentage_t7 = (t7/max_task) * 100;
    percentage_t8 = (t8/max_task) * 100;
    percentage_t9 = (t9/max_task) * 100;
    percentage_t10 = (t10/max_task) * 100;
    
	ave1 = (percentage_exam1+percentage_exam2)/2;
	ave2 = (percentage_act1+percentage_act2+percentage_act3+percentage_act4+percentage_act5)/5;
	ave3 = (percentage_t1+percentage_t2+percentage_t3+percentage_t4+percentage_t5+percentage_t6+percentage_t7+percentage_t8+percentage_t9+percentage_t10)/10;
	
	final_grade = (0.40*ave1) + (0.30*ave2) + (0.30*ave3);

    if (final_grade < 60){
    	final_grade = 60;
	}
	
    printf("\n\nFinal Grade: %.0f", final_grade);
	
	if (final_grade >= 90 && final_grade <= 100 ){
		printf("\nProficient");
	}else if(final_grade >= 80 && final_grade < 90){
		printf("\nAdvanced");
	}else if (final_grade >= 75 && final_grade < 80){
		printf("\nAverage");
	}else if(final_grade < 75){
		printf("\nNeeds improvement");
	}
	
	return 0;
}