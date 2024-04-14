/* Swapping program in C using any temporary variable. */
#include<stdio.h>
 void main()
{
 int a,b,c;
 printf("Enter the two values to be swapped:");
 scanf("%d%d",&a,&b); 
 printf("Value of a before swapping = %d\n",a);
 printf("Value of b before swapping = %d\n",b);
 c=a;
 a=b;
 b=c;
 printf("Value of a after swapping = %d\n",a);
 printf("Value of b after swapping = %d\n",b);
}
