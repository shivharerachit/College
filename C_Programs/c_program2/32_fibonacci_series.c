#include<stdio.h>
 void main()
{
 int a=0,b=1,c,i,n;
 
 printf("Enter the series limit:");
 scanf("%d",&n);
 printf("%d\t",a);
 printf("%d\t",b);
 
 for(i=1;i<=1;i++)
 {
   c=a+b;
   printf("%d\t",c);
   a=b;
   b=c;
 }
}