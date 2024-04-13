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
    storing obj,*object = &obj;
    char abc[100];
    obj.put_data();
    obj.get_data();
    abc=(char)obj;
    cout<<"The address is:"<<abc;
    return 0;
}