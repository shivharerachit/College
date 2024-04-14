#include <stdio.h>
int main() {
    int x,y,z;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("Swapped vlaue of x=%d and y=%d",x,y);
    return 0;
}