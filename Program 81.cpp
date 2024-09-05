//Q81-Program that demonstrate cin.get() string function?

#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char arr[20];
	cout<<"Enter your name : "<<endl;
	cin.get(arr,20);
	cout<<"Your name is : "<<arr;
}
