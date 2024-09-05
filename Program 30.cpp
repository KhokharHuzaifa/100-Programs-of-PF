//Q30-Write a program that input a number and find whether it is positive,
//negative or zero?

#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	if(num>0){
		cout<<"Pos";
		
	}
	else if(num<0){
	 cout<<"neg";
	}	
	else{
		cout<<"Zero";
	}
}
