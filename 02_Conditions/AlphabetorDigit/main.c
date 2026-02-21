#include <stdio.h>
void main()
{
   char ch;
   printf("Enter Character: ");
   scanf("%c",&ch);
   if(ch>='A'&&ch<='Z' || ch>='a'&&ch<='z')
   {
       printf("character is alphabhet\n");
    }
    else if(ch>='0' && ch<='9')
        printf("character is digit");

}
