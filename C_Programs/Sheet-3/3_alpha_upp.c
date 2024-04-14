#include <stdio.h>

int main()
{
    char a='A';
    while(a>='A' && a<='Z')
    { 
        printf(" %c ",a);
        a++;
    }
    return 0;
}