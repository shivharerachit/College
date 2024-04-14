#include<stdio.h>


//1-D Array
/*int main(){
    int arr[10],x,i;
    printf("Enter the number of elements to be added in the array:");
    scanf("%d",&x);
    printf("Enter the elements of array:");
    for(i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<x;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}*/


//2-D Array
/*int main(){
    int arr[10][10],x,y,i,j;
    printf("Enter the number of elements to be added in the array:");
    scanf("%d %d",&x,&y);
    printf("Enter the elements of array:");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d\t",arr[i][j]);
        }
    }
    return 0;
}*/


//3-D Array
/**/int main(){
    int arr[10][10][10],x,y,z,i,j,k;
    printf("Enter the number of elements to be added in the array:");
    scanf("%d %d %d",&x,&y,&z);
    printf("Enter the elements of array:");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            for(k=0;k<z;k++){
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            for(k=0;k<z;k++){
                printf("%d\t",arr[i][j][k]);
            }
        }
    }
    return 0;
}

