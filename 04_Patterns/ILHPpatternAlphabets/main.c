#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<n-i;k++)
        {
            printf("%c ",65+k);
        }
        printf("\n");
    }
}
