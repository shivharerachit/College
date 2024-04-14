#include<stdio.h>
 void main()
 {
 	int a;
 	char ch;
 	
 	printf("Enter the character:");
 	scanf("%c",&ch);
 	
	a=(int)ch;
	
	if((a>=65 && a<=90) || (a>=97 && a<=122))
		printf("Give character is an alphabet.");
		
	else
		printf("Given character is not an alphabet.");
		
 }

