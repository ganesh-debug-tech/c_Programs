#include <stdio.h>
void main()
{

    int bookTitle[50];
    printf("Enter book title: ");
    scanf(" %[^\n]",bookTitle);
    printf("%s",bookTitle);

}
