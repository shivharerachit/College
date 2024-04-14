#include<stdio.h>
 void main()
{
 int a,b,c;
 float f;
 printf("Enter the two values:");
 scanf("%d%d",&a,&b);
 printf("\na=%d",a);
 printf("\nb=%d",b);
 c=a+b;
 printf("\nAddition=%d",c);
 c=a-b;
 printf("\nSubstraction=%d",c);
 c=a*b;
 printf("\nMultiplication=%d",c);
 f=(float)a/b;  //TYPE CASTING
 printf("\nDivision=%f",f);
 c=a%b;
 printf("\nRemainder=%d",c);
}

