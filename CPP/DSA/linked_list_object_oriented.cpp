#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
};

class function{
    public:
    node * create(int n){
        int value;
        node *currentnode , *head, *p;
        for(int i=0;i<n;i++){
            currentnode = (node *)malloc(sizeof(node));
            cout<<"Enter the "<<i+1<<" element of the linked list:";
            cin>>value;
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
        cout<<"Yepiii Linked List Created Successfully!!!";
        return head;
    }

    void read(node *head){
        int value,i=1,flag=0;
        node *ptr;
        ptr=head;
        cout<<"Elements of Linked List are as follows:"<<endl;
        while(ptr!=NULL){
            value=ptr->data;
            cout<<i<<". "<<value<<endl;//"%d. %d\n"
            ptr=ptr->next;
            i++;
        }
    }

    void modify(node *head){
        node *ptr ;
        int index, value;
        cout<<"Enter the value and the position at which the value is to be changed respectively:";
        cin>>value>>index;
        ptr=head;
        for(int i=0;i<(index-1);i++){
            ptr=ptr->next;
        }
        ptr->data=value;
    }

    node * insert(node *head){
        node *ptr, *new1;
        int index, value;
        cout<<"Enter the value and the position at which the value is to be inserted respectively:";
        cin>>value>>index;
        new1 = (node *)malloc(sizeof(node));
        new1->data=value;
        ptr=head;
        if(index==1){
            new1->next=head;
            head = new1;
            return head;
        }
        for(int i=0;i<(index-2);i++){
            ptr=ptr->next;
        }
        new1->next=ptr->next;
        ptr->next=new1;
        return head;
    }

    node * deletion_by_position(node *head, int pos){
        node *ptr, *pt;
        int value;
        ptr = head;
        if(pos==1){
            value = ptr->data;
            ptr=head->next;
            head=ptr;
            cout<<"Element "<<value<<" at position "<<pos<<" is deleted."<<endl;
            return head;
        }
        for(int i=1;i<(pos-1);i++){
            ptr = ptr->next;
        }
        pt = ptr->next;
        value = pt->data;
        pt = pt->next;
        ptr->next = pt;
        cout<<"Element "<<value<<" at position "<<pos<<" is deleted."<<endl;
        return head;
    }

    int * find(node *head){
        int value,i=1,index[20],j=1;
        node *ptr;
        cout<<"Enter the value to be searched:";
        cin>>value;
        ptr = head;
        while(ptr != NULL){
            if (ptr->data==value){
                cout<<value<<" found at position "<<i<<"."<<endl;
                index[j]=i;
                j++;
            }
            ptr = ptr->next;
            i++;
        }
        index[0]=j;
        return index;
    }

    node * deletion_by_value(node *head){
        int i,n,*index;
        index=find(head);
        n = index[0];
        for(i=1;i<n;i++){
            head = deletion_by_position(head,index[i]);
        }
        return head;
    }
};



int main(){
    int t,choice,flag=0,pos;
    node *head;
    function fun;
    cout<<"Name: Rachit Shivhare\nEnrollment No.: 0827CS221213\n";
    cout<<"Enter the  number of Elements :  ";
    cin>>t;
    head = fun.create(t);
    while(flag==0){
        cout<<"\n**************Menu**************\n1. Read \n2. Modify \n3. Insert \n4. Delete by position \n5. Find value \n6. Delete by value \n7. Exit \nEnter your choice:";
        cin>>choice;
        switch (choice){
            case 1:
            fun.read(head);
            break;
            case 2:
            fun.modify(head);
            break;
            case 3:
            head=fun.insert(head);
            break;
            case 4:
            cout<<("Enter the position of node which u want to delete:");
            cin>>pos;
            head = fun.deletion_by_position(head,pos);
            break;
            case 5:
            fun.find(head);
            break;
            case 6:
            head=fun.deletion_by_value(head);
            break;
            case 7:
            cout<<("Exited Successfully\n");
            flag=1;
            break;
            default:
            cout<<("Please enter correct choice...\n");
            break;
        }
    }
    return 0;
}