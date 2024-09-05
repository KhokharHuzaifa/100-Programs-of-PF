//Q17-Write a program that input radius of sphere from user and display
//its area and volume on screen, using formula: A=4piR^2 V=4/3piR^3?

#include<iostream>
using namespace std;
int main(){
int radius;
cout<<"Enter radius of sphere :";
cin>>radius;
cout<<endl<<"Area of circle is : "<<4*3.14*radius*radius<<endl;
cout<<"Volume of circle is : "<<3*3.14*radius*radius*radius;
}
