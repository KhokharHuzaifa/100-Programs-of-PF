//Q62-Write a program that input a table number and length of table and
//display the table?

#include<iostream>
using namespace std;
int main(){
int num,length;
cout<<"Enter a number : ";
cin>>num;
cout<<"Enter length of table : ";
cin>>length;
for(int i=1;i<=length;i++){
	cout<<num<<" x "<<i<<" = "<<num*i<<endl;
}
}
