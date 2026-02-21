#include <stdio.h>
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *p1,*p2;
    p1=&a;
    p2=&b;
    int sum=*p1+*p2;

    printf("Sum=%d\n",sum);
}
