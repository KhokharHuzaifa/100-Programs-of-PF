//Q47-Write a program that display first five numbers and their sum?

#include<iostream>
using namespace std;
int main(){
int sum=0;
for(int i=1;i<=5;i++){
	cout<<i<<endl;
	sum=sum+i;
}
cout<<"Result is : "<<sum;
}
