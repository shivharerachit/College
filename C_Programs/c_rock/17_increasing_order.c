#include <stdio.h>
int main() {
    int x,y,z;
    printf("Ënter three numnber:");
    scanf("%d%d%d",&x,&y,&z);
    if(x<y && x<z){
        printf("%d ",x);
        if(y<z){
            printf("%d ",y);
            printf("%d ",z);
        }
        else{
            printf("%d ",z);
            printf("%d ",y);
        }
    }
    
    else if(y<x && y<z){
        printf("%d ",y);
        if(x<z){
            printf("%d ",x);
            printf("%d ",z);
        }
        else{
            printf("%d ",z);
            printf("%d ",x);
        }
    }
    
    else if(z<y && z<x){
        printf("%d ",z);
        if(y<x){
            printf("%d ",y);
            printf("%d ",x);
        }
        else{
            printf("%d ",x);
            printf("%d ",y);
        }
    }
    return 0;
}