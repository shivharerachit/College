//Rules for encapsulation in C++
//1. All the data members of a class should be declared as private.
//2. All the member functions of a class should be declared as public.
//3. The private data members of a class can be accessed only through the public member functions of the class.
//4. The public member functions of a class should be used to access the private data members of the class.

#include<iostream>
using namespace std;
class calci{
    private:
        int a,b; //Data members are private 
    public:
        void getvalue(){ //member functions are public
            cout<<"Enter two values:"<<endl;
            cin>>a>>b;
        }
        void sum(){
            cout<<"Sum is -> "<<a+b<<endl;
        }
        void subtract(){
            cout<<"Difference is -> "<<a-b<<endl;
        }
        void multiply(){
            cout<<"Product is -> "<<a*b<<endl;
        }
        void divide(){
            cout<<"Division is -> "<<a/b<<endl;
        }
};

int main(){
    calci a1;
    a1.getvalue();
    a1.sum();
    a1.subtract();
    a1.multiply();
    a1.divide();
    return 0;
}