//Q13-Write a program that gets temprature from user in celcius and converts
//it into fahrenheit using formula: 9/2*C+32?

#include<iostream>
using namespace std;
int main(){
cout<<"Enter Temprature in celcius";
int temp;
cin>>temp;
float far;
far=9*temp+32/2;
cout<<"Temprature in Fahrenheit is "<<far;
}
