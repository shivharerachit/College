#include<stdio.h>
void main()
{
 int i,j,a[8][8],b[8][8],r,c;
 printf("Enter the row and column size:");
 scanf("%d%d",&r,&c);
 printf("Enter the Matrix elements 'A'");
 for(i=0;i<r;i++)
 {
    for (j=0;j<c;j++)
    {
       scanf("%d",&a[i][j]);
    }
 }


 printf("\n Display the elements of matrix 'A'.\n");
 for(i=0;i<r;i++)
 {
    for (j=0;j<c;j++)
    {
       printf("%d\t",a[i][j]);
    }
 printf("\n");
 }


printf("Enter the Matrix elements 'B'");
 for(i=0;i<r;i++)
 {
    for (j=0;j<c;j++)
    {
       scanf("%d",&b[i][j]);
    }
 }


 printf("\n Display the elements of matrix 'B'.\n");
 for(i=0;i<r;i++)
 {
    for (j=0;j<c;j++)
    {
       printf("%d\t",b[i][j]);
    }
 printf("\n");
 }
printf("Sum of matrix :\n");
 for(i=0;i<r;i++)
 {
    for (j=0;j<c;j++)
    {
       printf("%d\t",a[i][j]+b[i][j]);
    }
 printf("\n");
 }


}
