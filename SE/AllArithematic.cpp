#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
float divi(int a,int b){
    return (float)a/(float)b;
}
int main(){
    int a,b;
    cout<<"Enter Two Numbers : \n";
    cin>>a>>b;
    cout<<"\nSum : = "<<sum(a,b)<<"\nSubtraction : = "<<sub(a,b)<<"\nMultiplication : = "<<mul(a,b)<<"\nDivision : = "<<divi(a,b)<<endl;
    return 0;
}