#include<stdio.h>
 void main()
 {
	 int a,k;
	 k=1;
	 while(k==1)
	 {
	   printf("Enter a number:");
	   scanf("%d",&a);
	 
	   if (a>0)
		 printf("POSITIVE");
	   else if (a<0)
		 printf("NEGATIVE");
	   else
		 printf("ZERO");
	 
	 printf("\nDo you Want to continue(0 for no and 1 for yes)?");
	 scanf("%d",&k);
	}
	printf("Program is over :).");
 }