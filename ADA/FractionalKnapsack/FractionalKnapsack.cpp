#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> input(int n){
    vector<vector<int>> add;
    for(int i=0; i<n; i++){
        vector<int> temp(3);
        // cout<<"Enter the object number: ";
        cin>>temp[0];
        // cout<<"Enter the weight: ";
        cin>>temp[1];
        // cout<<"Enter the profit: ";
        cin>>temp[2];
        add.push_back(temp);
    }
    return add;
}

void sort(vector<vector<int>>& add, int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if((float)add[i][2]/ add[i][1] < (float)add[j][2]/ add[j][1]){
                vector<int> temp = add[i];
                add[i] = add[j];
                add[j] = temp;
            }
        }
    }
}

float MaxProfit(vector<vector<int>>& add, int n, int W){
    float profit = 0;
    for(int i=0; i<n; i++){
        if(add[i][1] <= W){
            profit += add[i][2];
            W -= add[i][1];
        }
        else{
            profit += (float)add[i][2] * ((float)W/ add[i][1]);
            break;
        }
    }
    return profit;
}

int main(){
    int W;
    int n;
    // cout<<"Enter the number of objects: ";
    cin>>n;
    vector<vector<int>> add = input(n);
    // cout<<"Enter the maximum weight: ";
    cin>>W;
    sort(add, n);
    cout<<"The maximum profit is: "<<MaxProfit(add, n, W)<<"\n";
    return 0;
}