//Q61-Write a program that display product of all odd numbers from 1 to 10?

#include<iostream>
using namespace std;
int main(){
	int prod=1;
for(int huzaifa=1;huzaifa<=10;huzaifa+=2){
	cout<<huzaifa<<" "<<endl;
	prod=prod*huzaifa;
}
cout<<"Product is : "<<prod;
}
