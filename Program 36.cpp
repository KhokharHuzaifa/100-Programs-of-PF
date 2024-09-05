//Q36-Write a program that input three number and displays the smalest
//using nested if?

#include<iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(a<b){
	if(a<c){
		cout<<a<<" a is smallest";
	}
	else{
		cout<<c<<" c is smallest";
	}	
}
else{
	if(b<c){
		if(b<a){
			cout<<b<<" b is smallest";
		}
		else{
			cout<<c<<" c is smallest";
		}
	}
}
}
