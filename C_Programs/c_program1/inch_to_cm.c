/*Write a C program to convert inches to the centimeter.
Formula: 1inch = 2.54cm */

#include<stdio.h>
 void main()
{
 float a,b;
 printf("Enter the value (in inches):");
 scanf("%f",&a);
 b=a*2.54;
 printf("\nConverted value is :%f\n",b);
}
