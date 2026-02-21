#include <stdio.h>
void main()
{

    int num,count=0,temp;
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        count++;
        temp=temp/10;
    }
    int sum=0;
    temp=num;
    while(temp>0)
    {
       int last=temp%10;
       int product=1;
       for(int i=1;i<=count;i++)
       {
           product=product*last;
       }
       sum=sum+product;
       temp=temp/10;
    }
    if(temp==num)
        printf("Given number is an Armstrong number.\n");
    else
        printf("Given number is not an Armstrong number.\n");
}
