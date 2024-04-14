#include <stdio.h>

int main()
{
    int a=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(a<=10)
    { 
        printf("%d x %d = %d\n",a,n,a*n);
        a++;
    }
    return 0;
}