#include"MilTime.h"
#include"Time.h"
#include<iostream>

using namespace std;

MilTime::MilTime(double MilH, double MilM, double MilS)
{
	MilHours=MilH;
	MilMinutes=MilM;
	MilSeconds=MilS;
	if(MilH>12 && MilH<23){
		MilH=MilH-12;
		Time::setHour(MilH);
	}
	else if (MilH==00){
		MilH=MilH+12;
		Time::setHour(MilH);
	}
	else if (MilH>00 && MilH<=12){
		MilH=MilH;
		Time::setHour(MilH);
	}
	if(MilM>=00 && MilM<=59){
		MilM=MilM;
		Time::setMin(MilM);
	}
	if(MilS>=00 && MilS<=59){
		MilS=MilS;
		Time::setSec(MilS);
	}

}

void MilTime::setTime(double MilH, double MilM)//double MilS
{
	MilHours=MilH;
	//MilSeconds=MilS;
	MilMinutes=MilM;
	if(MilH>12 && MilH<23){
		MilH=MilH-12;
		Time::setHour(MilH);
	}
	else if (MilH==00){
		MilH=MilH+12;
		Time::setHour(MilH);
	}
	else if (MilH>00 && MilH<=12){
		MilH=MilH;
		Time::setHour(MilH);
	}
	if(MilM>=00 && MilM<=59){
		MilM=MilM;
		Time::setMin(MilM);
	}
	/*if(MilS>=00 && MilS<=59){
		MilS=MilS;
		Time::setSec(MilS);
	}*/

}
double MilTime::getHour()const
{
	return MilHours;
}
double MilTime::getStandHr()const
{
	return Time::getHour();
}
double MilTime::getStandM()const
{
	return Time::getMin();
}
double MilTime::getStandS()const
{
	return Time::getSec();
}