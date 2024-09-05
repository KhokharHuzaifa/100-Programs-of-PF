//Q65-Write a program that display the sum of positive odd numbers and the
//product of positive even number from 1 to 10?

#include<iostream>
using namespace std;
int main(){
	int sum=0,prod=1;
	for(int i=1;i<=10;i++){
		if(i%2==0){
			prod=prod*i;
		}
		else{
			sum = sum+i;	
		}
	}
	cout<<"Sum is : "<<sum<<endl;
	cout<<"Product is : "<<prod; 
}
