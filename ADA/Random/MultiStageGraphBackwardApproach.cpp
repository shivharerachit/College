#include<bits/stdc++.h>
using namespace std;

int graph[99][99];

void inputAdj(int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>graph[i][j];
        }
    }
}
