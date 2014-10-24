#ifndef _d_time24_h_

#define _d_time24_h


#include<cmath>
#include<excpt.h>


class time24
{
public:
	time24();
	time24(int h,int m);
	~time24();

	time24 duration(const time24 & t);
	void readTime();
	int getHour();
	int getMinute();
 friend	bool  operator ==(const time24 & lhs,const time24 & rhs);
	friend time24 operator -(const time24 & lhs,const time24 & rhs);
private:
	int hour,minute;
	void normalizeTime(int hour,int minute);


};

time24::time24()
{
}

time24::time24(int h,int m) : hour(h),minute(m)
{
	normalizeTime(h,m);

}

time24::~time24()
{
}

time24 time24::duration(const time24 & t){

	int currentTime=hour*60+minute;
	int tTime=t.hour*60+t.minute;

	if(tTime>currentTime){
		throw rangeError(
			"time24 duration():agrument is an earlier time"

			);
	}else
	{
		return time24(0,tTime-currentTime);
	}

}



void time24::normalizeTime(int hour,int minute){
	 int extrahours;
	 extrahours=minute / 60;
	 hour=(extrahours+hour) % 24;

}

void time24::readTime(){
	char delimeter;
	cin>>hour>>delimeter>>minute;
}

int time24::getHour()
{
	return hour;
}
int time24::getMinute()
{
	return minute;
}

bool operator ==(const time24 & lhs,const time24 & rhs){
	return lhs.getHour()==rhs.getHour() && lhs.getMinute()==rhs.getMinute();

}

time24 operator -(){



}

#endif
