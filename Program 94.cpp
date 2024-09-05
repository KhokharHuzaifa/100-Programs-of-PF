//Q94-Write a program that input a number in global variable, it calls
//a function that multiplies the global variable by 2, the main display
//value of global variable?

#include<iostream>
using namespace std;

int num;

int multiply(int y){
	return y=y*2;
}

int main(){
	cout<<"Enter a number";
	cin>>num;
	cout<<"Result is : "<<multiply(num);
}


