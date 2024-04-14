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
    while(flag!=1){
        value=ptr->data;
        printf("%d. %d\n",i,value);
        if(ptr->next==NULL){
            flag=1;
        }
        ptr=ptr->next;
        i++;
    }
}


void modify(struct node *head){
    struct node *ptr ;
    int index, value;
    printf("Enter the value and the position at which the value is to be changed respectively:");
    scanf("%d%d",&value,&index);
    ptr=head;
    for(int i=0;(i<index-1);i++){
        ptr=ptr->next;
    }
    ptr->data=value;
}


struct node * insert(struct node *head){
    struct node *ptr, *new ;
    int index, value;
    printf("Enter the value and the position at which the value is to be changed respectively:");
    scanf("%d%d",&value,&index);
    new = (struct node *)malloc(sizeof(struct node));
    new->data=value;
    ptr=head;
    if(index==1){
        new->next=head;
        head = new;
        return head;
    }
    for(int i=0;(i<index-2);i++){
        ptr=ptr->next;
    }
    new->next=ptr->next;
    ptr->next=new;
    return head;
}


struct node * deletion_by_position(struct node *head, int pos){
    struct node *ptr, *pt;
    ptr = head;
    if(pos==1){
        ptr=head->next;
        head=ptr;
        return head;
    }
    for(int i=1;i<(pos-1);i++){
        ptr = ptr->next;
    }
    pt = ptr->next;
    pt = pt->next;
    ptr->next = pt;
    return head;
}


int * find(struct node *head){
    int value,i=1,index[20],j=1;
    struct node *ptr;
    printf("Enter the value to be searched:");
    scanf("%d",&value);
    ptr = head;
    while(ptr != NULL){
        if (ptr->data==value){
            printf("%d found at position %d.\n",value,i);
            index[j]=i;
            j++;
        }
        ptr = ptr->next;
        i++;
    }
    index[0]=j;
    return index;
}


struct node * deletion_by_value(struct node *head){
    int i,n,*index;
    index=find(head);
    n = index[0];
    for(i=1;i<n;i++){
        head = deletion_by_position(head,index[i]);
    }
    return head;
}


int main(){
    int t,choice,flag=0,pos;
    struct node *head;
    printf("Enter the  number of Elements :  ");
    scanf("%d",&t);
    head = create(t);
    while(flag==0){
        printf("**************Menu**************\n1. Read \n2. Modify \n3. Insert \n4. Delete by position \n5. Find value \n6. Delete by value \n7. Exit \nEnter your choice:");
        scanf("%d",&choice);
        switch (choice){
            case 1:
            read(head);
            break;
            case 2:
            modify(head);
            break;
            case 3:
            head=insert(head);
            break;
            case 4:
            printf("Enter the position of node which u want to delete:");
            scanf("%d",&pos);
            head = deletion_by_position(head,pos);
            break;
            case 5:
            find(head);
            break;
            case 6:
            head=deletion_by_value(head);
            break;
            case 7:
            printf("Exited Successfully");
            flag=1;
            break;
            default:
            printf("Please enter correct choice...\n");
            break;
        }
    }
    return 0;
}
