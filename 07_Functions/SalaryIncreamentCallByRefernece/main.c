#include <stdio.h>

int salary(int a[],int n)
{
    for(int i=0;i<=n-1;i++)
        a[i]=a[i]+2000;

}
void main()
{

    int n;
    printf("Enter the number of employess: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the salaries of employess: ",n);
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    salary(a,n);
    for(int i=0;i<=n-1;i++)
        printf("%d ",a[i]);
}
