#include <stdio.h>
void main()
{

    int a,b;
    printf("Enter the a,b values:");
    scanf("%d%d",&a,&b);
    int *p1=&a;
    int *p2=&b;
    printf("Before swapping: \n");
    printf("a = %d\n",*p1);
    printf("b = %d\n",*p2);

    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("After swapping: \n");
    printf("a = %d\n",*p1);
    printf("b = %d\n",*p2);
}
