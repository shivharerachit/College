/* Write a C program to find the eligibility of admission for a professional course based on the 
following criteria:
Eligibility Criteria: 
Marks in Maths >=65 and 
Marks in Phy>=55 and 
Marks in Chem>=50 and 
Total In all three subject >=190 or 
Total in Maths and Physics >=140. */



#include<stdio.h>
 void main()
{
 int m,p,c;
 printf("Enter the marks of maths:");
 scanf("%d",&m);
 printf("Enter the marks of physics:");
 scanf("%d",&p);
 printf("Enter the marks of chemistry:");
 scanf("%d",&c);
 if (m>=65 && p>=55 && c>=50)
 {
	if (p+c+m>=190 || p+m>=140)
	{
		printf("Congratulations! You are eligible for admission in professional course.");
	}
 }
 else
 {
	printf("Sorry not eligible for admission.");
 }
}
