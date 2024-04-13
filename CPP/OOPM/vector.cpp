#include<algorithm>
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int i,n,val;
    bool bol;
    vector<int> vect;
    cout<<"Enter the no. of elements to be entered in a vector:";
    cin>>n;
    while(n!=0){
        cout<<"Enter the value:";
        cin>>val;
        vect.push_back(val);
        n--;
    }
    for(vector<int>::iterator i = vect.begin() ; i <= vect.end() ; i++ ){
        for(vector<int>::iterator j = vect.begin() ; j <= vect.end() ; j++ ){
            if(*i==*j){
                bol=0;
                break;
            }
            else{
                bol=1;
            }
        }
    }
    if(bol==0){
        cout<<"True";
    }
    else{
        cout<<"True";
    }
    sort(vect,vect.begin());
    return 0;   
}