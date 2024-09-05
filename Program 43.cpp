//Q43-Write a program that input two numbers and one arithmetic operator,
//it applies operations on number on the basis of operator using switch?

#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	char opt;
	cout<<"Enter your operator : ";
	cin>>opt;
	switch(opt){
		case '+' :
			cout<<"Addition is : "<<a+b;
			break;
		case '-' :
			cout<<"Subtraction is : "<<a-b;
			break;
		case '*' :
			cout<<"Multiplication is : "<<a*b;
			break;
		case '/' :
			cout<<"Division is : "<<a/b;
			break;
		default:
			cout<<"Invalid input";
	}
}
