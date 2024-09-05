//Q71-Write a program that display the following pattern:
//*	 *	*	*	*	*	*
//*	 *	*	*	*	*
//*	 *	*	*	*
//*	 *	*	*
//*	 *	*	
//*	 *
//*

#include<iostream>
using namespace std;
int main(){
	int j;
	for(int i=1;i<=7;i++){
		j=i;
		while(j<=7){
			cout<<"*"<<" ";
			j++;
		}
		cout<<endl;
	}
}
