#include<stdio.h>
 void main()
{
 int con,cred,pred,unit;
 char name[25];
 float amount;


 printf("Enter consumer(IVRS) no.:");
 scanf("%d",&con);
 printf("Enter consumer name:");
 scanf("%s",&name);
 printf("Enter current reading:");
 scanf("%d",&cred);
 printf("Enter previous reading:");
 scanf("%d",&pred);


 unit=cred-pred;

 
 if(unit<0)
 printf("NOTE: Current reading cannot be less then previous reading.");
 	else if(unit<=50)
	amount=unit*3.75;
	 	else if(unit<=100)
	 	amount=unit*5;
 			else if(unit<=150)
			amount=unit*6.25;
				 else if(unit<=200)
				 amount=unit*7;
					 else
					 amount=unit*8.25;
printf("________________________________________\n");
printf("\t\t\tELECTRICITY Bill\t\t\t\n");
printf("Consumer No.:%d\t\tConsumer Name:%s\n",con,name);
printf("Current Reading:%d\tPrevious Reading:%d\n",cred,pred);
printf("Units:%d\t\t\t\tAmount=%f\n",unit,amount);
printf("______________________________________");

}