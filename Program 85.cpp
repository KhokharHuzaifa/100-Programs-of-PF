//Q85-Program that demonstrate strcmp() string function?

// 0 , -1 , 1

#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char arr1[8]={"Khadija"},
	arr2[6]={"Warda"},
	arr3[6]={"Warda"},
	arr4[7]={"Fatima"},
	arr5[5]={"Iqra"};
	int equal = strcmp(arr2,arr3);
	cout<<"Same : "<<equal<<endl;
	int largest = strcmp(arr1,arr4);
	cout<<"Larger : "<<largest<<endl;
	int smaller = strcmp(arr5,arr2);
	cout<<"Smaller : "<<smaller;
		
}
