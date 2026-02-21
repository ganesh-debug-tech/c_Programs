#include<stdio.h>
void main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int v=i*((i%2)*2-1);
        printf("%d 2",v);
    }

}
