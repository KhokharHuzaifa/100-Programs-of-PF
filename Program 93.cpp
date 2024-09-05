//Q93-Write a program that inputs a number pass it to a function, the
//function return it after increment it by 10, the increment number
//displayed in main?

#include<iostream>
using namespace std;

int Increment_byTen(int q){
	return q=q+10;
}
int main(){
	int n;
	cin>>n;
	cout<<"Icremented Number is : "<<Increment_byTen(n);
}
