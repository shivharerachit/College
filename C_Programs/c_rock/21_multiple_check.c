#include <stdio.h>

int main() {
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    if(y%x==0){
        printf("%d is multiple of %d.",x,y);
    }
    else{
        printf("%d is not a multiple of %d.",x,y);
    }
    return 0;
}