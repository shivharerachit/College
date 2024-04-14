#include<stdio.h>
 void main()
 {
  int a,b;
  printf("Enter the two values:");
  scanf("%d%d",&a,&b);
  
  if(a>b)
  printf("a is greater.");
  
  if(b>a)
  printf("b is greater.");
  
  else
  printf("Values are equal.");

 }