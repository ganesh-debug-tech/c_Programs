#include <stdio.h>

int main()
{
    int accNum;
    printf("Enter account number:");
    scanf("%d",&accNum);
    while(accNum>0)
    {

        int lastDigit=accNum%10;
        printf("%d\n",lastDigit);
        accNum=accNum/10;
    }
    return 0;
}
