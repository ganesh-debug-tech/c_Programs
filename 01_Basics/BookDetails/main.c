#include <stdio.h>

void main()
{
    char title[50];
    char author[50];
    float price;
    int book_id;
    printf("Title: ");
    scanf(" %[^\n]",title);
    printf("Author: ");
    scanf(" %[^\n]",author);
    printf("Price :");
    scanf("%f",&price);
    printf("Book Id:");
    scanf("%d",&book_id);

    //output
    printf("---Book details--\n");
    printf("Title : %s\n",title);
    printf("Author : %s\n",author);
    printf("Prize : %.2f\n",price);
    printf("Book_Id : %d\n",book_id);
}
