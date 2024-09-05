//Q28-Write a program that input a year and finds whether its a leap year
//or not?

#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"Enter year : ";
	cin>>year;
	if(year%4==0){
		cout<<year<<" is a leap year";
	}
	else{
		cout<<year<<" is not a leap year";
	}
}
