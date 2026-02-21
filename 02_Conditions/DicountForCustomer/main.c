#include <stdio.h>
void main()
{

    int custage;
    int totalPurchaseAmt;
    int MembStatus;
    printf("---Customer Details---\n");
    printf("Age:");
    scanf("%d",&custage);
    printf("Total purchase: ");
    scanf("%d",&totalPurchaseAmt);
    printf("Membership: ");
    scanf("%d",&MembStatus);
    printf("---Result after analysing details---\n");
    if(custage>=60 || MembStatus ==1 )
            printf("Eligible for Discount\n");
    else
        printf("not eligible for discount \n");
    float discount=totalPurchaseAmt*10/100.0;
    printf("Discount :%.2f\n",discount);
    float finalBill=totalPurchaseAmt-discount;
    printf("final bill: %.2f\n",finalBill);

}
