//Q90-Write a program that input a number in main and passes the number
//to a function that display the table of that number?

#include<iostream>
using namespace std;

int print_table(int r){
	for(int i=1;i<=10;i++){
		cout<<r<<" x "<<i<<" = "<<r*i<<endl;
	}
}

int main(){
	int a;
	cout<<"Enter Number to see its table : ";
	cin>>a;
	print_table(a);
}
