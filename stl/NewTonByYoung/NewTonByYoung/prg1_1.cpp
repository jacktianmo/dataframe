#include<iostream>

#include"d_time24.h"

using namespace std;

int main(){
	const double perhour_parking=60.0;

	time24 entergarage,exitgarage,parkingTime;
	double bill;
	cout<<"Enter the time car"<<endl;
	entergarage.readTime();
	exitgarage.readTime();

	parkingTime=entergarage.duration(exitgarage);
	bill=parkingTime.getHour()+parkingTime.getMinute();





}
