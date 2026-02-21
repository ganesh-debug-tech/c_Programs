#include <stdio.h>
void main()
{
    int age;
    float fullTicket;
    printf("Age: ");
    scanf("%d",&age);
    printf("Full Fare: ");
    scanf("%f",&fullTicket);
    if(age<5==1)
    {

        printf("%.1f",fullTicket-fullTicket);
    }
    else if(age>=5 && age<=60)
    {


        printf("%f",fullTicket);
    }
    else
    {

        float discount;
        printf("Discounted fare: ");
        scanf("%f",&discount);
        printf("%f",fullTicket-discount);

    }
}
