#include<iostream>
using namespace std;
int gcd(int n,int m){
    int x=1, result=1;
    while(x<=n/2 && x<=m/2){
        if(n%x==0 && m%x==0){
            result=x;
        }
        x++;
    }
    return result;
}
int main(){
    int n,m,result;
    cout<<"Enter The Two Number To Find The GCD :";
    cin>>n>>m;
    result=gcd(n,m);
    cout<<"\nGCD of "<<n<<" and "<<m<<" is "<<result<<endl;
    return 0;
}