#include<stdio.h>
 void main()
{
 int i,n,t;
 printf("Enter the number:");
 scanf("%d",&n);
 i=1;
 do
 {
   t=n*i;
   printf("%d",t);
   i++;
 }while(i<10);
}