#include <stdio.h>
void main()
{

    int n;
    scanf("%d ",&n);
    int temp[n];
    for(int i=0;i<=n-1;i++)
    {

       scanf("%d",&temp[i]);

    }
    int posCount=0,negCount=0;
    for(int i=0;i<=n-1;i++)
    {

        if(temp[i]>0){
            posCount++;
        }
        else if(temp[i]<0)
            {
                negCount++;
            }

    }
    printf("Positive Count: %d\n",posCount);
    printf("Negative Count: %d\n",negCount);
}

