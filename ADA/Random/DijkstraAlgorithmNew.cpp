#include<bits/stdc++.h>
using namespace std;

int adj[100][100],n;

void inputadjMatrix(){
    cout<<"Enter the number of vertices: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the weight of edge between "<<i<<" and "<<j<<": ";
            cin>>adj[i][j];
        }
    }
}



int main(){

}