#include <stdio.h>
void main()
{

    float a=10.83;
    float *p=&a;
    printf("Addresses of a = %p\n",&a);
    printf("Address of a variable using pointer = %p\n",p);
    printf("Values of a = %.2f\n",a);
    printf("Value of a using pointer = %.2f\n",*p);

}
