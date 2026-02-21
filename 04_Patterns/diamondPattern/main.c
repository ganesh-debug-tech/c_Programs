#include <stdio.h>
void main()
{

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        for(int sp=1;sp<=n*2-i-1;sp++)

            printf(" ");


        int num=1;
        for(int j=1;j<=i*2-1;j++)
        {
            printf("%d",num);
            num++;

        }
        printf("\n");





    }
}
