//Q89-Write a program that input two numbers in main and pass these numbers
//to a function the function display the maximum number?

#include<iostream>
using namespace std;

int maximum(int x, int y){
	if(x>y){
		cout<<x<<" is largest";
	}
	else{
		cout<<y<<" is largest";
	}
}

int main(){
	int a,b;
	cout<<"Enter Numbers : ";
	cin>>a>>b;
	maximum(a,b);
}
