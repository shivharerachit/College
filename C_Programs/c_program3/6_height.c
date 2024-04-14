/* Write a C program to accept the height of a person in centimetre and categorize the person 
according to their height. */
#include<stdio.h>
 void main()
{
 int a;
 printf("Enter height of the person(in cm):");
 scanf("%d",&a);
 if (a<150)
 {
 printf("The person is dwarf.");
 }
 else if (a>=150 && a<165)
 {
 printf("The person is average heighted.");
 }
 else
 {
 printf("The person is tall.");
 }
}
