//Q63-Write a program that find the sum of the square of the integer from
//1 to n, where n is a positive number input by user?

#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"Enter number : ";
	cin>>n;
	
for(int i=1;i<=n;i++){
	sum=sum+i*i;
}
cout<<"Sum of square is : "<<sum;
}
