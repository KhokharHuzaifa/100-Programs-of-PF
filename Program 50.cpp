//Q50-Write a program that input a number and display a table of that 
//number?

#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter a number : ";
cin>>num;
for(int i=1;i<=10;i++){
	cout<<num<<" x "<<i<<" = "<<num*i<<endl;
}
}
