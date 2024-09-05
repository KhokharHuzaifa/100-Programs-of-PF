//Q27-Write a program that input a number and display the sqrt of the 
//number if it is positive, otherwise display "invalid input"?

#include<iostream>
#include<math.h>
using namespace std;
int main(){
int num;
	cout<<"Enter a number : ";
	cin>>num;
	if(num>0){
		cout<<"Sqrt of "<<num <<" is "<<sqrt(num);
	}
	else{
		cout<<"Invalid input";
	}
}
