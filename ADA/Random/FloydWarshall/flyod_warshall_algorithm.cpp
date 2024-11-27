// FLOYD WARSHALL ALGORITHM
// OUTPUT REQUIRED :
// SHORTEST PATH MATRIX FOR ALL THE NODE
// TRANSITIVE CLOSURE MATRIX OF A GRAPH
// PATH MATRIX OF A GRAPH
// NOTE: ALL THE MATRIX SHOULD BE IN THE FORM OF 0 AND 1
// 0 REPRESENTS NO PATH
// 1 REPRESENTS PATH

#include <bits/stdc++.h>
using namespace std;
#define INF 99999

int adj[100][100],n;
int path[100][100][100];
// Path
// 


void inputadjMatrix(){
    // cout<<"Enter the number of vertices: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // cout<<"Enter the weight of edge between "<<i<<" and "<<j<<": ";
            cin>>adj[i][j];
        }
    }
}

void floydWarshall(){
    int dist[n][n],i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            dist[i][j]=adj[i][j];
        }
    }
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(dist[i][k] == INF || dist[k][j] == INF) continue; 
                if(dist[i][k]+dist[k][j]<dist[i][j]) dist[i][j]=dist[i][k]+dist[k][j];
            }
        }
    }
    cout<<"Shortest Path Matrix:  "<<endl;
    cout<<"    1   2   3   4"<<endl;
    for(i=0;i<n;i++){
        cout<<i+1<<"   ";
        for(j=0;j<n;j++){
            if(dist[i][j]==INF){
                cout<<"INF ";
            }
            else{
                cout<<dist[i][j]<<"   ";
            }
        }
        cout<<endl;
    }
}

void printMatrix(){
    cout<<"Original Matirx:  "<<endl;
    cout<<"    1   2   3   4"<<endl;
    for(int i=0;i<n;i++){
        cout<<i+1<<"   ";
        for(int j=0;j<n;j++){
            if(adj[i][j]==INF){
                cout<<"INF ";
            }
            else{
                cout<<adj[i][j]<<"   ";
            }
        }
        cout<<endl;
    }
}

int main() {
    inputadjMatrix();
    printMatrix();
    floydWarshall();
    return 0;
}

// INPUT:
// 4
// 0 5 INF 10
// INF 0 3 INF
// INF INF 0 1
// INF INF INF 0

// OUTPUT:
// Original Matirx:
//     1   2   3   4
// 1   0   5   INF 10
// 2   INF 0   3   INF
// 3   INF INF 0   1
// 4   INF INF INF 0

// Shortest Path Matrix:
//     1   2   3   4
// 1   0   5   8   9
// 2   INF 0   3   4
// 3   INF INF 0   1
// 4   INF INF INF 0
