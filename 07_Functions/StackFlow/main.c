#include <stdio.h>
void sayGoodMorning()
{
   printf("Good morning\n");
   sayGoodAfternoon();
}
void sayGoodAfternoon()
{
    printf("Good Afternoon\n");
}
void main()
{

    printf("Main start : \n");
    sayGoodMorning();
    printf("Main Ends : \n");
}
