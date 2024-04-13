#include<iostream>
using namespace std;
class implement{
	public:
		int x, y;
		implement(int x1, int y1){
			x = x1;
			y = y1;
		}
		
		void getx(){
			cout<<"x:"<<x<<endl;
		}
		
		void gety(){
			cout<<"y:"<<y<<endl;
		}
};

int main(){
	int x,y;
	cin>>x>>y;
	implement s(x, y);
	s.getx();
	s.gety();
	return 0;
}
