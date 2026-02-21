#include <stdio.h>

void main()
{
    int l;
    int br;


    printf("Length = ");
    scanf("%d",&l);
    printf("Breadth = ");
    scanf("%d",&br);
    int Aor=l*br;
    printf("Area of rectangle: %d\n",Aor);
    int h;
    int ba;
    printf("Heigth =");
    scanf("%d",&h);
    printf("Base = ");
    scanf("%d",&ba);
    int Aot=(ba*h)/2;
    printf("Area of triangle : %d\n",Aot);

}
