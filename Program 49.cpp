//Q49-Write a program that input starting and ending number from user 
//and then display all even numbers in the given range?

#include<iostream>
using namespace std;
int main(){
int s,e;
cout<<"Enter Starting and then Ending Number :";
cin>>s>>e;
while(s<=e){
if(s%2==0){
	cout<<s<<endl;
}
s++;	
}
}
