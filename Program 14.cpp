//Q14-Write a program that inputs 4 numbers and calculates the sum, avg,
//product of all the numbers?

#include<iostream>
using namespace std;
int main(){
int a,b,c,d,sum,prod;
float avg;
cout<<"Enter 4 numbers ";
cin>>a>>b>>c>>d;
sum=a+b+c+d;
cout<<"Sum is "<<sum;
cout<<endl;
prod=a*b*c*d;
cout<<"Product is "<<prod<<endl;
avg=sum/4;
cout<<"Average is "<<avg;

}
