#include <stdio.h>
struct student
{
    char rollNo[20];
    char name[50];
    int marks1,marks2,marks3;
};
void main()

{

    struct student s[3];
    for(int i=0;i<=2;i++)
    {
        printf("Enter tje details of student %d\n",i+1);
        printf("Enter the rollno : ");
        scanf(" %[^\n]",s[i].rollno);
        printf("Enter the name: ");
        scanf(" %[^\n]",s[i].name);
        printf("Enter the merks of 3 subject :");
        scanf("%d%d%d",&s[i].marks1,&s[i].marks2,&s[i].martks3);
    }
    for(int i=0;i<=2;i++)
    {
        printf("The details of %d students : \n",i+1);
        printf("Rollno %s\n,s[i].rollNo);
        printf("Name = %s\n,s[i].name");
    }
