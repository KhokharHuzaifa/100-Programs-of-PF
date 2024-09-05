//Q29-Write a program that input salary and grade, it add 50% bonus if 
//grade is greater than 15, add 25% bonus if grade equal to 15 and display
//salary if below 15?

#include<iostream>
using namespace std;
int main(){
	float sal,grade;
	cout<<"Enter your salary and grade : ";
	cin>>sal>>grade;
	float bonus;
	if(grade>15){
		bonus=sal*50.0/100.0;
		cout<<"Grade is "<<grade<<" , After 50% bonus Salary is "<<bonus;
	}
	else if(grade==15){
		bonus=sal*25/100;
		cout<<"Grade is "<<grade<<" , After 25% bonus Salary is "<<bonus;
	}
	else if(grade<15){
		cout<<"Grade is "<<grade<<" , below 15% Salary is "<<sal;
	}
	else{
		cout<<"Invalid Input";
	}	
}
