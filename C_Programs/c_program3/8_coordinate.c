/* Write a C program to accept a coordinate point in a XY coordinate system and determine in which 
quadrant the coordinate point lies. */
#include<stdio.h>
 void main()
{
 int x,y;
 printf("Enter the x coordinate:");
 scanf("%d",&x);
 printf("Enter the y coordinate:");
 scanf("%d",&y);
 if (x>=0 && y>=0)
 {
 printf("The coordinate is in first quadrant.");
 }
 else if (x>=0 && y<0)
 {
 printf("The coordinate is in second quadrant.");
 }
 else if (x<0 && y<0)
 {
 printf("The coordinate is in third quadrant.");
 }
 else
 {
 printf("The coordinate is in fourth quadrant.");
 }
}
