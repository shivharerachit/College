#include<iostream>
using namespace std;
class students{
	public:
		string name;
		int rollcall;
		int year;
		void get(){
			cout<<"Enter your name:";
			cin>>name;
			cout<<"Enter your roll no.:";
			cin>>rollcall;
			cout<<"Enter year:";
			cin>>year;
		}
		void display(){
			cout<<"Name:"<<name<<endl;
			cout<<"Roll no.:"<<rollcall<<endl;
			cout<<"Year:"<<year;
		}
};

int main(){
	students s;
	s.get();
	s.display();
	
	return 0;
}
