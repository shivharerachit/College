/* Write a C program that accepts an employee's ID. 
total worked hours of a month and the amount he 
received per hour. Print the employee's ID and salary
(with two decimal places) of a particular month */


#include<stdio.h>
 void main()
{
 int e,t,r,d;
 printf("Enter Employee's ID:");
 scanf("%d",&e);
 printf("Enter total no. of hours employee worked:");
 scanf("%d",&t);
 printf("Enter amount employee earned per hour:");
 scanf("%d",&r);
 d=r*t;
 printf("\nEmployee ID:%d\nSalary:%d\n",e,d);
}
