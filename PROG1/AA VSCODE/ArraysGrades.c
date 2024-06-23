#include <stdio.h>

int main(){

//for part 1

int week [5] = {0,1,2,3,4};
int student [7] = {0,1,2,3,4,5,6};

int grades_zero [7] = {99, 90, 88, 61, 93, 50, 43};
int grades_one [7] = {42, 91, 61, 89, 73, 65, 98};
int grades_two [7] = {74, 72, 74, 82, 75, 92, 78};
int grades_three [7] = {83, 88, 89, 98, 78, 87, 56};
int grades_four [7] = {100, 95, 96, 93, 99, 94, 99};

//for part 2

int i;
float sum_0 = 0, sum_1 = 0, sum_2 = 0, sum_3 = 0, sum_4 = 0;
float avg0, avg1, avg2, avg3, avg4;

printf("Number of weeks: ");
for (i = 0; i<5; i++){
printf("%d ", week[i]);
}

printf("\nNumber of students: ");
for (i = 0; i<7; i++){
printf("%d ", student[i]);
}



printf("\n\nGrades for Week 0: ");
for (i = 0; i<7; i++){
printf("%d ", grades_zero[i]);
}

printf("\nGrades for Week 1: ");
for (i = 0; i<7; i++){
printf("%d ", grades_one[i]);
}

printf("\nGrades for Week 2: ");
for (i = 0; i<7; i++){
printf("%d ", grades_two[i]);
}

printf("\nGrades for Week 3: ");
for (i = 0; i<7; i++){
printf("%d ", grades_three[i]);
}

printf("\nGrades for Week 4: ");
for (i = 0; i<7; i++){
printf("%d ", grades_four[i]);
}


//for part 3
printf("\n\nAverage grade for Week 0: ");
for (i = 0; i<7; i++){
sum_0 += grades_zero[i];
}
avg0 = sum_0/7;
printf("%.2f", avg0);

printf("\nAverage grade for Week 1: ");
for (i = 0; i<7; i++){
sum_1 += grades_one[i];
}
avg1 = sum_1/7;
printf("%.2f", avg1);

printf("\nAverage grade for Week 2: ");
for (i = 0; i<7; i++){
sum_2 += grades_two[i];
}
avg2 = sum_2/7;
printf("%.2f", avg2);

printf("\nAverage grade for Week 3: ");
for (i = 0; i<7; i++){
sum_3 += grades_three[i];
}
avg3 = sum_3/7;
printf("%.2f", avg3);

printf("\nAverage grade for Week 4: ");
for (i = 0; i<7; i++){
sum_4 += grades_four[i];
}
avg4 = sum_4/7;
printf("%.2f", avg4);


int student_zero [5] = { 99, 42, 74, 83, 100};
int student_one [5] = { 90, 91, 72, 88, 95};
int student_two [5] = {88, 61, 74, 89, 96};
int student_three [5] = {61, 89, 82, 98, 93};
int student_four [5] = { 93, 73, 75, 78, 99};
int student_five [5] = {50, 65, 92, 87, 94};
int student_six [5] = {43, 98, 78, 56, 99};

int j;
float sum0 = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0;
float average0, average1, average2, average3, average4, average5, average6;


printf("\n\nAverage grade for Student 0: ");
for (j = 0; j<5; j++){
sum0 += student_zero[j];
}
average0 = sum0/5;
printf("%.2f", average0);
 
printf("\nAverage grade for Student 1: ");
for (j = 0; j<5; j++){
sum1 += student_one[j];
}
average1 = sum1/5;
printf("%.2f", average1);

printf("\nAverage grade for Student 2: ");
for (j = 0; j<5; j++){
sum2 += student_two[j];
}
average2 = sum2/5;
printf("%.2f", average2);

printf("\nAverage grade for Student 3: ");
for (j = 0; j<5; j++){
sum3 += student_three[j];
}
average3 = sum3/5;
printf("%.2f", average3);

printf("\nAverage grade for Student 4: ");
for (j = 0; j<5; j++){
sum4 += student_four[j];
}
average4 = sum4/5;
printf("%.2f", average4);

printf("\nAverage grade for Student 5: ");
for (j = 0; j<5; j++){
sum5 += student_five[j];
}
average5 = sum5/5;
printf("%.2f", average5);

printf("\nAverage grade for Student 6: ");
for (j = 0; j<5; j++){
sum6 += student_six[j];
}
average6 = sum6/5;
printf("%.2f", average6);


return 0;
}
