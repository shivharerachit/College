#include<stdio.h>
 void main()
{
 int rollno,m1,m2,m3,m4,m5,total;
 float per;
 char name[20];
 printf("Enter the student name:");
 gets(name);
 printf("Enter the student roll no.:");
 scanf("%d",&rollno);
 printf("Enter the marks of five subjects:");
 scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
 total=m1+m2+m3+m4+m5;
 per=total/5.0;
 printf("Student Name:%s",name);
 printf("\nRoll no.:%d",rollno);
 printf("\nTotal Marks:%d",total);
 printf("\nPercentage:%f",per);
}

