//Calculator Template
#include<iostream>
using namespace std;

template<class T>
class calculator{
    private:
        T a,b;
    public:
    calculator(T ia,T ib){
        a=ia;
        b=ib;
        cout<<"Welcome to the Calculator \nThe two values entered are:\na="<<a<<"\nb="<<b<<endl;
    }
    T addition(){
        return a+b;
    }
    T substraction(){
        return a-b;
    }
    T multiplication(){
        return a*b;
    }
    T division(){
        return a/b;
    }

};

int main(){
    int a,b,n=0,choice;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    calculator<int> calc1(a,b);
    while(n==0){
        cout<<"Enter your operation to be performed\n1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n5. Exit\nEnter your choice:";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<calc1.addition()<<endl;
            break;
            case 2:
            cout<<calc1.substraction()<<endl;
            break;
            case 3:
            cout<<calc1.multiplication()<<endl;
            break;
            case 4:
            cout<<calc1.division()<<endl;
            break;
            case 5:
            n=1;
            cout<<"Exited Successfully"<<endl;
            break;
        }
    }
    return 0;
}