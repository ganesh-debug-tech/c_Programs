#include <stdio.h>

int main()
{
   int balance;
   printf("Enter your balance:");
   scanf("%d",&balance);
   if(balance>1000)
    printf("Positive");
   if(balance==0)
    printf("zero");
   if(balance<0)
    printf("Negative");
    return 0;
}
