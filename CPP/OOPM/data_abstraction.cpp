//Difference between encapsulation and data abstraction:
//1. Encapsulation is the process of binding the data members and member functions into a single unit.
//2. Data abstraction is the process of hiding certain details and showing only essential information to the user.
//3. Encapsulation can be achieved by using access specifiers.
//4. Data abstraction can be achieved by using access specifiers and header files.
//5. Encapsulation is used to implement the concept of data hiding.
//6. Data abstraction is used to implement the concept of data hiding and data encapsulation.   


//Rules for data abstraction in C++
//1. Data abstraction is the process of hiding certain details and showing only essential information to the user.
//2. Abstraction can be achieved by two ways:
//   a. Abstraction in classes
//   b. Abstraction in header files
//3. Abstraction in classes can be achieved by declaring the data members as private and member functions as public.
//4. Abstraction in header files can be achieved by using the concept of header files.

#include<iostream>
using namespace std;
class data1{
    private:
        int a,b;
    public: 
        void getvalue(){
            cout<<"Enter two values:"<<endl;
            cin>>a>>b;
        }
        void display(){
            cout<<"The values are -> "<<a<<" and "<<b<<endl;
        }
};

int main(){
    data1 d1;
    d1.getvalue();
    d1.display();
    return 0;

}