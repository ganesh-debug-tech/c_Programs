#include <stdio.h>
void printHelloWorld(int n)
{
    if(n>3)
        return ;
    else
        printf("Hello World\n");
    printHelloWorld(n+1);
}

void main()
{
    printf("Main Ends: \n");
    printHelloWorld(1);
    printf("Main Ends.\n");
}
