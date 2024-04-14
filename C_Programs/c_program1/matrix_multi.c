#include<stdio.h>
void main()
{
 int i,j,a[8][8],b[8][8],r,c,r1,c1;
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

printf("Enter the row and column size of matrix 'B':");
 scanf("%d%d",&r1,&c1);
 printf("Enter the Matrix elements 'B'");
 for(i=0;i<r1;i++)
 {
    for (j=0;j<c1;j++)
    {
       scanf("%d",&b[i][j]);
    }
 }


 printf("\n Display the elements of matrix 'B'.\n");
 for(i=0;i<r1;i++)
 {
    for (j=0;j<c1;j++)
    {
       printf("%d\t",b[i][j]);
    }
 printf("\n");
 }


 if (c==r1)
 {
	for(i=0;i<r;i++)
 {
    for (j=0;j<c;j++)
    {
       printf("%d\t",a[i][j]*b[j][i]);
    }
 printf("\n"); 
 }


 else
 {
	 printf("Matrix can not be multiplied.");
 }

}
