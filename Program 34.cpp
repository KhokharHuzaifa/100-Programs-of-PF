//Q34-Write a program that inputs radius and calculate area of circle if 
//user enter 1 as choice, or calculate circumference if user enters 2
//as choice using formuals: Area=piR^2 Circum=2piR?

#include<iostream>
using namespace std;
int main(){
int r,choice;
cout<<"Enter radius"<<endl;
cin>>r;
cout<<endl<<"Enter 1 for area"<<endl<<"Enter 2 for circumference"<<endl;
cin>>choice;
if(choice==1){
	cout<<"Area is "<<3.14*r*r;
}
else if(choice==2){
	cout<<"Circumference is "<<2*3.14*r;
}
else{
	cout<<"Some thing went wrong";
}
}
