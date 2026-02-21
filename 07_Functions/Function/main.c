#include <stdio.h>
void add(int in,int ass)
{

    int total=in+ass;
    printf("The total marks are: %d\n",total);
}
void main(){
    int std1in,std1ass,std2in,std2ass,std3in,std3ass;
    printf("Enter the internal and assisgnmaent marks of student1 :");
    scanf("%d%d",&std1in,&std1ass);
    printf("Enter the internal and assisgnmaent marks of student2 :");
    scanf("%d%d",&std2in,&std2ass);
    printf("Enter the internal and assisgnmaent marks of student3 :");
    scanf("%d%d",&std3in,&std3ass);

    add(std1in,std1ass);
    add(std2in,std2ass);
    add(std3in,std3ass);

}
