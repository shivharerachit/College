#include<stdio.h>
 void main()
{
 int a,b,ch,c;
 float d;
 printf("\nPress 1 for addition.");
 printf("\nPress 2 for area substract.");
 printf("\nPress 3 for area multiplication.");
 printf("\nPress 4 for area division.");
 printf("\nEnter your choice:");
 scanf("%d",&ch);
 printf("\nEnter the two no.:");
 scanf("%d%d",&a,&b);
 
 switch(ch)
 {
    case 1:
	c=a+b;
	printf("\n Addition=%d",c);
	break;
	
	case 2:
	c=a-b;
	printf("\n Substract=%d",c);
	break;
	
	case 3:
	c=a*b;
	printf("\n Multiplication=%d",c);
	break;
	
	case 4:
	d=(float)a/b;
	printf("\n Division=%d",d);
	break;
	
	default:
	printf("\n You entered wrong choice.");
 }
}

