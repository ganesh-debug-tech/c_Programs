#include <stdio.h>
int factorial()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int fact=1;
    for(int i=num;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("%d\n",fact);
    return fact;

}
void main()
{
  int result=factorial();
  printf("Factorial of given number is : %d\n",result);
}
