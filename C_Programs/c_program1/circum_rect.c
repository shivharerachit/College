/* Write a program to find the circumference of a rectangle.*/

#include<stdio.h>
 void main()
{
 float a,b,c;
 printf("Enter the sides of rectangle:");
 scanf("%f%f",&a,&b);
 c=2*(a+b);
 printf("\nCircumference of rectangle is :%f\n",c);
}
