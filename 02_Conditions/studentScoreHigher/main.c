#include <stdio.h>
void main()
{

    int scoreStu1;
    int scoreStu2;
    printf("Enter the scores of two students: ");
    scanf("%d %d",&scoreStu1,&scoreStu2);
    if(scoreStu1>scoreStu2)
        printf("the highest score is: %d",scoreStu1);
    else
        printf("the highest score is: %d",scoreStu2);
}
