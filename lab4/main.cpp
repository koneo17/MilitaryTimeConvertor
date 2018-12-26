#include"Time.h"
#include<iostream>
#include"MilTime.h"

using namespace std;

int main(){

	//Time time;
	MilTime militaryTime;
	char del;
	double MilTime, hour, minutes,seconds;
	cout<<"Enter military time (hh:mm): ";
	cin>> hour>>del>>minutes;

	
	militaryTime.setTime(hour,minutes);
	cout<<"The standard time is "<<militaryTime.getStandHr()<<":"<<militaryTime.getStandM()<<endl;
	
	system("pause");
	return 0;
}