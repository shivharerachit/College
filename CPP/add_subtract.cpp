#include<iostream>
using namespace std;
class add
{
    public:
    int a,b;
    void get()
    {
        cin>>a;
        cin>>b;
    }
    void plus()
    {
        cout << "Addition" << a+b << endl;
    }
    void substract()
    {
        cout << "Subtraction" << a-b << endl;
    }
};

int main()
{
    add p, *t;
    p.get();
    p.plus();
    p.substract();
    return 0;
}

