#include<stdio.h>
 void main()
{
	 int a,i,k=0;
	 printf("Enter a number:");
	 scanf("%d",&a);
	 printf("Even numbers between 1 to %d are :-",a);
	 for(i=1;i<=a;i++)
	 {
	     if(i%2==0)
	     {
	         printf(" %d, ",i);
	     }
	 }
	 printf("\nOdd numbers between 1 to %d are :-",a);
	 for(i=1;i<=a;i++)
	 {
	     if(i%2!=0)
	     {
	         printf(" %d, ",i);
	     }
	 }
}