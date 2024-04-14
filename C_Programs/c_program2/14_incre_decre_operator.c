#include<stdio.h>
 void main()
{
 int a,b,c;
 float f;
 printf("Enter the two values:");
 scanf("%d%d",&a,&b);
 c=a*b;
 printf("\nc=%d",c);
 c=a*b++;
 printf("\nc=%d",c);
 c=a*++b;
 printf("\nc=%d",c);
 c=a*b--;
 printf("\nc=%d",c);
 c=a*b;
 printf("\nc=%d",c);
}

