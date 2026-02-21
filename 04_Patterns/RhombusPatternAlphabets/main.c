#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
            printf(" ");
        for(int k=0;k<n;k++)
            printf("%c ",65+k);
        printf("\n");
    }
}
