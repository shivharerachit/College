#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class saving_account{
	private:
		string name;
		string id;
		int balance;
	public:
		void setter(){
			cout<<"Enter your name:";
			cin>>name;
			cout<<"Enter your ID:";
			cin>>id;
			cout<<"Enter balance:";
			cin>>balance;
		}
		void getter(){
			cout<<endl<<"Name:"<<name<<endl;
			cout<<"ID:"<<id<<endl;
			cout<<"Balance:"<<balance;
		}
		void debit(int amount){
			if(amount<balance){
				balance = balance - amount;
				cout<<"Updated Balance:"<<balance;
			}
					
			else{
				cout<<endl<<"*******Insufficient Balance*******"<<endl;
			}
		}
		void credit(int amount){
			balance = balance + amount;
			cout<<"Updated Balance:"<<balance;
		}
};

int main(){
	saving_account s;
	int amount;
	int a;
	s.setter();
	goto go;
	go:
	cout<<" _________________________________________"<<endl;
	cout<<"|               ***Menu Bar***            |"<<endl;
	cout<<"|Enter 1 for inquiry                      |"<<endl;
	cout<<"|Enter 2 for cash deposit                 |"<<endl;
	cout<<"|Enter 3 for cash withdrawl               |"<<endl;
	cout<<"|Enter 4 to exit                          |"<<endl;
	cout<<"|_________________________________________|"<<endl;
	cin>>a;

	if(a==1){
		s.getter();
		cout<<endl;
		goto go;
	}
	
	else if(a==2){
		cout<<endl<<"Enter amount to deposit:"<<endl;
		cin>>amount;
		s.credit(amount);
		goto go;
	}
	
	else if(a==3){
		cout<<endl<<"Enter amount to be withdrawn:"<<endl;
		cin>>amount;
		s.debit(amount);
		goto go;
	}
	
	else if(a==4){
		cout<<"Thank you"<<endl;
	}
	
	return 0;
}
