#include <stdio.h>

int main() {
    // Write C code here
    int i ,n;
    printf("enter the num:  ");
    scanf("%d",&n);
    float a=100;
    for(int i=1;i<=n;i++){
        printf("%f ",a);
        a=a/2;
    }

    return 0;
}