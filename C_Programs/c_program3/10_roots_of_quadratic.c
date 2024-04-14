/* Write a C program to calculate the root of a Quadratic. */



#include<stdio.h>
 void main()
{
 float a,b,c,d,r1,r2,i,e;
 printf("Write below values as ax^2+bx+c=0.\n");
 printf("Write value of a:");
 scanf("%f",&a);
 printf("Write value of b:");
 scanf("%f",&b);
 printf("Write value of c:");
 scanf("%f",&c);
 d=(b*b)-(4*a*c);
 printf("Discriminent=%f\n",d);
 
 for (i=1;i<=d/2;i++)
 {
	if (i*i==d)
	{
		e=i
		break;				
	}
	else
	{
	    printf("It is not a perfect square.")
	}
 }	
}
 r1=(-b+e)/2*a
 r2=(-b-e)/2*a
}
