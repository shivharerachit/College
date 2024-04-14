#include <stdio.h>
int main() {
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("Swapped vlaue of x=%d and y=%d",x,y);
    return 0;
}