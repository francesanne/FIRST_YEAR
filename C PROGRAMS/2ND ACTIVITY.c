#include <stdio.h>

int main() {
int num1, num2, s, d, p;
float q;
printf("Input first number : ");
scanf("%d", &num1);

printf("Input second number : ");
scanf("%d", &num2);

s = num1 + num2;
printf("\nSum : %d ", s);

d = num1 - num2;
printf("\nDifference : %d ", d);

p = num1 * num2;
printf("\nProduct : %d ", p);

q = num1 / num2;
printf("\nQuotient : %.2f ", q);

return 0;
}
