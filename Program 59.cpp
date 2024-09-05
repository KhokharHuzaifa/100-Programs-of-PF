//Q59-Write a program that display first 10 numbers with their avg?

#include<iostream>
using namespace std;
int main(){
	int sum=0;
for(int i=1;i<=10;i++){
	sum=sum+i;
}
cout<<"Sum is : "<<sum<<endl;
float avg;
avg=sum/10;
cout<<"Average is : "<<avg; 
}
