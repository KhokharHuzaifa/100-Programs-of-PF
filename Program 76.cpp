//Q76-Write a program that input 10 integers and print the biggest one?

#include<iostream>
using namespace std;
int main(){
int a[10];
for(int i=0;i<=9;i++){
	cout<<"Enter number : ";
	cin>>a[i]; 
}
int max;
max=a[0];
for(int k=1;k<10;k++){
	if(a[k]>max){
		max=a[k];
	}
}
cout<<"Biggest number is : "<<max;
}
