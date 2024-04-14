#include<stdio.h>
void main()
{
    float c,f;
    printf("Enter temperature in centigrade:");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("Temperature in farenheit is %0.2f.",f);
}