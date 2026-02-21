#include <stdio.h>

float areaofCircle()
{
    int r;
    scanf("%d",&r);
    float pi=3.14;
    float Area=pi*r*r;
    return Area;
}
void main()
{

    printf("Area of circle = %.2f\n",areaofCircle());
}

