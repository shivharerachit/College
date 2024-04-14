#include<stdio.h>
 void main()
 {
 	int a,b,c;
 	printf("Enter the sides of triangle:");
 	scanf("%d%d%d",&a,&b,&c);
 	
 	if((a+b)>c && (a+c)>b && (b+c)>a)
 		printf("The triangle is valid.");
 		
 	else
 		printf("This is not a valid triangle.");
	
 }

