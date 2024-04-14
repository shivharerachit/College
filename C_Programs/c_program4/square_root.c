#include<stdio.h>
void main()
 { 
    float a,i,c;
	printf("Enter a number:");
	scanf("%f",&a);
	for (i=1;i<=a;i=i+0.0001)
	{
		if (i*i==a)
		{
			break;				
		}
		c=i;
  		if (i*i>a)
		{
		 break;
		}
	}
	printf("Square root of %0.0f is %0.3f.",a,c);
 }
