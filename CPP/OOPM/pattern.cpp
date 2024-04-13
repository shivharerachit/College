#include <iostream>
using namespace std;

int main() {
    int n,i,j;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n || i==j || j==(n-i+1) || (i+j)==6 || (i-j)==4 || (i+j)==14 || (j-i)==4){
                cout<<"*"; 
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}