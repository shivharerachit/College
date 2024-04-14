#include<stdio.h>
 void main()
{
 float p,r,t,s;
 printf("Enter the principal value:");
 scanf("%f",&p);
 printf("Enter the rate of intrest:");
 scanf("%f",&r);
 printf("Enter the time period (in year):");
 scanf("%f",&t);
 s=(p*r*t)/100;
 printf("Simple Intrest = %f\n",s);
 printf("Total amount after %f year = %f\n",t,s+p);
}
