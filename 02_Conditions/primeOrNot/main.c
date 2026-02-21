#include <stdio.h>

void main()
{
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        if(n%i==0)
            count++;
    }
    if(count==2)
        printf("It is a prime number.\n");
    else
        printf("It is not a prime number.\n");


}
