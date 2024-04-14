#include<stdio.h>
 void main()
{
 int a,b;
 printf("Enter the two values:");
 scanf("%d%d",&a,&b);
 printf("\na=%d",a);
 printf("\nb=%d",b);
 a+=b;
 printf("\nAddition=%d",a);
 a-=b;
 printf("\nSubstraction=%d",a);
 a*=b;
 printf("\nMultiplication=%d",a);
 a/=b;
 printf("\nDivision=%d",a);
 a%=b;
 printf("\nRemainder=%d",a);
}

