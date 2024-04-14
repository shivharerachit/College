#include <stdio.h>

int main()
{
    int b,i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>=2)
    printf("%d\t",2);
    for(i=1;i<=n;i++)
    {
        b=0;
        for(j=2;j<i;j++)
        {
        if (i%j==0)
        {
            b=0;
            break;
        }
        else
            b=1;
        
        }
        
        if(b==1)
        printf("%d\t",i);
    }
    return 0;
}