#include <stdio.h>
void main()
{

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    int *p=a;
    for(int i=0;i<=n-1;i++)
        printf("%d ",*(p+i));
}
