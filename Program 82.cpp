//Q82-Program that demonstrate strcpy() string function?

#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str1[10]={"PAKISTAN"},str2[10],str3[8];
//	cout<<"Str2 array before copy is : "<<str2;
	strcpy(str2,str1);
	cout<<"Str2 array is after copy : "<<str2<<endl;
	strcpy(str3,str2);
	cout<<"Str3 is : "<<str3;
}
