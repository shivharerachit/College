#include<stdio.h>
 void main()
{
 int day;
 
 printf("Enter the day no.:");
 scanf("%d",&day);
 
 switch(day)
 {
    case 1:
	printf("\n Sunday");
	break;
	
	case 2:
	printf("\n Monday");
	break;
	
	case 3:
	printf("\n Tuesday");
	break;
	
	case 4:
	printf("\n Wednesday");
	break;
	
	default:
	printf("\n You entered wrong day.");
 }
}

