#include<stdio.h>
 void main()
 {
 	int phy,chem,math,eng,hin;
 	float per;
 	char gra;
 	
 	printf("Enter the marks of physics, chemistry, maths, english and hindi respectively:");
 	scanf("%d%d%d%d%d",&phy,&chem,&math,&eng,&hin);
 	
 	per=(phy+chem+math+eng+hin)/5;
 	
 	if(per<25)
 		gra='F';
 	else if(per<45)
 		gra='E';
 	else if(per<50)
 		gra='D';
 	else if(per<60)
 		gra='C';
 	else if(per<80)
 		gra='B';
 	else
 		gra='A';
		 
	printf("%f is the percentage and %c is the grade.",per,gra);
	
}
