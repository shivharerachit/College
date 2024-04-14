#include<stdio.h>
 void main()
{
 int i,n,sum=0;
 printf("Enter the loop limit:");
 scanf("%d",&n);
 for(i=1;i>=n;i++)
 {
   sum=sum+i;
 }
 printf("Sum of natural number is=%d",sum);
}