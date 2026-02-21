#include <stdio.h>
void main()
{

    char text[50];
    scanf(" %[^\n]",text);
    int count=0;
    for(int i=0;text[i]!='\0';i++)
    {
        count++;

    }
    printf("%d",count);


}
