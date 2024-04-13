#include<iostream>
using namespace std;
class storing{
    int a;
    public:
    void put_data(){
        cout<<"Enter the number to be stored:";
        cin>>a;
    }
    void get_data(){
        cout<<"The number is:"<<a<<endl;
    }
};

int main(){
    storing *address;
    int add;
    cout<<"Enter the address:";
    cin>>add;
    address->get_data;
    return 0;
}