#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> input(int n){
    vector<vector<int>> add;
    for(int i=0; i<n; i++){
        vector<int> temp(3);
        cout<<"Enter the job number: ";
        cin>>temp[0];
        cout<<"Enter the profit: ";
        cin>>temp[1];
        cout<<"Enter the deadline: ";
        cin>>temp[2];
        add.push_back(temp);
    }
    return add;
}

int sort(vector<vector<int>>& add, int n){
    int deadline = 0;
    bool flag = true;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(add[j][2]>deadline && flag){
                deadline = add[j][2];
            }
            if(add[i][1] < add[j][1]){
                vector<int> temp = add[i];
                add[i] = add[j];
                add[j] = temp;
            }
        }
        flag = false;
    }
    return deadline;
}

float MaxProfit(vector<vector<int>>& add, int n, int md){
    int seq[md+1];
    for(int i=1; i<md+1; i++){
        seq[i] = -1;
    }
    int profit = 0;
    for(int i=0; i<n; i++){
        int deadline = add[i][2];
        label:
        if(seq[deadline]!=-1 && deadline>0){
            deadline--;
            goto label;
        }
        else if(seq[deadline] == -1 && deadline>0){
            seq[deadline] = add[i][0];
            profit += add[i][1];
        }
    }
    cout<<"\nThe sequence of jobs is: ";
    for(int i=1; i<md+1; i++){
        if(seq[i]!=-1){
            cout<<seq[i]<<" ";
        }
    }
    return profit;
}

int main(){
    int n;
    cout<<"Enter the number of jobs: ";
    cin>>n;
    vector<vector<int>> add = input(n);
    int md = sort(add, n);
    int profit = MaxProfit(add, n, md);
    cout<<"\nThe maximum profit is: "<<profit<<"\n";
    return 0;
}
