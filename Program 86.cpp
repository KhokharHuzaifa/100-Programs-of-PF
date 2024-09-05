//Q86-Program that demonstrate the working of pointer with reference and
//dereference opeartors?

#include<iostream>
using namespace std;
int main(){
int x=300,*pn;
cout<<"Value of X is : "<<x<<endl<<endl;
cout<<"Refrence X is : "<<&x<<endl<<endl;
cout<<"Before pointing Pn is : "<<pn<<endl<<endl;
pn=&x;
cout<<"Pn after pointing to x is : "<<pn<<endl<<endl;
int n;
n=*pn;
cout<<"Value of n is : "<<n;
}
