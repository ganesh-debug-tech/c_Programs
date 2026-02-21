#include <stdio.h>
void total(int n1,int n2){
    int totalSalary=n1+n2;
    printf("Total Salary: %d\n",totalSalary);
}
void main()
{
    int salary,bonus;
    printf("Enter the salary and bonus: ");
    scanf("%d%d",&salary,&bonus);

    total(salary,bonus);
}
