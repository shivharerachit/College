#include<stdio.h>
 void main()
{
 int i,n,t;
 
 printf("Enter the number:");
 scanf("%d",&n);
 
 for(i=1;i<=10;i++)
 {
   t=n*i;
   printf("%d x %d = %d\n",n,i,t);
 }
}