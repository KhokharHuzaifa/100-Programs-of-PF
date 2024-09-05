//Q98-Write a program that calls two functions, Draw_Horizontal() and
//Draw_Vertical() to construct a rectangle according to call?

#include<iostream>
using namespace std;

int Draw_Horizontal(){
	for(int i=1;i<=3;i++){
		for(int j=1;j<=10;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}

int Draw_Vertical(){
	for(int i=1;i<=10;i++){
		for(int j=1;j<=3;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}

int main(){
	Draw_Horizontal();
	cout<<endl;
	Draw_Vertical();
}
