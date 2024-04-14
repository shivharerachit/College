#include<stdio.h>
 void main()
 {
  int a,b,c,d;
  printf("Enter the four values:");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  
  if(a>b && a>c && a>d)
  printf("A is greater.");
  
  if(b>a && b>c && b>d)
  printf("B is greater.");
  
  if(c>a && c>b && c>d)
  printf("C is greater.");
  
  if(d>a && d>b && d>c)
  printf("D is greater.");
 }