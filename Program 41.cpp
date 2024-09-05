//Q41-Write a program that input a week number from user and display the
//week name using switch statement?

#include<iostream>
using namespace std;
int main(){
int week;
cin>>week;
switch(week){
	case 1:
		cout<<"Monday";
		break;
	case 2:
		cout<<"Tuesday";
		break;
	case 3:
		cout<<"Wednesday";
		break;
	case 4:
		cout<<"Thursday";
		break;
	case 5:
		cout<<"Friday";
		break;
	case 6:
		cout<<"Saturday";
		break;
	case 7:
		cout<<"sunday";
		break;
	default:
		cout<<"Invalid number";
		break;
	
}
}
