#include <stdio.h>
float ComputeSalary(int *, int *, int *,  int *,  int *);

int main(){
    int basicPay, allowp = 10, Salescommp = 30, taxp = 10, govconp = 15;

    printf("Basic pay: ");
    scanf("%d", &basicPay);
    
    float salary = ComputeSalary(&basicPay, &allowp, & Salescommp,  &taxp,  &govconp);
    printf("Salary of the employee: %.2f", salary);
    
    return 0;
}

float ComputeSalary(int * basicPay, int * allowp, int * Salescommp,  int * taxp,  int * govconp){
    
    float allowance, salescomm, tax, govcon, salary;
    
    allowance = ((float)*basicPay) /((float) *allowp);
    printf("Allowance: %.2f\n",  allowance);
    
    salescomm = ((float)*basicPay) * ((float)*Salescommp / 100);
    printf("Sales commission: %.2f\n",  salescomm);
    
    tax = ((float)*basicPay) /((float)*taxp);
    printf("Tax: %.2f\n",  tax);
    
    govcon = ((float)*basicPay) * ((float)*govconp / 100);
    printf("Government contribution: %.2f\n",  govcon);
    
    return (*basicPay + allowance + salescomm - tax - govcon);
}
