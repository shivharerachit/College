#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter two numbers:");
    scanf("%f%f",&a,&b);
    c=(a/b)*100;
    printf("%0.0f is %0.2f %% of %0.0f",a,c,b);
    return 0;
}