#ifndef MILTIME_H
#define MILTIME_H

#include"Time.h";
class MilTime: public Time
{
	protected:
	double MilHours;
	double MilMinutes;
	double MilSeconds;
	public:
		//default Constructor
		MilTime()
	{MilHours=00;MilMinutes=00; MilSeconds=00;}

	//Constructor
	 MilTime(double MilH, double MilM, double MilS);
	void setTime(double MilH, double MilM);//double MilS
	double getHour()const;
	double getStandHr()const;
	double getStandM()const;
	double getStandS()const;
};
#endif