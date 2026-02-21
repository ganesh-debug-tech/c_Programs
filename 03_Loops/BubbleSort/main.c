#include <stdio.h>
void main()
{

    int n;
    printf("Enter the size if an array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    for(int c=0;c<=n-1;c++)
    {
        for(int i=0;i<=n-2;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }

    }
    for(int i=0;i<=n-1;i++)
        printf("%d ",a[i]);
}
