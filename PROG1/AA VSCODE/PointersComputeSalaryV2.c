#include <stdio.h>

void ComputeSalary(int *, int *, int *,  int *,  int *);

int main(){
    int basicPay, allowp = 10, Salescommp = 30, taxp = 10, govconp = 15;

    printf("Basic pay: ");
    scanf("%d", &basicPay);
    
    ComputeSalary(&basicPay, &allowp, & Salescommp,  &taxp,  &govconp);
    return 0;
}

void ComputeSalary(int * basicPay, int * allowp, int * Salescommp,  int * taxp,  int * govconp){
    
    float allowance, salescomm, tax, govcon;
    
    allowance = ((float)*basicPay) /((float) *allowp);
    printf("Allowance: %.2f\n",  allowance);
    
    salescomm = ((float)*basicPay) * ((float)*Salescommp / 100);
    printf("Sales Commission: %.2f\n",  salescomm);
    
    tax = ((float)*basicPay) /((float)*taxp);
    printf("Tax: %.2f\n",  tax);
    
    govcon = ((float)*basicPay) * ((float)*govconp / 100);
    printf("Government Contribution: %.2f\n", govcon);
    
    float salary = *basicPay + allowance + salescomm - tax - govcon;
    
    printf("Salary of the employee: %.2f", salary);
}

