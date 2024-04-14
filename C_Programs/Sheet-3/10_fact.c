#include<stdio.h>
 void main()
{
	 int a,i,k=1;
	 printf("Enter a number:");
	 scanf("%d",&a);
	 for(i=a;i>=1;i--)
	 {
	     k=i*k;
	 }
	 printf("Factorial of %d is %d .",a,k);
	 
}