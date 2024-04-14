#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("%d hundreds, %d tens, %d units.",a/100,(a%100)/10,a%10);
}