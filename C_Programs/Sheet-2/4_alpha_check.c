#include<stdio.h>
 void main()
 {
 	char ch;
 	printf("Enter the character:");
 	scanf("%c",&ch);
 	
	if(ch>='a' && ch<='z')
 		printf("Character is a lower case alphabet.");
 	else if(ch>='A' && ch<='Z')
 		printf("Character is a upper case alphabet.");
 	else
 		printf("Character is not an alphabet.");
 		
 }

