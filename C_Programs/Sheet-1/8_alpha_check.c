#include<stdio.h>
 void main()
 {
 	char a;
 	
 	printf("Enter the character:");
 	scanf("%c",&a);
 	if(a>='a' && a<='z')
 		printf("Character is an alphabet.");
 	
 	else if(a>='A' && a<='Z')
 		printf("Character is an alphabet.");
 	else
 		printf("Character is not an alphabet.");
 }

