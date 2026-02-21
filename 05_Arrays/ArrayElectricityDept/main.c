#include <stdio.h>
void main()
{
    int nOfDays;
    printf("Enter no of days:");
    scanf("%d",&nOfDays);
    int elecConsumpValues[nOfDays];
    printf("Enter the Electricity consumed %d Of days:",nOfDays);
    for(int i=0;i<=nOfDays-1;i++)
    {
       scanf("%d",&elecConsumpValues[i]);
    }



    for(int i=0;i<=nOfDays-1;i++)
    {
        if(elecConsumpValues[i]<0)
        printf("%d\n",elecConsumpValues[i]);
    }



}
