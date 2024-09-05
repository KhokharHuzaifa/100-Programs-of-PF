//Q33-Write a program to input units from user calculate electricity bill, 
//The rates per unit are as follows:
//UnitsConsumption		Ruppes
//<=300					2 Rs per unit
//>300 and <=500		5 Rs per unit
//>500					7 Rs per unit

#include<iostream>
using namespace std;
int main(){
int units;
cin>>units;
if(units<=300){
cout<<"YOur bill is "<<units*2;
}
else if(units>300 && units<=500){
cout<<"YOur bill is "<<units*5;
}
else if(units>500){
cout<<"YOur bill is "<<units*7;
}
}
