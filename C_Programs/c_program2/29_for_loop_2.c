#include<stdio.h>
 void main()
{
 int i,n;
 printf("Enter the loop limit:");
 scanf("%d",&n);
 for(i=1;i>=n;i++)
 {
   printf("\t%d",i);
 }
}