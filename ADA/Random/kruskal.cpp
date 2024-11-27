#include<iostream>
using namespace std;

int  weight[99], source[99], destination[99];
int visited[99];
int n, size=0;
int total=0;

void sort(){   
    int i,j;
	for(i=n-2;i>=0;i--){
		for(j=0;j<=n-2;j++){
			if(weight[j]>weight[j+1]){
			  	int t, s, d;
			  	
			  	t=weight[j];
			  	s=source[j];
			  	d=destination[j];
			  	
			  	weight[j]=weight[j+1];
			  	source[j]=source[j+1];
			  	destination[j]=destination[j+1];
			  	
			  	weight[j+1]=t;
			  	source[j+1]=s;
			  	destination[j+1]=d;
			}
		}
	}
}

void create(){
	
	
	cout<<"Enter the number of edges:";
	cin>>n;
	
	for(int i=0 ; i<n ; i++){
		cout<<"Enter the source:";
		cin>>source[i];
		cout<<"Enter the destination:";
		cin>>destination[i];
		cout<<"Enter the weight:";
		cin>>weight[i];
	}
	sort();
	
}

void display(){
	cout<<"Source\tDestination\tWeight"<<endl;
	for(int i=0 ; i<n ; i++){
		cout<<source[i]<<"\t"<<destination[i]<<"\t\t"<<weight[i]<<endl;
	}
}

void minpath(){
	bool src=false, des=false;
	visited[0]=source[0];
	size++;
	visited[1]=destination[0];
	size++;
	total+=weight[0];
	
	for(int i=1;i<n;i++){
		src=false;
		des=false;
		for(int j=0;j<size;j++){
			if(source[i]==visited[j]){
				src = true;
			}
			if(destination[i]==visited[j]){
				des=true;			
			}
		}
		if(src==true && des==true){
			if(){
				
			}
		}
		else if(src==true && des==false){
			visited[size]=destination[i];
			size++;
			total+=weight[i];x
		}
		else if(src==false && des==true){
			visited[size]=source[i];
			size++;
			total+=weight[i];
		}
		else if(src==false && des==false){
			visited[size]=source[i];
			size++;
			visited[size]=destination[i];
			size++;
			total+=weight[i];
		}
	}
	cout<<"Total Weight ="<<total;
	for(int k=0;k<size;k++){
		cout<<visited[k]<<endl;
	}
}


int main(){
	create();
	display();
	minpath();
	return 0;
}
