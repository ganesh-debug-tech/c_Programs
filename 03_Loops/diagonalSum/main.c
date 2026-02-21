#include <stdio.h>
int main()
{
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            if(i==j || ((i+j)==n-1 && i!=j))
                 printf("* ");
                else
                    printf("  ")
        }

    }

    return 0;
}
