//Q79-Write a program that multiply each element of array by 2 that has
//3 rows and 4 cols and display it in the form of matrix, the array is
//initialized to data from 1 to 12 for 3 rows and 4 cols?

#include<iostream>
using namespace std;
int main(){
int arr[3][4]=
	{
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
for(int i=0;i<3;i++){
	for(int j=0;j<=3;j++){
		cout<<arr[i][j]*2<<" ";
	}
	cout<<endl;
}
}
