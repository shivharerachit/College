#include<stdio.h>
 void main()
{
 int num,s=0,a,b;
 printf("Enter a number:");
 scanf("%d",&b);
 b=num;
 while(num!=0)
 {
   a=num%10;
   num=num/10;
   s=s*10+a;
 }
 if (b==s)
   printf("Number is a palindrome.");
 else
   printf("Number is not a palindrome.");
}
#error      