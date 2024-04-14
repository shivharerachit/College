#include<stdio.h>
int main(){
    int stack[10],choice,top=0,n=0;
    while(n!=1){
        printf("\t\t1. Push\n\t\t2. Pop\n\t\t3. Is Full or Is Empty\n\t\t4. Print Stack\n\t\t5. Exit\n\t\tEnter  your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            if(top<10){
                printf("\t\tEnter the element to be pushed:");
                scanf("%d",&stack[top]);
                top++;
            }
            else{
                printf("\t\tStack is full.\t\t\n");
            }

            break;
            case 2:
            if(top!=0){
                printf("\t\t%d is popped.\t\t\n",stack[top]);
                stack[top]=0;
                top--;
            }
            else{
                printf("\t\tStack is empty.\t\t\n");
            }
            break;
            case 3:
            if(top==10){
                printf("\t\tStack is full.\t\t\n");
            }
            else if(top==0){
                printf("\t\tStack is empty.\t\t\n");
            }
            else{
                printf("\t\tStack is having %d elements.\t\t\n",top);
            }            
            break;
            case 4:
            if(top>0){
                for(int i=top-1;i>=0;i--){
                    printf("\t\t| %d |\t\t\n",stack[i]);
                }
                printf("\t\t|___|\t\t\n");
            }
            else{
                printf("\t\tStack is empty.\t\t\n");
            }
            break;
            case 5:
            printf("\t\tThank YOU!!!\t\t");
            n=1;
            goto go;
            break;
        }
    }
    go:
    return 0;
}