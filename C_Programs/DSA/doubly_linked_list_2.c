#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

struct node * create(int n){
    struct node *currentnode,*head,*p;
    int value;
    for(int i=0;i<n;i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&value);
        currentnode=(struct node *)malloc(sizeof(struct node));
        currentnode->data=value;
        currentnode->next=NULL;
        if(i==0){
            head=currentnode;
            currentnode->prev=NULL;
        }
        if(i!=0){
            p->next=currentnode;
            currentnode->prev=p;
        }
        p=currentnode;
    }
    return head;
}

int main(){
    struct node *head ,*ptr;
    int n,i=1;
    printf("Enter the number of elements u want to enter in liked list: ");
    scanf("%d",&n);
    head = create(n);
    ptr=head;
    while(ptr!=NULL){
        printf("The %d element of linked list is: %d\n",i,ptr->data);
        ptr=ptr->next;
        i++;
    }
           
    return 0;
}