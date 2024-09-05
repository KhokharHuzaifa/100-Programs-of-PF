//Q69-Write a program that display the follwing pattern:
//0
//0	 1
//0	 1	4
//0	 1	4	9
//0	 1	4	9	16
//0	 1	4	9	16	25

#include<iostream>
using namespace std;
int main(){
	for(int i=0;i<=5;i++){
		for(int j=0;j<=i;j++){
			cout<<j*j<<" ";
		}
		cout<<endl;
	}
}
