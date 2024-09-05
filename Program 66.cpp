//Q66-Write a program that uses a while loop to enter a number from
//user and then display it. The loop is terminated when the user enters -1?

#include<iostream>
using namespace std;
int main(){
int n=1;
while(n!=-1){
	cout<<"Enter a number : "<<endl;
	cin>>n;
	cout<<"Number is : "<<n<<endl;
}
cout<<"Program Terminated ";
}
