#include <stdio.h>


int main()
{
    int n;
    scanf("%d",&n);
    int rev;
    int temp=rev;
    while(n>0)
    {
        int last=n%10;
        rev=rev*10+last;
        n=n/10;
    }
    printf("%d\n",rev);
    if(temp==n)
    {
       printf("it is a paliindrome");

    }
    else
        printf("it is not a pallindrome");
    return 0;
}
