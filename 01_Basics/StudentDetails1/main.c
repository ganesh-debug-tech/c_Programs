#include <stdio.h>

void main()
{
    char name[50];
    int age;
    float marks;
    char id[10];

    printf("Name:");
    scanf("%[^\n]",name);
    printf("Age: ");
    scanf("%d",&age);
    printf("Marks: ");
    scanf("%f",&marks);
    printf("Id: ");
    scanf("%s",&id);

    //OUTPUT
    printf("---Students Details---\n");
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Marks : %.2f\n",marks);
    printf("Id : %s\n",id);
}
