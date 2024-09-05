//Q53-Write a program that reads the current state of a telephone line,
//the user should enter w for working state and d for dead state, any other
//input should be invalid, using do while loop to force the user to enter a
//valid input value?

#include<iostream>
using namespace std;
int main(){
char state;
do{
 cout<<"Enter w for working state and d for dead state : ";
 cin>>state;	
}
while(state!='w' && state!='d');
}
