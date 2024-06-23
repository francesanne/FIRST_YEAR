
#include<stdio.h>
int main(){
char gender;
int num1, num2;

// Gender
printf("Enter your gender (B for boy and G for girl): ");
scanf("%c", &gender);

if (gender == 'B' || gender == 'b'){
printf("Boy \n");
}

else if (gender == 'G' || gender == 'g'){
printf("Girl \n \n");
}

else {
printf("Invalid. Please enter 'B' or 'G' \n \n");
}

//Number
printf("Enter first number: ");
scanf("%d", &num1);

printf("Enter second number: ");
scanf("%d", &num2);

if (num1 > num2){
printf("Num 1 is bigger than num 2 \n");
}

else if (num2 > num1){
printf("Num 2 is bigger than num 1 \n");
}

else{
printf("Num 1 is equal to Num 2 \n");
}

return 0;

}
