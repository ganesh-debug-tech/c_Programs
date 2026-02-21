#include <stdio.h>
void main()
{

    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    (n&5==0)&&(n%7==0)?printf("the given number is divisible by 5&7",n):printf("the given number is not divisible by 5&7",n);
}
