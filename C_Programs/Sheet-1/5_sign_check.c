#include<stdio.h>
 void main()
 {
 	int a;
 	
 	printf("Enter a number:");
 	scanf("%d",&a);
 	if(a>0)
 		printf("Sign is positive.");
 	else if(a<0)
 		printf("Sign is negative.");
 	else
 		printf("Number is Zero.");
 }

