#include<stdio.h>
 void main()
{
 int i,n,sum;
 
 printf("Enter the loop limit:");
 scanf("%d",&n);
 sum=0;
 for(i=1;i<=n;i++)
 {
   if (i%2!=0)
   {
	printf("\n%d\t",i);
	sum=sum+i;
   }
 }
 printf("\nSum of odd no. = %d\n",sum);
}