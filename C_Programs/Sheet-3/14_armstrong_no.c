#include<stdio.h>
 void main()
{
	 int a,i,k=0,n,sum=0;
	 printf("Enter a number:");
	 scanf("%d",&a);
	 printf("Armstrong numbers between 1 to %d are :-",a);
	 for(i=1;i<=a;i++)
	 {
	     sum=0;
	     n=i;
	     while(n!=0)
	     {
	         int r=n%10;
	         sum=sum+(r*r*r);
	         n=n/10;
	     }
	     if(sum==i)
	     {
	         printf(" %d ",i);
	     }
	 }
}