#include<stdio.h>
 void main()
 {
 	float cel, fah, a, b;
 	
 	printf("Enter temp in celcius:");
 	scanf("%f",&cel);

	printf("Enter temp in fahrenheit:");
 	scanf("%f",&fah);
 	
 	a=((cel*9)/5)+32;
 	b=((fah-32)*5)/9;
 	
 	printf("Celcius to fahrenheit = %f",a);
	printf("Farenheit to celcius = %f",b);
 }

