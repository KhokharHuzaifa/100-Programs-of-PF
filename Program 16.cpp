//Q16-Write a program that inputs three sides of triangle and display 
//its area using formula: sqrt(s(s-a)(s-b)(s-c)) where s=(a+b+c)/2?

#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a,b,c;
float s,Area_of_Triangle;
cout<<"Enter 3 sides of triangle ";
cin>>a>>b>>c;
s=(a+b+c)/2;
int sA=s-a,sB=s-b,sC=s-c,result;
result=s*sA*sB*sC;
Area_of_Triangle=sqrt(result);
cout<<"Area_of_Triangle is "<<Area_of_Triangle;
}
