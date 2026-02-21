#include <stdio.h>

void main()
{
    char name[50];
    int age;
    float weight;
    int membershipid;
    printf("Name: ");
    scanf(" %[^\n]",name);
    printf("Age: ");
    scanf("%d",&age);
    printf("Weight: ");
    scanf("%f",&weight);
    printf("MembershipId: ");
    scanf("%d",&membershipid);

    //Output
    printf("---Gym details--\n");
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Weight: %.2f\n",weight);
    printf("Membership Id: %d\n",membershipid);

}
