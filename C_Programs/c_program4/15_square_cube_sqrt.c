#include<stdio.h>
 void main()
{
	 float a,i,j,k=0,n,sum=0,c;
	 printf("Enter a number:");
	 scanf("%f",&a);
	 for(i=1;i<=a;i++)
	 {
	     printf("Square of %0.0f is %0.0f.\n",i,i*i);
	     printf("Cube of %0.0f is %0.0f.\n",i,i*i*i);
	     
         for (j=1;j<=i;j=j+0.0001)
        	{
        		if (j*j==i)
        		{
        			break;				
        		}
        		c=j;
          		if (j*j>i)
        		{
        		 break;
        		}
        	}
        printf("Square root of %0.0f is %0.3f.\n\n",i,c);	
        
	 }
}