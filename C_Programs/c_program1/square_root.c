#include<stdio.h>
void main()
 { 
    int a,i;
	printf("Enter a number:");
	scanf("%d",&a);
	for (i=1;i<=a/2;i++)
	{
		if (i*i==a)
		{
			printf("Square root of %d is %d.",a,i);
			break;				
		}
		else
		{
		    printf("It is not a perfect square.")
		}
	}	
}