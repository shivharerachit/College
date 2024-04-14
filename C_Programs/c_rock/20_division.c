#include<stdio.h>
#include<string.h>
 void main()
{
    float per;
    printf("Enter CGPA:");
    scanf("%f",&per);
    if (per<5)
    printf("FAIL");
	
	else if (per>=7.5)
 	printf("Distinction");
 	
 	else if (per>=6.5)
	printf("First Division.");
	
	else if (per>=5.5)
 	printf("Second Division.");
 	
 	else if (per>=5.0)
 	printf("Third Division.");
}