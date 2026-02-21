#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[50];
    long long int mobileNumber;


};
void main()
{
    struct student s;
    s.id=4242;
    strcpy(s.name,"Ganesh");
    s.mobileNumber=9346023434;
    printf("Id = %d\n",s.id);
    printf("Name = %s\n",s.name);
    printf("Mobile Number = %lld",s.mobileNumber);
}
