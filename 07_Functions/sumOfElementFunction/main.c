#include <stdio.h>
int sumofElement(int a[],int n)
{
    int sum=0;
    for(int i=0;i<=n-1;i++)
        sum=sum+a[i];



     return sum;

}
void main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
        scanf("%d",arr[i]);


    printf("Sum of the elemnnts are: %d\n",sumofElement(arr,n));
}
