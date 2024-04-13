#include<iostream>
using namespace std;

template<class T>
void swap1(T a, T b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    cout<<"Values are swapped";
    // return a;
}

int main(){
    int a=1,b=2;
    float c=2.3,d=4.5;
    char e='a',f='z';
    cout<<"Values before swapping"<<endl<<"a ="<<a<<endl<<"b ="<<b<<endl;
    swap1(&a,&b);
    cout<<"Values after swapping"<<endl<<"a ="<<a<<endl<<"b ="<<b<<endl;

    cout<<"Values before swapping"<<endl<<"c ="<<c<<endl<<"d ="<<d<<endl;
    swap1(&c,&d);
    cout<<"Values after swapping"<<endl<<"c ="<<c<<endl<<"d ="<<d<<endl;

    cout<<"Values before swapping"<<endl<<"e ="<<e<<endl<<"f ="<<f<<endl;
    swap1(&e,&f);
    cout<<"Values after swapping"<<endl<<"e ="<<e<<endl<<"f ="<<f<<endl;
    return 0;
}