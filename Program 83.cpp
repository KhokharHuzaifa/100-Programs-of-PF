//Q83-Program that demonstrate strcat() string function?

#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str1[10]={"PAKISTAN"},str2[10]={"ZINDABAD"};
	cout<<"str1 before cat : "<<str1<<endl;
	strcat(str1,str2);
	cout<<"str1 after cat : "<<str1;	
}
