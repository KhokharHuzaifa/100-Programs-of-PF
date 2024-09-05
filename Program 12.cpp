//Q12-Write a program that input base and height from the user and 
//calculates area of a triangle using formula: 1/2*base*height?

#include<iostream>
using namespace std;
int main(){
int h,b;
cout<<"Enter height :";
cin>>h;
cout<<endl;
cout<<"Enter base :";
cin>>b;
float area;
area=(b*h)/2;
cout<<"area of triangle is "<<area;
}
