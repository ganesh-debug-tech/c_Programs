#include <stdio.h>

int main()
{
    int marks;
    printf("Enter Marks:");
    scanf("%d",&marks);
    switch(marks/10)
    {

        case 9: printf("Grade A");
        break;
        case 8: printf("Grade B");
        break;
        case 7: printf("Grade C");
        break;
        case 6: printf("Grade D");
        break;
        case 5: printf("Grade E");
        break;
        case 4: printf("Fail");
        break;
        case 3: printf("Fail");
        break;
        case 2: printf("Fail");
        break;
        case 1: printf("Fail");
        break;
        case 0: printf("Fail");
        break;
        default : printf("Invalid number");


    }
    return 0;
}
