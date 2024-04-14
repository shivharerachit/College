/* C Program to find Area of Circle/Right angled triangle/square/rectangle. */



#include<stdio.h>
 void main()
{
 int ch;
 float a,b,c,h;
 printf("\nPress 1 for area of circle.");
 printf("\nPress 2 for area of right angled triangle.");
 printf("\nPress 3 for area of square.");
 printf("\nPress 4 for area of rectangle.");
 printf("\nEnter your choice:");
 scanf("%d",&ch);
 
 
  switch(ch)
  {
	case 1:
		 printf("Enter radius of circle:");
		 scanf("%f",&a);
		 b=(22*a*a)/7;
		 printf("Area of circle is = %f\n",b);
		 break;
		 
	case 2:
		 printf("Enter the length of base and height of triangle respectively:");
		 scanf("%f%f",&b,&h);
		 c=(b*h)/2;
		 printf("Area of Triangle is = %f\n",c);
		 break;
		
	case 3:
		 printf("Enter the side length of square:");
		 scanf("%f",&a);
		 b=a*a;
		 printf("Area of Square is = %f\n",b);
		 break;
		
	case 4:
		 printf("Enter the length and width of rectangle:");
		 scanf("%f%f",&a,&b);
		 c=a*b;
		 printf("Area of rectangle is = %f\n",c);
		 break;
		 
	default:
		 printf("Entered choice is wrong.");
		 
  }
}