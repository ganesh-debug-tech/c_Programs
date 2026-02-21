#include <stdio.h>
void main()
{

    int score;
    printf("Enter the score: ");
    scanf("%d",&score);
    int bonus;
    bonus=score>=100?50:20;
    ++bonus;
    printf("bonus : %d\n",bonus);
    printf("total: %d\n",score+bonus);
}

