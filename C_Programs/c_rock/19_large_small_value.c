#include <stdio.h>
int main() {
    int x[5],small,large,i;
    printf("Enter five numbers: ");
    for(i=0;i<5;i++){
        scanf("%d",&x[i]);
    }
    small=x[0];
    large=x[0];
    for(i=0;i<5;i++){
        if(x[i]<small){
            small=x[i];
        }
        if(x[i]>large){
            large=x[i];
        }
    }
    printf("Small Value=%d\nLarge Value=%d",small,large);
    return 0;
}