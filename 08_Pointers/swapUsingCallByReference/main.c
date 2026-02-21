#include <stdio.h>
void swap(int *n1,int *n2)
{

    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}


void main()
{
    int a,b;
    printf("Enter a,b values: ");
    scanf("%d %d",&a,&b);

    printf("Before swapping: \n");
    printf("a= %d\n b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping : \n");
    printf("a= %d \n b= %d\n",a,b);
}
