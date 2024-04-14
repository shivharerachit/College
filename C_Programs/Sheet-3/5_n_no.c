#include <stdio.h>

int main()
{
    int a=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(a<=n)
    { 
        printf(" %d ",a);
        a++;
    }
    return 0;
}