#include<stdio.h>
 void main()
{
 int a,b=0,c;
 printf("Enter a number:");
 scanf("%d",&a);
 while(a!=0)
 {
   c=a%10;
   a=a/10;
   b+=c;
 }
 printf("Sum=%d",b);
}