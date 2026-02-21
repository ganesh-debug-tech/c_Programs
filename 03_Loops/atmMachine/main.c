#include <stdio.h>
void main()
{
    int pin,currentPin=4242,count=0;
    do
    {
       printf("Enter your pin: ");
       scanf("%d",&pin);
       if(pin!=currentPin)
       {
           printf("Wrong Pin. Try again.\n");
       }


    }while(pin!=currentPin && count==3);
    printf("Pin Accepted. Access Granted");
}
