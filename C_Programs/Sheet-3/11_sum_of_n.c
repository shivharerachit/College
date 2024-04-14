#include<stdio.h>
 void main()
{
	 int a,i,k=0;
	 printf("Enter a number:");
	 scanf("%d",&a);
	 for(i=1;i<=a;i++)
	 {
	     k=k+i;
	 }
	 printf("Sum of first %d numbers is %d .",a,k);
}