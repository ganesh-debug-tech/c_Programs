#include <stdio.h>
void main()
{

    int digit;
    printf("Enter number:");
    scanf("%d",&digit);
    if(digit>=0 && digit<=9)
        printf("Digits count=1");
    else if(digit>=10 && digit<=99)
        printf("Digits count=2");
    else if(digit>=100 && digit<=999)
        printf("Digits count=3");
}
