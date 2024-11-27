#include<bits/stdc++.h>

using namespace std;
//no of vertices
int n=0;

//Main function
int main(){
    cin>>n;
    int graph[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>graph[i][j];
        }
    }
    //source vertex
    int src;
    cin>>src;

    //dist array to store the shortest distance from source to i
    int dist[n];
    //sptSet array to store the vertices which are already included in the shortest path tree
    bool sptSet[n];

    //initializing dist array and sptSet array
    for(int i=0;i<n;i++){
        dist[i]=INT_MAX;
        sptSet[i]=false;
    }

    //distance of source vertex from itself is always 0
    dist[src]=0;

    //finding the shortest path for all vertices
    for(int count=0;count<n-1;count++){
        int u=-1;
        int min=INT_MAX;
        //finding the vertex with minimum distance
        for(int i=0;i<n;i++){
            if(sptSet[i]==false && dist[i]<=min){
                min=dist[i];
                u=i;
            }
        }
        //marking the vertex as included in the shortest path tree
        sptSet[u]=true;
        //updating the distance of the adjacent vertices of the selected vertex
        for(int v=0;v<n;v++){
            //updating the distance of the vertex if it is not included in the shortest path tree and there is an edge between u and v and the distance of u is not infinite and the distance of u+edge(u,v) is less than the distance of v
            if(!sptSet[v] && graph[u][v] && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v]){
                dist[v]=dist[u]+graph[u][v];
            }
        }
    }
    //printing the distance of all vertices from the source vertex
    cout << "Vertex \t Distance from Source" << endl;
    for(int i=0;i<n;i++){
        cout << i << " \t\t\t\t" << dist[i] << endl;
    }

    return 0;
}