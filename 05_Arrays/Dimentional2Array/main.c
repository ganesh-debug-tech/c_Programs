#include <stdio.h>
void main()
{
    int r,c;
    printf("Enter the rows and columns: ");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<=r-1;i++)
    {
        for(int j=0;j<=c-1;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<=r-1;i++)
    {
        for(int j=0;j<=c-1;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}
