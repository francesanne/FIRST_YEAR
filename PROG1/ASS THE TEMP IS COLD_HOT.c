#include <stdio.h>

int main() {
float temp;

printf("Enter the temperature: ");
scanf("%f", &temp);

if (temp < 0){
printf("The temperature is cold.");
}

else {
printf("The temperature is hot.");
}
return 0;
}
