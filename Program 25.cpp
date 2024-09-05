//Q25-Write a program that input a number and find whether it is even or 
//odd using if else?

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	if(num%2==0){
		cout<<"Number is even";
	}
	else{
		cout<<"Number is odd";
	}
}
