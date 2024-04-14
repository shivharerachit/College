/* Swapping program in C without using any temporary variable. */
#include<stdio.h>
 void main()
{
 int a,b;
 printf("Enter the two values to be swapped:");
 scanf("%d%d",&a,&b); 
 printf("Value of a before swapping = %d\n",a);
 printf("Value of b before swapping = %d\n",b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("Value of a after swapping = %d\n",a);
 printf("Value of b after swapping = %d\n",b);
}
