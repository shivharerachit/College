#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
};


struct node * create(int n){
    int value;
    struct node *currentnode , *head, *p;
    for(int i=0;i<n;i++){
        currentnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the %d element of the linked list:",i+1);
        scanf("%d",&value);
        currentnode->data = value;
        currentnode->next=NULL;
        if(i==0){
            head=currentnode;
        }
        if(i!=0){
            p->next=currentnode;
        }
        p=currentnode;
    }
    printf("Yepiii Linked List Created Successfully!!!");
    return head;
}


void read( struct node *head){
    int value,i=1,flag=0;
    struct node *ptr;
    ptr=head;
    printf("Elements of Linked List are as follows:\n");
    while(ptr!=NULL){
        value=ptr->data;
        printf("%d. %d\n",i,value);
        ptr=ptr->next;
        i++;
    }
}


void modify(struct node *head){
    struct node *ptr ;
    int value;
    ptr=head;
    while(ptr!=NULL){
        value=ptr->data;
        ptr->data=value*10;
        ptr=ptr->next;
    }
    
}

int main(){
    int t,choice,flag=0,pos;
    struct node *head;
    printf("Enter the  number of Elements :  ");
    scanf("%d",&t);
    head = create(t);
    read(head);
    modify(head);
    read(head);

    return 0;
}