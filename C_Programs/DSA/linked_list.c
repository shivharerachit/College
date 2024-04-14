#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node * creation(int n){
    struct node *head, *p, *current; 
    int input;
    current = (struct node * )malloc(sizeof(struct node));
    for(int i=0 ; i<n ; i++){
        printf("Enter the number to be entered:");
        scanf("%d",&input);
        current -> data = input;
        current -> next = NULL;
        if( i > 0 ){
            current -> next = p;
        }
        p = current;
        if(i == 0){
            head = current;
        }
    }
    return head;
}

void display(struct node *head){
    struct node *current,*p;
    int i = 1;
    current = head;
    while(current->next!=NULL){
        printf("%d %d\n",i,current->data);
        p = current;
        current = p -> next;
        i++;
    }
}


int main(){
    int n;
    struct node *head;
    printf("Enter the number of terms to be added in the linked list:");
    scanf("%d",&n);
    head = creation(n);
    display(head);
    return 0;
}
