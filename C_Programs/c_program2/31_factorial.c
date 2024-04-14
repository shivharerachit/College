#include<stdio.h>
 void main()
{
 int i,n,fact=1;
 printf("Enter the numbers:");
 scanf("%d",&n);
 for(i=n;i>=1;i--)
 {
   fact=fact*i;
 }
 printf("Factorial=%d",fact);
}