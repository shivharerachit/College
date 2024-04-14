#include <stdio.h>

int main()
{
    int a=1,n=1;
    for(n=1;n<=20;n++)
    {   
       for(a=1;a<=10;a++)
        { 
            printf("%d x %d = %d\n",a,n,a*n);
        }
        printf("\n");
    }
    return 0;
}