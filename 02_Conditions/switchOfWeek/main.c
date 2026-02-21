#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    switch(num)
    {
        case 1:printf("Monday\n");
        break;
        case 2:printf("Tuesday\n");
        break;
        case 3:printf("Wednesday\n");
        break;
        case 4:printf("Thursday\n");
        break;
        case 5: printf("fridayn");
        break;
        case 6: printf("Saturday");
        break;
        case 7: printf("Sunday");
        break;
        default : pr
        intf("Invalid number");
    }
    return 0;
}
