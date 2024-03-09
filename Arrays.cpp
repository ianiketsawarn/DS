// write a c++ program to store temp of two cities for a week and display it by using array.

#include<iostream>
using namespace std;

class temp{
	public :
	float arr[3][7];
	string city[10];
	int i,j;
	void getdata(){
	for(i=0;i<3;i++){
		cout<<"Please Enter City name : ";
		cin>>city[i];
		for(j=1;j<8;j++){
			cout<<"Temperature today "<<j<<" : ";
			cin>>arr[i][j];
		}
	}
	}
	void display(){
		for(i=0;i<3;i++){
			cout<<"\nCity name : "<<city[i];
			for(j=1;j<8;j++){
				cout<<endl<<"Temperature today:  "<<j<<" : "<<arr[i][j];
			}
		}
	}

};

int main(){
	temp t;
	t.getdata();
	t.display();
}
