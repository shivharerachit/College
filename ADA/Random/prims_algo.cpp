#include <iostream>
using namespace std;

int arr[20][20];
int visited[20];
int table[20][3];

void create(){
    int n;
    cout<<"Enter the number of nodes:";
    cin>>n;
    arr[0][0]=n;
    cout<<"Note: Enter the value of self loop and no link 100.\n";
    for(int i=1;i<=arr[0][0];i++){
        cout<<"Enter the elements of the "<<i-1<<" row:";
        for(int j=1;j<=arr[0][0];j++){
            cin>>arr[i][j];
            visited[j] = 0;
        }
    }
}

void display(){
    for(int i=1;i<=arr[0][0];i++){
        for(int j=1;j<=arr[0][0];j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void findpath(){
    int x;
    int y;
    int flag=0;
    for(int i=1;i<=arr[0][0];i++){
        flag=arr[i][1];
        again:
        for(int j=1;j<=arr[0][0];j++){   
            if(arr[i][j]<flag){
                flag = arr[i][j];
                y=j;
            }
            if(visited[y] == 1){
                
            }
        }
        if(visited[y] == 0){
            visited[y]=1;
        }
        else{
            goto again;
        }
        cout<<endl;
    }
}

int main() {
    create();
    display();
    return 0;
}