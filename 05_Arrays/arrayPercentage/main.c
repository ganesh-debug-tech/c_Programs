#include <stdio.h>

int main()
{
   int n;
   printf("Enter total no of student:");
   scanf("%d",&n);
   float attPercent[n];
   printf("Enter the attendence of %d student: ",n);
   for(int i=0;i<=n-1;i++)
   {
       scanf("%f",&attPercent[i]);
   }
   for(int i=0;i<=n-1;i++)
   {

       printf("%.2f\n",attPercent[i]);
   }
    return 0;
}
