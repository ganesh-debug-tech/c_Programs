#include <stdio.h>
struct employee
{

    int empId;
    char empName[100];
    float basicSalary;
    float HRA;
    float DA;
    float NetSalary;
};

void main()
{

    struct employee e;
    struct employee *p=&e;

    printf("Enter the employee id : ");
    scanf("%d",&p->empId);
    printf("Enter the employee name : ");
    scanf("%s",&p->empName);
    printf("Enter the basic salary : ");
    scanf("%f",&p->basicSalary);
    printf("Enter HRA : ");
    scanf("%f",&p->HRA);
    printf("Enter DA : ");
    scanf("%f",&p->DA);
    printf("Enter the Net salary: ");
    scanf("%f",&p->NetSalary);
    printf("----- Employee salary----\n");
    printf("Emp id = %d\n",p->empId);
    printf("Employees name = %s\n",p->empName);
    printf("Employees basic salary = %f\n",p->basicSalary);
    printf("HRA = %f\n",p->HRA);
    printf("DA = %f\n",p->DA);
    printf("NetSalary = %f\n",p->NetSalary);
}
