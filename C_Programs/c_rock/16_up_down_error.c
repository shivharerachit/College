#include <stdio.h>

int main() {
    int x,y;
    printf("Ënter two numnber:");
    scanf("%d%d",&x,&y);
    if(x<y){
        printf("UP");
    }
    else if(x>y){
        printf("DOWN");
    }
    else{
        printf("ERROR");
    }
    return 0;
}