#include <stdio.h>
void grade()
{

    int marks;
    printf("Enter the marks of student : ");
    scanf("%d",&marks);
    if(marks>=90)
        printf("Grade A\n");
    else if(marks>=75 && marks<=89)
        printf("Grade B\n");
    else if(marks>=50 && marks<=74)
        printf("Grade C\n");
    else
        printf("Fail");
}
void main(){
    grade();

}
