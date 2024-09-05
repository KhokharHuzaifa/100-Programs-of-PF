//Q75-Write a program that reads 5 integer value in array and finds their
//total and average?

#include<iostream>
using namespace std;
int main(){
int a[5],sum=0;
for(int i=0;i<=4;i++){
	cout<<"Enter number : ";
	cin>>a[i]; 
}
for(int j=0;j<=4;j++){
	sum=sum+a[j];
}
cout<<"Sum is : "<<sum<<endl;
float avg;
avg=sum/5;
cout<<"Avg is : "<<avg;
}
