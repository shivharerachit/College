#include<stdio.h>
 void main()
{
 int i,j,n,k,m;


 printf("Enter the row size/number:");
 scanf("%d",&n);
 
 
 for(i=1;i<=n;i++)
 {

   for(j=n;j>i;j--)
   {
     printf(" ");
   }
   
   for(k=1;k<=j;k++)
   {
     printf("%d",k);
   }
   for(m=i-1;m>=1;m--)
   {
     printf("%d",m);   
   }
   printf("\n");
 }
}