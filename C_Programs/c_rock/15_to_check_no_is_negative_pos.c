#include <stdio.h>

int main() {
    int x;
    printf("Ënter a numnber:");
    scanf("%d",&x);
    if(x>0){
        printf("%d is positive.",x);
    }
    else if(x<0){
        printf("%d is negative.",x);
    }
    else{
        printf("%d is zero.",x);
    }
    return 0;
}