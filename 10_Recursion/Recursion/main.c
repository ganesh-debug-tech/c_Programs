#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            if(j==i || i==i || i==i+2)
            {
                printf("* ",i);
            }
            else
                printf("  ",i);
        }
    }

}
