//Q52-Write a program that input a number from user and display the 
//factorial of that number?

#include<iostream>
using namespace std;
int main(){
int num,f=1,c=1;
cin>>num;
do{
f=f*c;
c++;	
}
while(c<=num);
cout<<"Factorial is : "<<f;
}
