#include<stdio.h>
 void main()
{
 int num,s=0,a,t;
 printf("Enter the number:");
 scanf("%d",&t);
 num=t;
 while(num!=0)
 {
   a=num%10;
   num=num/10;
   s=s+a*a*a;
 }
 if (t==s)
   printf("Number is armstrong.");
 else
   printf("Number is not armstrong.");
}