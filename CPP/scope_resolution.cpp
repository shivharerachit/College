#include<iostream>
using namespace std;

class odev{
    public:
        int a;
        void get();
        void check();
        
};
void odev :: get()
{
    cin>>a;
}


void odev :: check()
{
    (a%2==0 ? cout<< "Number is even" : cout<<"Number is odd");
    // if(a%2==0)
    // {
    //     cout<<"Number is even";
    // }
    // else
    // {
    //     cout<<"Number is odd";
    // }
}

int main() {
    odev p;
    p.get();
    p.check();
    return 0;
}