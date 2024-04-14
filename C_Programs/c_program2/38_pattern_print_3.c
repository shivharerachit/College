#include<stdio.h>
 void main()
{
 int i,j,n;
 char ch;


 printf("Enter the row size/number:");
 scanf("%d",&n);
 ch='a';
 
 
 for(i=1;i<=n;i++)
 {

   for(j=1;j<=i;j++)
   {
     printf("%c",ch);
	 ch++;
   }
   printf("\n");

 }
}