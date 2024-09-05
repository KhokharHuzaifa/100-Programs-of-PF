//Q67-Write a program that input a number from the user using for loop
//it display the number if it is greater than 0 otherwise it inputs next
//number using continue statement?

#include<iostream>
using namespace std;
int main(){
	int num;
for(int i=1;i<=5;i++){
	cout<<"Enter a number"<<endl;
	cin>>num;
	if(i<0){
		continue ;
	}
	cout<<"You typed : "<<num;
}
}
