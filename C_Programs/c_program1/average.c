/* C program to find sum and average of 3 numbers.*/

#include<stdio.h>
 void main()
{
 float a,b,c,d,e;
 printf("Enter the three numbers to be averaged:");
 scanf("%f%f%f",&a,&b,&c);
 d=a+b+c;
 e=d/3;
 printf("\nSum of three number is :%f\n",d);
 printf("\nAverage of three number is :%f\n",e);
}
