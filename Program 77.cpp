//Q77-Write a program that reads marks of n students and print
//the number of students passed. The marks are in the range of 0 to 100
//and passing marks are 33?

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter total number of students Max 20 : ";
cin>>n;
int arr[20];
for(int i=0;i<n;i++){
	cout<<"Enter student marks : ";
	cin>>arr[i];
}
int pass=0;
for(int j=0;j<n;j++){
	if(arr[j]>33){
		pass=pass+1;
	}
}
cout<<"Total studnets passed are : "<<pass;
}
