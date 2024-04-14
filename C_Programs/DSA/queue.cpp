#include<iostream>
using namespace std;


int main(){
    int queue[10],choice,top=0,n=0;
    while(n!=1){
        cout<<"\n********************************************************\n1. Push\n2. Pop\n3. Is Full or Is Empty\n4. Print queue\n5. Exit\nEnter  your choice:";
        cin>>choice;
        switch(choice){
            case 1:
            if(top<10){
                cout<<"Enter the element to be pushed:";
                cin>>queue[top];
                top++;
            }
            else{
                cout<<"Queue is full.\n";
            }

            break;
            case 2:
            if(top!=0){
                cout<<queue[0]<<" is popped.\n";
                for(int i=0;i<top;i++){
                    queue[i]=queue[i+1];
                }
                top--;
            }
            else{
                cout<<"Queue is empty.\n";
            }
            break;
            case 3:
            if(top==10){
                cout<<"Queue is full.\n";
            }
            else if(top==0){
                cout<<"Queue is empty.\n";
            }
            else{
                cout<<"Queue is having "<<top<<" elements.\n";
            }            
            break;
            case 4:
            if(top>0){
                cout<<"|________________|\n|";
                for(int i=0;i<top;i++){
                    cout<<queue[i];
                }
                cout<<("|\n|_______________|\n");
            }
            else{
                cout<<("Queue is empty.\n");
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