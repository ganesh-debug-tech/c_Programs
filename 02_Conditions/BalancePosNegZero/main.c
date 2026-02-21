#include <stdio.h>
void main()
{
    int balance;
    printf("Enter ur Balance: ");
    scanf("%d",&balance);
    if(balance>0)
        printf("Balance is Positive");
    if(balance<0)
        printf("Balance is Negative");
    if (balance==0)
        printf("Balance is Zero");

}
