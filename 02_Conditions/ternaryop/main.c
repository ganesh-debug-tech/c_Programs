#include <stdio.h>

void main()
{
    int n1;
    int n2;

    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);

    int largest=n1>n2?n1:n2;
    printf("Largest number: %d",largest);

}
