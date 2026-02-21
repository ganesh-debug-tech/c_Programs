#include <stdio.h>
void printNum(int n)
{
    if(n==0)
        return ;
    else{
        printf("%d\n",n);
    printNum(n-1);
    }
}
void main()
{
    printf("Main Start:\n");
    printNum(10);
    printf("Main Ends.\n");
}

