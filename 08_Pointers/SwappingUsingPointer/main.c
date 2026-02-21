#include <stdio.h>
void main()
{

    int a,b;
    printf("Enter values of a and b: ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Before Swapping: \n");
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    int temp=a;
    a=b;
    b=temp;
    printf("After Swapping: \n");
    printf("a: %d\n",a);
    printf("b: %d\n",b);

}
