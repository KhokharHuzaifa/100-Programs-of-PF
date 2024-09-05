//Q4-Increment Decrement program?
#include<iostream>
using namespace std;
int main(){
	int a = 5;
	// pre increment
	cout<<"Before increment"<<a<<endl;
	cout<<"Increment is "<<++a<<endl;
	cout<<"After increment"<<a<<endl;
	// post increment
	cout<<"Before increment"<<a<<endl;
	cout<<"Increment is "<<a++<<endl;
	cout<<"After increment"<<a<<endl;
	// pre decrement
	cout<<"Before deccrement"<<a<<endl;
	cout<<"Decrement is "<<--a<<endl;
	cout<<"After deccrement"<<a<<endl;
	// post decrement
	cout<<"Before deccrement"<<a<<endl; // 6
	cout<<"Decrement is "<<a--<<endl; // 6
	cout<<"After deccrement"<<a<<endl; // 5
}
