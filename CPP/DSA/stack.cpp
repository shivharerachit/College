#include<iostream>
using namespace std;

int main(){
    int stack[10],choice,top=0,n=0;
    while(n!=1){
        cout<<"\n********************************************************\n1. Push\n2. Pop\n3. Is Full or Is Empty\n4. Print Stack\n5. Exit\nEnter  your choice:";
        cin>>choice;
        switch(choice){
            case 1:
            if(top<10){
                cout<<"Enter the element to be pushed:";
                cin>>stack[top];
                top++;
            }
            else{
                cout<<"Stack is full.\n";
            }

            break;
            case 2:
            if(top!=0){
                cout<<stack[top]<<" is popped.\n";
                stack[top]=0;
                top--;
            }
            else{
                cout<<"Stack is empty.\n";
            }
            break;
            case 3:
            if(top==10){
                cout<<"Stack is full.\n";
            }
            else if(top==0){
                cout<<"Stack is empty.\n";
            }
            else{
                cout<<"Stack is having "<<top<<" elements.\n";
            }            
            break;
            case 4:
            if(top>0){
                for(int i=top-1;i>=0;i--){
                    cout<<"| "<<stack[i]<<" |\n";
                }
                cout<<("|___|\n");
            }
            else{
                cout<<("Stack is empty.\n");
            }
            break;
            case 5:
            cout<<("Thank YOU!!!");
            n=1;
            goto go;
            break;
        }
    }
    go:
    return 0;
}