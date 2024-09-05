//Q24-Write a program that inputs three number and displays the maximum?

#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter three numbers : ";
	cin>>a>>b>>c;
	if(a>b && a>c){
		cout<<"A is maximum";	
	}
	if(b>a && b>c){
		cout<<"B is maximum";
	}
	if(c>a && c>b){
		cout<<"C is maximum";
	}
}
