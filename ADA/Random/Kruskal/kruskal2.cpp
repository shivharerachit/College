#include<bits/stdc++.h>
using namespace std;

int graph[99][3];//weight, source, destination

void inputAdj(int e){ //n is the number of edges
    for(int i=0 ; i<e ; i++){
        // cout<<"Enter weight:";
        cin>>graph[i][0];
        // cout<<"Enter source:";
        cin>>graph[i][1];
        // cout<<"Enter destination:";
        cin>>graph[i][2];
    }
}

void sort(int e){
    int weight = graph[0][0];
    for(int i=0 ; i<e ; i++){
        for(int j=0 ; j<e ; j++){
            if(graph[j][0]>graph[i][0]){
                //swap weight
                weight = graph[i][0];
                graph[i][0] = graph[j][0];
                graph[j][0] = weight;

                //swap source
                weight = graph[i][1];
                graph[i][1] = graph[j][1];
                graph[j][1] = weight;

                //swap destination
                weight = graph[i][2];
                graph[i][2] = graph[j][2];
                graph[j][2] = weight;
            }
        }
    }
}

void printAdj(int e){
    cout<<"Weight\tSource\tDestination"<<endl;
    for(int i=0 ; i<e ; i++){
        cout<<graph[i][0]<<"\t"<<graph[i][1]<<"\t"<<graph[i][2]<<"\n";
    }
}

int find(int parent[], int i){
    if(parent[i]!=i){
        parent[i] = find(parent, parent[i]);
    }
    return parent[i];
}

void unionSet(int parent[], int rank[], int x, int y){
    int xroot = find(parent, x);
    int yroot = find(parent, y);
    if(rank[xroot]<rank[yroot]){
        parent[xroot] = yroot;
    }else if(rank[xroot]>rank[yroot]){
        parent[yroot] = xroot;
    }else{
        parent[yroot] = xroot;
        rank[xroot]++;
    }
}

void shortestPath(int e, int v){
    int check[e][v];
    int i=0;
    int count = 0;
    while(count<v-1 && i<e){
        int x = graph[i][1];
        int y = graph[i][2];
        int xroot = find(check[x], x);
        int yroot = find(check[y], y);
        if(xroot!=yroot){
            check[x][y] = x;
            unionSet(check[x], check[y], x, y);
            count++;
        }
        i++;
    }
    cout<<"Minimum Spanning Tree: "<<endl;
    cout<<"Weight\tSource\tDestination"<<endl;
    for(int i=0 ; i<v-1 ; i++){
        cout<<graph[i][0]<<"\t"<<graph[i][1]<<"\t"<<graph[i][2]<<"\n";
    }

}

int main(){
    int e, v;
    // cout<<"Enter the number of edges: ";
    cin>>e;
    // cout<<"Enter the number of vertices: ";
    cin>>v;
    inputAdj(e);
    printAdj(e);
    sort(e);
    printAdj(e);
    shortestPath(e, v);
    return 0;
}