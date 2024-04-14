#include<stdio.h>
 void main()
{
 int a,b,c;
 printf("Enter the two values:");
 scanf("%d%d",&a,&b);
 c=(a>b);
 printf("\nGreater than=%d",c);
 c=(a<b);
 printf("\nLesser than=%d",c);
 c=(a>=b);
 printf("\nGreater than or equal to=%d",c);
 c=(a<=b);
 printf("\nLesser than or equal to=%d",c);
}