#include <stdio.h>

int main() 
{
    int i,n;
    
    i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(((2*i)-1)<=n)
    {
        printf("%d ",(2*i)-1);
        i++;
    }
    return 0;
}