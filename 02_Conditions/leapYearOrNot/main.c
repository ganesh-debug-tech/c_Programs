#include <stdio.h>
void main()
{
    int year;
    scanf("%d",&year);
    if(year%400==0 || year%4==0 && year%100!=0)
        printf("This year is an leap year");
    else
        printf("this year is not a leap year");

}
