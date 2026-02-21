#include <stdio.h>
void sayAskHowAreYou()
{
    printf("How are you...\n");
}
void sayHii()
{

    printf("Hii...\n");
    sayAskHowAreYou();
}
void sayHello()
{
    printf("Hello...\n");
    sayHii();
}

void main()
{

    printf("Main starts : \n");
    sayHello();
    printf("Main Ends.\n");
}
