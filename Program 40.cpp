//Q40-Write a program that allow user to enter any character through 
//keyboard and determines whether it is a capital letter,small letter,
//digit, or special symbol?

#include<iostream>
using namespace std;
int main(){
	char letter;
	cout<<"Enter any character";
	cin>>letter;
	if(letter>'A' && letter<'Z'){
		cout<<"Capital letter";
	}
	else if(letter>'a' && letter<'z'){
		cout<<"Small letter";
	}
	else if(letter>'0' && letter<'9'){
		cout<<"Digit";
	}
	else{
		cout<<"Special Symbol";
	}
}
