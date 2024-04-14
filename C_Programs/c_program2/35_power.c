#include<stdio.h>
 void main()
{
 int i,b,p,ans=1;
 
 printf("Enter the base and power:");
 scanf("%d%d",&b,&p);
 for(i=1;i<=p;i++)
 {
   ans=ans*b;
 }
 printf("Answer=%d",ans);
}