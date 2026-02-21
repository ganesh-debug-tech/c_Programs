#include <stdio.h>

union student
{
    int id;
    char name[50];
    float marks;
};

void main()
{
    union student s;
    printf("Enter Id of student : ");
    scanf("%d",&s.id);
    printf("Student Id : %d\n",s.id);
    printf("Enter the name of student : ");
    scanf("%[^\n]",s.name);
     printf("Student Name :%s\n",s.name);
    printf("Enter the marks of student : ");
    scanf("%f",&s.marks);
    printf("Student Marks : %.2f\n",s.marks);
}
