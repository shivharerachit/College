#include<stdio.h>
 void main()
{
 int num,s=0,a;
 printf("Enter the number:");
 scanf("%d",&num);
 while(num!=0)
 {
   a=num%10;
   num=num/10;
   s=s*10+a;
 }
 printf("Reverse=%d",s);
}