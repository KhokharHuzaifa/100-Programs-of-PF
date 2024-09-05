//Q91-Write a program that input 2 numbers and send to a function,
//the function returns the maximum number back to the main and displayed?

#include<iostream>
using namespace std;

int find_Max(int m,int n){
	if(m>n){
		return m;
	}
	else{
		return n;
	}
}

int main(){
	int a,b;
	cout<<"Enter Numbers : ";
	cin>>a>>b;
	cout<<"Largest number is : "<<find_Max(a,b);
}
