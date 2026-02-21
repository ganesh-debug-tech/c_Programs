#include <stdio.h>
void main()
{

int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==n|| i==n || i!=j )
                printf("* ");
            else
                printf("  ");

        }
        printf("\n");
    }
}
