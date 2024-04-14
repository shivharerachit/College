#include<stdio.h>
void main()
{
 float a,b,c,d;
 printf("Write below values as ax^2+bx+c=0.\n");
 printf("Write value of a:");
 scanf("%f",&a);
 printf("Write value of b:");
 scanf("%f",&b);
 printf("Write value of c:");
 scanf("%f",&c);
 d=(b*b)-(4*a*c);
 printf("Discriminent=%f\n",d);
}
