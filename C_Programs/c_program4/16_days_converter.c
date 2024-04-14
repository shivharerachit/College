/* Write a C program to convert specified days into years, weeks and days. */


#include<stdio.h>
 void main()
{
 int a,b,c,d;
 printf("Enter no. of days:");
 scanf("%d",&a);
 b=a/365;
 c=(a%365)/7;
 d=(a%365)%7;
 printf("\n %d years %d weeks %d days.\n",b,c,d);
}
