#include <stdio.h>
#include <string.h>

struct customer
{
    int customerId;
    char customerName[50];
    long long int cMobileNo;

};
struct product
{
    int id;
    char ProductName[50];
    int price;
};

void main()
{

    struct customer c;
    printf("Enter the customer id : ");
    scanf("%d",&c.customerId);
    printf("Enter the customer Name : ");
    scanf("%s",&c.customerName);
    printf("Enter the customer mobile number : ");
    scanf("%lld",&c.cMobileNo);
    printf("----Details of customer----\n");
    printf("Customer Id : %d\n",c.customerId);
    printf("Customer Name : %s\n",c.customerName);
    printf("Customer Mobile : %lld\n\n",c.cMobileNo);


    struct product p;
    printf("Enter the product Id : ");
    scanf("%d",&p.id);
    printf("Enter the product name : ");
    scanf("%s",&p.ProductName);
    printf("Enter the product price : ");
    scanf("%d",&p.price);

    printf("----Details of Product----\n");
    printf("Product id : %d\n",p.id);
    printf("Product Name : %s\n",p.ProductName);
    printf("Product Price : %d\n",p.price);



}

