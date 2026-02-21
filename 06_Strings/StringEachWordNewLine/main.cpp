#include <stdio.h>
int main()
{

    char n[50];
    scanf(" %[^\n]",n);
    for(int i=0;n[i]!='\0';i++)
    {
        printf("%c\n",n[i]);
    }
    return 0;
}
