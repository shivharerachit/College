#include <stdio.h>
#include <stdlib.h> 
struct node{ //Ek structure define kra h jiska naam node rakha h aur iske andarr
    int data; //do parts h ek int type ka data part aur ek struct node type ka next part
    struct node *next; //next part aagle node ka address store krega isiliye usko pointer declare kra h
};

int main(){ 
    int n; 
    struct node *head ,*currentnode, *previousnode; 
    printf("enter the  nummber of elements u want:"); 
    scanf("%d",&n); //n=10
    for(int i=0 ; i < n ; i++){
        currentnode = (struct node*)malloc(sizeof(struct node)); //address asign i=0 -> 001, i=1 -> 800, i=2 -> 450 ;
        scanf("%d",&currentnode->data); 
        if(i==0){
            head = currentnode; 
        }
        // if(i==(n-1)) 
        // { 
        //     currentnode->next=NULL; 
        // }
        // else if (i<(n-1)) 
        // { 
        //     previousnode=currentnode; 
             
        // } 
    }
} 

// if(i==0) : head = currentnode and currentnode -> NULL; 001 next->800
// if(i==1) : currentnode
// if(i==2) : currentnode
//head -> node1 -> node2 -> node3 -> node4 -> node5 -> NULL