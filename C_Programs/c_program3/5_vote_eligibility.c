/* Write a C program to read the age of a candidate and determine whether it is eligible for casting 
his/her own vote. */
#include<stdio.h>
 void main()
{
 int a;
 printf("Enter the age:");
 scanf("%d",&a);
 if (a>=18)
 {
 printf("The candidate is eligible for voting.");
 }
 else
 {
 printf("The candidate is not eligible for voting.");
 }
}
