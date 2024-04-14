#include<stdio.h>
void main()
{
    float r,area,vol;
    printf("Enter the radius of a sphere:");
    scanf("%f",&r);
    area=(4*22*r*r)/7;
    vol=(4*22*r*r*r)/21;
    printf("Area of sphere is %0.2f.\n",area);
    printf("Volume of sphere is %0.2f.",vol);
}