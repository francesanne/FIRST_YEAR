#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee{
    char name[20];
    int id;
    char position[20];v
    float salary;
    int hoursWorked;
};

struct Employee employees[MAX_EMPLOYEES];
int count = 0;


void addEmployee(){
    printf("Enter employee name: ");
    scanf(" %[^\n]", employees[count].name);
    printf("Enter employee ID: ");
    scanf("%d", &employees[count].id);
    printf("Enter employee position: ");
    scanf(" %[^\n]", employees[count].position);
    printf("Enter employee salary: ");
    scanf("%f", &employees[count]. salary);
    printf("Enter employee hours worked: ");
    scanf("%d", &employees[count].hoursWorked);
    printf("\nEmployee added\n\n");
    count++;
}

void deleteEmployee(int ID){
    for(int x=0;x<count;x++){
        if(ID == employees[x].id){
            employees[x]=employees[count-1];
            count--;
        }
    }

    printf("\nEmployee deleted\n\n");

}

void searchEmployee(int ID){
    for(int x=0; x<count ;x++){
        if(ID==employees[x].id){
            printf("\nEmployee details:\n");
            printf("Name: %s\n", employees[x].name);
            printf("ID: %d\n", employees[x].id);
            printf("Position: %s\n", employees[x].position);
            printf("Salary: $%.2f\n", employees[x].salary);
            printf("Hours worked: %d\n\n", employees[x].hoursWorked);
        }
    }
}

void displayTotalPayroll(){

    float totalPayroll = 0.0;

    for(int x=0; x<count;x++){
        float payroll = employees[x].salary * employees[x].hoursWorked;
        totalPayroll += payroll;
    }

    printf("Total payroll: $%.2f\n\n", totalPayroll);
}

int main(){
    int choice;
    do{
        printf("1. Add employee\n");
        printf("2. Delete employee\n");
        printf("3. Search employee\n");
        printf("4. Display total payroll\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");
        int empId;
        int empId2;
        switch(choice){
            case 1:
                addEmployee();
                break;
            case 2:
                
                printf("Enter employee to delete: ");
                scanf("%d",&empId);
                deleteEmployee(empId);
                break;
            case 3:
                    
                printf("Enter employee ID to search: ");
                scanf("%d", &empId2);
                searchEmployee(empId2);
                break;
            case 4:
                displayTotalPayroll();
                break;
            case 5:
                break;
        }



    }while(choice != 5);

    return 0;
}

