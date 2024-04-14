#include<stdio.h>
 void main()
 {
  int a,b,c,d;
  printf("Enter the three values:");
  scanf("%d%d%d",&a,&b,&c);
  d=(a>b || a>c);
  printf("d=%d",d);
  d=(a>b && a>c);
  printf("d=%d",d);
 }