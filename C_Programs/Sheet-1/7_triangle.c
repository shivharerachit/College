#include<stdio.h>
 void main()
 {
 	int a,b,c;
 	
 	printf("Enter the sides of triangle:");
 	scanf("%d%d%d",&a,&b,&c);

 	if(a==b && a==c)
 		printf("Triangle is equilateral.");
 	else if(a==b || a==c || b==c)
 		printf("Triangle is isosceles.");
 	else
 		printf("Triangle is scalene.");
 }
