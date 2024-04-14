#include<stdio.h>
 void main()
 {
  int purchase,dis,total;
  printf("Enter the purchase amount:");
  scanf("%d",&purchase);
  if(purchase>=5000)
  {
	dis=(purchase*10)/100;
  }
  total=purchase-dis;
  printf("Total amount=%d",total);
 }