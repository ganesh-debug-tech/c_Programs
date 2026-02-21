#include <stdio.h>
void totalBill()
{

    int units;
    printf("Enter the number of units : ");
    scanf("%d",&units);
    int total;
    if(units<=100)
    {
        total=units*5;
    }
    else if(units>=101 && units<=200)
    {

        total=100*5+(units%100)*7;
    }
    else{
        total=100*5+100*7+(units%200)*10;
    }
    printf("Total: %d\n",total);



}
void main(){

    totalBill();

}
