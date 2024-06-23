#include <stdio.h>
void ComputeSalary(int , int *, int *,   int *,  int *, float *);

int main(){
    int basicPay, allowance, salesCommission, tax, governmentContributions;
    float salary;

    printf("Basic pay: ");
    scanf("%d", &basicPay);

    ComputeSalary(basicPay, &allowance, &salesCommission, &tax, &governmentContributions, &salary);

    printf("Allowance: %d\n", allowance);
    printf("Sales commission: %d\n", salesCommission);
    printf("Tax: %d\n", tax);
    printf("Government contributions: %d\n", governmentContributions);
    printf("Salary of the employee is: %.2f\n", salary);

    return 0;
}
void ComputeSalary(int basicPay, int *allowance, int *salesCommission, int *tax, int *governmentContributions, float *result) {
 
    *allowance = 0.10 * basicPay;
    *salesCommission = 0.30 * basicPay;
    *tax = 0.10 * basicPay;
    *governmentContributions = 0.15 * basicPay;

    *result = basicPay + *allowance + *salesCommission - *tax - *governmentContributions;
}
