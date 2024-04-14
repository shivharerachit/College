#include<stdio.h>
void main()
{
    float p,r,t;
    printf("Enter principle amount, rate of intrest and time period in years:");
    scanf("%f%f%f",&p,&r,&t);
    printf("Simple Intrest is %0.2f.",(p*r*t)/100);
}