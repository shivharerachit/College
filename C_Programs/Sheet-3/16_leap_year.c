#include<stdio.h>
 void main()
{
	 int a,i;
	 printf("Enter a number:");
	 scanf("%d",&a);
	 printf("Leap year from 1 to n are :-");
	 for(i=1;i<=a;i++)
	 {
	     if(i%4==0)
	     printf(" %d ",i);
	 }
}