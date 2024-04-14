#include<stdio.h>
 void main()
{
 int a,b,c;
 printf("Enter three values:");
 scanf("%d%d%d",&a,&b,&c);
 (a>b?(a>c ? printf("%d is greatest of all",a):printf("%d is greatest of all",c)):(b>c?printf("%d is greatest of all",b):printf("%d is greatest of all",c)));
}
