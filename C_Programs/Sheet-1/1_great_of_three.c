#include<stdio.h>
 void main()
 {
 	int a,b,c;
 	printf("Enter three numbers:");
 	scanf("%d%d%d",&a,&b,&c);
 	
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is greatest of all.",a);
		}
	}
	else if(b>c)
	{
		printf("%d is greatest of all.",b);
	}
	else
	{
		printf("%d is gratest of all.",c);
	}
 }
