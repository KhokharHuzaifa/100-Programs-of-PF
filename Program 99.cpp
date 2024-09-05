//Q99-Write a program that input two integers and then prompts the user
//to enter the choice, it the choice is 1 then numbers are added,
//for choice 2 its subtract, for choice 3 it perform multiplication and
//for choice 4 it show division, Write 4 functions Add(),Sub(),Mul(),Div()
//to complete this task?

#include<iostream>
using namespace std;

int Add(int a, int b){
	cout<<"Addition is : "<<a+b;
}

int Sub(int a, int b){
	cout<<"Subtraction is : "<<a-b;
}

int Mul(int a, int b){
	cout<<"Multiplication is : "<<a*b;
}

int Div(int a, int b){
	cout<<"Divsion is : "<<a/b;
}

int main(){
	int a,b,choice;
	cout<<"Enter two numbers  : ";
	cin>>a>>b;
	cout<<"Enter your choice : "<<endl<<"1 for Addition"<<endl<<"2 for Subtraction"<<endl<<"3 for Multiplication"<<endl<<"4 for division"<<endl;
	cin>>choice;
	
	switch(choice){
		case 1:
			Add(a,b);
			break;
		case 2:
			Sub(a,b);
			break;
		case 3:
			Mul(a,b);
			break;
		case 4:
			Div(a,b);
			break;
	}
}
